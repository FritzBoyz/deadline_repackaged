// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineDeadlineExecutorJob.h"

#ifdef MOVIEPIPELINEDEADLINE_MoviePipelineDeadlineExecutorJob_generated_h
#error "MoviePipelineDeadlineExecutorJob.generated.h already included, missing '#pragma once' in MoviePipelineDeadlineExecutorJob.h"
#endif
#define MOVIEPIPELINEDEADLINE_MoviePipelineDeadlineExecutorJob_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FDeadlineJobPresetStruct;

// ********** Begin ScriptStruct FPropertyRowEnabledInfo *******************************************
#define FID_deadline_test_build_Plugins_MoviePipelineDeadline_Source_MoviePipelineDeadline_Public_MoviePipelineDeadlineExecutorJob_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyRowEnabledInfo_Statics; \
	MOVIEPIPELINEDEADLINE_API static class UScriptStruct* StaticStruct();


struct FPropertyRowEnabledInfo;
// ********** End ScriptStruct FPropertyRowEnabledInfo *********************************************

// ********** Begin Class UMoviePipelineDeadlineExecutorJob ****************************************
#define FID_deadline_test_build_Plugins_MoviePipelineDeadline_Source_MoviePipelineDeadline_Public_MoviePipelineDeadlineExecutorJob_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDeadlineJobPresetStructWithOverrides);


MOVIEPIPELINEDEADLINE_API UClass* Z_Construct_UClass_UMoviePipelineDeadlineExecutorJob_NoRegister();

#define FID_deadline_test_build_Plugins_MoviePipelineDeadline_Source_MoviePipelineDeadline_Public_MoviePipelineDeadlineExecutorJob_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineDeadlineExecutorJob(); \
	friend struct Z_Construct_UClass_UMoviePipelineDeadlineExecutorJob_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIEPIPELINEDEADLINE_API UClass* Z_Construct_UClass_UMoviePipelineDeadlineExecutorJob_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoviePipelineDeadlineExecutorJob, UMoviePipelineExecutorJob, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoviePipelineDeadline"), Z_Construct_UClass_UMoviePipelineDeadlineExecutorJob_NoRegister) \
	DECLARE_SERIALIZER(UMoviePipelineDeadlineExecutorJob) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_deadline_test_build_Plugins_MoviePipelineDeadline_Source_MoviePipelineDeadline_Public_MoviePipelineDeadlineExecutorJob_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoviePipelineDeadlineExecutorJob(UMoviePipelineDeadlineExecutorJob&&) = delete; \
	UMoviePipelineDeadlineExecutorJob(const UMoviePipelineDeadlineExecutorJob&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineDeadlineExecutorJob); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineDeadlineExecutorJob); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineDeadlineExecutorJob) \
	NO_API virtual ~UMoviePipelineDeadlineExecutorJob();


#define FID_deadline_test_build_Plugins_MoviePipelineDeadline_Source_MoviePipelineDeadline_Public_MoviePipelineDeadlineExecutorJob_h_19_PROLOG
#define FID_deadline_test_build_Plugins_MoviePipelineDeadline_Source_MoviePipelineDeadline_Public_MoviePipelineDeadlineExecutorJob_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_deadline_test_build_Plugins_MoviePipelineDeadline_Source_MoviePipelineDeadline_Public_MoviePipelineDeadlineExecutorJob_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_deadline_test_build_Plugins_MoviePipelineDeadline_Source_MoviePipelineDeadline_Public_MoviePipelineDeadlineExecutorJob_h_22_INCLASS_NO_PURE_DECLS \
	FID_deadline_test_build_Plugins_MoviePipelineDeadline_Source_MoviePipelineDeadline_Public_MoviePipelineDeadlineExecutorJob_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoviePipelineDeadlineExecutorJob;

// ********** End Class UMoviePipelineDeadlineExecutorJob ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_deadline_test_build_Plugins_MoviePipelineDeadline_Source_MoviePipelineDeadline_Public_MoviePipelineDeadlineExecutorJob_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
