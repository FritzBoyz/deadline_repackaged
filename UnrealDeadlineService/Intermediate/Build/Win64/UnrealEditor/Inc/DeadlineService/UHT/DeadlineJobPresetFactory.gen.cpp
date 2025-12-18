// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadlineJobPresetFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDeadlineJobPresetFactory() {}

// ********** Begin Cross Module References ********************************************************
DEADLINESERVICE_API UClass* Z_Construct_UClass_UDeadlineJobPresetFactory();
DEADLINESERVICE_API UClass* Z_Construct_UClass_UDeadlineJobPresetFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_DeadlineService();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDeadlineJobPresetFactory ************************************************
void UDeadlineJobPresetFactory::StaticRegisterNativesUDeadlineJobPresetFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDeadlineJobPresetFactory;
UClass* UDeadlineJobPresetFactory::GetPrivateStaticClass()
{
	using TClass = UDeadlineJobPresetFactory;
	if (!Z_Registration_Info_UClass_UDeadlineJobPresetFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DeadlineJobPresetFactory"),
			Z_Registration_Info_UClass_UDeadlineJobPresetFactory.InnerSingleton,
			StaticRegisterNativesUDeadlineJobPresetFactory,
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
	return Z_Registration_Info_UClass_UDeadlineJobPresetFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UDeadlineJobPresetFactory_NoRegister()
{
	return UDeadlineJobPresetFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDeadlineJobPresetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DeadlineJobPresetFactory.h" },
		{ "ModuleRelativePath", "Public/DeadlineJobPresetFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeadlineJobPresetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDeadlineJobPresetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_DeadlineService,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeadlineJobPresetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeadlineJobPresetFactory_Statics::ClassParams = {
	&UDeadlineJobPresetFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDeadlineJobPresetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UDeadlineJobPresetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDeadlineJobPresetFactory()
{
	if (!Z_Registration_Info_UClass_UDeadlineJobPresetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeadlineJobPresetFactory.OuterSingleton, Z_Construct_UClass_UDeadlineJobPresetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDeadlineJobPresetFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDeadlineJobPresetFactory);
UDeadlineJobPresetFactory::~UDeadlineJobPresetFactory() {}
// ********** End Class UDeadlineJobPresetFactory **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineJobPresetFactory_h__Script_DeadlineService_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDeadlineJobPresetFactory, UDeadlineJobPresetFactory::StaticClass, TEXT("UDeadlineJobPresetFactory"), &Z_Registration_Info_UClass_UDeadlineJobPresetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeadlineJobPresetFactory), 2885455761U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineJobPresetFactory_h__Script_DeadlineService_134541482(TEXT("/Script/DeadlineService"),
	Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineJobPresetFactory_h__Script_DeadlineService_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineJobPresetFactory_h__Script_DeadlineService_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
