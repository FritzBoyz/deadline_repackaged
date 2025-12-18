// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadlineJobPreset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDeadlineJobPreset() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
DEADLINESERVICE_API UClass* Z_Construct_UClass_UDeadlineJobPreset();
DEADLINESERVICE_API UClass* Z_Construct_UClass_UDeadlineJobPreset_NoRegister();
DEADLINESERVICE_API UScriptStruct* Z_Construct_UScriptStruct_FDeadlineJobPresetStruct();
UPackage* Z_Construct_UPackage__Script_DeadlineService();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FDeadlineJobPresetStruct ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDeadlineJobPresetStruct;
class UScriptStruct* FDeadlineJobPresetStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDeadlineJobPresetStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDeadlineJobPresetStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeadlineJobPresetStruct, (UObject*)Z_Construct_UPackage__Script_DeadlineService(), TEXT("DeadlineJobPresetStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FDeadlineJobPresetStruct.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Deadline Job Info Struct\n */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deadline Job Info Struct" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Job Description" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Specifies the name of the job. */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the name of the job." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[] = {
		{ "Category", "Job Description" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Specifies a comment for the job. */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
		{ "MultiLine", "TRUE" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies a comment for the job." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Department_MetaData[] = {
		{ "Category", "Job Description" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Specifies the department that the job belongs to.\n\x09 * This is simply a way to group jobs together, and does not affect rendering in any way.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the department that the job belongs to.\nThis is simply a way to group jobs together, and does not affect rendering in any way." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pool_MetaData[] = {
		{ "Category", "Job Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Specifies the pool that the job is being submitted to. */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the pool that the job is being submitted to." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryPool_MetaData[] = {
		{ "Category", "Job Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Specifies the secondary pool that the job can spread to if machines are available.\n\x09 * If not specified, the job will not use a secondary pool.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the secondary pool that the job can spread to if machines are available.\nIf not specified, the job will not use a secondary pool." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[] = {
		{ "Category", "Job Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Specifies the group that the job is being submitted to. */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the group that the job is being submitted to." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Job Options" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Specifies the priority of a job with 0 being the lowest and 100 being the highest unless configured otherwise in Repository Options. */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the priority of a job with 0 being the lowest and 100 being the highest unless configured otherwise in Repository Options." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskTimeoutSeconds_MetaData[] = {
		{ "Category", "Job Options" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Specifies the time, in seconds, a Worker has to render a task before it times out. */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the time, in seconds, a Worker has to render a task before it times out." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoTimeout_MetaData[] = {
		{ "Category", "Job Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true, a Worker will automatically figure out if it has been rendering too long based on some\n\x09 * Repository Configuration settings and the render times of previously completed tasks.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, a Worker will automatically figure out if it has been rendering too long based on some\nRepository Configuration settings and the render times of previously completed tasks." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Plugin_MetaData[] = {
		{ "Category", "Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Deadline Plugin used to execute the current job. */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deadline Plugin used to execute the current job." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConcurrentTasks_MetaData[] = {
		{ "Category", "Job Options" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Specifies the maximum number of tasks that a Worker can render at a time.\n\x09 * This is useful for script plugins that support multithreading.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the maximum number of tasks that a Worker can render at a time.\nThis is useful for script plugins that support multithreading." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitConcurrentTasksToNumberOfCpus_MetaData[] = {
		{ "Category", "Job Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If ConcurrentTasks is greater than 1, setting this to true will ensure that a Worker will not dequeue more tasks than it has processors. */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If ConcurrentTasks is greater than 1, setting this to true will ensure that a Worker will not dequeue more tasks than it has processors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MachineLimit_MetaData[] = {
		{ "Category", "Job Options" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Specifies the maximum number of machines this job can be rendered on at the same time (0 means unlimited). */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the maximum number of machines this job can be rendered on at the same time (0 means unlimited)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMachineListIsADenyList_MetaData[] = {
		{ "Category", "Job Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the machine names in MachineList will be avoided. todo */" },
#endif
		{ "DisplayName", "Machine List Is A Deny List" },
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the machine names in MachineList will be avoided. todo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MachineList_MetaData[] = {
		{ "Category", "Job Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Job machines to use. */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Job machines to use." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimitGroups_MetaData[] = {
		{ "Category", "Job Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Specifies the limit groups that this job is a member of. */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the limit groups that this job is a member of." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JobDependencies_MetaData[] = {
		{ "Category", "Job Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Specifies what jobs must finish before this job will resume (default = blank).\n\x09 * These dependency jobs must be identified using their unique job ID,\n\x09 * which is outputted after the job is submitted, and can be found in the Monitor in the \xe2\x80\x9cJob ID\xe2\x80\x9d column.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies what jobs must finish before this job will resume (default = blank).\nThese dependency jobs must be identified using their unique job ID,\nwhich is outputted after the job is submitted, and can be found in the Monitor in the \xe2\x80\x9cJob ID\xe2\x80\x9d column." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[] = {
		{ "Category", "Job Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Specifies the frame range of the render job.\n\x09 * See the Frame List Formatting Options in the Job Submission documentation for more information.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the frame range of the render job.\nSee the Frame List Formatting Options in the Job Submission documentation for more information." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkSize_MetaData[] = {
		{ "Category", "Job Options" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Specifies how many frames to render per task. */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies how many frames to render per task." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnJobComplete_MetaData[] = {
		{ "Category", "Job Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Specifies what should happen to a job after it completes. */" },
#endif
		{ "GetOptions", "GetOnJobCompleteOptions" },
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies what should happen to a job after it completes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSubmitJobAsSuspended_MetaData[] = {
		{ "Category", "Job Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** whether the submitted job should be set to 'suspended' status. */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "whether the submitted job should be set to 'suspended' status." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[] = {
		{ "Category", "Advanced Job Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Specifies the job\xe2\x80\x99s user. */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the job\xe2\x80\x99s user." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BatchName_MetaData[] = {
		{ "Category", "Advanced Job Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Specifies an optional name to logically group jobs together. */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies an optional name to logically group jobs together." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreJobScript_MetaData[] = {
		{ "Category", "Advanced Job Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Specifies a full path to a python script to execute when the job initially starts rendering.\n\x09 * Note:\n\x09 * This location is expected to already be path mapped on the farm else it will fail.\n\x09 */" },
#endif
		{ "FilePathFilter", "Python files (*.py)|*.py" },
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies a full path to a python script to execute when the job initially starts rendering.\nNote:\nThis location is expected to already be path mapped on the farm else it will fail." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostJobScript_MetaData[] = {
		{ "Category", "Advanced Job Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Specifies a full path to a python script to execute when the job completes.\n\x09 * Note:\n\x09 * This location is expected to already be path mapped on the farm else it will fail.\n\x09 */" },
#endif
		{ "FilePathFilter", "Python files (*.py)|*.py" },
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies a full path to a python script to execute when the job completes.\nNote:\nThis location is expected to already be path mapped on the farm else it will fail." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreTaskScript_MetaData[] = {
		{ "Category", "Advanced Job Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Specifies a full path to a python script to execute before each task starts rendering.\n\x09 * Note:\n\x09 * This location is expected to already be path mapped on the farm else it will fail.\n\x09 */" },
#endif
		{ "FilePathFilter", "Python files (*.py)|*.py" },
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies a full path to a python script to execute before each task starts rendering.\nNote:\nThis location is expected to already be path mapped on the farm else it will fail." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostTaskScript_MetaData[] = {
		{ "Category", "Advanced Job Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Specifies a full path to a python script to execute after each task completes.\n\x09 * Note:\n\x09 * This location is expected to already be path mapped on the farm else it will fail.\n\x09 */" },
#endif
		{ "FilePathFilter", "Python files (*.py)|*.py" },
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies a full path to a python script to execute after each task completes.\nNote:\nThis location is expected to already be path mapped on the farm else it will fail." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentKeyValue_MetaData[] = {
		{ "Category", "Advanced Job Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Specifies environment variables to set when the job renders. This is only set in the Deadline environment not the Unreal environment. */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies environment variables to set when the job renders. This is only set in the Deadline environment not the Unreal environment." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentInfo_MetaData[] = {
		{ "Category", "Advanced Job Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Key Value pair environment variables to set when the job renders. This is only set in the Deadline environment not the Unreal environment. */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Key Value pair environment variables to set when the job renders. This is only set in the Deadline environment not the Unreal environment." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtraInfoKeyValue_MetaData[] = {
		{ "Category", "Advanced Job Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Key-Value pair Job Extra Info keys for storing user data on the job. */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Key-Value pair Job Extra Info keys for storing user data on the job." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideTaskExtraInfoNames_MetaData[] = {
		{ "Category", "Advanced Job Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Replace the Task extra info column names with task extra info value. */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replace the Task extra info column names with task extra info value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskExtraInfoNames_MetaData[] = {
		{ "Category", "Advanced Job Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Key Value pair Task Extra Info keys for storing deadline info. This is split up into unique\n\x09 * settings as there is a limited amount of settings\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Key Value pair Task Extra Info keys for storing deadline info. This is split up into unique\nsettings as there is a limited amount of settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtraJobOptions_MetaData[] = {
		{ "Category", "Advanced Job Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Extra Deadline Job options. Note: Match the naming convention on Deadline's Manual Job Submission website for the options. */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extra Deadline Job options. Note: Match the naming convention on Deadline's Manual Job Submission website for the options." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PluginInfo_MetaData[] = {
		{ "Category", "Advanced Job Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Deadline Plugin info key value pair. */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deadline Plugin info key value pair." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Comment;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Department;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Pool;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SecondaryPool;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Group;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TaskTimeoutSeconds;
	static void NewProp_bEnableAutoTimeout_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoTimeout;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Plugin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConcurrentTasks;
	static void NewProp_bLimitConcurrentTasksToNumberOfCpus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitConcurrentTasksToNumberOfCpus;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MachineLimit;
	static void NewProp_bMachineListIsADenyList_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMachineListIsADenyList;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MachineList;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LimitGroups;
	static const UECodeGen_Private::FStrPropertyParams NewProp_JobDependencies;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Frames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChunkSize;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OnJobComplete;
	static void NewProp_bSubmitJobAsSuspended_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubmitJobAsSuspended;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BatchName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreJobScript;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PostJobScript;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreTaskScript;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PostTaskScript;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EnvironmentKeyValue_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EnvironmentKeyValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EnvironmentKeyValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EnvironmentInfo_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EnvironmentInfo_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EnvironmentInfo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraInfoKeyValue_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraInfoKeyValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ExtraInfoKeyValue;
	static void NewProp_bOverrideTaskExtraInfoNames_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideTaskExtraInfoNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskExtraInfoNames_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskExtraInfoNames_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TaskExtraInfoNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraJobOptions_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraJobOptions_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ExtraJobOptions;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PluginInfo_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PluginInfo_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PluginInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeadlineJobPresetStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, Comment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comment_MetaData), NewProp_Comment_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_Department = { "Department", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, Department), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Department_MetaData), NewProp_Department_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_Pool = { "Pool", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, Pool), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pool_MetaData), NewProp_Pool_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_SecondaryPool = { "SecondaryPool", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, SecondaryPool), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryPool_MetaData), NewProp_SecondaryPool_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, Group), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Group_MetaData), NewProp_Group_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_TaskTimeoutSeconds = { "TaskTimeoutSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, TaskTimeoutSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskTimeoutSeconds_MetaData), NewProp_TaskTimeoutSeconds_MetaData) };
void Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_bEnableAutoTimeout_SetBit(void* Obj)
{
	((FDeadlineJobPresetStruct*)Obj)->bEnableAutoTimeout = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_bEnableAutoTimeout = { "bEnableAutoTimeout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDeadlineJobPresetStruct), &Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_bEnableAutoTimeout_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAutoTimeout_MetaData), NewProp_bEnableAutoTimeout_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_Plugin = { "Plugin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, Plugin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Plugin_MetaData), NewProp_Plugin_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_ConcurrentTasks = { "ConcurrentTasks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, ConcurrentTasks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConcurrentTasks_MetaData), NewProp_ConcurrentTasks_MetaData) };
void Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_bLimitConcurrentTasksToNumberOfCpus_SetBit(void* Obj)
{
	((FDeadlineJobPresetStruct*)Obj)->bLimitConcurrentTasksToNumberOfCpus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_bLimitConcurrentTasksToNumberOfCpus = { "bLimitConcurrentTasksToNumberOfCpus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDeadlineJobPresetStruct), &Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_bLimitConcurrentTasksToNumberOfCpus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitConcurrentTasksToNumberOfCpus_MetaData), NewProp_bLimitConcurrentTasksToNumberOfCpus_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_MachineLimit = { "MachineLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, MachineLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MachineLimit_MetaData), NewProp_MachineLimit_MetaData) };
void Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_bMachineListIsADenyList_SetBit(void* Obj)
{
	((FDeadlineJobPresetStruct*)Obj)->bMachineListIsADenyList = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_bMachineListIsADenyList = { "bMachineListIsADenyList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDeadlineJobPresetStruct), &Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_bMachineListIsADenyList_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMachineListIsADenyList_MetaData), NewProp_bMachineListIsADenyList_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_MachineList = { "MachineList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, MachineList), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MachineList_MetaData), NewProp_MachineList_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_LimitGroups = { "LimitGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, LimitGroups), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimitGroups_MetaData), NewProp_LimitGroups_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_JobDependencies = { "JobDependencies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, JobDependencies), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JobDependencies_MetaData), NewProp_JobDependencies_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, Frames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frames_MetaData), NewProp_Frames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_ChunkSize = { "ChunkSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, ChunkSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkSize_MetaData), NewProp_ChunkSize_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_OnJobComplete = { "OnJobComplete", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, OnJobComplete), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnJobComplete_MetaData), NewProp_OnJobComplete_MetaData) };
void Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_bSubmitJobAsSuspended_SetBit(void* Obj)
{
	((FDeadlineJobPresetStruct*)Obj)->bSubmitJobAsSuspended = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_bSubmitJobAsSuspended = { "bSubmitJobAsSuspended", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDeadlineJobPresetStruct), &Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_bSubmitJobAsSuspended_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSubmitJobAsSuspended_MetaData), NewProp_bSubmitJobAsSuspended_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, UserName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserName_MetaData), NewProp_UserName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_BatchName = { "BatchName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, BatchName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BatchName_MetaData), NewProp_BatchName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_PreJobScript = { "PreJobScript", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, PreJobScript), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreJobScript_MetaData), NewProp_PreJobScript_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_PostJobScript = { "PostJobScript", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, PostJobScript), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostJobScript_MetaData), NewProp_PostJobScript_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_PreTaskScript = { "PreTaskScript", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, PreTaskScript), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreTaskScript_MetaData), NewProp_PreTaskScript_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_PostTaskScript = { "PostTaskScript", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, PostTaskScript), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostTaskScript_MetaData), NewProp_PostTaskScript_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_EnvironmentKeyValue_ValueProp = { "EnvironmentKeyValue", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_EnvironmentKeyValue_Key_KeyProp = { "EnvironmentKeyValue_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_EnvironmentKeyValue = { "EnvironmentKeyValue", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, EnvironmentKeyValue), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvironmentKeyValue_MetaData), NewProp_EnvironmentKeyValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_EnvironmentInfo_ValueProp = { "EnvironmentInfo", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_EnvironmentInfo_Key_KeyProp = { "EnvironmentInfo_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_EnvironmentInfo = { "EnvironmentInfo", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, EnvironmentInfo), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvironmentInfo_MetaData), NewProp_EnvironmentInfo_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_ExtraInfoKeyValue_ValueProp = { "ExtraInfoKeyValue", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_ExtraInfoKeyValue_Key_KeyProp = { "ExtraInfoKeyValue_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_ExtraInfoKeyValue = { "ExtraInfoKeyValue", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, ExtraInfoKeyValue), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtraInfoKeyValue_MetaData), NewProp_ExtraInfoKeyValue_MetaData) };
void Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_bOverrideTaskExtraInfoNames_SetBit(void* Obj)
{
	((FDeadlineJobPresetStruct*)Obj)->bOverrideTaskExtraInfoNames = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_bOverrideTaskExtraInfoNames = { "bOverrideTaskExtraInfoNames", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDeadlineJobPresetStruct), &Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_bOverrideTaskExtraInfoNames_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideTaskExtraInfoNames_MetaData), NewProp_bOverrideTaskExtraInfoNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_TaskExtraInfoNames_ValueProp = { "TaskExtraInfoNames", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_TaskExtraInfoNames_Key_KeyProp = { "TaskExtraInfoNames_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_TaskExtraInfoNames = { "TaskExtraInfoNames", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, TaskExtraInfoNames), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskExtraInfoNames_MetaData), NewProp_TaskExtraInfoNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_ExtraJobOptions_ValueProp = { "ExtraJobOptions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_ExtraJobOptions_Key_KeyProp = { "ExtraJobOptions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_ExtraJobOptions = { "ExtraJobOptions", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, ExtraJobOptions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtraJobOptions_MetaData), NewProp_ExtraJobOptions_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_PluginInfo_ValueProp = { "PluginInfo", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_PluginInfo_Key_KeyProp = { "PluginInfo_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_PluginInfo = { "PluginInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeadlineJobPresetStruct, PluginInfo), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PluginInfo_MetaData), NewProp_PluginInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_Comment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_Department,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_Pool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_SecondaryPool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_TaskTimeoutSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_bEnableAutoTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_Plugin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_ConcurrentTasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_bLimitConcurrentTasksToNumberOfCpus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_MachineLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_bMachineListIsADenyList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_MachineList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_LimitGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_JobDependencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_Frames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_ChunkSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_OnJobComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_bSubmitJobAsSuspended,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_UserName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_BatchName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_PreJobScript,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_PostJobScript,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_PreTaskScript,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_PostTaskScript,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_EnvironmentKeyValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_EnvironmentKeyValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_EnvironmentKeyValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_EnvironmentInfo_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_EnvironmentInfo_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_EnvironmentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_ExtraInfoKeyValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_ExtraInfoKeyValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_ExtraInfoKeyValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_bOverrideTaskExtraInfoNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_TaskExtraInfoNames_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_TaskExtraInfoNames_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_TaskExtraInfoNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_ExtraJobOptions_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_ExtraJobOptions_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_ExtraJobOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_PluginInfo_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_PluginInfo_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewProp_PluginInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DeadlineService,
	nullptr,
	&NewStructOps,
	"DeadlineJobPresetStruct",
	Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::PropPointers),
	sizeof(FDeadlineJobPresetStruct),
	alignof(FDeadlineJobPresetStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDeadlineJobPresetStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDeadlineJobPresetStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDeadlineJobPresetStruct.InnerSingleton, Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDeadlineJobPresetStruct.InnerSingleton;
}
// ********** End ScriptStruct FDeadlineJobPresetStruct ********************************************

// ********** Begin Class UDeadlineJobPreset Function GetOnJobCompleteOptions **********************
struct Z_Construct_UFunction_UDeadlineJobPreset_GetOnJobCompleteOptions_Statics
{
	struct DeadlineJobPreset_eventGetOnJobCompleteOptions_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDeadlineJobPreset_GetOnJobCompleteOptions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDeadlineJobPreset_GetOnJobCompleteOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeadlineJobPreset_eventGetOnJobCompleteOptions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeadlineJobPreset_GetOnJobCompleteOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeadlineJobPreset_GetOnJobCompleteOptions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeadlineJobPreset_GetOnJobCompleteOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeadlineJobPreset_GetOnJobCompleteOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeadlineJobPreset_GetOnJobCompleteOptions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDeadlineJobPreset, nullptr, "GetOnJobCompleteOptions", Z_Construct_UFunction_UDeadlineJobPreset_GetOnJobCompleteOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeadlineJobPreset_GetOnJobCompleteOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDeadlineJobPreset_GetOnJobCompleteOptions_Statics::DeadlineJobPreset_eventGetOnJobCompleteOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeadlineJobPreset_GetOnJobCompleteOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDeadlineJobPreset_GetOnJobCompleteOptions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDeadlineJobPreset_GetOnJobCompleteOptions_Statics::DeadlineJobPreset_eventGetOnJobCompleteOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDeadlineJobPreset_GetOnJobCompleteOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeadlineJobPreset_GetOnJobCompleteOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDeadlineJobPreset::execGetOnJobCompleteOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UDeadlineJobPreset::GetOnJobCompleteOptions();
	P_NATIVE_END;
}
// ********** End Class UDeadlineJobPreset Function GetOnJobCompleteOptions ************************

// ********** Begin Class UDeadlineJobPreset *******************************************************
void UDeadlineJobPreset::StaticRegisterNativesUDeadlineJobPreset()
{
	UClass* Class = UDeadlineJobPreset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOnJobCompleteOptions", &UDeadlineJobPreset::execGetOnJobCompleteOptions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDeadlineJobPreset;
UClass* UDeadlineJobPreset::GetPrivateStaticClass()
{
	using TClass = UDeadlineJobPreset;
	if (!Z_Registration_Info_UClass_UDeadlineJobPreset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DeadlineJobPreset"),
			Z_Registration_Info_UClass_UDeadlineJobPreset.InnerSingleton,
			StaticRegisterNativesUDeadlineJobPreset,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UDeadlineJobPreset.InnerSingleton;
}
UClass* Z_Construct_UClass_UDeadlineJobPreset_NoRegister()
{
	return UDeadlineJobPreset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDeadlineJobPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Deadline Job Preset\n */" },
#endif
		{ "IncludePath", "DeadlineJobPreset.h" },
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deadline Job Preset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JobPresetStruct_MetaData[] = {
		{ "Category", "Job Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Job preset struct */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineJobPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Job preset struct" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_JobPresetStruct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDeadlineJobPreset_GetOnJobCompleteOptions, "GetOnJobCompleteOptions" }, // 484235139
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeadlineJobPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDeadlineJobPreset_Statics::NewProp_JobPresetStruct = { "JobPresetStruct", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeadlineJobPreset, JobPresetStruct), Z_Construct_UScriptStruct_FDeadlineJobPresetStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JobPresetStruct_MetaData), NewProp_JobPresetStruct_MetaData) }; // 3613369632
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeadlineJobPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeadlineJobPreset_Statics::NewProp_JobPresetStruct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeadlineJobPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDeadlineJobPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DeadlineService,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeadlineJobPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeadlineJobPreset_Statics::ClassParams = {
	&UDeadlineJobPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDeadlineJobPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDeadlineJobPreset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDeadlineJobPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_UDeadlineJobPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDeadlineJobPreset()
{
	if (!Z_Registration_Info_UClass_UDeadlineJobPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeadlineJobPreset.OuterSingleton, Z_Construct_UClass_UDeadlineJobPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDeadlineJobPreset.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDeadlineJobPreset);
UDeadlineJobPreset::~UDeadlineJobPreset() {}
// ********** End Class UDeadlineJobPreset *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineJobPreset_h__Script_DeadlineService_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDeadlineJobPresetStruct::StaticStruct, Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics::NewStructOps, TEXT("DeadlineJobPresetStruct"), &Z_Registration_Info_UScriptStruct_FDeadlineJobPresetStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeadlineJobPresetStruct), 3613369632U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDeadlineJobPreset, UDeadlineJobPreset::StaticClass, TEXT("UDeadlineJobPreset"), &Z_Registration_Info_UClass_UDeadlineJobPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeadlineJobPreset), 805203377U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineJobPreset_h__Script_DeadlineService_2027814673(TEXT("/Script/DeadlineService"),
	Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineJobPreset_h__Script_DeadlineService_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineJobPreset_h__Script_DeadlineService_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineJobPreset_h__Script_DeadlineService_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineJobPreset_h__Script_DeadlineService_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
