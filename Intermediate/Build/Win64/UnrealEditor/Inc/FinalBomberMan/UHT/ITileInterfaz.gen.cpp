// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalBomberMan/ITileInterfaz.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeITileInterfaz() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UITileInterfaz();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UITileInterfaz_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalBomberMan();
// End Cross Module References

// Begin Interface UITileInterfaz
void UITileInterfaz::StaticRegisterNativesUITileInterfaz()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UITileInterfaz);
UClass* Z_Construct_UClass_UITileInterfaz_NoRegister()
{
	return UITileInterfaz::StaticClass();
}
struct Z_Construct_UClass_UITileInterfaz_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ITileInterfaz.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IITileInterfaz>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UITileInterfaz_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalBomberMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UITileInterfaz_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UITileInterfaz_Statics::ClassParams = {
	&UITileInterfaz::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UITileInterfaz_Statics::Class_MetaDataParams), Z_Construct_UClass_UITileInterfaz_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UITileInterfaz()
{
	if (!Z_Registration_Info_UClass_UITileInterfaz.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UITileInterfaz.OuterSingleton, Z_Construct_UClass_UITileInterfaz_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UITileInterfaz.OuterSingleton;
}
template<> FINALBOMBERMAN_API UClass* StaticClass<UITileInterfaz>()
{
	return UITileInterfaz::StaticClass();
}
UITileInterfaz::UITileInterfaz(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UITileInterfaz);
UITileInterfaz::~UITileInterfaz() {}
// End Interface UITileInterfaz

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_ITileInterfaz_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UITileInterfaz, UITileInterfaz::StaticClass, TEXT("UITileInterfaz"), &Z_Registration_Info_UClass_UITileInterfaz, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UITileInterfaz), 2150738637U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_ITileInterfaz_h_3127828901(TEXT("/Script/FinalBomberMan"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_ITileInterfaz_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_ITileInterfaz_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
