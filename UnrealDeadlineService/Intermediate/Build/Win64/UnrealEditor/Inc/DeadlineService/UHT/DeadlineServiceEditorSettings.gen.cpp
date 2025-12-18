// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadlineServiceEditorSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDeadlineServiceEditorSettings() {}

// ********** Begin Cross Module References ********************************************************
DEADLINESERVICE_API UClass* Z_Construct_UClass_UDeadlineServiceEditorSettings();
DEADLINESERVICE_API UClass* Z_Construct_UClass_UDeadlineServiceEditorSettings_NoRegister();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
UPackage* Z_Construct_UPackage__Script_DeadlineService();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDeadlineServiceEditorSettings *******************************************
void UDeadlineServiceEditorSettings::StaticRegisterNativesUDeadlineServiceEditorSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDeadlineServiceEditorSettings;
UClass* UDeadlineServiceEditorSettings::GetPrivateStaticClass()
{
	using TClass = UDeadlineServiceEditorSettings;
	if (!Z_Registration_Info_UClass_UDeadlineServiceEditorSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DeadlineServiceEditorSettings"),
			Z_Registration_Info_UClass_UDeadlineServiceEditorSettings.InnerSingleton,
			StaticRegisterNativesUDeadlineServiceEditorSettings,
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
	return Z_Registration_Info_UClass_UDeadlineServiceEditorSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UDeadlineServiceEditorSettings_NoRegister()
{
	return UDeadlineServiceEditorSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDeadlineServiceEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Project-wide settings for the Deadline Service.\n*/" },
#endif
		{ "DisplayName", "Deadline Service" },
		{ "IncludePath", "DeadlineServiceEditorSettings.h" },
		{ "ModuleRelativePath", "Public/DeadlineServiceEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Project-wide settings for the Deadline Service." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeadlineCommand_MetaData[] = {
		{ "Category", "Deadline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Toggle use Deadline command for submission.\n\x09* If used Deadline command preempts use of the web service.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineServiceEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggle use Deadline command for submission.\nIf used Deadline command preempts use of the web service." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadlineHost_MetaData[] = {
		{ "Category", "Deadline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* What is the host name for the Deadline Server that the REST API is running on?\n\x09* Only needs the host name and port (ie: http://localhost:port)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineServiceEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What is the host name for the Deadline Server that the REST API is running on?\nOnly needs the host name and port (ie: http://localhost:port)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PluginName_MetaData[] = {
		{ "Category", "Deadline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The name of the plugin to load in Deadline. Usually the default is used.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineServiceEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the plugin to load in Deadline. Usually the default is used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredExecutableVariant_MetaData[] = {
		{ "Category", "Deadline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* If you'd like the plugin to use a separate executable variant when creating a new DeadlineJobPreset, specify it here.\n\x09* For example, to use UnrealEditor-Cmd.exe instead of UnrealEditor.exe, specify \"-Cmd\".\n\x09* Leave blank to use no variant.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/DeadlineServiceEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If you'd like the plugin to use a separate executable variant when creating a new DeadlineJobPreset, specify it here.\nFor example, to use UnrealEditor-Cmd.exe instead of UnrealEditor.exe, specify \"-Cmd\".\nLeave blank to use no variant." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bDeadlineCommand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeadlineCommand;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeadlineHost;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PluginName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DesiredExecutableVariant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeadlineServiceEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDeadlineServiceEditorSettings_Statics::NewProp_bDeadlineCommand_SetBit(void* Obj)
{
	((UDeadlineServiceEditorSettings*)Obj)->bDeadlineCommand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDeadlineServiceEditorSettings_Statics::NewProp_bDeadlineCommand = { "bDeadlineCommand", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDeadlineServiceEditorSettings), &Z_Construct_UClass_UDeadlineServiceEditorSettings_Statics::NewProp_bDeadlineCommand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeadlineCommand_MetaData), NewProp_bDeadlineCommand_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDeadlineServiceEditorSettings_Statics::NewProp_DeadlineHost = { "DeadlineHost", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeadlineServiceEditorSettings, DeadlineHost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadlineHost_MetaData), NewProp_DeadlineHost_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDeadlineServiceEditorSettings_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeadlineServiceEditorSettings, PluginName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PluginName_MetaData), NewProp_PluginName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDeadlineServiceEditorSettings_Statics::NewProp_DesiredExecutableVariant = { "DesiredExecutableVariant", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeadlineServiceEditorSettings, DesiredExecutableVariant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredExecutableVariant_MetaData), NewProp_DesiredExecutableVariant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeadlineServiceEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeadlineServiceEditorSettings_Statics::NewProp_bDeadlineCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeadlineServiceEditorSettings_Statics::NewProp_DeadlineHost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeadlineServiceEditorSettings_Statics::NewProp_PluginName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeadlineServiceEditorSettings_Statics::NewProp_DesiredExecutableVariant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeadlineServiceEditorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDeadlineServiceEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_DeadlineService,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeadlineServiceEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeadlineServiceEditorSettings_Statics::ClassParams = {
	&UDeadlineServiceEditorSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDeadlineServiceEditorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDeadlineServiceEditorSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDeadlineServiceEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UDeadlineServiceEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDeadlineServiceEditorSettings()
{
	if (!Z_Registration_Info_UClass_UDeadlineServiceEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeadlineServiceEditorSettings.OuterSingleton, Z_Construct_UClass_UDeadlineServiceEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDeadlineServiceEditorSettings.OuterSingleton;
}
UDeadlineServiceEditorSettings::UDeadlineServiceEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDeadlineServiceEditorSettings);
UDeadlineServiceEditorSettings::~UDeadlineServiceEditorSettings() {}
// ********** End Class UDeadlineServiceEditorSettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceEditorSettings_h__Script_DeadlineService_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDeadlineServiceEditorSettings, UDeadlineServiceEditorSettings::StaticClass, TEXT("UDeadlineServiceEditorSettings"), &Z_Registration_Info_UClass_UDeadlineServiceEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeadlineServiceEditorSettings), 2069879980U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceEditorSettings_h__Script_DeadlineService_1078975798(TEXT("/Script/DeadlineService"),
	Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceEditorSettings_h__Script_DeadlineService_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_deadline_test_build_Plugins_UnrealDeadlineService_Source_DeadlineService_Public_DeadlineServiceEditorSettings_h__Script_DeadlineService_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
