// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalBomberMan/IElementoMapa.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIElementoMapa() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UIElementoMapa();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UIElementoMapa_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalBomberMan();
// End Cross Module References

// Begin Interface UIElementoMapa
void UIElementoMapa::StaticRegisterNativesUIElementoMapa()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIElementoMapa);
UClass* Z_Construct_UClass_UIElementoMapa_NoRegister()
{
	return UIElementoMapa::StaticClass();
}
struct Z_Construct_UClass_UIElementoMapa_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IElementoMapa.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIElementoMapa>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIElementoMapa_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalBomberMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIElementoMapa_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIElementoMapa_Statics::ClassParams = {
	&UIElementoMapa::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIElementoMapa_Statics::Class_MetaDataParams), Z_Construct_UClass_UIElementoMapa_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIElementoMapa()
{
	if (!Z_Registration_Info_UClass_UIElementoMapa.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIElementoMapa.OuterSingleton, Z_Construct_UClass_UIElementoMapa_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIElementoMapa.OuterSingleton;
}
template<> FINALBOMBERMAN_API UClass* StaticClass<UIElementoMapa>()
{
	return UIElementoMapa::StaticClass();
}
UIElementoMapa::UIElementoMapa(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIElementoMapa);
UIElementoMapa::~UIElementoMapa() {}
// End Interface UIElementoMapa

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IElementoMapa_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIElementoMapa, UIElementoMapa::StaticClass, TEXT("UIElementoMapa"), &Z_Registration_Info_UClass_UIElementoMapa, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIElementoMapa), 1511220777U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IElementoMapa_h_1748286561(TEXT("/Script/FinalBomberMan"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IElementoMapa_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IElementoMapa_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
