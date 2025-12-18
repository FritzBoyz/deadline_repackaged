// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetDefinition_DeadlineJobPreset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAssetDefinition_DeadlineJobPreset() {}

// ********** Begin Cross Module References ********************************************************
DEADLINESERVICE_API UClass* Z_Construct_UClass_UAssetDefinition_DeadlineJobPreset();
DEADLINESERVICE_API UClass* Z_Construct_UClass_UAssetDefinition_DeadlineJobPreset_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
UPackage* Z_Construct_UPackage__Script_DeadlineService();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAssetDefinition_DeadlineJobPreset ***************************************
void UAssetDefinition_DeadlineJobPreset::StaticRegisterNativesUAssetDefinition_DeadlineJobPreset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetDefinition_DeadlineJobPreset;
UClass* UAssetDefinition_DeadlineJobPreset::GetPrivateStaticClass()
{
	using TClass = UAssetDefinition_DeadlineJobPreset;
	if (!Z_Registration_Info_UClass_UAssetDefinition_DeadlineJobPreset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetDefinition_DeadlineJobPreset"),
			Z_Registration_Info_UClass_UAssetDefinition_DeadlineJobPreset.InnerSingleton,
			StaticRegisterNativesUAssetDefinition_DeadlineJobPreset,
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
	return Z_Registration_Info_UClass_UAssetDefinition_DeadlineJobPreset.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetDefinition_DeadlineJobPreset_NoRegister()
{
	return UAssetDefinition_DeadlineJobPreset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetDefinition_DeadlineJobPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_DeadlineJobPreset.h" },
		{ "ModuleRelativePath", "Public/AssetDefinition_DeadlineJobPreset.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_DeadlineJobPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAssetDefinition_DeadlineJobPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
	(UObject* (*)())Z_Construct_UPackage__Script_DeadlineService,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_DeadlineJobPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_DeadlineJobPreset_Statics::ClassParams = {
	&UAssetDefinition_DeadlineJobPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_DeadlineJobPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_DeadlineJobPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetDefinition_DeadlineJobPreset()
{
	if (!Z_Registration_Info_UClass_UAssetDefinition_DeadlineJobPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_DeadlineJobPreset.OuterSingleton, Z_Construct_UClass_UAssetDefinition_DeadlineJobPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetDefinition_DeadlineJobPreset.OuterSingleton;
}
UAssetDefinition_DeadlineJobPreset::UAssetDefinition_DeadlineJobPreset() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_DeadlineJobPreset);
UAssetDefinition_DeadlineJobPreset::~UAssetDefinition_DeadlineJobPreset() {}
// ********** End Class UAssetDefinition_DeadlineJobPreset *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_AssetDefinition_DeadlineJobPreset_h__Script_DeadlineService_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_DeadlineJobPreset, UAssetDefinition_DeadlineJobPreset::StaticClass, TEXT("UAssetDefinition_DeadlineJobPreset"), &Z_Registration_Info_UClass_UAssetDefinition_DeadlineJobPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_DeadlineJobPreset), 4236470388U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_AssetDefinition_DeadlineJobPreset_h__Script_DeadlineService_2001496465(TEXT("/Script/DeadlineService"),
	Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_AssetDefinition_DeadlineJobPreset_h__Script_DeadlineService_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_AssetDefinition_DeadlineJobPreset_h__Script_DeadlineService_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
