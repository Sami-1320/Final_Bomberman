// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalBomberMan/IGameObserver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIGameObserver() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UIGameObserver();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UIGameObserver_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalBomberMan();
// End Cross Module References

// Begin Interface UIGameObserver
void UIGameObserver::StaticRegisterNativesUIGameObserver()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIGameObserver);
UClass* Z_Construct_UClass_UIGameObserver_NoRegister()
{
	return UIGameObserver::StaticClass();
}
struct Z_Construct_UClass_UIGameObserver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IGameObserver.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIGameObserver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIGameObserver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalBomberMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIGameObserver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIGameObserver_Statics::ClassParams = {
	&UIGameObserver::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIGameObserver_Statics::Class_MetaDataParams), Z_Construct_UClass_UIGameObserver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIGameObserver()
{
	if (!Z_Registration_Info_UClass_UIGameObserver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIGameObserver.OuterSingleton, Z_Construct_UClass_UIGameObserver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIGameObserver.OuterSingleton;
}
template<> FINALBOMBERMAN_API UClass* StaticClass<UIGameObserver>()
{
	return UIGameObserver::StaticClass();
}
UIGameObserver::UIGameObserver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIGameObserver);
UIGameObserver::~UIGameObserver() {}
// End Interface UIGameObserver

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_IGameObserver_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIGameObserver, UIGameObserver::StaticClass, TEXT("UIGameObserver"), &Z_Registration_Info_UClass_UIGameObserver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIGameObserver), 390567672U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_IGameObserver_h_1681815710(TEXT("/Script/FinalBomberMan"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_IGameObserver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_IGameObserver_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
