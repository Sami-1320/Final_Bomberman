// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalBomberMan/ConstructorMapa.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructorMapa() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_ATile_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UConstructorMapa();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UConstructorMapa_NoRegister();
FINALBOMBERMAN_API UEnum* Z_Construct_UEnum_FinalBomberMan_ETipoTile();
FINALBOMBERMAN_API UScriptStruct* Z_Construct_UScriptStruct_FDatosMapa();
UPackage* Z_Construct_UPackage__Script_FinalBomberMan();
// End Cross Module References

// Begin ScriptStruct FDatosMapa
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatosMapa;
class UScriptStruct* FDatosMapa::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatosMapa.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatosMapa.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatosMapa, (UObject*)Z_Construct_UPackage__Script_FinalBomberMan(), TEXT("DatosMapa"));
	}
	return Z_Registration_Info_UScriptStruct_DatosMapa.OuterSingleton;
}
template<> FINALBOMBERMAN_API UScriptStruct* StaticStruct<FDatosMapa>()
{
	return FDatosMapa::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDatosMapa_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ConstructorMapa.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ancho_MetaData[] = {
		{ "Category", "Mapa" },
		{ "ModuleRelativePath", "ConstructorMapa.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alto_MetaData[] = {
		{ "Category", "Mapa" },
		{ "ModuleRelativePath", "ConstructorMapa.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TamanoTile_MetaData[] = {
		{ "Category", "Mapa" },
		{ "ModuleRelativePath", "ConstructorMapa.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridTipos_MetaData[] = {
		{ "Category", "Mapa" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array unidimensional\n" },
#endif
		{ "ModuleRelativePath", "ConstructorMapa.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array unidimensional" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Ancho;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Alto;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TamanoTile;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GridTipos_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GridTipos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GridTipos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatosMapa>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDatosMapa_Statics::NewProp_Ancho = { "Ancho", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatosMapa, Ancho), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ancho_MetaData), NewProp_Ancho_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDatosMapa_Statics::NewProp_Alto = { "Alto", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatosMapa, Alto), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alto_MetaData), NewProp_Alto_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatosMapa_Statics::NewProp_TamanoTile = { "TamanoTile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatosMapa, TamanoTile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TamanoTile_MetaData), NewProp_TamanoTile_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDatosMapa_Statics::NewProp_GridTipos_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDatosMapa_Statics::NewProp_GridTipos_Inner = { "GridTipos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_FinalBomberMan_ETipoTile, METADATA_PARAMS(0, nullptr) }; // 108387480
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDatosMapa_Statics::NewProp_GridTipos = { "GridTipos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatosMapa, GridTipos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridTipos_MetaData), NewProp_GridTipos_MetaData) }; // 108387480
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatosMapa_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatosMapa_Statics::NewProp_Ancho,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatosMapa_Statics::NewProp_Alto,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatosMapa_Statics::NewProp_TamanoTile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatosMapa_Statics::NewProp_GridTipos_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatosMapa_Statics::NewProp_GridTipos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatosMapa_Statics::NewProp_GridTipos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatosMapa_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatosMapa_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FinalBomberMan,
	nullptr,
	&NewStructOps,
	"DatosMapa",
	Z_Construct_UScriptStruct_FDatosMapa_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatosMapa_Statics::PropPointers),
	sizeof(FDatosMapa),
	alignof(FDatosMapa),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatosMapa_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDatosMapa_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDatosMapa()
{
	if (!Z_Registration_Info_UScriptStruct_DatosMapa.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatosMapa.InnerSingleton, Z_Construct_UScriptStruct_FDatosMapa_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DatosMapa.InnerSingleton;
}
// End ScriptStruct FDatosMapa

// Begin Class UConstructorMapa Function ColocarBordesIndestructibles
struct Z_Construct_UFunction_UConstructorMapa_ColocarBordesIndestructibles_Statics
{
	struct ConstructorMapa_eventColocarBordesIndestructibles_Parms
	{
		UConstructorMapa* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Constructor Mapa" },
		{ "ModuleRelativePath", "ConstructorMapa.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstructorMapa_ColocarBordesIndestructibles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstructorMapa_eventColocarBordesIndestructibles_Parms, ReturnValue), Z_Construct_UClass_UConstructorMapa_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstructorMapa_ColocarBordesIndestructibles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructorMapa_ColocarBordesIndestructibles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_ColocarBordesIndestructibles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstructorMapa_ColocarBordesIndestructibles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstructorMapa, nullptr, "ColocarBordesIndestructibles", nullptr, nullptr, Z_Construct_UFunction_UConstructorMapa_ColocarBordesIndestructibles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_ColocarBordesIndestructibles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConstructorMapa_ColocarBordesIndestructibles_Statics::ConstructorMapa_eventColocarBordesIndestructibles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_ColocarBordesIndestructibles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConstructorMapa_ColocarBordesIndestructibles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConstructorMapa_ColocarBordesIndestructibles_Statics::ConstructorMapa_eventColocarBordesIndestructibles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConstructorMapa_ColocarBordesIndestructibles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstructorMapa_ColocarBordesIndestructibles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConstructorMapa::execColocarBordesIndestructibles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UConstructorMapa**)Z_Param__Result=P_THIS->ColocarBordesIndestructibles();
	P_NATIVE_END;
}
// End Class UConstructorMapa Function ColocarBordesIndestructibles

// Begin Class UConstructorMapa Function ColocarPatronColumnas
struct Z_Construct_UFunction_UConstructorMapa_ColocarPatronColumnas_Statics
{
	struct ConstructorMapa_eventColocarPatronColumnas_Parms
	{
		UConstructorMapa* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Constructor Mapa" },
		{ "ModuleRelativePath", "ConstructorMapa.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstructorMapa_ColocarPatronColumnas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstructorMapa_eventColocarPatronColumnas_Parms, ReturnValue), Z_Construct_UClass_UConstructorMapa_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstructorMapa_ColocarPatronColumnas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructorMapa_ColocarPatronColumnas_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_ColocarPatronColumnas_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstructorMapa_ColocarPatronColumnas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstructorMapa, nullptr, "ColocarPatronColumnas", nullptr, nullptr, Z_Construct_UFunction_UConstructorMapa_ColocarPatronColumnas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_ColocarPatronColumnas_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConstructorMapa_ColocarPatronColumnas_Statics::ConstructorMapa_eventColocarPatronColumnas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_ColocarPatronColumnas_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConstructorMapa_ColocarPatronColumnas_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConstructorMapa_ColocarPatronColumnas_Statics::ConstructorMapa_eventColocarPatronColumnas_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConstructorMapa_ColocarPatronColumnas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstructorMapa_ColocarPatronColumnas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConstructorMapa::execColocarPatronColumnas)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UConstructorMapa**)Z_Param__Result=P_THIS->ColocarPatronColumnas();
	P_NATIVE_END;
}
// End Class UConstructorMapa Function ColocarPatronColumnas

// Begin Class UConstructorMapa Function ColocarSalidaNivel
struct Z_Construct_UFunction_UConstructorMapa_ColocarSalidaNivel_Statics
{
	struct ConstructorMapa_eventColocarSalidaNivel_Parms
	{
		FVector2D Posicion;
		UConstructorMapa* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Constructor Mapa" },
		{ "ModuleRelativePath", "ConstructorMapa.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posicion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstructorMapa_ColocarSalidaNivel_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstructorMapa_eventColocarSalidaNivel_Parms, Posicion), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstructorMapa_ColocarSalidaNivel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstructorMapa_eventColocarSalidaNivel_Parms, ReturnValue), Z_Construct_UClass_UConstructorMapa_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstructorMapa_ColocarSalidaNivel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructorMapa_ColocarSalidaNivel_Statics::NewProp_Posicion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructorMapa_ColocarSalidaNivel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_ColocarSalidaNivel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstructorMapa_ColocarSalidaNivel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstructorMapa, nullptr, "ColocarSalidaNivel", nullptr, nullptr, Z_Construct_UFunction_UConstructorMapa_ColocarSalidaNivel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_ColocarSalidaNivel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConstructorMapa_ColocarSalidaNivel_Statics::ConstructorMapa_eventColocarSalidaNivel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_ColocarSalidaNivel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConstructorMapa_ColocarSalidaNivel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConstructorMapa_ColocarSalidaNivel_Statics::ConstructorMapa_eventColocarSalidaNivel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConstructorMapa_ColocarSalidaNivel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstructorMapa_ColocarSalidaNivel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConstructorMapa::execColocarSalidaNivel)
{
	P_GET_STRUCT(FVector2D,Z_Param_Posicion);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UConstructorMapa**)Z_Param__Result=P_THIS->ColocarSalidaNivel(Z_Param_Posicion);
	P_NATIVE_END;
}
// End Class UConstructorMapa Function ColocarSalidaNivel

// Begin Class UConstructorMapa Function ColocarSpawnJugador
struct Z_Construct_UFunction_UConstructorMapa_ColocarSpawnJugador_Statics
{
	struct ConstructorMapa_eventColocarSpawnJugador_Parms
	{
		FVector2D Posicion;
		UConstructorMapa* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Constructor Mapa" },
		{ "ModuleRelativePath", "ConstructorMapa.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posicion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstructorMapa_ColocarSpawnJugador_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstructorMapa_eventColocarSpawnJugador_Parms, Posicion), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstructorMapa_ColocarSpawnJugador_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstructorMapa_eventColocarSpawnJugador_Parms, ReturnValue), Z_Construct_UClass_UConstructorMapa_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstructorMapa_ColocarSpawnJugador_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructorMapa_ColocarSpawnJugador_Statics::NewProp_Posicion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructorMapa_ColocarSpawnJugador_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_ColocarSpawnJugador_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstructorMapa_ColocarSpawnJugador_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstructorMapa, nullptr, "ColocarSpawnJugador", nullptr, nullptr, Z_Construct_UFunction_UConstructorMapa_ColocarSpawnJugador_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_ColocarSpawnJugador_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConstructorMapa_ColocarSpawnJugador_Statics::ConstructorMapa_eventColocarSpawnJugador_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_ColocarSpawnJugador_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConstructorMapa_ColocarSpawnJugador_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConstructorMapa_ColocarSpawnJugador_Statics::ConstructorMapa_eventColocarSpawnJugador_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConstructorMapa_ColocarSpawnJugador()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstructorMapa_ColocarSpawnJugador_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConstructorMapa::execColocarSpawnJugador)
{
	P_GET_STRUCT(FVector2D,Z_Param_Posicion);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UConstructorMapa**)Z_Param__Result=P_THIS->ColocarSpawnJugador(Z_Param_Posicion);
	P_NATIVE_END;
}
// End Class UConstructorMapa Function ColocarSpawnJugador

// Begin Class UConstructorMapa Function ColocarSpawnsEnemigos
struct Z_Construct_UFunction_UConstructorMapa_ColocarSpawnsEnemigos_Statics
{
	struct ConstructorMapa_eventColocarSpawnsEnemigos_Parms
	{
		TArray<FVector2D> Posiciones;
		UConstructorMapa* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Constructor Mapa" },
		{ "ModuleRelativePath", "ConstructorMapa.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Posiciones_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posiciones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Posiciones;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstructorMapa_ColocarSpawnsEnemigos_Statics::NewProp_Posiciones_Inner = { "Posiciones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UConstructorMapa_ColocarSpawnsEnemigos_Statics::NewProp_Posiciones = { "Posiciones", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstructorMapa_eventColocarSpawnsEnemigos_Parms, Posiciones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Posiciones_MetaData), NewProp_Posiciones_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstructorMapa_ColocarSpawnsEnemigos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstructorMapa_eventColocarSpawnsEnemigos_Parms, ReturnValue), Z_Construct_UClass_UConstructorMapa_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstructorMapa_ColocarSpawnsEnemigos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructorMapa_ColocarSpawnsEnemigos_Statics::NewProp_Posiciones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructorMapa_ColocarSpawnsEnemigos_Statics::NewProp_Posiciones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructorMapa_ColocarSpawnsEnemigos_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_ColocarSpawnsEnemigos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstructorMapa_ColocarSpawnsEnemigos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstructorMapa, nullptr, "ColocarSpawnsEnemigos", nullptr, nullptr, Z_Construct_UFunction_UConstructorMapa_ColocarSpawnsEnemigos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_ColocarSpawnsEnemigos_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConstructorMapa_ColocarSpawnsEnemigos_Statics::ConstructorMapa_eventColocarSpawnsEnemigos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_ColocarSpawnsEnemigos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConstructorMapa_ColocarSpawnsEnemigos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConstructorMapa_ColocarSpawnsEnemigos_Statics::ConstructorMapa_eventColocarSpawnsEnemigos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConstructorMapa_ColocarSpawnsEnemigos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstructorMapa_ColocarSpawnsEnemigos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConstructorMapa::execColocarSpawnsEnemigos)
{
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_Posiciones);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UConstructorMapa**)Z_Param__Result=P_THIS->ColocarSpawnsEnemigos(Z_Param_Out_Posiciones);
	P_NATIVE_END;
}
// End Class UConstructorMapa Function ColocarSpawnsEnemigos

// Begin Class UConstructorMapa Function Construir
struct Z_Construct_UFunction_UConstructorMapa_Construir_Statics
{
	struct ConstructorMapa_eventConstruir_Parms
	{
		UWorld* Mundo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Constructor Mapa" },
		{ "ModuleRelativePath", "ConstructorMapa.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mundo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstructorMapa_Construir_Statics::NewProp_Mundo = { "Mundo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstructorMapa_eventConstruir_Parms, Mundo), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstructorMapa_Construir_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructorMapa_Construir_Statics::NewProp_Mundo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_Construir_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstructorMapa_Construir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstructorMapa, nullptr, "Construir", nullptr, nullptr, Z_Construct_UFunction_UConstructorMapa_Construir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_Construir_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConstructorMapa_Construir_Statics::ConstructorMapa_eventConstruir_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_Construir_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConstructorMapa_Construir_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConstructorMapa_Construir_Statics::ConstructorMapa_eventConstruir_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConstructorMapa_Construir()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstructorMapa_Construir_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConstructorMapa::execConstruir)
{
	P_GET_OBJECT(UWorld,Z_Param_Mundo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Construir(Z_Param_Mundo);
	P_NATIVE_END;
}
// End Class UConstructorMapa Function Construir

// Begin Class UConstructorMapa Function ConstruirMapa
struct Z_Construct_UFunction_UConstructorMapa_ConstruirMapa_Statics
{
	struct ConstructorMapa_eventConstruirMapa_Parms
	{
		FDatosMapa DatosMapa;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Constructor Mapa" },
		{ "ModuleRelativePath", "ConstructorMapa.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatosMapa_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DatosMapa;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConstructorMapa_ConstruirMapa_Statics::NewProp_DatosMapa = { "DatosMapa", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstructorMapa_eventConstruirMapa_Parms, DatosMapa), Z_Construct_UScriptStruct_FDatosMapa, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatosMapa_MetaData), NewProp_DatosMapa_MetaData) }; // 2736697811
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstructorMapa_ConstruirMapa_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructorMapa_ConstruirMapa_Statics::NewProp_DatosMapa,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_ConstruirMapa_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstructorMapa_ConstruirMapa_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstructorMapa, nullptr, "ConstruirMapa", nullptr, nullptr, Z_Construct_UFunction_UConstructorMapa_ConstruirMapa_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_ConstruirMapa_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConstructorMapa_ConstruirMapa_Statics::ConstructorMapa_eventConstruirMapa_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_ConstruirMapa_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConstructorMapa_ConstruirMapa_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConstructorMapa_ConstruirMapa_Statics::ConstructorMapa_eventConstruirMapa_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConstructorMapa_ConstruirMapa()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstructorMapa_ConstruirMapa_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConstructorMapa::execConstruirMapa)
{
	P_GET_STRUCT_REF(FDatosMapa,Z_Param_Out_DatosMapa);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConstruirMapa(Z_Param_Out_DatosMapa);
	P_NATIVE_END;
}
// End Class UConstructorMapa Function ConstruirMapa

// Begin Class UConstructorMapa Function Inicializar
struct Z_Construct_UFunction_UConstructorMapa_Inicializar_Statics
{
	struct ConstructorMapa_eventInicializar_Parms
	{
		UWorld* Mundo;
		int32 NuevoAncho;
		int32 NuevoAlto;
		float NuevoTamanoTile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Constructor Mapa" },
		{ "ModuleRelativePath", "ConstructorMapa.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mundo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NuevoAncho;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NuevoAlto;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NuevoTamanoTile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstructorMapa_Inicializar_Statics::NewProp_Mundo = { "Mundo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstructorMapa_eventInicializar_Parms, Mundo), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConstructorMapa_Inicializar_Statics::NewProp_NuevoAncho = { "NuevoAncho", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstructorMapa_eventInicializar_Parms, NuevoAncho), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConstructorMapa_Inicializar_Statics::NewProp_NuevoAlto = { "NuevoAlto", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstructorMapa_eventInicializar_Parms, NuevoAlto), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstructorMapa_Inicializar_Statics::NewProp_NuevoTamanoTile = { "NuevoTamanoTile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstructorMapa_eventInicializar_Parms, NuevoTamanoTile), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstructorMapa_Inicializar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructorMapa_Inicializar_Statics::NewProp_Mundo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructorMapa_Inicializar_Statics::NewProp_NuevoAncho,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructorMapa_Inicializar_Statics::NewProp_NuevoAlto,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructorMapa_Inicializar_Statics::NewProp_NuevoTamanoTile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_Inicializar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstructorMapa_Inicializar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstructorMapa, nullptr, "Inicializar", nullptr, nullptr, Z_Construct_UFunction_UConstructorMapa_Inicializar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_Inicializar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConstructorMapa_Inicializar_Statics::ConstructorMapa_eventInicializar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_Inicializar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConstructorMapa_Inicializar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConstructorMapa_Inicializar_Statics::ConstructorMapa_eventInicializar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConstructorMapa_Inicializar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstructorMapa_Inicializar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConstructorMapa::execInicializar)
{
	P_GET_OBJECT(UWorld,Z_Param_Mundo);
	P_GET_PROPERTY(FIntProperty,Z_Param_NuevoAncho);
	P_GET_PROPERTY(FIntProperty,Z_Param_NuevoAlto);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NuevoTamanoTile);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Inicializar(Z_Param_Mundo,Z_Param_NuevoAncho,Z_Param_NuevoAlto,Z_Param_NuevoTamanoTile);
	P_NATIVE_END;
}
// End Class UConstructorMapa Function Inicializar

// Begin Class UConstructorMapa Function LimpiarMapa
struct Z_Construct_UFunction_UConstructorMapa_LimpiarMapa_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Constructor Mapa" },
		{ "ModuleRelativePath", "ConstructorMapa.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstructorMapa_LimpiarMapa_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstructorMapa, nullptr, "LimpiarMapa", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_LimpiarMapa_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConstructorMapa_LimpiarMapa_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UConstructorMapa_LimpiarMapa()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstructorMapa_LimpiarMapa_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConstructorMapa::execLimpiarMapa)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LimpiarMapa();
	P_NATIVE_END;
}
// End Class UConstructorMapa Function LimpiarMapa

// Begin Class UConstructorMapa Function LlenarConBloquesDestructibles
struct Z_Construct_UFunction_UConstructorMapa_LlenarConBloquesDestructibles_Statics
{
	struct ConstructorMapa_eventLlenarConBloquesDestructibles_Parms
	{
		float Porcentaje;
		TSubclassOf<AActor> ClaseBloque;
		UConstructorMapa* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Constructor Mapa" },
		{ "ModuleRelativePath", "ConstructorMapa.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Porcentaje;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClaseBloque;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstructorMapa_LlenarConBloquesDestructibles_Statics::NewProp_Porcentaje = { "Porcentaje", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstructorMapa_eventLlenarConBloquesDestructibles_Parms, Porcentaje), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UConstructorMapa_LlenarConBloquesDestructibles_Statics::NewProp_ClaseBloque = { "ClaseBloque", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstructorMapa_eventLlenarConBloquesDestructibles_Parms, ClaseBloque), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstructorMapa_LlenarConBloquesDestructibles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstructorMapa_eventLlenarConBloquesDestructibles_Parms, ReturnValue), Z_Construct_UClass_UConstructorMapa_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstructorMapa_LlenarConBloquesDestructibles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructorMapa_LlenarConBloquesDestructibles_Statics::NewProp_Porcentaje,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructorMapa_LlenarConBloquesDestructibles_Statics::NewProp_ClaseBloque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructorMapa_LlenarConBloquesDestructibles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_LlenarConBloquesDestructibles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstructorMapa_LlenarConBloquesDestructibles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstructorMapa, nullptr, "LlenarConBloquesDestructibles", nullptr, nullptr, Z_Construct_UFunction_UConstructorMapa_LlenarConBloquesDestructibles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_LlenarConBloquesDestructibles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConstructorMapa_LlenarConBloquesDestructibles_Statics::ConstructorMapa_eventLlenarConBloquesDestructibles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_LlenarConBloquesDestructibles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConstructorMapa_LlenarConBloquesDestructibles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConstructorMapa_LlenarConBloquesDestructibles_Statics::ConstructorMapa_eventLlenarConBloquesDestructibles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConstructorMapa_LlenarConBloquesDestructibles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstructorMapa_LlenarConBloquesDestructibles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConstructorMapa::execLlenarConBloquesDestructibles)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Porcentaje);
	P_GET_OBJECT(UClass,Z_Param_ClaseBloque);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UConstructorMapa**)Z_Param__Result=P_THIS->LlenarConBloquesDestructibles(Z_Param_Porcentaje,Z_Param_ClaseBloque);
	P_NATIVE_END;
}
// End Class UConstructorMapa Function LlenarConBloquesDestructibles

// Begin Class UConstructorMapa Function ObtenerTileEn
struct Z_Construct_UFunction_UConstructorMapa_ObtenerTileEn_Statics
{
	struct ConstructorMapa_eventObtenerTileEn_Parms
	{
		int32 X;
		int32 Y;
		ATile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Constructor Mapa" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Funciones para acceder a tiles individuales\n" },
#endif
		{ "ModuleRelativePath", "ConstructorMapa.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Funciones para acceder a tiles individuales" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConstructorMapa_ObtenerTileEn_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstructorMapa_eventObtenerTileEn_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConstructorMapa_ObtenerTileEn_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstructorMapa_eventObtenerTileEn_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstructorMapa_ObtenerTileEn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstructorMapa_eventObtenerTileEn_Parms, ReturnValue), Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstructorMapa_ObtenerTileEn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructorMapa_ObtenerTileEn_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructorMapa_ObtenerTileEn_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructorMapa_ObtenerTileEn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_ObtenerTileEn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstructorMapa_ObtenerTileEn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstructorMapa, nullptr, "ObtenerTileEn", nullptr, nullptr, Z_Construct_UFunction_UConstructorMapa_ObtenerTileEn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_ObtenerTileEn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConstructorMapa_ObtenerTileEn_Statics::ConstructorMapa_eventObtenerTileEn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructorMapa_ObtenerTileEn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConstructorMapa_ObtenerTileEn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConstructorMapa_ObtenerTileEn_Statics::ConstructorMapa_eventObtenerTileEn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConstructorMapa_ObtenerTileEn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstructorMapa_ObtenerTileEn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConstructorMapa::execObtenerTileEn)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ATile**)Z_Param__Result=P_THIS->ObtenerTileEn(Z_Param_X,Z_Param_Y);
	P_NATIVE_END;
}
// End Class UConstructorMapa Function ObtenerTileEn

// Begin Class UConstructorMapa
void UConstructorMapa::StaticRegisterNativesUConstructorMapa()
{
	UClass* Class = UConstructorMapa::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ColocarBordesIndestructibles", &UConstructorMapa::execColocarBordesIndestructibles },
		{ "ColocarPatronColumnas", &UConstructorMapa::execColocarPatronColumnas },
		{ "ColocarSalidaNivel", &UConstructorMapa::execColocarSalidaNivel },
		{ "ColocarSpawnJugador", &UConstructorMapa::execColocarSpawnJugador },
		{ "ColocarSpawnsEnemigos", &UConstructorMapa::execColocarSpawnsEnemigos },
		{ "Construir", &UConstructorMapa::execConstruir },
		{ "ConstruirMapa", &UConstructorMapa::execConstruirMapa },
		{ "Inicializar", &UConstructorMapa::execInicializar },
		{ "LimpiarMapa", &UConstructorMapa::execLimpiarMapa },
		{ "LlenarConBloquesDestructibles", &UConstructorMapa::execLlenarConBloquesDestructibles },
		{ "ObtenerTileEn", &UConstructorMapa::execObtenerTileEn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConstructorMapa);
UClass* Z_Construct_UClass_UConstructorMapa_NoRegister()
{
	return UConstructorMapa::StaticClass();
}
struct Z_Construct_UClass_UConstructorMapa_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ConstructorMapa.h" },
		{ "ModuleRelativePath", "ConstructorMapa.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatosMapaActual_MetaData[] = {
		{ "ModuleRelativePath", "ConstructorMapa.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridTiles_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array unidimensional para tiles\n" },
#endif
		{ "ModuleRelativePath", "ConstructorMapa.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array unidimensional para tiles" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MundoActual_MetaData[] = {
		{ "ModuleRelativePath", "ConstructorMapa.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DatosMapaActual;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridTiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GridTiles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MundoActual;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UConstructorMapa_ColocarBordesIndestructibles, "ColocarBordesIndestructibles" }, // 4042006632
		{ &Z_Construct_UFunction_UConstructorMapa_ColocarPatronColumnas, "ColocarPatronColumnas" }, // 1190188299
		{ &Z_Construct_UFunction_UConstructorMapa_ColocarSalidaNivel, "ColocarSalidaNivel" }, // 2615869630
		{ &Z_Construct_UFunction_UConstructorMapa_ColocarSpawnJugador, "ColocarSpawnJugador" }, // 403807756
		{ &Z_Construct_UFunction_UConstructorMapa_ColocarSpawnsEnemigos, "ColocarSpawnsEnemigos" }, // 3830266785
		{ &Z_Construct_UFunction_UConstructorMapa_Construir, "Construir" }, // 4201779765
		{ &Z_Construct_UFunction_UConstructorMapa_ConstruirMapa, "ConstruirMapa" }, // 2150806671
		{ &Z_Construct_UFunction_UConstructorMapa_Inicializar, "Inicializar" }, // 1115663891
		{ &Z_Construct_UFunction_UConstructorMapa_LimpiarMapa, "LimpiarMapa" }, // 2125018586
		{ &Z_Construct_UFunction_UConstructorMapa_LlenarConBloquesDestructibles, "LlenarConBloquesDestructibles" }, // 2246772018
		{ &Z_Construct_UFunction_UConstructorMapa_ObtenerTileEn, "ObtenerTileEn" }, // 3278399810
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConstructorMapa>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConstructorMapa_Statics::NewProp_DatosMapaActual = { "DatosMapaActual", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstructorMapa, DatosMapaActual), Z_Construct_UScriptStruct_FDatosMapa, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatosMapaActual_MetaData), NewProp_DatosMapaActual_MetaData) }; // 2736697811
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConstructorMapa_Statics::NewProp_GridTiles_Inner = { "GridTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConstructorMapa_Statics::NewProp_GridTiles = { "GridTiles", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstructorMapa, GridTiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridTiles_MetaData), NewProp_GridTiles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConstructorMapa_Statics::NewProp_MundoActual = { "MundoActual", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstructorMapa, MundoActual), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MundoActual_MetaData), NewProp_MundoActual_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConstructorMapa_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructorMapa_Statics::NewProp_DatosMapaActual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructorMapa_Statics::NewProp_GridTiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructorMapa_Statics::NewProp_GridTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructorMapa_Statics::NewProp_MundoActual,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConstructorMapa_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UConstructorMapa_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalBomberMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConstructorMapa_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConstructorMapa_Statics::ClassParams = {
	&UConstructorMapa::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UConstructorMapa_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UConstructorMapa_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConstructorMapa_Statics::Class_MetaDataParams), Z_Construct_UClass_UConstructorMapa_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConstructorMapa()
{
	if (!Z_Registration_Info_UClass_UConstructorMapa.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConstructorMapa.OuterSingleton, Z_Construct_UClass_UConstructorMapa_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConstructorMapa.OuterSingleton;
}
template<> FINALBOMBERMAN_API UClass* StaticClass<UConstructorMapa>()
{
	return UConstructorMapa::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConstructorMapa);
UConstructorMapa::~UConstructorMapa() {}
// End Class UConstructorMapa

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_ConstructorMapa_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDatosMapa::StaticStruct, Z_Construct_UScriptStruct_FDatosMapa_Statics::NewStructOps, TEXT("DatosMapa"), &Z_Registration_Info_UScriptStruct_DatosMapa, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatosMapa), 2736697811U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UConstructorMapa, UConstructorMapa::StaticClass, TEXT("UConstructorMapa"), &Z_Registration_Info_UClass_UConstructorMapa, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConstructorMapa), 807577239U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_ConstructorMapa_h_2594636166(TEXT("/Script/FinalBomberMan"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_ConstructorMapa_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_ConstructorMapa_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_ConstructorMapa_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_ConstructorMapa_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
