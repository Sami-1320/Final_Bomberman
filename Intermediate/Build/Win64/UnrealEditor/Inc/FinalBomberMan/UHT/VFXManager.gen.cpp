// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalBomberMan/VFXManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVFXManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UIGameObserver_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UVFXManager();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UVFXManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalBomberMan();
// End Cross Module References

// Begin Class UVFXManager Function CrearEfectoDano
struct Z_Construct_UFunction_UVFXManager_CrearEfectoDano_Statics
{
	struct VFXManager_eventCrearEfectoDano_Parms
	{
		FVector2D Posicion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "VFXManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posicion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVFXManager_CrearEfectoDano_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VFXManager_eventCrearEfectoDano_Parms, Posicion), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVFXManager_CrearEfectoDano_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVFXManager_CrearEfectoDano_Statics::NewProp_Posicion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVFXManager_CrearEfectoDano_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVFXManager_CrearEfectoDano_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVFXManager, nullptr, "CrearEfectoDano", nullptr, nullptr, Z_Construct_UFunction_UVFXManager_CrearEfectoDano_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVFXManager_CrearEfectoDano_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVFXManager_CrearEfectoDano_Statics::VFXManager_eventCrearEfectoDano_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVFXManager_CrearEfectoDano_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVFXManager_CrearEfectoDano_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVFXManager_CrearEfectoDano_Statics::VFXManager_eventCrearEfectoDano_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVFXManager_CrearEfectoDano()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVFXManager_CrearEfectoDano_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVFXManager::execCrearEfectoDano)
{
	P_GET_STRUCT(FVector2D,Z_Param_Posicion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CrearEfectoDano(Z_Param_Posicion);
	P_NATIVE_END;
}
// End Class UVFXManager Function CrearEfectoDano

// Begin Class UVFXManager Function CrearEfectoDestruccion
struct Z_Construct_UFunction_UVFXManager_CrearEfectoDestruccion_Statics
{
	struct VFXManager_eventCrearEfectoDestruccion_Parms
	{
		FVector2D Posicion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "VFXManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posicion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVFXManager_CrearEfectoDestruccion_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VFXManager_eventCrearEfectoDestruccion_Parms, Posicion), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVFXManager_CrearEfectoDestruccion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVFXManager_CrearEfectoDestruccion_Statics::NewProp_Posicion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVFXManager_CrearEfectoDestruccion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVFXManager_CrearEfectoDestruccion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVFXManager, nullptr, "CrearEfectoDestruccion", nullptr, nullptr, Z_Construct_UFunction_UVFXManager_CrearEfectoDestruccion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVFXManager_CrearEfectoDestruccion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVFXManager_CrearEfectoDestruccion_Statics::VFXManager_eventCrearEfectoDestruccion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVFXManager_CrearEfectoDestruccion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVFXManager_CrearEfectoDestruccion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVFXManager_CrearEfectoDestruccion_Statics::VFXManager_eventCrearEfectoDestruccion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVFXManager_CrearEfectoDestruccion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVFXManager_CrearEfectoDestruccion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVFXManager::execCrearEfectoDestruccion)
{
	P_GET_STRUCT(FVector2D,Z_Param_Posicion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CrearEfectoDestruccion(Z_Param_Posicion);
	P_NATIVE_END;
}
// End Class UVFXManager Function CrearEfectoDestruccion

// Begin Class UVFXManager Function CrearEfectoExplosion
struct Z_Construct_UFunction_UVFXManager_CrearEfectoExplosion_Statics
{
	struct VFXManager_eventCrearEfectoExplosion_Parms
	{
		FVector2D Posicion;
		int32 Radio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// VFX methods\n" },
#endif
		{ "ModuleRelativePath", "VFXManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VFX methods" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posicion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Radio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVFXManager_CrearEfectoExplosion_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VFXManager_eventCrearEfectoExplosion_Parms, Posicion), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVFXManager_CrearEfectoExplosion_Statics::NewProp_Radio = { "Radio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VFXManager_eventCrearEfectoExplosion_Parms, Radio), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVFXManager_CrearEfectoExplosion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVFXManager_CrearEfectoExplosion_Statics::NewProp_Posicion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVFXManager_CrearEfectoExplosion_Statics::NewProp_Radio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVFXManager_CrearEfectoExplosion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVFXManager_CrearEfectoExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVFXManager, nullptr, "CrearEfectoExplosion", nullptr, nullptr, Z_Construct_UFunction_UVFXManager_CrearEfectoExplosion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVFXManager_CrearEfectoExplosion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVFXManager_CrearEfectoExplosion_Statics::VFXManager_eventCrearEfectoExplosion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVFXManager_CrearEfectoExplosion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVFXManager_CrearEfectoExplosion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVFXManager_CrearEfectoExplosion_Statics::VFXManager_eventCrearEfectoExplosion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVFXManager_CrearEfectoExplosion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVFXManager_CrearEfectoExplosion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVFXManager::execCrearEfectoExplosion)
{
	P_GET_STRUCT(FVector2D,Z_Param_Posicion);
	P_GET_PROPERTY(FIntProperty,Z_Param_Radio);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CrearEfectoExplosion(Z_Param_Posicion,Z_Param_Radio);
	P_NATIVE_END;
}
// End Class UVFXManager Function CrearEfectoExplosion

// Begin Class UVFXManager Function CrearEfectoMuerte
struct Z_Construct_UFunction_UVFXManager_CrearEfectoMuerte_Statics
{
	struct VFXManager_eventCrearEfectoMuerte_Parms
	{
		FVector2D Posicion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "VFXManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posicion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVFXManager_CrearEfectoMuerte_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VFXManager_eventCrearEfectoMuerte_Parms, Posicion), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVFXManager_CrearEfectoMuerte_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVFXManager_CrearEfectoMuerte_Statics::NewProp_Posicion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVFXManager_CrearEfectoMuerte_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVFXManager_CrearEfectoMuerte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVFXManager, nullptr, "CrearEfectoMuerte", nullptr, nullptr, Z_Construct_UFunction_UVFXManager_CrearEfectoMuerte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVFXManager_CrearEfectoMuerte_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVFXManager_CrearEfectoMuerte_Statics::VFXManager_eventCrearEfectoMuerte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVFXManager_CrearEfectoMuerte_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVFXManager_CrearEfectoMuerte_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVFXManager_CrearEfectoMuerte_Statics::VFXManager_eventCrearEfectoMuerte_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVFXManager_CrearEfectoMuerte()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVFXManager_CrearEfectoMuerte_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVFXManager::execCrearEfectoMuerte)
{
	P_GET_STRUCT(FVector2D,Z_Param_Posicion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CrearEfectoMuerte(Z_Param_Posicion);
	P_NATIVE_END;
}
// End Class UVFXManager Function CrearEfectoMuerte

// Begin Class UVFXManager Function CrearEfectoPowerUp
struct Z_Construct_UFunction_UVFXManager_CrearEfectoPowerUp_Statics
{
	struct VFXManager_eventCrearEfectoPowerUp_Parms
	{
		FVector2D Posicion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "VFXManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posicion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVFXManager_CrearEfectoPowerUp_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VFXManager_eventCrearEfectoPowerUp_Parms, Posicion), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVFXManager_CrearEfectoPowerUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVFXManager_CrearEfectoPowerUp_Statics::NewProp_Posicion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVFXManager_CrearEfectoPowerUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVFXManager_CrearEfectoPowerUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVFXManager, nullptr, "CrearEfectoPowerUp", nullptr, nullptr, Z_Construct_UFunction_UVFXManager_CrearEfectoPowerUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVFXManager_CrearEfectoPowerUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVFXManager_CrearEfectoPowerUp_Statics::VFXManager_eventCrearEfectoPowerUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVFXManager_CrearEfectoPowerUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVFXManager_CrearEfectoPowerUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVFXManager_CrearEfectoPowerUp_Statics::VFXManager_eventCrearEfectoPowerUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVFXManager_CrearEfectoPowerUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVFXManager_CrearEfectoPowerUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVFXManager::execCrearEfectoPowerUp)
{
	P_GET_STRUCT(FVector2D,Z_Param_Posicion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CrearEfectoPowerUp(Z_Param_Posicion);
	P_NATIVE_END;
}
// End Class UVFXManager Function CrearEfectoPowerUp

// Begin Class UVFXManager Function CrearEfectoVictoria
struct Z_Construct_UFunction_UVFXManager_CrearEfectoVictoria_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "VFXManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVFXManager_CrearEfectoVictoria_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVFXManager, nullptr, "CrearEfectoVictoria", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVFXManager_CrearEfectoVictoria_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVFXManager_CrearEfectoVictoria_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVFXManager_CrearEfectoVictoria()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVFXManager_CrearEfectoVictoria_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVFXManager::execCrearEfectoVictoria)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CrearEfectoVictoria();
	P_NATIVE_END;
}
// End Class UVFXManager Function CrearEfectoVictoria

// Begin Class UVFXManager
void UVFXManager::StaticRegisterNativesUVFXManager()
{
	UClass* Class = UVFXManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CrearEfectoDano", &UVFXManager::execCrearEfectoDano },
		{ "CrearEfectoDestruccion", &UVFXManager::execCrearEfectoDestruccion },
		{ "CrearEfectoExplosion", &UVFXManager::execCrearEfectoExplosion },
		{ "CrearEfectoMuerte", &UVFXManager::execCrearEfectoMuerte },
		{ "CrearEfectoPowerUp", &UVFXManager::execCrearEfectoPowerUp },
		{ "CrearEfectoVictoria", &UVFXManager::execCrearEfectoVictoria },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVFXManager);
UClass* Z_Construct_UClass_UVFXManager_NoRegister()
{
	return UVFXManager::StaticClass();
}
struct Z_Construct_UClass_UVFXManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VFXManager.h" },
		{ "ModuleRelativePath", "VFXManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MundoActual_MetaData[] = {
		{ "ModuleRelativePath", "VFXManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MundoActual;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVFXManager_CrearEfectoDano, "CrearEfectoDano" }, // 1820778462
		{ &Z_Construct_UFunction_UVFXManager_CrearEfectoDestruccion, "CrearEfectoDestruccion" }, // 1722905033
		{ &Z_Construct_UFunction_UVFXManager_CrearEfectoExplosion, "CrearEfectoExplosion" }, // 1556465515
		{ &Z_Construct_UFunction_UVFXManager_CrearEfectoMuerte, "CrearEfectoMuerte" }, // 2802668988
		{ &Z_Construct_UFunction_UVFXManager_CrearEfectoPowerUp, "CrearEfectoPowerUp" }, // 2373901545
		{ &Z_Construct_UFunction_UVFXManager_CrearEfectoVictoria, "CrearEfectoVictoria" }, // 963275726
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVFXManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVFXManager_Statics::NewProp_MundoActual = { "MundoActual", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVFXManager, MundoActual), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MundoActual_MetaData), NewProp_MundoActual_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVFXManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVFXManager_Statics::NewProp_MundoActual,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVFXManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVFXManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalBomberMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVFXManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UVFXManager_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIGameObserver_NoRegister, (int32)VTABLE_OFFSET(UVFXManager, IIGameObserver), false },  // 390567672
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVFXManager_Statics::ClassParams = {
	&UVFXManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVFXManager_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVFXManager_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVFXManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UVFXManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVFXManager()
{
	if (!Z_Registration_Info_UClass_UVFXManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVFXManager.OuterSingleton, Z_Construct_UClass_UVFXManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVFXManager.OuterSingleton;
}
template<> FINALBOMBERMAN_API UClass* StaticClass<UVFXManager>()
{
	return UVFXManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVFXManager);
UVFXManager::~UVFXManager() {}
// End Class UVFXManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_VFXManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVFXManager, UVFXManager::StaticClass, TEXT("UVFXManager"), &Z_Registration_Info_UClass_UVFXManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVFXManager), 3933672637U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_VFXManager_h_894469329(TEXT("/Script/FinalBomberMan"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_VFXManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_VFXManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
