import unreal

def inspect_queue():
    unreal.log("========================================")
    unreal.log("      MRQ QUEUE INSPECTION TOOL         ")
    unreal.log("========================================")

    # 1. Try to find the Active Queue
    queue = None
    
    # Method A: MoviePipelineQueueSubsystem (UE5 Standard)
    try:
        subsystem = unreal.get_editor_subsystem(unreal.MoviePipelineQueueSubsystem)
        if subsystem:
            queue = subsystem.get_queue()
            unreal.log("[Info] Found Queue via MoviePipelineQueueSubsystem")
    except Exception as e:
        unreal.log(f"[Warning] Could not access MoviePipelineQueueSubsystem: {e}")

    if not queue:
        unreal.log("[Error] No Active Queue found! Please open the Movie Render Queue window.")
        return

    # 2. Inspect Jobs
    jobs = queue.get_jobs()
    unreal.log(f"[Info] Queue contains {len(jobs)} jobs.")

    for i, job in enumerate(jobs):
        job_name = job.job_name
        
        # Check Type
        job_type = type(job)
        
        # Check Enabled (Editor Property) - The Checkbox
        try:
            is_enabled_prop = job.get_editor_property("enabled")
        except Exception:
            is_enabled_prop = "ERROR"

        # Check Enabled (Attribute)
        try:
            is_enabled_attr = job.enabled
        except Exception:
            is_enabled_attr = "MISSING"

        unreal.log(f"Job {i}: '{job_name}'")
        unreal.log(f"  Type: {job_type}")
        unreal.log(f"  [UI Checkbox] Enabled Property: {is_enabled_prop}")
        unreal.log(f"  [Python Attr] Enabled Attribute: {is_enabled_attr}")

        # Check Shots
        try:
            shots = job.shot_info
            if not shots:
                unreal.log("  Shots: 0 (Sequence Render)")
            else:
                unreal.log(f"  Shots: {len(shots)}")
                for shot in shots:
                    unreal.log(f"    - Shot: {shot.inner_name} | Enabled: {shot.enabled}")
        except Exception:
            unreal.log("  Shots: ERROR accessing shot_info")
            
        unreal.log("-" * 40)

    unreal.log("========================================")
    unreal.log("Inspection Complete.")

if __name__ == "__main__":
    inspect_queue()
