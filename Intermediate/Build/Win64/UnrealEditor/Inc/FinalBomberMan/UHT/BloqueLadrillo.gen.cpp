// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalBomberMan/BloqueLadrillo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueLadrillo() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_ABloqueLadrillo();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_ABloqueLadrillo_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UIBloqueInterfaz_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalBomberMan();
// End Cross Module References

// Begin Class ABloqueLadrillo
void ABloqueLadrillo::StaticRegisterNativesABloqueLadrillo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueLadrillo);
UClass* Z_Construct_UClass_ABloqueLadrillo_NoRegister()
{
	return ABloqueLadrillo::StaticClass();
}
struct Z_Construct_UClass_ABloqueLadrillo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueLadrillo.h" },
		{ "ModuleRelativePath", "BloqueLadrillo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resistencia_MetaData[] = {
		{ "Category", "Bloque" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Propiedades del bloque de ladrillo\n" },
#endif
		{ "ModuleRelativePath", "BloqueLadrillo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Propiedades del bloque de ladrillo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Durabilidad_MetaData[] = {
		{ "Category", "Bloque" },
		{ "ModuleRelativePath", "BloqueLadrillo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipoMaterial_MetaData[] = {
		{ "Category", "Bloque" },
		{ "ModuleRelativePath", "BloqueLadrillo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BloqueLadrillo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Resistencia;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Durabilidad;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TipoMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueLadrillo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueLadrillo_Statics::NewProp_Resistencia = { "Resistencia", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueLadrillo, Resistencia), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resistencia_MetaData), NewProp_Resistencia_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABloqueLadrillo_Statics::NewProp_Durabilidad = { "Durabilidad", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueLadrillo, Durabilidad), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Durabilidad_MetaData), NewProp_Durabilidad_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABloqueLadrillo_Statics::NewProp_TipoMaterial = { "TipoMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueLadrillo, TipoMaterial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipoMaterial_MetaData), NewProp_TipoMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueLadrillo_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueLadrillo, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueLadrillo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueLadrillo_Statics::NewProp_Resistencia,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueLadrillo_Statics::NewProp_Durabilidad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueLadrillo_Statics::NewProp_TipoMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueLadrillo_Statics::NewProp_MeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueLadrillo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueLadrillo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalBomberMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueLadrillo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABloqueLadrillo_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIBloqueInterfaz_NoRegister, (int32)VTABLE_OFFSET(ABloqueLadrillo, IIBloqueInterfaz), false },  // 1262486127
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueLadrillo_Statics::ClassParams = {
	&ABloqueLadrillo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueLadrillo_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueLadrillo_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueLadrillo_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueLadrillo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueLadrillo()
{
	if (!Z_Registration_Info_UClass_ABloqueLadrillo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueLadrillo.OuterSingleton, Z_Construct_UClass_ABloqueLadrillo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueLadrillo.OuterSingleton;
}
template<> FINALBOMBERMAN_API UClass* StaticClass<ABloqueLadrillo>()
{
	return ABloqueLadrillo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueLadrillo);
ABloqueLadrillo::~ABloqueLadrillo() {}
// End Class ABloqueLadrillo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_BloqueLadrillo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueLadrillo, ABloqueLadrillo::StaticClass, TEXT("ABloqueLadrillo"), &Z_Registration_Info_UClass_ABloqueLadrillo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueLadrillo), 4210076648U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_BloqueLadrillo_h_2514049644(TEXT("/Script/FinalBomberMan"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_BloqueLadrillo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_BloqueLadrillo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
