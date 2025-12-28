# Copyright Epic Games, Inc. All Rights Reserved

# Built-In
import os
import re
import json
import traceback
from collections import OrderedDict

# External
import unreal

from deadline_service import get_global_deadline_service_instance
from deadline_job import DeadlineJob
from deadline_utils import get_deadline_info_from_preset


@unreal.uclass()
class MoviePipelineDeadlineRemoteExecutor(unreal.MoviePipelineExecutorBase):
    """
    This class defines the editor implementation for Deadline (what happens when you
    press 'Render (Remote)', which is in charge of taking a movie queue from the UI
    and processing it into something Deadline can handle.
    """

    # The queue we are working on, null if no queue has been provided.
    pipeline_queue = unreal.uproperty(unreal.MoviePipelineQueue)
    job_ids = unreal.uproperty(unreal.Array(str))

    # A MoviePipelineExecutor implementation must override this.
    @unreal.ufunction(override=True)
    def execute(self, pipeline_queue):
        """
        This is called when the user presses Render (Remote) in the UI. We will
        split the queue up into multiple jobs. Each job will be submitted to
        deadline separately, with each shot within the job split into one Deadline
        task per shot.
        """
        
        unreal.log(f"Asked to execute Queue: {pipeline_queue}")
        
        # Don't try to process empty/null Queues
        if not pipeline_queue or (not pipeline_queue.get_jobs()):
            self.on_executor_finished_impl()
            return

        # ----------------------------------------------------------------------
        # 1. Early Filter: Identify Enabled Jobs
        # ----------------------------------------------------------------------
        all_jobs = pipeline_queue.get_jobs()
        enabled_jobs = []
        disabled_count = 0
        
        for i, job in enumerate(all_jobs):
            job_name = getattr(job, "job_name", "Unknown")
            unreal.log(f"[Deadline] Inspecting Job {i}: {job_name} (Type: {type(job)})")

            # 1. Check Job Enabled Status
            is_enabled = False
            
            # Special Handling for MoviePipelineDeadlineExecutorJob
            # This specific class (used by the Deadline plugin itself) seems to NOT have the 'enabled' property exposed to Python.
            if "MoviePipelineDeadlineExecutorJob" in str(type(job)):
                # 1. Try C++ Helper (IsJobEnabled) - Added in recent source patch
                # Note: BlueprintCallable functions usually exposed as snake_case in Python
                if hasattr(job, "is_job_enabled"):
                    try:
                        is_enabled = job.is_job_enabled()
                        unreal.log(f"[Deadline] Used C++ helper 'is_job_enabled' for '{job_name}': {is_enabled}")
                    except Exception as e:
                         unreal.log_warning(f"[Deadline] Failed calling 'is_job_enabled': {e}")
                         is_enabled = True # Fallback
                
                # 2. Fallback: Check if ANY shots are enabled
                else:
                    unreal.log_warning(f"[Deadline] 'MoviePipelineDeadlineExecutorJob' detected but 'is_job_enabled' helper missing. Please recompile plugin. Defaulting '{job_name}' to ENABLED.")
                    is_enabled = True
            else:
                try:
                    # Try getting the property via the editor library first (most reliable for UI state)
                    try:
                        is_enabled = job.get_editor_property("enabled")
                        unreal.log(f"[Deadline]   - get_editor_property('enabled'): {is_enabled}")
                    except Exception as e_prop:
                        unreal.log(f"[Deadline]   - get_editor_property failed: {e_prop}")
                        
                        # Fallback to direct attribute access
                        if hasattr(job, "enabled"):
                            is_enabled = job.enabled
                            unreal.log(f"[Deadline]   - job.enabled: {is_enabled}")
                        else:
                            unreal.log_warning(f"[Deadline] Job '{job_name}' has no 'enabled' property. Defaulting to FALSE (Safety).")
                            is_enabled = False
                except Exception as e:
                    unreal.log_warning(f"[Deadline] Error reading enabled state for '{job_name}': {e}")
                    is_enabled = False # Safety fallback
            
            unreal.log(f"[Deadline] Debug - Job: {job_name}, Enabled: {is_enabled}")


            # 2. Check Shot Enabled Status
            # If there are shots, at least one must be enabled.
            # If there are NO shots (e.g. single sequence), we assume the job is valid.
            has_enabled_shot = True
            try:
                shots = getattr(job, "shot_info", [])
                if shots:
                    has_enabled_shot = False
                    for s in shots:
                        if getattr(s, "enabled", True):
                            has_enabled_shot = True
                            break
            except Exception as e:
                unreal.log_warning(f"[Deadline] Error reading shot info for '{job_name}': {e}")
                has_enabled_shot = True  # Be permissive
            
            # Log the decision for debugging
            # unreal.log(f"[Deadline] Job '{job_name}': Enabled={is_enabled}, HasEnabledShot={has_enabled_shot}")

            if is_enabled and has_enabled_shot:
                enabled_jobs.append(job)
            else:
                disabled_count += 1

        unreal.log(f"[Deadline] Found {len(all_jobs)} total jobs. Enabled: {len(enabled_jobs)}. Disabled: {disabled_count}.")

        if not enabled_jobs:
            unreal.EditorDialog.show_message(
                "No Enabled Jobs",
                "No jobs are enabled (checked) in the queue.\n\n"
                "Please check the box next to the job(s) you want to render.\n"
                "(Highlighting/Selecting a row is not enough!)",
                unreal.AppMsgType.OK
            )
            self.on_executor_finished_impl()
            return

        # If multiple jobs are enabled, we will process them all.
        # Previously there was a check here to limit to 1 job, but that prevents batch submissions.

        # ----------------------------------------------------------------------
        # 2. User Confirmation (Explicit Check)
        # ----------------------------------------------------------------------
        job_names = [getattr(j, "job_name", "Unknown") for j in enabled_jobs]
        job_list_str = "\n".join(f"- {name}" for name in job_names[:10])
        if len(job_names) > 10:
            job_list_str += "\n... and more"

        confirm_msg = (
            f"Ready to submit {len(enabled_jobs)} job(s) to Deadline:\n\n"
            f"{job_list_str}\n\n"
            "Is this correct?"
        )
        
        # Uncomment this block if you want to force a confirmation dialog every time
        # if unreal.EditorDialog.show_message("Confirm Submission", confirm_msg, unreal.AppMsgType.YES_NO) != unreal.AppMsgType.YES:
        #     unreal.log("[Deadline] User cancelled submission.")
        #     self.on_executor_finished_impl()
        #     return

        # ----------------------------------------------------------------------
        # 3. Save Dirty Packages
        # ----------------------------------------------------------------------
        # The user must save their work and check it in so that Deadline
        # can sync it.
        dirty_packages = []
        dirty_packages.extend(
            unreal.EditorLoadingAndSavingUtils.get_dirty_content_packages()
        )
        dirty_packages.extend(
            unreal.EditorLoadingAndSavingUtils.get_dirty_map_packages()
        )

        # Sometimes the dialog will return `False`
        # even when there are no packages to save. so we are
        # being explict about the packages we need to save
        if dirty_packages:
            if not unreal.EditorLoadingAndSavingUtils.save_dirty_packages_with_dialog(
                True, True
            ):
                message = (
                    "One or more jobs in the queue have an unsaved map/content. "
                    "{packages} "
                    "Please save and check-in all work before submission.".format(
                        packages="\n".join([p.get_name() for p in dirty_packages])
                    )
                )

                unreal.log_error(message)
                unreal.EditorDialog.show_message(
                    "Unsaved Maps/Content", message, unreal.AppMsgType.OK
                )
                self.on_executor_finished_impl()
                return

        # ----------------------------------------------------------------------
        # 4. Validate Maps (Only for Enabled Jobs)
        # ----------------------------------------------------------------------
        # Make sure all the maps in the queue exist on disk somewhere,
        # unsaved maps can't be loaded on the remote machine, and it's common
        # to have the wrong map name if you submit without loading the map.
        has_valid_map = (
            unreal.MoviePipelineEditorLibrary.is_map_valid_for_remote_render(
                enabled_jobs
            )
        )
        if not has_valid_map:
            message = (
                "One or more ENABLED jobs in the queue have an unsaved map as "
                "their target map. "
                "These unsaved maps cannot be loaded by an external process, "
                "and the render has been aborted."
            )
            unreal.log_error(message)
            unreal.EditorDialog.show_message(
                "Unsaved Maps", message, unreal.AppMsgType.OK
            )
            self.on_executor_finished_impl()
            return

        self.pipeline_queue = pipeline_queue

        deadline_settings = unreal.get_default_object(
            unreal.MoviePipelineDeadlineSettings
        )

        # Arguments to pass to the executable. This can be modified by settings
        # in the event a setting needs to be applied early.
        # In the format of -foo -bar
        # commandLineArgs = ""
        command_args = []

        # Append all of our inherited command line arguments from the editor.
        in_process_executor_settings = unreal.get_default_object(
            unreal.MoviePipelineInProcessExecutorSettings
        )
        inherited_cmds = in_process_executor_settings.inherited_command_line_arguments
        
        # Sanitize the commandline by removing any execcmds that may
        # have passed through the commandline.
        inherited_cmds = re.sub(
            ".*(?P<cmds>-execcmds=[\s\S]+[\'\"])",
            "",
            inherited_cmds
        )

        command_args.extend(inherited_cmds.split(" "))
        command_args.extend(
            in_process_executor_settings.additional_command_line_arguments.split(
                " "
            )
        )

        command_args.extend(
            ["-nohmd", "-windowed", f"-ResX=1280", f"-ResY=720"]
        )

        # Get the project level preset
        project_preset = deadline_settings.default_job_preset

        # Get the job and plugin info string.
        # Note:
        #   Sometimes a project level default may not be set,
        #   so if this returns an empty dictionary, that is okay
        #   as we primarily care about the job level preset.
        #   Catch any exceptions here and continue
        project_job_info = {}
        project_plugin_info = {}

        try:
            project_job_info, project_plugin_info = get_deadline_info_from_preset(job_preset=project_preset)
        except Exception:
            pass

        deadline_service = get_global_deadline_service_instance()

        # NOTE: We already filtered enabled_jobs at the start of the function.
        # We will use that list now.
        
        # Log info
        unreal.log(f"Filtered {len(all_jobs) - len(enabled_jobs)} disabled jobs from the queue.")
        unreal.log(f"Submitting {len(enabled_jobs)} enabled jobs to Deadline...")

        # Additional filtering and cleanup
        submitted_names = set()
        final_jobs = []

        for job in enabled_jobs:
            # Prefer the Comment field for naming
            comment = getattr(job, "comment", "").strip() if hasattr(job, "comment") else ""
            job_name = comment if comment else getattr(job, "job_name", "").strip()

            # Fallback to sequence name if still missing
            if not job_name:
                seq = getattr(job, "sequence", None)
                job_name = seq.get_name() if seq else "Unnamed_Job"

            # 1️⃣ Skip unnamed jobs
            if not job_name or job_name.lower() in ["", "none"]:
                unreal.log_warning(f"[Deadline] Skipping unnamed job: {job}")
                continue

            # 2️⃣ Skip jobs without valid sequence
            seq = getattr(job, "sequence", None)
            if not seq:
                unreal.log_warning(f"[Deadline] Skipping job {job_name} — no sequence assigned.")
                continue
            
            # 3️⃣ Handle duplicates
            if job_name in submitted_names:
                counter = len([n for n in submitted_names if n.startswith(job_name)])
                new_name = f"{job_name}_{counter+1}"
                unreal.log_warning(f"[Deadline] Duplicate job name '{job_name}' detected. Renaming to '{new_name}'.")
                job.job_name = new_name
                job_name = new_name

            submitted_names.add(job_name)
            final_jobs.append(job)

        # 4️⃣ Abort if nothing valid remains
        if not final_jobs:
            unreal.log_warning("No valid jobs to submit after filtering. Aborting Deadline submission.")
            unreal.EditorDialog.show_message(
                "Submission Result",
                "No valid jobs found after filtering (all disabled, unnamed, or missing sequence).",
                unreal.AppMsgType.OK,
            )
            self.on_executor_finished_impl()
            return

        # 5️⃣ Proceed with submission
        for job in final_jobs:
            unreal.log(f"Submitting Job `{job.job_name}` to Deadline...")
            try:
                deadline_job = DeadlineJob(project_job_info, project_plugin_info)
                deadline_job_id = self.submit_job(job, deadline_job, command_args, deadline_service)

                if not deadline_job_id:
                    unreal.log_warning(f"[Deadline] No job ID returned for {job.job_name}. Skipping...")
                    continue

                unreal.log(f"[Deadline] Submitted {job.job_name} with ID {deadline_job_id}")
                self.job_ids.append(deadline_job_id)
                job.user_data = deadline_job_id

            except Exception as err:
                unreal.log_error(
                    f"Failed to submit job `{job.job_name}` to Deadline: {str(err)}"
                )
                unreal.log_error(traceback.format_exc())
                self.on_executor_errored_impl(None, True, str(err))
                unreal.EditorDialog.show_message(
                    "Submission Result",
                    f"Failed to submit job `{job.job_name}` to Deadline with error: {str(err)}. "
                    f"See log for details.",
                    unreal.AppMsgType.OK,
                )
                self.on_executor_finished_impl()
                return

        message = (
            f"Successfully submitted {len(self.job_ids)} jobs to Deadline. JobIds: {', '.join(self.job_ids)}. "
            f"\nPlease use Deadline Monitor to track render job statuses"
        )
        unreal.log(message)

        unreal.EditorDialog.show_message(
            "Submission Result", message, unreal.AppMsgType.OK
        )

        # Set the executor to finished
        self.on_executor_finished_impl()

    @unreal.ufunction(override=True)
    def is_rendering(self):
        # Because we forward unfinished jobs onto another service when the
        # button is pressed, they can always submit what is in the queue and
        # there's no need to block the queue.
        # A MoviePipelineExecutor implementation must override this. If you
        # override a ufunction from a base class you don't specify the return
        # type or parameter types.
        return False

    def submit_job(self, job, deadline_job, command_args, deadline_service):
        """
        Submit a new Job to Deadline
        :param job: Queued job to submit
        :param deadline_job: Deadline job object
        :param list[str] command_args: Commandline arguments to configure for the Deadline Job
        :param deadline_service: An instance of the deadline service object
        :returns: Deadline Job ID
        :rtype: str
        """

        # Get the Job Info and plugin Info
        # If we have a preset set on the job, get the deadline submission details
        try:
            preset_struct = None
            if hasattr(job, 'get_deadline_job_preset_struct_with_overrides'):
                preset_struct = job.get_deadline_job_preset_struct_with_overrides()
            elif hasattr(job, 'get_deadline_job_preset_struct'):
                preset_struct = job.get_deadline_job_preset_struct()

            if preset_struct:
                job_info, plugin_info = get_deadline_info_from_preset(job_preset_struct=preset_struct)
            else:
                job_info = project_job_info.copy() if 'project_job_info' in locals() else {}
                plugin_info = project_plugin_info.copy() if 'project_plugin_info' in locals() else {}

        # Fail the submission if any errors occur
        except Exception as err:
            raise RuntimeError(
                f"An error occurred getting the deadline job and plugin "
                f"details. \n\tError: {err} "
            )

        # check for required fields in pluginInfo
        if not plugin_info.get("Executable"):
            # Try to resolve dynamically
            engine_bin = unreal.Paths.convert_relative_path_to_full(unreal.Paths.engine_dir())
            exe_path = os.path.join(engine_bin, "Binaries", "Win64", "UnrealEditor-Cmd.exe")
            exe_path = exe_path.replace("\\", "/") 
            plugin_info["Executable"] = exe_path
            unreal.log_warning(f"Executable not in preset, inferred: {exe_path}")
            
        if not plugin_info.get("ProjectFile"):
            if unreal.Paths.is_project_file_path_set():
                plugin_info["ProjectFile"] = unreal.Paths.convert_relative_path_to_full(
                    unreal.Paths.get_project_file_path()
                )

        # Update the job info with overrides from the UI
        if hasattr(job, "batch_name") and job.batch_name:
            job_info["BatchName"] = job.batch_name

        if hasattr(job, "comment") and job.comment and not job_info.get("Comment"):
            job_info["Comment"] = job.comment

        if not job_info.get("Name") or job_info["Name"] == "Untitled":
            job_info["Name"] = getattr(job, "job_name", "Untitled_Job")

        author = getattr(job, "author", None)
        username = author or job_info.get("UserName") or "UnknownUser"
        if hasattr(job, "author"):
            job.author = username
        job_info["UserName"] = username
        
        if not job_info.get("Plugin"):
            job_info["Plugin"] = "UnrealEngine5"
            unreal.log_warning("Plugin not set in job preset, defaulting to 'UnrealEngine5'")

        if unreal.Paths.is_project_file_path_set():
            # Trim down to just "Game.uproject" instead of absolute path.
            game_name_or_project_file = (
                unreal.Paths.convert_relative_path_to_full(
                    unreal.Paths.get_project_file_path()
                )
            )

        else:
            raise RuntimeError(
                "Failed to get a project name. Please set a project!"
            )

        # ----------------------------------------------------------------------
        # CUSTOM: Sync Job Name from Preset -> MRQ Job
        # ----------------------------------------------------------------------
        preset_job_name = job_info.get("Name", "")
        if preset_job_name and preset_job_name not in ["Untitled", "Untitled_Job"]:
             # If the user explicitly set a name in the Job Description, update the MRQ job name
             job.job_name = preset_job_name
             unreal.log(f"Syncing MRQ Job Name to Preset Name: {preset_job_name}")

        # ----------------------------------------------------------------------
        # CUSTOM: Inject Unreal Context into Deadline Job Info
        # ----------------------------------------------------------------------
        
        # 1. Get Context Strings
        project_name = "UnknownProject"
        if unreal.Paths.is_project_file_path_set():
            project_name = unreal.Paths.get_base_filename(unreal.Paths.get_project_file_path())

        def _safe_asset_name(soft_obj):
            try:
                if soft_obj is None:
                    return "Unknown"
                if hasattr(soft_obj, "asset_path_name"):
                    apn = soft_obj.asset_path_name
                    if hasattr(apn, "asset_name"):
                        return str(apn.asset_name)
                s = str(soft_obj)
                if "." in s:
                    return s.rsplit(".", 1)[-1]
                if "/" in s:
                    return s.split("/")[-1]
                return s or "Unknown"
            except Exception:
                return "Unknown"

        map_name = _safe_asset_name(getattr(job, "map", None)) or "UnknownMap"
        seq_name = _safe_asset_name(getattr(job, "sequence", None)) or "UnknownSequence"

        # 2. Update Job Name
        #    Priority:
        #    a) Manual Override (from UI DeadlineJobName field if available)
        #    b) Preset Name (already in job_info)
        #    c) MRQ Job Name (from the UI list)
        #    d) Auto-generated Format: [Project] SequenceName - MapName
        
        deadline_job_name_override = getattr(job, "deadline_job_name", "").strip()
        
        if deadline_job_name_override:
             job_info["Name"] = deadline_job_name_override
        else:
             # Fallback logic
             current_job_name = job_info.get("Name", "")
             mrq_job_name = getattr(job, "job_name", "").strip()

             # Check if the current job name (from Preset) is generic
             is_preset_generic = not current_job_name or current_job_name in ["Untitled", "Untitled_Job"]
             
             if is_preset_generic:
                 # If Preset is generic, try to use the MRQ Job Name
                 if mrq_job_name and mrq_job_name not in ["Untitled", "Untitled_Job"]:
                     job_info["Name"] = mrq_job_name
                 else:
                     # If both are generic, auto-generate
                     job_info["Name"] = f"[{project_name}] {seq_name} - {map_name}"

        # 3. Set Department
        if not job_info.get("Department"):
            job_info["Department"] = "Unreal Engine"

        # 4. Set Batch Name (Group by Project)
        if not job_info.get("BatchName"):
            job_info["BatchName"] = project_name

        # 5. Add Extra Info (Columns in Deadline Monitor)
        #    We append to ExtraInfoKeyValue# 
        def _add_deadline_kv(info_dict, prefix, key, value):
            idx = 0
            while f"{prefix}{idx}" in info_dict:
                idx += 1
            info_dict[f"{prefix}{idx}"] = f"{key}={value}"

        _add_deadline_kv(job_info, "ExtraInfoKeyValue", "Project", project_name)
        _add_deadline_kv(job_info, "ExtraInfoKeyValue", "Map", map_name)
        _add_deadline_kv(job_info, "ExtraInfoKeyValue", "Sequence", seq_name)
        _add_deadline_kv(job_info, "ExtraInfoKeyValue", "EngineVersion", unreal.SystemLibrary.get_engine_version())

        # Create a new queue with only this job in it and save it to disk,
        # then load it, so we can send it with the REST API
        new_queue = unreal.MoviePipelineQueue()
        new_job = new_queue.duplicate_job(job)

        duplicated_queue, manifest_path = unreal.MoviePipelineEditorLibrary.save_queue_to_manifest_file(
            new_queue
        )

        # Convert the queue to text (load the serialized json from disk) so we
        # can send it via deadline, and deadline will write the queue to the
        # local machines on job startup.
        serialized_pipeline = unreal.MoviePipelineEditorLibrary.convert_manifest_file_to_string(
            manifest_path
        )

        # Loop through our settings in the job and let them modify the command
        # line arguments/params.
        new_job.get_configuration().initialize_transient_settings()
        # Look for our Game Override setting to pull the game mode to start
        # with. We start with this game mode even on a blank map to override
        # the project default from kicking in.
        game_override_class = None

        out_url_params = []
        out_command_line_args = []
        out_device_profile_cvars = []
        out_exec_cmds = []
        for setting in new_job.get_configuration().get_all_settings():

            out_url_params, out_command_line_args, out_device_profile_cvars, out_exec_cmds = setting.build_new_process_command_line_args(
                out_url_params,
                out_command_line_args,
                out_device_profile_cvars,
                out_exec_cmds,
            )

            # Set the game override
            if setting.get_class() == unreal.MoviePipelineGameOverrideSetting.static_class():
                game_override_class = setting.game_mode_override

        # If no game mode override was found in settings, try project defaults
        if not game_override_class:
            try:
                game_maps_settings = unreal.GameMapsSettings.get_default_object()
                if hasattr(game_maps_settings, 'global_default_game_mode'):
                    game_override_class = game_maps_settings.global_default_game_mode
                    unreal.log(f"Using project default game mode: {game_override_class}")
            except Exception as e:
                unreal.log_warning(f"Could not get default game mode: {e}")

        # This triggers the editor to start looking for render jobs when it
        # finishes loading.
        out_exec_cmds.append("py mrq_rpc.py")

        # Convert the arrays of command line args, device profile cvars,
        # and exec cmds into actual commands for our command line.
        command_args.extend(out_command_line_args)

        if out_device_profile_cvars:
            # -dpcvars="arg0,arg1,..."
            command_args.append(
                '-dpcvars="{dpcvars}"'.format(
                    dpcvars=",".join(out_device_profile_cvars)
                )
            )

        if out_exec_cmds:
            # -execcmds="cmd0,cmd1,..."
            command_args.append(
                '-execcmds="{cmds}"'.format(cmds=",".join(out_exec_cmds))
            )

        # Add support for telling the remote process to wait for the
        # asset registry to complete synchronously
        command_args.append("-waitonassetregistry")

        # Build a shot-mask from this sequence, to split into the appropriate
        # number of tasks. Remove any already-disabled shots before we
        # generate a list, otherwise we make unneeded tasks which get sent to
        # machines
        shots_to_render = []
        for shot_index, shot in enumerate(new_job.shot_info):
            if not shot.enabled:
                unreal.log(
                    f"Skipped submitting shot {shot_index} in {job.job_name} "
                    f"to server due to being already disabled!"
                )
            else:
                shots_to_render.append(shot.outer_name)

        # If there are no shots enabled,
        # "these are not the droids we are looking for", move along ;)
        # We will catch this later and deal with it
        if not shots_to_render:
            unreal.log_warning("No shots enabled in shot mask, not submitting.")
            return

        # --- FRAME RANGE HANDLING ---
        # Priority:
        # 1) Use Frames from Job Description (UI) if provided
        # 2) Fallback to MRG variables (best-effort)
        # 3) Leave as unset (Deadline will handle defaults)
        start_frame, end_frame = None, None
        ui_frames = str(job_info.get("Frames", "")).strip()
        if ui_frames:
            try:
                parts = [p.strip() for p in ui_frames.split("-")]
                if len(parts) == 2 and parts[0].isdigit() and parts[1].isdigit():
                    start_frame, end_frame = int(parts[0]), int(parts[1])
                    unreal.log(f"[Deadline] Using Frames from UI: {start_frame}-{end_frame}")
                else:
                    unreal.log_warning(f"[Deadline] Invalid Frames format in UI: '{ui_frames}'")
            except Exception as e:
                unreal.log_warning(f"[Deadline] Failed to parse UI Frames '{ui_frames}': {e}")

        if start_frame is None or end_frame is None:
            # Try to read from Movie Graph variables if present
            try:
                config = new_job.get_configuration()
                graph_vars = config.get_all_settings()
                for var in graph_vars:
                    var_name = var.get_name()
                    if "MovieGraphVariable_10" in var_name:
                        start_frame = int(var.get_value())
                    elif "MovieGraphVariable_11" in var_name:
                        end_frame = int(var.get_value())
                if start_frame is not None and end_frame is not None:
                    unreal.log(f"[Deadline] Frame range (from MRG vars): {start_frame}–{end_frame}")
            except Exception as e:
                unreal.log_warning(f"[Deadline] Could not read MovieGraphVariables: {e}")

        if start_frame is None or end_frame is None:
            # Fallback: Read playback range directly from Level Sequence
            try:
                seq_soft = getattr(job, "sequence", None)
                seq_asset = None
                if seq_soft:
                    path = None
                    try:
                        if isinstance(seq_soft, unreal.SoftObjectPath):
                            path = seq_soft.get_asset_path_string()
                        elif hasattr(seq_soft, "get_asset_path_string"):
                            path = seq_soft.get_asset_path_string()
                        elif hasattr(seq_soft, "to_string"):
                            path = seq_soft.to_string()
                        else:
                            s = str(seq_soft).strip()
                            path = s if s and not s.startswith("<") else None
                    except Exception:
                        path = None
                    if path:
                        seq_asset = unreal.EditorAssetLibrary.load_asset(path)
                if seq_asset:
                    # Try multiple API shapes to be resilient across UE versions
                    movie_scene = None
                    if hasattr(seq_asset, "get_movie_scene"):
                        movie_scene = seq_asset.get_movie_scene()
                    # Extract start/end frames
                    s_val = e_val = None
                    if movie_scene:
                        # Path A: explicit start/end getters
                        if hasattr(movie_scene, "get_playback_start") and hasattr(movie_scene, "get_playback_end"):
                            s = movie_scene.get_playback_start()
                            e = movie_scene.get_playback_end()
                            s_val = getattr(s, "value", s)
                            e_val = getattr(e, "value", e)
                        # Path B: range object
                        elif hasattr(movie_scene, "get_playback_range"):
                            rng = movie_scene.get_playback_range()
                            # Try common accessors
                            a = getattr(rng, "get_start_frame", None)
                            b = getattr(rng, "get_end_frame", None)
                            if callable(a) and callable(b):
                                s = a()
                                e = b()
                                s_val = getattr(s, "value", s)
                                e_val = getattr(e, "value", e)
                            else:
                                # Fall back to tuple-like or attributes
                                a = getattr(rng, "start", None) or getattr(rng, "lower_bound", None)
                                b = getattr(rng, "end", None) or getattr(rng, "upper_bound", None)
                                s_val = getattr(a, "value", a)
                                e_val = getattr(b, "value", b)
                    # Assign if valid
                    if isinstance(s_val, int) and isinstance(e_val, int):
                        start_frame, end_frame = s_val, e_val
                        unreal.log(f"[Deadline] Frame range (from LevelSequence): {start_frame}-{end_frame}")
            except Exception as e:
                unreal.log_warning(f"[Deadline] Could not derive frames from LevelSequence: {e}")

        # Fallback: Calculate from Shot Info if available
        if start_frame is None or end_frame is None:
            try:
                unreal.log("[Deadline] Attempting to derive frame range from Shot Info...")
                min_frame = float("inf")
                max_frame = float("-inf")
                has_valid_shots = False
                
                # Check the shots in the job
                for shot in new_job.shot_info:
                    if not shot.enabled:
                        continue
                        
                    # We can try to get the playback range from the shot's inner sequence if loaded,
                    # or rely on the cached start/end times if exposed. 
                    # Note: shot_info usually contains simple structs.
                    # We might need to load the asset if we want precise bounds, 
                    # but let's check if the shot object has useful metadata.
                    
                    # Since we are in the executor, we can try to inspect the queue or the job's context.
                    # However, simpler is to check if we can get the sequence from the shot path
                    shot_path = shot.inner_name
                    if shot_path:
                        shot_asset = unreal.EditorAssetLibrary.load_asset(str(shot_path))
                        if shot_asset and hasattr(shot_asset, "get_movie_scene"):
                            ms = shot_asset.get_movie_scene()
                            if ms and hasattr(ms, "get_playback_range"):
                                rng = ms.get_playback_range()
                                # Extract start/end
                                s = getattr(rng, "get_start_frame", lambda: getattr(rng, "start", None))
                                e = getattr(rng, "get_end_frame", lambda: getattr(rng, "end", None))
                                s_val = s() if callable(s) else s
                                e_val = e() if callable(e) else e
                                s_val = getattr(s_val, "value", s_val)
                                e_val = getattr(e_val, "value", e_val)
                                
                                if isinstance(s_val, int) and isinstance(e_val, int):
                                    if s_val < min_frame: min_frame = s_val
                                    if e_val > max_frame: max_frame = e_val
                                    has_valid_shots = True

                if has_valid_shots and min_frame != float("inf"):
                    start_frame, end_frame = int(min_frame), int(max_frame)
                    unreal.log(f"[Deadline] Frame range (from Shot Info): {start_frame}-{end_frame}")

            except Exception as e:
                 unreal.log_warning(f"[Deadline] Could not derive frames from Shot Info: {e}")


        if start_frame is not None and end_frame is not None:
            job_info["Frames"] = f"{start_frame}-{end_frame}"
            job_info["ChunkSize"] = "1"
            unreal.log(f"[Deadline] Submitting frame range: {job_info['Frames']} (chunk size {job_info['ChunkSize']})")
        else:
             # Fallback to single frame task if range cannot be determined
             job_info["Frames"] = "0"
             job_info["ChunkSize"] = "1"
             unreal.log_error("[Deadline] Failed to determine frame range! Submitting as single task (Frame 0).")



        # Optional manual override for resumable renders
        resume_from = getattr(new_job, "resume_from", None)
        resume_to = getattr(new_job, "resume_to", None)

        if resume_from is not None or resume_to is not None:
            start_frame = resume_from if resume_from is not None else start_frame
            end_frame = resume_to if resume_to is not None else end_frame
            unreal.log(f"[Deadline] Overriding frame range: {start_frame}-{end_frame}")

        # Assign to Deadline only if valid
        if start_frame is not None and end_frame is not None:
            job_info["Frames"] = f"{start_frame}-{end_frame}"
            unreal.log(f"[Deadline] Using frame range {start_frame}-{end_frame} for job {new_job.job_name}")

        # Get the current index of the ExtraInfoKeyValue pair, we will
        # increment the index, so we do not stomp other settings
        extra_info_key_indexs = set()
        for key in job_info.keys():
            if key.startswith("ExtraInfoKeyValue"):
                _, index = key.split("ExtraInfoKeyValue")
                extra_info_key_indexs.add(int(index))

        # Get the highest number in the index list and increment the number
        # by one
        current_index = max(extra_info_key_indexs) + 1 if extra_info_key_indexs else 0

        # Put the serialized Queue into the Job data but hidden from
        # Deadline UI
        job_info[f"ExtraInfoKeyValue{current_index}"] = f"serialized_pipeline={serialized_pipeline}"

        # Increment the index
        current_index += 1

        # Put the shot info in the job extra info keys
        job_info[f"ExtraInfoKeyValue{current_index}"] = f"shot_info={json.dumps(shots_to_render)}"

        current_index += 1

        # Set the job output directory override on the deadline job
        if hasattr(new_job, "output_directory_override"):
            if new_job.output_directory_override.path:
                job_info[f"ExtraInfoKeyValue{current_index}"] = f"output_directory_override={new_job.output_directory_override.path}"
                current_index += 1

        # Set the job filename format override on the deadline job
        if hasattr(new_job, "filename_format_override"):
            if new_job.filename_format_override:
                job_info[f"ExtraInfoKeyValue{current_index}"] = f"filename_format_override={new_job.filename_format_override}"
                current_index += 1

        frames_val = job_info.get("Frames", "")
        if frames_val:
            job_info[f"ExtraInfoKeyValue{current_index}"] = f"frames={frames_val}"
            current_index += 1
        chunk_val = job_info.get("ChunkSize", "")
        if chunk_val:
            job_info[f"ExtraInfoKeyValue{current_index}"] = f"chunk_size={chunk_val}"
            current_index += 1

        # Build the command line arguments the remote machine will use.
        # The Deadline plugin will provide the executable since it is local to
        # the machine. It will also write out queue manifest to the correct
        # location relative to the Saved folder

        # Get the current commandline args from the plugin info
        plugin_info_cmd_args = [plugin_info.get("CommandLineArguments", "")]

        if not plugin_info.get("ProjectFile"):
            project_file = plugin_info.get("ProjectFile", game_name_or_project_file)
            plugin_info["ProjectFile"] = project_file

        # This is the map included in the plugin to boot up to.
        if game_override_class and game_override_class.get_path_name():
            project_cmd_args = [
                f"MoviePipelineEntryMap?game={game_override_class.get_path_name()}"
            ]
        else:
            unreal.log_warning("No game mode override specified, using default map settings")
            project_cmd_args = ["MoviePipelineEntryMap"]

        # Combine all the compiled arguments
        full_cmd_args = project_cmd_args + command_args + plugin_info_cmd_args

        # Remove any duplicates in the commandline args and convert to a string
        full_cmd_args = " ".join(list(OrderedDict.fromkeys(full_cmd_args))).strip()

        unreal.log(f"Deadline job command line args: {full_cmd_args}")

        # Update the plugin info with the commandline arguments
        plugin_info.update(
            {
                "CommandLineArguments": full_cmd_args,
                "CommandLineMode": "false",
            }
        )

        deadline_job.job_info = job_info
        deadline_job.plugin_info = plugin_info

        # Submit the deadline job
        return deadline_service.submit_job(deadline_job)

    # TODO: For performance reasons, we will skip updating the UI and request
    #  that users use a different mechanism for checking on job statuses.
    #  This will be updated once we have a performant solution.
