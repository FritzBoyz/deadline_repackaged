// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DeadlineServiceTimerManager.h"

#ifdef DEADLINESERVICE_DeadlineServiceTimerManager_generated_h
#error "DeadlineServiceTimerManager.generated.h already included, missing '#pragma once' in DeadlineServiceTimerManager.h"
#endif
#define DEADLINESERVICE_DeadlineServiceTimerManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FTimerHandle;

// ********** Begin Delegate FOnTimerInterval ******************************************************
#define FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceTimerManager_h_10_DELEGATE \
DEADLINESERVICE_API void FOnTimerInterval_DelegateWrapper(const FMulticastScriptDelegate& OnTimerInterval);


// ********** End Delegate FOnTimerInterval ********************************************************

// ********** Begin Class UDeadlineServiceTimerManager *********************************************
#define FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceTimerManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTimerEvent); \
	DECLARE_FUNCTION(execStopTimer); \
	DECLARE_FUNCTION(execStartTimer);


DEADLINESERVICE_API UClass* Z_Construct_UClass_UDeadlineServiceTimerManager_NoRegister();

#define FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceTimerManager_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeadlineServiceTimerManager(); \
	friend struct Z_Construct_UClass_UDeadlineServiceTimerManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DEADLINESERVICE_API UClass* Z_Construct_UClass_UDeadlineServiceTimerManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UDeadlineServiceTimerManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadlineService"), Z_Construct_UClass_UDeadlineServiceTimerManager_NoRegister) \
	DECLARE_SERIALIZER(UDeadlineServiceTimerManager)


#define FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceTimerManager_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeadlineServiceTimerManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDeadlineServiceTimerManager(UDeadlineServiceTimerManager&&) = delete; \
	UDeadlineServiceTimerManager(const UDeadlineServiceTimerManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeadlineServiceTimerManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeadlineServiceTimerManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeadlineServiceTimerManager) \
	NO_API virtual ~UDeadlineServiceTimerManager();


#define FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceTimerManager_h_17_PROLOG
#define FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceTimerManager_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceTimerManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceTimerManager_h_20_INCLASS_NO_PURE_DECLS \
	FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceTimerManager_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDeadlineServiceTimerManager;

// ********** End Class UDeadlineServiceTimerManager ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceTimerManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
