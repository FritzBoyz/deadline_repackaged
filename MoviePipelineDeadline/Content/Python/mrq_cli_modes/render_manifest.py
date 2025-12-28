# Copyright Epic Games, Inc. All Rights Reserved

"""
This script handles processing manifest files for rendering in MRQ
"""

import unreal
from getpass import getuser
from pathlib import Path

from .render_queue_jobs import render_jobs
from .utils import movie_pipeline_queue


def setup_manifest_parser(subparser):
    """
    This method adds a custom execution function and args to a subparser

    :param subparser: Subparser for processing manifest files
    """
    # Movie pipeline manifest file from disk
    subparser.add_argument(
        "manifest", type=Path, help="Full local path to a MRQ manifest file."
    )

    # Add option to only load the contents of the manifest file. By default,
    # this will render after loading the manifest file
    subparser.add_argument(
        "--load",
        action="store_true",
        help="Only load the contents of the manifest file. "
        "By default the manifest will be loaded and rendered.",
    )

    # Function to process arguments
    subparser.set_defaults(func=_process_args)


def render_queue_manifest(
    manifest,
    load_only=False,
    shots=None,
    user=None,
    is_remote=False,
    is_cmdline=False,
    remote_batch_name=None,
    remote_job_preset=None,
    executor_instance=None,
    output_dir_override=None,
    output_filename_override=None,
    custom_start_frame=None,
    custom_end_frame=None
):
    """
    Function to execute a render using a manifest file

    :param str manifest: Manifest file to render
    :param bool load_only: Only load the manifest file
    :param list shots: Shots to render from the queue
    :param str user: Render user
    :param bool is_remote: Flag to determine if the jobs should be rendered remote
    :param bool is_cmdline: Flag to determine if the job is a commandline job
    :param str remote_batch_name: Batch name for remote renders
    :param str remote_job_preset: Remote render preset library
    :param executor_instance: Movie Pipeline executor instance
    :param str output_dir_override: Movie Pipeline output directory override
    :param str output_filename_override: Movie Pipeline filename format override
    :return: MRQ Executor
    """
    # The queue subsystem behaves like a singleton so
    # clear all the jobs in the current queue.
    movie_pipeline_queue.delete_all_jobs()

    # Manifest args returns a Pathlib object, get the results as a string and
    # load the manifest
    movie_pipeline_queue.copy_from(
        unreal.MoviePipelineLibrary.load_manifest_file_from_string(manifest)
    )

    # If we only want to load the manifest file, then exit after loading
    # the manifest.
    # If we want to shut down the editor as well, then do so
    if load_only:

        if is_cmdline:
            unreal.SystemLibrary.quit_editor()

        return None

    # Manifest files are a per job configuration. So there should only be one
    # job in a manifest file

    # Todo: Make sure there are always only one job in the manifest file
    if movie_pipeline_queue.get_jobs():
        render_job = movie_pipeline_queue.get_jobs()[0]
    else:
        raise RuntimeError("There are no jobs in the queue!!")

    # MRQ added the ability to enable and disable jobs. Check to see if a job
    # is disabled and enable it.
    # The assumption is we want to render this particular job.
    # Note this try except block is for backwards compatibility
    try:
        if not render_job.enabled:
            render_job.enabled = True
    except AttributeError:
        pass

    # Set the author on the job
    render_job.author = user or getuser()

    if (custom_start_frame is not None) and (custom_end_frame is not None):
        # Clamp Level Sequence playback range for manifest job
        try:
            seq_soft = getattr(render_job, "sequence", None)
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
            if seq_asset and hasattr(seq_asset, "get_movie_scene"):
                movie_scene = seq_asset.get_movie_scene()
                start_val = int(custom_start_frame)
                end_val = int(custom_end_frame)
                if end_val <= start_val:
                    end_val = start_val + 1
                start_fn = unreal.FrameNumber(start_val)
                end_fn = unreal.FrameNumber(end_val)
                if hasattr(movie_scene, "set_playback_start") and hasattr(movie_scene, "set_playback_end"):
                    movie_scene.set_playback_start(start_fn)
                    movie_scene.set_playback_end(end_fn)
                    unreal.log(f"Clamped Level Sequence playback to {start_val}-{end_val} for manifest job `{render_job.job_name}`")
                elif hasattr(movie_scene, "set_playback_range"):
                    try:
                        movie_scene.set_playback_range(start_fn, end_fn)
                        unreal.log(f"Clamped Level Sequence playback via set_playback_range to {start_val}-{end_val} for manifest job `{render_job.job_name}`")
                    except Exception:
                        movie_scene.set_editor_property("playback_start", start_fn)
                        movie_scene.set_editor_property("playback_end", end_fn)
                        unreal.log(f"Clamped Level Sequence playback via editor properties to {start_val}-{end_val} for manifest job `{render_job.job_name}`")
                else:
                    try:
                        movie_scene.set_editor_property("playback_start", start_fn)
                        movie_scene.set_editor_property("playback_end", end_fn)
                        unreal.log(f"Clamped Level Sequence playback via editor properties to {start_val}-{end_val} for manifest job `{render_job.job_name}`")
                    except Exception as e:
                        unreal.log_warning(f"Failed to clamp Level Sequence playback for manifest job `{render_job.job_name}`: {e}")
            else:
                unreal.log_warning(f"No Level Sequence found on manifest job `{render_job.job_name}`; skipping playback clamp")
        except Exception as e:
            unreal.log_warning(f"Error while clamping Level Sequence playback for manifest job `{render_job.job_name}`: {e}")

            output_setting = render_job.get_configuration().find_setting_by_class(
                unreal.MoviePipelineOutputSetting
            )
            if output_setting:
                output_setting.flush_disk_writes_per_shot = True
                output_setting.use_custom_playback_range = True
                start_fn = unreal.FrameNumber(int(custom_start_frame))
                end_fn = unreal.FrameNumber(int(custom_end_frame))
                output_setting.set_editor_property("custom_start_frame", start_fn)
                output_setting.set_editor_property("custom_end_frame", end_fn)
                unreal.log(
                    f"Applying custom playback range: {int(custom_start_frame)}-{int(custom_end_frame)}"
                )
            else:
                unreal.log_warning("MoviePipelineOutputSetting not found; cannot apply custom playback range.")
            try:
                config = render_job.get_configuration()
                for var in config.get_all_settings():
                    name = var.get_name()
                    if "MovieGraphVariable_10" in name:
                        var.set_value(int(custom_start_frame))
                    elif "MovieGraphVariable_11" in name:
                        var.set_value(int(custom_end_frame))
                unreal.log(
                    f"Applying MovieGraph frame variables: start={int(custom_start_frame)} end={int(custom_end_frame)}"
                )
            except Exception as e:
                unreal.log_warning(f"Failed to apply MovieGraph frame variables: {e}")
        except Exception:
            pass

    # If we have a shot list, iterate over the shots in the sequence
    # and disable anything that's not in the shot list. If no shot list is
    # provided render all the shots in the sequence
    if shots:
        for shot in render_job.shot_info:
            if shot.inner_name in shots or (shot.outer_name in shots):
                shot.enabled = True
            else:
                unreal.log_warning(
                    f"Disabling shot `{shot.inner_name}` from current render job `{render_job.job_name}`"
                )
                shot.enabled = False

    try:
        # Execute the render.
        # This will execute the render based on whether its remote or local
        executor = render_jobs(
            is_remote,
            remote_batch_name=remote_batch_name,
            remote_job_preset=remote_job_preset,
            executor_instance=executor_instance,
            is_cmdline=is_cmdline,
            output_dir_override=output_dir_override,
            output_filename_override=output_filename_override
        )

    except Exception as err:
        unreal.log_error(
            f"An error occurred executing the render.\n\tError: {err}"
        )
        raise

    return executor


def _process_args(args):
    """
    Function to process the arguments for the manifest subcommand
    :param args: Parsed Arguments from parser
    """
    # This is a Path object
    # Convert to string representation
    manifest = args.manifest.as_posix()

    return render_queue_manifest(
        manifest,
        load_only=args.load,
        shots=args.shots,
        user=args.user,
        is_remote=args.remote,
        is_cmdline=args.cmdline,
        remote_batch_name=args.batch_name,
        remote_job_preset=args.deadline_job_preset,
        output_dir_override=args.output_override,
        output_filename_override=args.filename_override
    )
