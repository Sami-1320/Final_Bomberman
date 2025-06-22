// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalBomberMan/IBloqueInterfaz.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIBloqueInterfaz() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UIBloqueInterfaz();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UIBloqueInterfaz_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalBomberMan();
// End Cross Module References

// Begin Interface UIBloqueInterfaz
void UIBloqueInterfaz::StaticRegisterNativesUIBloqueInterfaz()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIBloqueInterfaz);
UClass* Z_Construct_UClass_UIBloqueInterfaz_NoRegister()
{
	return UIBloqueInterfaz::StaticClass();
}
struct Z_Construct_UClass_UIBloqueInterfaz_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IBloqueInterfaz.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIBloqueInterfaz>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIBloqueInterfaz_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalBomberMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIBloqueInterfaz_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIBloqueInterfaz_Statics::ClassParams = {
	&UIBloqueInterfaz::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIBloqueInterfaz_Statics::Class_MetaDataParams), Z_Construct_UClass_UIBloqueInterfaz_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIBloqueInterfaz()
{
	if (!Z_Registration_Info_UClass_UIBloqueInterfaz.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIBloqueInterfaz.OuterSingleton, Z_Construct_UClass_UIBloqueInterfaz_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIBloqueInterfaz.OuterSingleton;
}
template<> FINALBOMBERMAN_API UClass* StaticClass<UIBloqueInterfaz>()
{
	return UIBloqueInterfaz::StaticClass();
}
UIBloqueInterfaz::UIBloqueInterfaz(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIBloqueInterfaz);
UIBloqueInterfaz::~UIBloqueInterfaz() {}
// End Interface UIBloqueInterfaz

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IBloqueInterfaz_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIBloqueInterfaz, UIBloqueInterfaz::StaticClass, TEXT("UIBloqueInterfaz"), &Z_Registration_Info_UClass_UIBloqueInterfaz, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIBloqueInterfaz), 1262486127U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IBloqueInterfaz_h_3106222289(TEXT("/Script/FinalBomberMan"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IBloqueInterfaz_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IBloqueInterfaz_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
