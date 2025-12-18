// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineDeadlineSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoviePipelineDeadlineSettings() {}

// ********** Begin Cross Module References ********************************************************
DEADLINESERVICE_API UClass* Z_Construct_UClass_UDeadlineJobPreset_NoRegister();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
MOVIEPIPELINEDEADLINE_API UClass* Z_Construct_UClass_UMoviePipelineDeadlineSettings();
MOVIEPIPELINEDEADLINE_API UClass* Z_Construct_UClass_UMoviePipelineDeadlineSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_MoviePipelineDeadline();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMoviePipelineDeadlineSettings *******************************************
void UMoviePipelineDeadlineSettings::StaticRegisterNativesUMoviePipelineDeadlineSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoviePipelineDeadlineSettings;
UClass* UMoviePipelineDeadlineSettings::GetPrivateStaticClass()
{
	using TClass = UMoviePipelineDeadlineSettings;
	if (!Z_Registration_Info_UClass_UMoviePipelineDeadlineSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoviePipelineDeadlineSettings"),
			Z_Registration_Info_UClass_UMoviePipelineDeadlineSettings.InnerSingleton,
			StaticRegisterNativesUMoviePipelineDeadlineSettings,
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
	return Z_Registration_Info_UClass_UMoviePipelineDeadlineSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoviePipelineDeadlineSettings_NoRegister()
{
	return UMoviePipelineDeadlineSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoviePipelineDeadlineSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Project-wide settings for Deadline Movie Pipeline.\n*/" },
#endif
		{ "DisplayName", "Movie Pipeline Deadline" },
		{ "IncludePath", "MoviePipelineDeadlineSettings.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineDeadlineSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Project-wide settings for Deadline Movie Pipeline." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultJobPreset_MetaData[] = {
		{ "Category", "Movie Pipeline Deadline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The project level Deadline preset Data Asset */" },
#endif
		{ "ModuleRelativePath", "Public/MoviePipelineDeadlineSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The project level Deadline preset Data Asset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JobPresetPropertiesToHideInMovieRenderQueue_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineDeadlineSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultJobPreset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_JobPresetPropertiesToHideInMovieRenderQueue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_JobPresetPropertiesToHideInMovieRenderQueue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineDeadlineSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoviePipelineDeadlineSettings_Statics::NewProp_DefaultJobPreset = { "DefaultJobPreset", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelineDeadlineSettings, DefaultJobPreset), Z_Construct_UClass_UDeadlineJobPreset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultJobPreset_MetaData), NewProp_DefaultJobPreset_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMoviePipelineDeadlineSettings_Statics::NewProp_JobPresetPropertiesToHideInMovieRenderQueue_Inner = { "JobPresetPropertiesToHideInMovieRenderQueue", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineDeadlineSettings_Statics::NewProp_JobPresetPropertiesToHideInMovieRenderQueue = { "JobPresetPropertiesToHideInMovieRenderQueue", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelineDeadlineSettings, JobPresetPropertiesToHideInMovieRenderQueue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JobPresetPropertiesToHideInMovieRenderQueue_MetaData), NewProp_JobPresetPropertiesToHideInMovieRenderQueue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineDeadlineSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineDeadlineSettings_Statics::NewProp_DefaultJobPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineDeadlineSettings_Statics::NewProp_JobPresetPropertiesToHideInMovieRenderQueue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineDeadlineSettings_Statics::NewProp_JobPresetPropertiesToHideInMovieRenderQueue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDeadlineSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoviePipelineDeadlineSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_MoviePipelineDeadline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDeadlineSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineDeadlineSettings_Statics::ClassParams = {
	&UMoviePipelineDeadlineSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMoviePipelineDeadlineSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDeadlineSettings_Statics::PropPointers),
	0,
	0x000000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDeadlineSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoviePipelineDeadlineSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoviePipelineDeadlineSettings()
{
	if (!Z_Registration_Info_UClass_UMoviePipelineDeadlineSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineDeadlineSettings.OuterSingleton, Z_Construct_UClass_UMoviePipelineDeadlineSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoviePipelineDeadlineSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineDeadlineSettings);
UMoviePipelineDeadlineSettings::~UMoviePipelineDeadlineSettings() {}
// ********** End Class UMoviePipelineDeadlineSettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_MoviePipelineDeadline_Source_MoviePipelineDeadline_Public_MoviePipelineDeadlineSettings_h__Script_MoviePipelineDeadline_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineDeadlineSettings, UMoviePipelineDeadlineSettings::StaticClass, TEXT("UMoviePipelineDeadlineSettings"), &Z_Registration_Info_UClass_UMoviePipelineDeadlineSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineDeadlineSettings), 3882962607U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_MoviePipelineDeadline_Source_MoviePipelineDeadline_Public_MoviePipelineDeadlineSettings_h__Script_MoviePipelineDeadline_4232882713(TEXT("/Script/MoviePipelineDeadline"),
	Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_MoviePipelineDeadline_Source_MoviePipelineDeadline_Public_MoviePipelineDeadlineSettings_h__Script_MoviePipelineDeadline_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_MoviePipelineDeadline_Source_MoviePipelineDeadline_Public_MoviePipelineDeadlineSettings_h__Script_MoviePipelineDeadline_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
