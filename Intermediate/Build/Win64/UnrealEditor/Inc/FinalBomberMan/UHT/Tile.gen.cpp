// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalBomberMan/Tile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTile() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_ATile();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_ATile_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UIElementoMapa_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UITileInterfaz_NoRegister();
FINALBOMBERMAN_API UEnum* Z_Construct_UEnum_FinalBomberMan_ETipoTile();
UPackage* Z_Construct_UPackage__Script_FinalBomberMan();
// End Cross Module References

// Begin Class ATile Function ObtenerBloque
struct Z_Construct_UFunction_ATile_ObtenerBloque_Statics
{
	struct Tile_eventObtenerBloque_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATile_ObtenerBloque_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tile_eventObtenerBloque_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_ObtenerBloque_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_ObtenerBloque_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_ObtenerBloque_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_ObtenerBloque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "ObtenerBloque", nullptr, nullptr, Z_Construct_UFunction_ATile_ObtenerBloque_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_ObtenerBloque_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATile_ObtenerBloque_Statics::Tile_eventObtenerBloque_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_ObtenerBloque_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATile_ObtenerBloque_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATile_ObtenerBloque_Statics::Tile_eventObtenerBloque_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATile_ObtenerBloque()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATile_ObtenerBloque_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATile::execObtenerBloque)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->ObtenerBloque();
	P_NATIVE_END;
}
// End Class ATile Function ObtenerBloque

// Begin Class ATile Function ObtenerPosicionGrid
struct Z_Construct_UFunction_ATile_ObtenerPosicionGrid_Statics
{
	struct Tile_eventObtenerPosicionGrid_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATile_ObtenerPosicionGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tile_eventObtenerPosicionGrid_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_ObtenerPosicionGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_ObtenerPosicionGrid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_ObtenerPosicionGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_ObtenerPosicionGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "ObtenerPosicionGrid", nullptr, nullptr, Z_Construct_UFunction_ATile_ObtenerPosicionGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_ObtenerPosicionGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATile_ObtenerPosicionGrid_Statics::Tile_eventObtenerPosicionGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_ObtenerPosicionGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATile_ObtenerPosicionGrid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATile_ObtenerPosicionGrid_Statics::Tile_eventObtenerPosicionGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATile_ObtenerPosicionGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATile_ObtenerPosicionGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATile::execObtenerPosicionGrid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->ObtenerPosicionGrid();
	P_NATIVE_END;
}
// End Class ATile Function ObtenerPosicionGrid

// Begin Class ATile Function ObtenerTipoTile
struct Z_Construct_UFunction_ATile_ObtenerTipoTile_Statics
{
	struct Tile_eventObtenerTipoTile_Parms
	{
		ETipoTile ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Funciones adicionales\n" },
#endif
		{ "ModuleRelativePath", "Tile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Funciones adicionales" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATile_ObtenerTipoTile_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATile_ObtenerTipoTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tile_eventObtenerTipoTile_Parms, ReturnValue), Z_Construct_UEnum_FinalBomberMan_ETipoTile, METADATA_PARAMS(0, nullptr) }; // 108387480
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_ObtenerTipoTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_ObtenerTipoTile_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_ObtenerTipoTile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_ObtenerTipoTile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_ObtenerTipoTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "ObtenerTipoTile", nullptr, nullptr, Z_Construct_UFunction_ATile_ObtenerTipoTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_ObtenerTipoTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATile_ObtenerTipoTile_Statics::Tile_eventObtenerTipoTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_ObtenerTipoTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATile_ObtenerTipoTile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATile_ObtenerTipoTile_Statics::Tile_eventObtenerTipoTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATile_ObtenerTipoTile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATile_ObtenerTipoTile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATile::execObtenerTipoTile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ETipoTile*)Z_Param__Result=P_THIS->ObtenerTipoTile();
	P_NATIVE_END;
}
// End Class ATile Function ObtenerTipoTile

// Begin Class ATile
void ATile::StaticRegisterNativesATile()
{
	UClass* Class = ATile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ObtenerBloque", &ATile::execObtenerBloque },
		{ "ObtenerPosicionGrid", &ATile::execObtenerPosicionGrid },
		{ "ObtenerTipoTile", &ATile::execObtenerTipoTile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATile);
UClass* Z_Construct_UClass_ATile_NoRegister()
{
	return ATile::StaticClass();
}
struct Z_Construct_UClass_ATile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// QUITAR LA DEFINICI\xc3\x93N DE ETipoTile - YA NO EST\xc3\x81 AQU\xc3\x8d\n" },
#endif
		{ "IncludePath", "Tile.h" },
		{ "ModuleRelativePath", "Tile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "QUITAR LA DEFINICI\xc3\x93N DE ETipoTile - YA NO EST\xc3\x81 AQU\xc3\x8d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipoTile_MetaData[] = {
		{ "Category", "Tile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Propiedades del tile\n" },
#endif
		{ "ModuleRelativePath", "Tile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Propiedades del tile" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosicionGrid_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Tile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialPiso_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Referencias a materiales (cargados en constructor)\n" },
#endif
		{ "ModuleRelativePath", "Tile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Referencias a materiales (cargados en constructor)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialPared_MetaData[] = {
		{ "ModuleRelativePath", "Tile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSpawn_MetaData[] = {
		{ "ModuleRelativePath", "Tile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloqueColocado_MetaData[] = {
		{ "Category", "Tile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Referencia al bloque colocado en este tile\n" },
#endif
		{ "ModuleRelativePath", "Tile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Referencia al bloque colocado en este tile" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TipoTile_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TipoTile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PosicionGrid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialPiso;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialPared;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialSpawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BloqueColocado;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATile_ObtenerBloque, "ObtenerBloque" }, // 3449986394
		{ &Z_Construct_UFunction_ATile_ObtenerPosicionGrid, "ObtenerPosicionGrid" }, // 484190319
		{ &Z_Construct_UFunction_ATile_ObtenerTipoTile, "ObtenerTipoTile" }, // 1777875826
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATile_Statics::NewProp_TipoTile_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_TipoTile = { "TipoTile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATile, TipoTile), Z_Construct_UEnum_FinalBomberMan_ETipoTile, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipoTile_MetaData), NewProp_TipoTile_MetaData) }; // 108387480
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_PosicionGrid = { "PosicionGrid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATile, PosicionGrid), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosicionGrid_MetaData), NewProp_PosicionGrid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATile, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_MaterialPiso = { "MaterialPiso", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATile, MaterialPiso), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialPiso_MetaData), NewProp_MaterialPiso_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_MaterialPared = { "MaterialPared", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATile, MaterialPared), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialPared_MetaData), NewProp_MaterialPared_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_MaterialSpawn = { "MaterialSpawn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATile, MaterialSpawn), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSpawn_MetaData), NewProp_MaterialSpawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_BloqueColocado = { "BloqueColocado", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATile, BloqueColocado), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloqueColocado_MetaData), NewProp_BloqueColocado_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_TipoTile_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_TipoTile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_PosicionGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_MaterialPiso,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_MaterialPared,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_MaterialSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_BloqueColocado,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalBomberMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATile_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UITileInterfaz_NoRegister, (int32)VTABLE_OFFSET(ATile, IITileInterfaz), false },  // 2150738637
	{ Z_Construct_UClass_UIElementoMapa_NoRegister, (int32)VTABLE_OFFSET(ATile, IIElementoMapa), false },  // 1511220777
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATile_Statics::ClassParams = {
	&ATile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATile_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::Class_MetaDataParams), Z_Construct_UClass_ATile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATile()
{
	if (!Z_Registration_Info_UClass_ATile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATile.OuterSingleton, Z_Construct_UClass_ATile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATile.OuterSingleton;
}
template<> FINALBOMBERMAN_API UClass* StaticClass<ATile>()
{
	return ATile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATile);
ATile::~ATile() {}
// End Class ATile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_Tile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATile, ATile::StaticClass, TEXT("ATile"), &Z_Registration_Info_UClass_ATile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATile), 2666599228U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_Tile_h_1490809645(TEXT("/Script/FinalBomberMan"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_Tile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_Tile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
