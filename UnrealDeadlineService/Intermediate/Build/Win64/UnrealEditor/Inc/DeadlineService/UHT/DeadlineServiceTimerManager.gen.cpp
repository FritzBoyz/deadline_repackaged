// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadlineServiceTimerManager.h"
#include "Engine/TimerHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDeadlineServiceTimerManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DEADLINESERVICE_API UClass* Z_Construct_UClass_UDeadlineServiceTimerManager();
DEADLINESERVICE_API UClass* Z_Construct_UClass_UDeadlineServiceTimerManager_NoRegister();
DEADLINESERVICE_API UFunction* Z_Construct_UDelegateFunction_DeadlineService_OnTimerInterval__DelegateSignature();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
UPackage* Z_Construct_UPackage__Script_DeadlineService();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnTimerInterval ******************************************************
struct Z_Construct_UDelegateFunction_DeadlineService_OnTimerInterval__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeadlineServiceTimerManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DeadlineService_OnTimerInterval__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DeadlineService, nullptr, "OnTimerInterval__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadlineService_OnTimerInterval__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DeadlineService_OnTimerInterval__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_DeadlineService_OnTimerInterval__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DeadlineService_OnTimerInterval__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTimerInterval_DelegateWrapper(const FMulticastScriptDelegate& OnTimerInterval)
{
	OnTimerInterval.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnTimerInterval ********************************************************

// ********** Begin Class UDeadlineServiceTimerManager Function OnTimerEvent ***********************
struct Z_Construct_UFunction_UDeadlineServiceTimerManager_OnTimerEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Internal function to broadcast timer delegate on the editor timer interval. */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineServiceTimerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal function to broadcast timer delegate on the editor timer interval." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeadlineServiceTimerManager_OnTimerEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDeadlineServiceTimerManager, nullptr, "OnTimerEvent", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeadlineServiceTimerManager_OnTimerEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDeadlineServiceTimerManager_OnTimerEvent_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDeadlineServiceTimerManager_OnTimerEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeadlineServiceTimerManager_OnTimerEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDeadlineServiceTimerManager::execOnTimerEvent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTimerEvent();
	P_NATIVE_END;
}
// ********** End Class UDeadlineServiceTimerManager Function OnTimerEvent *************************

// ********** Begin Class UDeadlineServiceTimerManager Function StartTimer *************************
struct Z_Construct_UFunction_UDeadlineServiceTimerManager_StartTimer_Statics
{
	struct DeadlineServiceTimerManager_eventStartTimer_Parms
	{
		float TimerInterval;
		bool bLoopTimer;
		FTimerHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deadline Service Timer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set a timer to execute a delegate. This timer is also used by the deadline service to periodically get updates\n\x09 * on submitted jobs. This method returns a time handle reference for this function. This handle can be used at a\n\x09 * later time to stop the timer.\n\x09 *\n\x09 * @param TimerInterval\x09\x09""Float timer intervals in seconds. Default is 1.0 seconds.\n\x09 * @param bLoopTimer\x09\x09""Determine whether to loop the timer. By default this is true\n\x09 */" },
#endif
		{ "CPP_Default_bLoopTimer", "true" },
		{ "CPP_Default_TimerInterval", "1.000000" },
		{ "ModuleRelativePath", "Public/DeadlineServiceTimerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a timer to execute a delegate. This timer is also used by the deadline service to periodically get updates\non submitted jobs. This method returns a time handle reference for this function. This handle can be used at a\nlater time to stop the timer.\n\n@param TimerInterval         Float timer intervals in seconds. Default is 1.0 seconds.\n@param bLoopTimer            Determine whether to loop the timer. By default this is true" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimerInterval;
	static void NewProp_bLoopTimer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoopTimer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDeadlineServiceTimerManager_StartTimer_Statics::NewProp_TimerInterval = { "TimerInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeadlineServiceTimerManager_eventStartTimer_Parms, TimerInterval), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDeadlineServiceTimerManager_StartTimer_Statics::NewProp_bLoopTimer_SetBit(void* Obj)
{
	((DeadlineServiceTimerManager_eventStartTimer_Parms*)Obj)->bLoopTimer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDeadlineServiceTimerManager_StartTimer_Statics::NewProp_bLoopTimer = { "bLoopTimer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DeadlineServiceTimerManager_eventStartTimer_Parms), &Z_Construct_UFunction_UDeadlineServiceTimerManager_StartTimer_Statics::NewProp_bLoopTimer_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeadlineServiceTimerManager_StartTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeadlineServiceTimerManager_eventStartTimer_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(0, nullptr) }; // 3834150579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeadlineServiceTimerManager_StartTimer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeadlineServiceTimerManager_StartTimer_Statics::NewProp_TimerInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeadlineServiceTimerManager_StartTimer_Statics::NewProp_bLoopTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeadlineServiceTimerManager_StartTimer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeadlineServiceTimerManager_StartTimer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeadlineServiceTimerManager_StartTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDeadlineServiceTimerManager, nullptr, "StartTimer", Z_Construct_UFunction_UDeadlineServiceTimerManager_StartTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeadlineServiceTimerManager_StartTimer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDeadlineServiceTimerManager_StartTimer_Statics::DeadlineServiceTimerManager_eventStartTimer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeadlineServiceTimerManager_StartTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDeadlineServiceTimerManager_StartTimer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDeadlineServiceTimerManager_StartTimer_Statics::DeadlineServiceTimerManager_eventStartTimer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDeadlineServiceTimerManager_StartTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeadlineServiceTimerManager_StartTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDeadlineServiceTimerManager::execStartTimer)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimerInterval);
	P_GET_UBOOL(Z_Param_bLoopTimer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimerHandle*)Z_Param__Result=P_THIS->StartTimer(Z_Param_TimerInterval,Z_Param_bLoopTimer);
	P_NATIVE_END;
}
// ********** End Class UDeadlineServiceTimerManager Function StartTimer ***************************

// ********** Begin Class UDeadlineServiceTimerManager Function StopTimer **************************
struct Z_Construct_UFunction_UDeadlineServiceTimerManager_StopTimer_Statics
{
	struct DeadlineServiceTimerManager_eventStopTimer_Parms
	{
		FTimerHandle TimerHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deadline Service Timer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Function to stop the service timer. \n\x09 *\n\x09 * @param TimerHandle\x09Timer handle to stop\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineServiceTimerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to stop the service timer.\n\n@param TimerHandle   Timer handle to stop" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeadlineServiceTimerManager_StopTimer_Statics::NewProp_TimerHandle = { "TimerHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeadlineServiceTimerManager_eventStopTimer_Parms, TimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(0, nullptr) }; // 3834150579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeadlineServiceTimerManager_StopTimer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeadlineServiceTimerManager_StopTimer_Statics::NewProp_TimerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeadlineServiceTimerManager_StopTimer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeadlineServiceTimerManager_StopTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDeadlineServiceTimerManager, nullptr, "StopTimer", Z_Construct_UFunction_UDeadlineServiceTimerManager_StopTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeadlineServiceTimerManager_StopTimer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDeadlineServiceTimerManager_StopTimer_Statics::DeadlineServiceTimerManager_eventStopTimer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeadlineServiceTimerManager_StopTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDeadlineServiceTimerManager_StopTimer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDeadlineServiceTimerManager_StopTimer_Statics::DeadlineServiceTimerManager_eventStopTimer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDeadlineServiceTimerManager_StopTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeadlineServiceTimerManager_StopTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDeadlineServiceTimerManager::execStopTimer)
{
	P_GET_STRUCT(FTimerHandle,Z_Param_TimerHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopTimer(Z_Param_TimerHandle);
	P_NATIVE_END;
}
// ********** End Class UDeadlineServiceTimerManager Function StopTimer ****************************

// ********** Begin Class UDeadlineServiceTimerManager *********************************************
void UDeadlineServiceTimerManager::StaticRegisterNativesUDeadlineServiceTimerManager()
{
	UClass* Class = UDeadlineServiceTimerManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnTimerEvent", &UDeadlineServiceTimerManager::execOnTimerEvent },
		{ "StartTimer", &UDeadlineServiceTimerManager::execStartTimer },
		{ "StopTimer", &UDeadlineServiceTimerManager::execStopTimer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDeadlineServiceTimerManager;
UClass* UDeadlineServiceTimerManager::GetPrivateStaticClass()
{
	using TClass = UDeadlineServiceTimerManager;
	if (!Z_Registration_Info_UClass_UDeadlineServiceTimerManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DeadlineServiceTimerManager"),
			Z_Registration_Info_UClass_UDeadlineServiceTimerManager.InnerSingleton,
			StaticRegisterNativesUDeadlineServiceTimerManager,
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
	return Z_Registration_Info_UClass_UDeadlineServiceTimerManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UDeadlineServiceTimerManager_NoRegister()
{
	return UDeadlineServiceTimerManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDeadlineServiceTimerManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A Deadline Service timer class used for executing function calls on an interval. This class\n * can be used by other deadline implementations that use the deadline service to get notifications\n * when an update timer is executed by the service. \n */" },
#endif
		{ "IncludePath", "DeadlineServiceTimerManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DeadlineServiceTimerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Deadline Service timer class used for executing function calls on an interval. This class\ncan be used by other deadline implementations that use the deadline service to get notifications\nwhen an update timer is executed by the service." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimerIntervalDelegate_MetaData[] = {
		{ "Category", "Deadline Service Timer Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Multicast Delegate to bind callable functions  */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineServiceTimerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multicast Delegate to bind callable functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimerIntervalDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDeadlineServiceTimerManager_OnTimerEvent, "OnTimerEvent" }, // 1388664086
		{ &Z_Construct_UFunction_UDeadlineServiceTimerManager_StartTimer, "StartTimer" }, // 1109544097
		{ &Z_Construct_UFunction_UDeadlineServiceTimerManager_StopTimer, "StopTimer" }, // 783811156
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeadlineServiceTimerManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDeadlineServiceTimerManager_Statics::NewProp_OnTimerIntervalDelegate = { "OnTimerIntervalDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeadlineServiceTimerManager, OnTimerIntervalDelegate), Z_Construct_UDelegateFunction_DeadlineService_OnTimerInterval__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimerIntervalDelegate_MetaData), NewProp_OnTimerIntervalDelegate_MetaData) }; // 1217341786
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeadlineServiceTimerManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeadlineServiceTimerManager_Statics::NewProp_OnTimerIntervalDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeadlineServiceTimerManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDeadlineServiceTimerManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DeadlineService,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeadlineServiceTimerManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeadlineServiceTimerManager_Statics::ClassParams = {
	&UDeadlineServiceTimerManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDeadlineServiceTimerManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDeadlineServiceTimerManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDeadlineServiceTimerManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UDeadlineServiceTimerManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDeadlineServiceTimerManager()
{
	if (!Z_Registration_Info_UClass_UDeadlineServiceTimerManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeadlineServiceTimerManager.OuterSingleton, Z_Construct_UClass_UDeadlineServiceTimerManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDeadlineServiceTimerManager.OuterSingleton;
}
UDeadlineServiceTimerManager::UDeadlineServiceTimerManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDeadlineServiceTimerManager);
UDeadlineServiceTimerManager::~UDeadlineServiceTimerManager() {}
// ********** End Class UDeadlineServiceTimerManager ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceTimerManager_h__Script_DeadlineService_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDeadlineServiceTimerManager, UDeadlineServiceTimerManager::StaticClass, TEXT("UDeadlineServiceTimerManager"), &Z_Registration_Info_UClass_UDeadlineServiceTimerManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeadlineServiceTimerManager), 756145717U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceTimerManager_h__Script_DeadlineService_2675438368(TEXT("/Script/DeadlineService"),
	Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceTimerManager_h__Script_DeadlineService_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceTimerManager_h__Script_DeadlineService_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
