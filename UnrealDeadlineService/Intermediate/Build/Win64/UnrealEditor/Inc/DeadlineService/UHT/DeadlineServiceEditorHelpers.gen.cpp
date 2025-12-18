// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadlineServiceEditorHelpers.h"
#include "DeadlineJobPreset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDeadlineServiceEditorHelpers() {}

// ********** Begin Cross Module References ********************************************************
DEADLINESERVICE_API UClass* Z_Construct_UClass_UDeadlineServiceEditorHelpers();
DEADLINESERVICE_API UClass* Z_Construct_UClass_UDeadlineServiceEditorHelpers_NoRegister();
DEADLINESERVICE_API UScriptStruct* Z_Construct_UScriptStruct_FDeadlineJobPresetStruct();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_DeadlineService();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDeadlineServiceEditorHelpers Function GetDeadlineJobInfo ****************
struct Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlineJobInfo_Statics
{
	struct DeadlineServiceEditorHelpers_eventGetDeadlineJobInfo_Parms
	{
		FDeadlineJobPresetStruct JobPresetStruct;
		TMap<FString,FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DeadlineService" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the given Deadline job info struct a TMap<FString,FString>, python compatible\n\x09 * Excludes \"PluginInfo\". Use GetPluginInfo to collect this separately.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineServiceEditorHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the given Deadline job info struct a TMap<FString,FString>, python compatible\nExcludes \"PluginInfo\". Use GetPluginInfo to collect this separately." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JobPresetStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_JobPresetStruct;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlineJobInfo_Statics::NewProp_JobPresetStruct = { "JobPresetStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeadlineServiceEditorHelpers_eventGetDeadlineJobInfo_Parms, JobPresetStruct), Z_Construct_UScriptStruct_FDeadlineJobPresetStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JobPresetStruct_MetaData), NewProp_JobPresetStruct_MetaData) }; // 3613369632
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlineJobInfo_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlineJobInfo_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlineJobInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeadlineServiceEditorHelpers_eventGetDeadlineJobInfo_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlineJobInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlineJobInfo_Statics::NewProp_JobPresetStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlineJobInfo_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlineJobInfo_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlineJobInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlineJobInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlineJobInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDeadlineServiceEditorHelpers, nullptr, "GetDeadlineJobInfo", Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlineJobInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlineJobInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlineJobInfo_Statics::DeadlineServiceEditorHelpers_eventGetDeadlineJobInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlineJobInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlineJobInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlineJobInfo_Statics::DeadlineServiceEditorHelpers_eventGetDeadlineJobInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlineJobInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlineJobInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDeadlineServiceEditorHelpers::execGetDeadlineJobInfo)
{
	P_GET_STRUCT_REF(FDeadlineJobPresetStruct,Z_Param_Out_JobPresetStruct);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FString,FString>*)Z_Param__Result=UDeadlineServiceEditorHelpers::GetDeadlineJobInfo(Z_Param_Out_JobPresetStruct);
	P_NATIVE_END;
}
// ********** End Class UDeadlineServiceEditorHelpers Function GetDeadlineJobInfo ******************

// ********** Begin Class UDeadlineServiceEditorHelpers Function GetDeadlinePluginInfo *************
struct Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlinePluginInfo_Statics
{
	struct DeadlineServiceEditorHelpers_eventGetDeadlinePluginInfo_Parms
	{
		FDeadlineJobPresetStruct JobPresetStruct;
		TMap<FString,FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DeadlineService" },
		{ "ModuleRelativePath", "Public/DeadlineServiceEditorHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JobPresetStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_JobPresetStruct;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlinePluginInfo_Statics::NewProp_JobPresetStruct = { "JobPresetStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeadlineServiceEditorHelpers_eventGetDeadlinePluginInfo_Parms, JobPresetStruct), Z_Construct_UScriptStruct_FDeadlineJobPresetStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JobPresetStruct_MetaData), NewProp_JobPresetStruct_MetaData) }; // 3613369632
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlinePluginInfo_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlinePluginInfo_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlinePluginInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeadlineServiceEditorHelpers_eventGetDeadlinePluginInfo_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlinePluginInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlinePluginInfo_Statics::NewProp_JobPresetStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlinePluginInfo_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlinePluginInfo_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlinePluginInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlinePluginInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlinePluginInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDeadlineServiceEditorHelpers, nullptr, "GetDeadlinePluginInfo", Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlinePluginInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlinePluginInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlinePluginInfo_Statics::DeadlineServiceEditorHelpers_eventGetDeadlinePluginInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlinePluginInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlinePluginInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlinePluginInfo_Statics::DeadlineServiceEditorHelpers_eventGetDeadlinePluginInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlinePluginInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlinePluginInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDeadlineServiceEditorHelpers::execGetDeadlinePluginInfo)
{
	P_GET_STRUCT_REF(FDeadlineJobPresetStruct,Z_Param_Out_JobPresetStruct);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FString,FString>*)Z_Param__Result=UDeadlineServiceEditorHelpers::GetDeadlinePluginInfo(Z_Param_Out_JobPresetStruct);
	P_NATIVE_END;
}
// ********** End Class UDeadlineServiceEditorHelpers Function GetDeadlinePluginInfo ***************

// ********** Begin Class UDeadlineServiceEditorHelpers ********************************************
void UDeadlineServiceEditorHelpers::StaticRegisterNativesUDeadlineServiceEditorHelpers()
{
	UClass* Class = UDeadlineServiceEditorHelpers::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDeadlineJobInfo", &UDeadlineServiceEditorHelpers::execGetDeadlineJobInfo },
		{ "GetDeadlinePluginInfo", &UDeadlineServiceEditorHelpers::execGetDeadlinePluginInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDeadlineServiceEditorHelpers;
UClass* UDeadlineServiceEditorHelpers::GetPrivateStaticClass()
{
	using TClass = UDeadlineServiceEditorHelpers;
	if (!Z_Registration_Info_UClass_UDeadlineServiceEditorHelpers.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DeadlineServiceEditorHelpers"),
			Z_Registration_Info_UClass_UDeadlineServiceEditorHelpers.InnerSingleton,
			StaticRegisterNativesUDeadlineServiceEditorHelpers,
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
	return Z_Registration_Info_UClass_UDeadlineServiceEditorHelpers.InnerSingleton;
}
UClass* Z_Construct_UClass_UDeadlineServiceEditorHelpers_NoRegister()
{
	return UDeadlineServiceEditorHelpers::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDeadlineServiceEditorHelpers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Using UCLASS instead of a namespace because we need reflection to call from python\n*/" },
#endif
		{ "IncludePath", "DeadlineServiceEditorHelpers.h" },
		{ "ModuleRelativePath", "Public/DeadlineServiceEditorHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Using UCLASS instead of a namespace because we need reflection to call from python" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlineJobInfo, "GetDeadlineJobInfo" }, // 138294108
		{ &Z_Construct_UFunction_UDeadlineServiceEditorHelpers_GetDeadlinePluginInfo, "GetDeadlinePluginInfo" }, // 1216727975
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeadlineServiceEditorHelpers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDeadlineServiceEditorHelpers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_DeadlineService,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeadlineServiceEditorHelpers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeadlineServiceEditorHelpers_Statics::ClassParams = {
	&UDeadlineServiceEditorHelpers::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDeadlineServiceEditorHelpers_Statics::Class_MetaDataParams), Z_Construct_UClass_UDeadlineServiceEditorHelpers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDeadlineServiceEditorHelpers()
{
	if (!Z_Registration_Info_UClass_UDeadlineServiceEditorHelpers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeadlineServiceEditorHelpers.OuterSingleton, Z_Construct_UClass_UDeadlineServiceEditorHelpers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDeadlineServiceEditorHelpers.OuterSingleton;
}
UDeadlineServiceEditorHelpers::UDeadlineServiceEditorHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDeadlineServiceEditorHelpers);
UDeadlineServiceEditorHelpers::~UDeadlineServiceEditorHelpers() {}
// ********** End Class UDeadlineServiceEditorHelpers **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceEditorHelpers_h__Script_DeadlineService_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDeadlineServiceEditorHelpers, UDeadlineServiceEditorHelpers::StaticClass, TEXT("UDeadlineServiceEditorHelpers"), &Z_Registration_Info_UClass_UDeadlineServiceEditorHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeadlineServiceEditorHelpers), 1651477839U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceEditorHelpers_h__Script_DeadlineService_3955499166(TEXT("/Script/DeadlineService"),
	Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceEditorHelpers_h__Script_DeadlineService_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceEditorHelpers_h__Script_DeadlineService_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
