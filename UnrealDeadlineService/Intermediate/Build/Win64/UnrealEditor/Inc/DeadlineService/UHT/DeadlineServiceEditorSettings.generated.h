// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DeadlineServiceEditorSettings.h"

#ifdef DEADLINESERVICE_DeadlineServiceEditorSettings_generated_h
#error "DeadlineServiceEditorSettings.generated.h already included, missing '#pragma once' in DeadlineServiceEditorSettings.h"
#endif
#define DEADLINESERVICE_DeadlineServiceEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDeadlineServiceEditorSettings *******************************************
DEADLINESERVICE_API UClass* Z_Construct_UClass_UDeadlineServiceEditorSettings_NoRegister();

#define FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceEditorSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeadlineServiceEditorSettings(); \
	friend struct Z_Construct_UClass_UDeadlineServiceEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DEADLINESERVICE_API UClass* Z_Construct_UClass_UDeadlineServiceEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDeadlineServiceEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadlineService"), Z_Construct_UClass_UDeadlineServiceEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UDeadlineServiceEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceEditorSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeadlineServiceEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDeadlineServiceEditorSettings(UDeadlineServiceEditorSettings&&) = delete; \
	UDeadlineServiceEditorSettings(const UDeadlineServiceEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeadlineServiceEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeadlineServiceEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeadlineServiceEditorSettings) \
	NO_API virtual ~UDeadlineServiceEditorSettings();


#define FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceEditorSettings_h_11_PROLOG
#define FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceEditorSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceEditorSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceEditorSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDeadlineServiceEditorSettings;

// ********** End Class UDeadlineServiceEditorSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
