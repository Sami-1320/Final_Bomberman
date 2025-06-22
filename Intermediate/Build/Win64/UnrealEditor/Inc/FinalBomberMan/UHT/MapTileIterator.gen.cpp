// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalBomberMan/MapTileIterator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapTileIterator() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_ATile_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UConstructorMapa_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UIIterator_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UMapTileIterator();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UMapTileIterator_NoRegister();
FINALBOMBERMAN_API UEnum* Z_Construct_UEnum_FinalBomberMan_ETipoTile();
UPackage* Z_Construct_UPackage__Script_FinalBomberMan();
// End Cross Module References

// Begin Class UMapTileIterator Function CrearIterator
struct Z_Construct_UFunction_UMapTileIterator_CrearIterator_Statics
{
	struct MapTileIterator_eventCrearIterator_Parms
	{
		UConstructorMapa* Constructor;
		UMapTileIterator* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Tile Iterator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Constructor con par\xc3\xa1metros\n" },
#endif
		{ "ModuleRelativePath", "MapTileIterator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Constructor con par\xc3\xa1metros" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Constructor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapTileIterator_CrearIterator_Statics::NewProp_Constructor = { "Constructor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapTileIterator_eventCrearIterator_Parms, Constructor), Z_Construct_UClass_UConstructorMapa_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapTileIterator_CrearIterator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapTileIterator_eventCrearIterator_Parms, ReturnValue), Z_Construct_UClass_UMapTileIterator_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapTileIterator_CrearIterator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTileIterator_CrearIterator_Statics::NewProp_Constructor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTileIterator_CrearIterator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileIterator_CrearIterator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapTileIterator_CrearIterator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapTileIterator, nullptr, "CrearIterator", nullptr, nullptr, Z_Construct_UFunction_UMapTileIterator_CrearIterator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileIterator_CrearIterator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapTileIterator_CrearIterator_Statics::MapTileIterator_eventCrearIterator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileIterator_CrearIterator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapTileIterator_CrearIterator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapTileIterator_CrearIterator_Statics::MapTileIterator_eventCrearIterator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapTileIterator_CrearIterator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapTileIterator_CrearIterator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapTileIterator::execCrearIterator)
{
	P_GET_OBJECT(UConstructorMapa,Z_Param_Constructor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMapTileIterator**)Z_Param__Result=UMapTileIterator::CrearIterator(Z_Param_Constructor);
	P_NATIVE_END;
}
// End Class UMapTileIterator Function CrearIterator

// Begin Class UMapTileIterator Function FirstConBloque
struct Z_Construct_UFunction_UMapTileIterator_FirstConBloque_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Tile Iterator" },
		{ "ModuleRelativePath", "MapTileIterator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapTileIterator_FirstConBloque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapTileIterator, nullptr, "FirstConBloque", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileIterator_FirstConBloque_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapTileIterator_FirstConBloque_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMapTileIterator_FirstConBloque()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapTileIterator_FirstConBloque_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapTileIterator::execFirstConBloque)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FirstConBloque();
	P_NATIVE_END;
}
// End Class UMapTileIterator Function FirstConBloque

// Begin Class UMapTileIterator Function FirstDestructible
struct Z_Construct_UFunction_UMapTileIterator_FirstDestructible_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Tile Iterator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Iteradores especializados\n" },
#endif
		{ "ModuleRelativePath", "MapTileIterator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Iteradores especializados" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapTileIterator_FirstDestructible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapTileIterator, nullptr, "FirstDestructible", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileIterator_FirstDestructible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapTileIterator_FirstDestructible_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMapTileIterator_FirstDestructible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapTileIterator_FirstDestructible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapTileIterator::execFirstDestructible)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FirstDestructible();
	P_NATIVE_END;
}
// End Class UMapTileIterator Function FirstDestructible

// Begin Class UMapTileIterator Function FirstEmpty
struct Z_Construct_UFunction_UMapTileIterator_FirstEmpty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Tile Iterator" },
		{ "ModuleRelativePath", "MapTileIterator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapTileIterator_FirstEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapTileIterator, nullptr, "FirstEmpty", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileIterator_FirstEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapTileIterator_FirstEmpty_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMapTileIterator_FirstEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapTileIterator_FirstEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapTileIterator::execFirstEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FirstEmpty();
	P_NATIVE_END;
}
// End Class UMapTileIterator Function FirstEmpty

// Begin Class UMapTileIterator Function NextConBloque
struct Z_Construct_UFunction_UMapTileIterator_NextConBloque_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Tile Iterator" },
		{ "ModuleRelativePath", "MapTileIterator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapTileIterator_NextConBloque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapTileIterator, nullptr, "NextConBloque", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileIterator_NextConBloque_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapTileIterator_NextConBloque_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMapTileIterator_NextConBloque()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapTileIterator_NextConBloque_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapTileIterator::execNextConBloque)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextConBloque();
	P_NATIVE_END;
}
// End Class UMapTileIterator Function NextConBloque

// Begin Class UMapTileIterator Function NextDestructible
struct Z_Construct_UFunction_UMapTileIterator_NextDestructible_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Tile Iterator" },
		{ "ModuleRelativePath", "MapTileIterator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapTileIterator_NextDestructible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapTileIterator, nullptr, "NextDestructible", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileIterator_NextDestructible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapTileIterator_NextDestructible_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMapTileIterator_NextDestructible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapTileIterator_NextDestructible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapTileIterator::execNextDestructible)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextDestructible();
	P_NATIVE_END;
}
// End Class UMapTileIterator Function NextDestructible

// Begin Class UMapTileIterator Function NextEmpty
struct Z_Construct_UFunction_UMapTileIterator_NextEmpty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Tile Iterator" },
		{ "ModuleRelativePath", "MapTileIterator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapTileIterator_NextEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapTileIterator, nullptr, "NextEmpty", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileIterator_NextEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapTileIterator_NextEmpty_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMapTileIterator_NextEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapTileIterator_NextEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapTileIterator::execNextEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextEmpty();
	P_NATIVE_END;
}
// End Class UMapTileIterator Function NextEmpty

// Begin Class UMapTileIterator Function ObtenerIndiceActual
struct Z_Construct_UFunction_UMapTileIterator_ObtenerIndiceActual_Statics
{
	struct MapTileIterator_eventObtenerIndiceActual_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Tile Iterator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Informaci\xc3\xb3n del iterador\n" },
#endif
		{ "ModuleRelativePath", "MapTileIterator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Informaci\xc3\xb3n del iterador" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapTileIterator_ObtenerIndiceActual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapTileIterator_eventObtenerIndiceActual_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapTileIterator_ObtenerIndiceActual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTileIterator_ObtenerIndiceActual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileIterator_ObtenerIndiceActual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapTileIterator_ObtenerIndiceActual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapTileIterator, nullptr, "ObtenerIndiceActual", nullptr, nullptr, Z_Construct_UFunction_UMapTileIterator_ObtenerIndiceActual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileIterator_ObtenerIndiceActual_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapTileIterator_ObtenerIndiceActual_Statics::MapTileIterator_eventObtenerIndiceActual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileIterator_ObtenerIndiceActual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapTileIterator_ObtenerIndiceActual_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapTileIterator_ObtenerIndiceActual_Statics::MapTileIterator_eventObtenerIndiceActual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapTileIterator_ObtenerIndiceActual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapTileIterator_ObtenerIndiceActual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapTileIterator::execObtenerIndiceActual)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ObtenerIndiceActual();
	P_NATIVE_END;
}
// End Class UMapTileIterator Function ObtenerIndiceActual

// Begin Class UMapTileIterator Function ObtenerPosicionActual
struct Z_Construct_UFunction_UMapTileIterator_ObtenerPosicionActual_Statics
{
	struct MapTileIterator_eventObtenerPosicionActual_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Tile Iterator" },
		{ "ModuleRelativePath", "MapTileIterator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapTileIterator_ObtenerPosicionActual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapTileIterator_eventObtenerPosicionActual_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapTileIterator_ObtenerPosicionActual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTileIterator_ObtenerPosicionActual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileIterator_ObtenerPosicionActual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapTileIterator_ObtenerPosicionActual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapTileIterator, nullptr, "ObtenerPosicionActual", nullptr, nullptr, Z_Construct_UFunction_UMapTileIterator_ObtenerPosicionActual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileIterator_ObtenerPosicionActual_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapTileIterator_ObtenerPosicionActual_Statics::MapTileIterator_eventObtenerPosicionActual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileIterator_ObtenerPosicionActual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapTileIterator_ObtenerPosicionActual_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapTileIterator_ObtenerPosicionActual_Statics::MapTileIterator_eventObtenerPosicionActual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapTileIterator_ObtenerPosicionActual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapTileIterator_ObtenerPosicionActual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapTileIterator::execObtenerPosicionActual)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->ObtenerPosicionActual();
	P_NATIVE_END;
}
// End Class UMapTileIterator Function ObtenerPosicionActual

// Begin Class UMapTileIterator Function ObtenerTileActual
struct Z_Construct_UFunction_UMapTileIterator_ObtenerTileActual_Statics
{
	struct MapTileIterator_eventObtenerTileActual_Parms
	{
		ATile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Tile Iterator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// M\xc3\xa9todos espec\xc3\xad""ficos para tiles\n" },
#endif
		{ "ModuleRelativePath", "MapTileIterator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "M\xc3\xa9todos espec\xc3\xad""ficos para tiles" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapTileIterator_ObtenerTileActual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapTileIterator_eventObtenerTileActual_Parms, ReturnValue), Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapTileIterator_ObtenerTileActual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTileIterator_ObtenerTileActual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileIterator_ObtenerTileActual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapTileIterator_ObtenerTileActual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapTileIterator, nullptr, "ObtenerTileActual", nullptr, nullptr, Z_Construct_UFunction_UMapTileIterator_ObtenerTileActual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileIterator_ObtenerTileActual_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapTileIterator_ObtenerTileActual_Statics::MapTileIterator_eventObtenerTileActual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileIterator_ObtenerTileActual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapTileIterator_ObtenerTileActual_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapTileIterator_ObtenerTileActual_Statics::MapTileIterator_eventObtenerTileActual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapTileIterator_ObtenerTileActual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapTileIterator_ObtenerTileActual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapTileIterator::execObtenerTileActual)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ATile**)Z_Param__Result=P_THIS->ObtenerTileActual();
	P_NATIVE_END;
}
// End Class UMapTileIterator Function ObtenerTileActual

// Begin Class UMapTileIterator Function ObtenerTipoTileActual
struct Z_Construct_UFunction_UMapTileIterator_ObtenerTipoTileActual_Statics
{
	struct MapTileIterator_eventObtenerTipoTileActual_Parms
	{
		ETipoTile ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Tile Iterator" },
		{ "ModuleRelativePath", "MapTileIterator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMapTileIterator_ObtenerTipoTileActual_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMapTileIterator_ObtenerTipoTileActual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapTileIterator_eventObtenerTipoTileActual_Parms, ReturnValue), Z_Construct_UEnum_FinalBomberMan_ETipoTile, METADATA_PARAMS(0, nullptr) }; // 108387480
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapTileIterator_ObtenerTipoTileActual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTileIterator_ObtenerTipoTileActual_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTileIterator_ObtenerTipoTileActual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileIterator_ObtenerTipoTileActual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapTileIterator_ObtenerTipoTileActual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapTileIterator, nullptr, "ObtenerTipoTileActual", nullptr, nullptr, Z_Construct_UFunction_UMapTileIterator_ObtenerTipoTileActual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileIterator_ObtenerTipoTileActual_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapTileIterator_ObtenerTipoTileActual_Statics::MapTileIterator_eventObtenerTipoTileActual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileIterator_ObtenerTipoTileActual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapTileIterator_ObtenerTipoTileActual_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapTileIterator_ObtenerTipoTileActual_Statics::MapTileIterator_eventObtenerTipoTileActual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapTileIterator_ObtenerTipoTileActual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapTileIterator_ObtenerTipoTileActual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapTileIterator::execObtenerTipoTileActual)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ETipoTile*)Z_Param__Result=P_THIS->ObtenerTipoTileActual();
	P_NATIVE_END;
}
// End Class UMapTileIterator Function ObtenerTipoTileActual

// Begin Class UMapTileIterator Function ObtenerTotalTiles
struct Z_Construct_UFunction_UMapTileIterator_ObtenerTotalTiles_Statics
{
	struct MapTileIterator_eventObtenerTotalTiles_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Tile Iterator" },
		{ "ModuleRelativePath", "MapTileIterator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapTileIterator_ObtenerTotalTiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapTileIterator_eventObtenerTotalTiles_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapTileIterator_ObtenerTotalTiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTileIterator_ObtenerTotalTiles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileIterator_ObtenerTotalTiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapTileIterator_ObtenerTotalTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapTileIterator, nullptr, "ObtenerTotalTiles", nullptr, nullptr, Z_Construct_UFunction_UMapTileIterator_ObtenerTotalTiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileIterator_ObtenerTotalTiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapTileIterator_ObtenerTotalTiles_Statics::MapTileIterator_eventObtenerTotalTiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileIterator_ObtenerTotalTiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapTileIterator_ObtenerTotalTiles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapTileIterator_ObtenerTotalTiles_Statics::MapTileIterator_eventObtenerTotalTiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapTileIterator_ObtenerTotalTiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapTileIterator_ObtenerTotalTiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapTileIterator::execObtenerTotalTiles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ObtenerTotalTiles();
	P_NATIVE_END;
}
// End Class UMapTileIterator Function ObtenerTotalTiles

// Begin Class UMapTileIterator Function Reiniciar
struct Z_Construct_UFunction_UMapTileIterator_Reiniciar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Tile Iterator" },
		{ "ModuleRelativePath", "MapTileIterator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapTileIterator_Reiniciar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapTileIterator, nullptr, "Reiniciar", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileIterator_Reiniciar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapTileIterator_Reiniciar_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMapTileIterator_Reiniciar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapTileIterator_Reiniciar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapTileIterator::execReiniciar)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reiniciar();
	P_NATIVE_END;
}
// End Class UMapTileIterator Function Reiniciar

// Begin Class UMapTileIterator
void UMapTileIterator::StaticRegisterNativesUMapTileIterator()
{
	UClass* Class = UMapTileIterator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CrearIterator", &UMapTileIterator::execCrearIterator },
		{ "FirstConBloque", &UMapTileIterator::execFirstConBloque },
		{ "FirstDestructible", &UMapTileIterator::execFirstDestructible },
		{ "FirstEmpty", &UMapTileIterator::execFirstEmpty },
		{ "NextConBloque", &UMapTileIterator::execNextConBloque },
		{ "NextDestructible", &UMapTileIterator::execNextDestructible },
		{ "NextEmpty", &UMapTileIterator::execNextEmpty },
		{ "ObtenerIndiceActual", &UMapTileIterator::execObtenerIndiceActual },
		{ "ObtenerPosicionActual", &UMapTileIterator::execObtenerPosicionActual },
		{ "ObtenerTileActual", &UMapTileIterator::execObtenerTileActual },
		{ "ObtenerTipoTileActual", &UMapTileIterator::execObtenerTipoTileActual },
		{ "ObtenerTotalTiles", &UMapTileIterator::execObtenerTotalTiles },
		{ "Reiniciar", &UMapTileIterator::execReiniciar },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapTileIterator);
UClass* Z_Construct_UClass_UMapTileIterator_NoRegister()
{
	return UMapTileIterator::StaticClass();
}
struct Z_Construct_UClass_UMapTileIterator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MapTileIterator.h" },
		{ "ModuleRelativePath", "MapTileIterator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstructorMapa_MetaData[] = {
		{ "ModuleRelativePath", "MapTileIterator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstructorMapa;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapTileIterator_CrearIterator, "CrearIterator" }, // 1614598716
		{ &Z_Construct_UFunction_UMapTileIterator_FirstConBloque, "FirstConBloque" }, // 3749374684
		{ &Z_Construct_UFunction_UMapTileIterator_FirstDestructible, "FirstDestructible" }, // 2357320101
		{ &Z_Construct_UFunction_UMapTileIterator_FirstEmpty, "FirstEmpty" }, // 295357441
		{ &Z_Construct_UFunction_UMapTileIterator_NextConBloque, "NextConBloque" }, // 3350960802
		{ &Z_Construct_UFunction_UMapTileIterator_NextDestructible, "NextDestructible" }, // 1467119964
		{ &Z_Construct_UFunction_UMapTileIterator_NextEmpty, "NextEmpty" }, // 496981534
		{ &Z_Construct_UFunction_UMapTileIterator_ObtenerIndiceActual, "ObtenerIndiceActual" }, // 2609990922
		{ &Z_Construct_UFunction_UMapTileIterator_ObtenerPosicionActual, "ObtenerPosicionActual" }, // 825501504
		{ &Z_Construct_UFunction_UMapTileIterator_ObtenerTileActual, "ObtenerTileActual" }, // 144475927
		{ &Z_Construct_UFunction_UMapTileIterator_ObtenerTipoTileActual, "ObtenerTipoTileActual" }, // 508884628
		{ &Z_Construct_UFunction_UMapTileIterator_ObtenerTotalTiles, "ObtenerTotalTiles" }, // 151668867
		{ &Z_Construct_UFunction_UMapTileIterator_Reiniciar, "Reiniciar" }, // 815717103
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapTileIterator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapTileIterator_Statics::NewProp_ConstructorMapa = { "ConstructorMapa", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapTileIterator, ConstructorMapa), Z_Construct_UClass_UConstructorMapa_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstructorMapa_MetaData), NewProp_ConstructorMapa_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapTileIterator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTileIterator_Statics::NewProp_ConstructorMapa,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapTileIterator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMapTileIterator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalBomberMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapTileIterator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMapTileIterator_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIIterator_NoRegister, (int32)VTABLE_OFFSET(UMapTileIterator, IIIterator), false },  // 4139712278
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapTileIterator_Statics::ClassParams = {
	&UMapTileIterator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMapTileIterator_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMapTileIterator_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapTileIterator_Statics::Class_MetaDataParams), Z_Construct_UClass_UMapTileIterator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMapTileIterator()
{
	if (!Z_Registration_Info_UClass_UMapTileIterator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapTileIterator.OuterSingleton, Z_Construct_UClass_UMapTileIterator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMapTileIterator.OuterSingleton;
}
template<> FINALBOMBERMAN_API UClass* StaticClass<UMapTileIterator>()
{
	return UMapTileIterator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMapTileIterator);
UMapTileIterator::~UMapTileIterator() {}
// End Class UMapTileIterator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_MapTileIterator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMapTileIterator, UMapTileIterator::StaticClass, TEXT("UMapTileIterator"), &Z_Registration_Info_UClass_UMapTileIterator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapTileIterator), 3050658769U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_MapTileIterator_h_3000369946(TEXT("/Script/FinalBomberMan"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_MapTileIterator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_MapTileIterator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
