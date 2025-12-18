// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DeadlineServiceEditorHelpers.h"

#ifdef DEADLINESERVICE_DeadlineServiceEditorHelpers_generated_h
#error "DeadlineServiceEditorHelpers.generated.h already included, missing '#pragma once' in DeadlineServiceEditorHelpers.h"
#endif
#define DEADLINESERVICE_DeadlineServiceEditorHelpers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

 
struct FDeadlineJobPresetStruct;

// ********** Begin Class UDeadlineServiceEditorHelpers ********************************************
#define FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceEditorHelpers_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDeadlinePluginInfo); \
	DECLARE_FUNCTION(execGetDeadlineJobInfo);


DEADLINESERVICE_API UClass* Z_Construct_UClass_UDeadlineServiceEditorHelpers_NoRegister();

#define FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceEditorHelpers_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeadlineServiceEditorHelpers(); \
	friend struct Z_Construct_UClass_UDeadlineServiceEditorHelpers_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DEADLINESERVICE_API UClass* Z_Construct_UClass_UDeadlineServiceEditorHelpers_NoRegister(); \
public: \
	DECLARE_CLASS2(UDeadlineServiceEditorHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadlineService"), Z_Construct_UClass_UDeadlineServiceEditorHelpers_NoRegister) \
	DECLARE_SERIALIZER(UDeadlineServiceEditorHelpers)


#define FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceEditorHelpers_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeadlineServiceEditorHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDeadlineServiceEditorHelpers(UDeadlineServiceEditorHelpers&&) = delete; \
	UDeadlineServiceEditorHelpers(const UDeadlineServiceEditorHelpers&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeadlineServiceEditorHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeadlineServiceEditorHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeadlineServiceEditorHelpers) \
	NO_API virtual ~UDeadlineServiceEditorHelpers();


#define FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceEditorHelpers_h_14_PROLOG
#define FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceEditorHelpers_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceEditorHelpers_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceEditorHelpers_h_17_INCLASS_NO_PURE_DECLS \
	FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceEditorHelpers_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDeadlineServiceEditorHelpers;

// ********** End Class UDeadlineServiceEditorHelpers **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceEditorHelpers_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
