// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DeadlineJobPreset.h"

#ifdef DEADLINESERVICE_DeadlineJobPreset_generated_h
#error "DeadlineJobPreset.generated.h already included, missing '#pragma once' in DeadlineJobPreset.h"
#endif
#define DEADLINESERVICE_DeadlineJobPreset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDeadlineJobPresetStruct ******************************************
#define FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineJobPreset_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDeadlineJobPresetStruct_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDeadlineJobPresetStruct;
// ********** End ScriptStruct FDeadlineJobPresetStruct ********************************************

// ********** Begin Class UDeadlineJobPreset *******************************************************
#define FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineJobPreset_h_208_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOnJobCompleteOptions);


DEADLINESERVICE_API UClass* Z_Construct_UClass_UDeadlineJobPreset_NoRegister();

#define FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineJobPreset_h_208_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeadlineJobPreset(); \
	friend struct Z_Construct_UClass_UDeadlineJobPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DEADLINESERVICE_API UClass* Z_Construct_UClass_UDeadlineJobPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(UDeadlineJobPreset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadlineService"), Z_Construct_UClass_UDeadlineJobPreset_NoRegister) \
	DECLARE_SERIALIZER(UDeadlineJobPreset)


#define FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineJobPreset_h_208_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDeadlineJobPreset(UDeadlineJobPreset&&) = delete; \
	UDeadlineJobPreset(const UDeadlineJobPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeadlineJobPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeadlineJobPreset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDeadlineJobPreset) \
	NO_API virtual ~UDeadlineJobPreset();


#define FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineJobPreset_h_205_PROLOG
#define FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineJobPreset_h_208_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineJobPreset_h_208_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineJobPreset_h_208_INCLASS_NO_PURE_DECLS \
	FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineJobPreset_h_208_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDeadlineJobPreset;

// ********** End Class UDeadlineJobPreset *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineJobPreset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
