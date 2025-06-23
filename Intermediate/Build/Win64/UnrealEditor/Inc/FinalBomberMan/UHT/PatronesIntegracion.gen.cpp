// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalBomberMan/PatronesIntegracion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatronesIntegracion() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_ASeccionMapa_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UConstructorMapa_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UGameplayFacade_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UMapTileIterator_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UPatronesIntegracion();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UPatronesIntegracion_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalBomberMan();
// End Cross Module References

// Begin Class UPatronesIntegracion Function EjemploBuilderConFacade
struct Z_Construct_UFunction_UPatronesIntegracion_EjemploBuilderConFacade_Statics
{
	struct PatronesIntegracion_eventEjemploBuilderConFacade_Parms
	{
		UWorld* Mundo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Patrones Integraci\xc3\xb3n" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ejemplo usando BUILDER + FACADE\n" },
#endif
		{ "ModuleRelativePath", "PatronesIntegracion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ejemplo usando BUILDER + FACADE" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mundo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPatronesIntegracion_EjemploBuilderConFacade_Statics::NewProp_Mundo = { "Mundo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PatronesIntegracion_eventEjemploBuilderConFacade_Parms, Mundo), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPatronesIntegracion_EjemploBuilderConFacade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPatronesIntegracion_EjemploBuilderConFacade_Statics::NewProp_Mundo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPatronesIntegracion_EjemploBuilderConFacade_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPatronesIntegracion_EjemploBuilderConFacade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPatronesIntegracion, nullptr, "EjemploBuilderConFacade", nullptr, nullptr, Z_Construct_UFunction_UPatronesIntegracion_EjemploBuilderConFacade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPatronesIntegracion_EjemploBuilderConFacade_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPatronesIntegracion_EjemploBuilderConFacade_Statics::PatronesIntegracion_eventEjemploBuilderConFacade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPatronesIntegracion_EjemploBuilderConFacade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPatronesIntegracion_EjemploBuilderConFacade_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPatronesIntegracion_EjemploBuilderConFacade_Statics::PatronesIntegracion_eventEjemploBuilderConFacade_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPatronesIntegracion_EjemploBuilderConFacade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPatronesIntegracion_EjemploBuilderConFacade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPatronesIntegracion::execEjemploBuilderConFacade)
{
	P_GET_OBJECT(UWorld,Z_Param_Mundo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EjemploBuilderConFacade(Z_Param_Mundo);
	P_NATIVE_END;
}
// End Class UPatronesIntegracion Function EjemploBuilderConFacade

// Begin Class UPatronesIntegracion Function EjemploBusquedaTiles
struct Z_Construct_UFunction_UPatronesIntegracion_EjemploBusquedaTiles_Statics
{
	struct PatronesIntegracion_eventEjemploBusquedaTiles_Parms
	{
		UWorld* Mundo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Patrones Integraci\xc3\xb3n" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ejemplo de b\xc3\xbasqueda de tiles usando ITERATOR\n" },
#endif
		{ "ModuleRelativePath", "PatronesIntegracion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ejemplo de b\xc3\xbasqueda de tiles usando ITERATOR" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mundo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPatronesIntegracion_EjemploBusquedaTiles_Statics::NewProp_Mundo = { "Mundo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PatronesIntegracion_eventEjemploBusquedaTiles_Parms, Mundo), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPatronesIntegracion_EjemploBusquedaTiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPatronesIntegracion_EjemploBusquedaTiles_Statics::NewProp_Mundo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPatronesIntegracion_EjemploBusquedaTiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPatronesIntegracion_EjemploBusquedaTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPatronesIntegracion, nullptr, "EjemploBusquedaTiles", nullptr, nullptr, Z_Construct_UFunction_UPatronesIntegracion_EjemploBusquedaTiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPatronesIntegracion_EjemploBusquedaTiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPatronesIntegracion_EjemploBusquedaTiles_Statics::PatronesIntegracion_eventEjemploBusquedaTiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPatronesIntegracion_EjemploBusquedaTiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPatronesIntegracion_EjemploBusquedaTiles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPatronesIntegracion_EjemploBusquedaTiles_Statics::PatronesIntegracion_eventEjemploBusquedaTiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPatronesIntegracion_EjemploBusquedaTiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPatronesIntegracion_EjemploBusquedaTiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPatronesIntegracion::execEjemploBusquedaTiles)
{
	P_GET_OBJECT(UWorld,Z_Param_Mundo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EjemploBusquedaTiles(Z_Param_Mundo);
	P_NATIVE_END;
}
// End Class UPatronesIntegracion Function EjemploBusquedaTiles

// Begin Class UPatronesIntegracion Function EjemploCreacionEnemigos
struct Z_Construct_UFunction_UPatronesIntegracion_EjemploCreacionEnemigos_Statics
{
	struct PatronesIntegracion_eventEjemploCreacionEnemigos_Parms
	{
		UWorld* Mundo;
		int32 Cantidad;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Patrones Integraci\xc3\xb3n" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ejemplo de creaci\xc3\xb3n de enemigos usando PROTOTYPE\n" },
#endif
		{ "ModuleRelativePath", "PatronesIntegracion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ejemplo de creaci\xc3\xb3n de enemigos usando PROTOTYPE" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mundo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Cantidad;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPatronesIntegracion_EjemploCreacionEnemigos_Statics::NewProp_Mundo = { "Mundo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PatronesIntegracion_eventEjemploCreacionEnemigos_Parms, Mundo), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPatronesIntegracion_EjemploCreacionEnemigos_Statics::NewProp_Cantidad = { "Cantidad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PatronesIntegracion_eventEjemploCreacionEnemigos_Parms, Cantidad), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPatronesIntegracion_EjemploCreacionEnemigos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPatronesIntegracion_EjemploCreacionEnemigos_Statics::NewProp_Mundo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPatronesIntegracion_EjemploCreacionEnemigos_Statics::NewProp_Cantidad,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPatronesIntegracion_EjemploCreacionEnemigos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPatronesIntegracion_EjemploCreacionEnemigos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPatronesIntegracion, nullptr, "EjemploCreacionEnemigos", nullptr, nullptr, Z_Construct_UFunction_UPatronesIntegracion_EjemploCreacionEnemigos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPatronesIntegracion_EjemploCreacionEnemigos_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPatronesIntegracion_EjemploCreacionEnemigos_Statics::PatronesIntegracion_eventEjemploCreacionEnemigos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPatronesIntegracion_EjemploCreacionEnemigos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPatronesIntegracion_EjemploCreacionEnemigos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPatronesIntegracion_EjemploCreacionEnemigos_Statics::PatronesIntegracion_eventEjemploCreacionEnemigos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPatronesIntegracion_EjemploCreacionEnemigos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPatronesIntegracion_EjemploCreacionEnemigos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPatronesIntegracion::execEjemploCreacionEnemigos)
{
	P_GET_OBJECT(UWorld,Z_Param_Mundo);
	P_GET_PROPERTY(FIntProperty,Z_Param_Cantidad);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EjemploCreacionEnemigos(Z_Param_Mundo,Z_Param_Cantidad);
	P_NATIVE_END;
}
// End Class UPatronesIntegracion Function EjemploCreacionEnemigos

// Begin Class UPatronesIntegracion Function EjemploExplosionEnCadena
struct Z_Construct_UFunction_UPatronesIntegracion_EjemploExplosionEnCadena_Statics
{
	struct PatronesIntegracion_eventEjemploExplosionEnCadena_Parms
	{
		UWorld* Mundo;
		FVector2D Posicion;
		int32 Radio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Patrones Integraci\xc3\xb3n" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ejemplo de explosi\xc3\xb3n en cadena usando COMPOSITE\n" },
#endif
		{ "ModuleRelativePath", "PatronesIntegracion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ejemplo de explosi\xc3\xb3n en cadena usando COMPOSITE" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mundo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posicion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Radio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPatronesIntegracion_EjemploExplosionEnCadena_Statics::NewProp_Mundo = { "Mundo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PatronesIntegracion_eventEjemploExplosionEnCadena_Parms, Mundo), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPatronesIntegracion_EjemploExplosionEnCadena_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PatronesIntegracion_eventEjemploExplosionEnCadena_Parms, Posicion), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPatronesIntegracion_EjemploExplosionEnCadena_Statics::NewProp_Radio = { "Radio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PatronesIntegracion_eventEjemploExplosionEnCadena_Parms, Radio), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPatronesIntegracion_EjemploExplosionEnCadena_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPatronesIntegracion_EjemploExplosionEnCadena_Statics::NewProp_Mundo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPatronesIntegracion_EjemploExplosionEnCadena_Statics::NewProp_Posicion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPatronesIntegracion_EjemploExplosionEnCadena_Statics::NewProp_Radio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPatronesIntegracion_EjemploExplosionEnCadena_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPatronesIntegracion_EjemploExplosionEnCadena_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPatronesIntegracion, nullptr, "EjemploExplosionEnCadena", nullptr, nullptr, Z_Construct_UFunction_UPatronesIntegracion_EjemploExplosionEnCadena_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPatronesIntegracion_EjemploExplosionEnCadena_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPatronesIntegracion_EjemploExplosionEnCadena_Statics::PatronesIntegracion_eventEjemploExplosionEnCadena_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPatronesIntegracion_EjemploExplosionEnCadena_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPatronesIntegracion_EjemploExplosionEnCadena_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPatronesIntegracion_EjemploExplosionEnCadena_Statics::PatronesIntegracion_eventEjemploExplosionEnCadena_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPatronesIntegracion_EjemploExplosionEnCadena()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPatronesIntegracion_EjemploExplosionEnCadena_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPatronesIntegracion::execEjemploExplosionEnCadena)
{
	P_GET_OBJECT(UWorld,Z_Param_Mundo);
	P_GET_STRUCT(FVector2D,Z_Param_Posicion);
	P_GET_PROPERTY(FIntProperty,Z_Param_Radio);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EjemploExplosionEnCadena(Z_Param_Mundo,Z_Param_Posicion,Z_Param_Radio);
	P_NATIVE_END;
}
// End Class UPatronesIntegracion Function EjemploExplosionEnCadena

// Begin Class UPatronesIntegracion Function EjemploIntegracionCompleta
struct Z_Construct_UFunction_UPatronesIntegracion_EjemploIntegracionCompleta_Statics
{
	struct PatronesIntegracion_eventEjemploIntegracionCompleta_Parms
	{
		UWorld* Mundo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Patrones Integraci\xc3\xb3n" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ejemplo de integraci\xc3\xb3n de todos los patrones\n" },
#endif
		{ "ModuleRelativePath", "PatronesIntegracion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ejemplo de integraci\xc3\xb3n de todos los patrones" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mundo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPatronesIntegracion_EjemploIntegracionCompleta_Statics::NewProp_Mundo = { "Mundo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PatronesIntegracion_eventEjemploIntegracionCompleta_Parms, Mundo), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPatronesIntegracion_EjemploIntegracionCompleta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPatronesIntegracion_EjemploIntegracionCompleta_Statics::NewProp_Mundo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPatronesIntegracion_EjemploIntegracionCompleta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPatronesIntegracion_EjemploIntegracionCompleta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPatronesIntegracion, nullptr, "EjemploIntegracionCompleta", nullptr, nullptr, Z_Construct_UFunction_UPatronesIntegracion_EjemploIntegracionCompleta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPatronesIntegracion_EjemploIntegracionCompleta_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPatronesIntegracion_EjemploIntegracionCompleta_Statics::PatronesIntegracion_eventEjemploIntegracionCompleta_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPatronesIntegracion_EjemploIntegracionCompleta_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPatronesIntegracion_EjemploIntegracionCompleta_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPatronesIntegracion_EjemploIntegracionCompleta_Statics::PatronesIntegracion_eventEjemploIntegracionCompleta_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPatronesIntegracion_EjemploIntegracionCompleta()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPatronesIntegracion_EjemploIntegracionCompleta_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPatronesIntegracion::execEjemploIntegracionCompleta)
{
	P_GET_OBJECT(UWorld,Z_Param_Mundo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EjemploIntegracionCompleta(Z_Param_Mundo);
	P_NATIVE_END;
}
// End Class UPatronesIntegracion Function EjemploIntegracionCompleta

// Begin Class UPatronesIntegracion Function EjemploIteratorConComposite
struct Z_Construct_UFunction_UPatronesIntegracion_EjemploIteratorConComposite_Statics
{
	struct PatronesIntegracion_eventEjemploIteratorConComposite_Parms
	{
		UWorld* Mundo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Patrones Integraci\xc3\xb3n" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ejemplo usando ITERATOR + COMPOSITE\n" },
#endif
		{ "ModuleRelativePath", "PatronesIntegracion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ejemplo usando ITERATOR + COMPOSITE" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mundo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPatronesIntegracion_EjemploIteratorConComposite_Statics::NewProp_Mundo = { "Mundo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PatronesIntegracion_eventEjemploIteratorConComposite_Parms, Mundo), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPatronesIntegracion_EjemploIteratorConComposite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPatronesIntegracion_EjemploIteratorConComposite_Statics::NewProp_Mundo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPatronesIntegracion_EjemploIteratorConComposite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPatronesIntegracion_EjemploIteratorConComposite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPatronesIntegracion, nullptr, "EjemploIteratorConComposite", nullptr, nullptr, Z_Construct_UFunction_UPatronesIntegracion_EjemploIteratorConComposite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPatronesIntegracion_EjemploIteratorConComposite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPatronesIntegracion_EjemploIteratorConComposite_Statics::PatronesIntegracion_eventEjemploIteratorConComposite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPatronesIntegracion_EjemploIteratorConComposite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPatronesIntegracion_EjemploIteratorConComposite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPatronesIntegracion_EjemploIteratorConComposite_Statics::PatronesIntegracion_eventEjemploIteratorConComposite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPatronesIntegracion_EjemploIteratorConComposite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPatronesIntegracion_EjemploIteratorConComposite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPatronesIntegracion::execEjemploIteratorConComposite)
{
	P_GET_OBJECT(UWorld,Z_Param_Mundo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EjemploIteratorConComposite(Z_Param_Mundo);
	P_NATIVE_END;
}
// End Class UPatronesIntegracion Function EjemploIteratorConComposite

// Begin Class UPatronesIntegracion Function EjemploObserverConPrototype
struct Z_Construct_UFunction_UPatronesIntegracion_EjemploObserverConPrototype_Statics
{
	struct PatronesIntegracion_eventEjemploObserverConPrototype_Parms
	{
		UWorld* Mundo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Patrones Integraci\xc3\xb3n" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ejemplo usando OBSERVER + PROTOTYPE\n" },
#endif
		{ "ModuleRelativePath", "PatronesIntegracion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ejemplo usando OBSERVER + PROTOTYPE" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mundo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPatronesIntegracion_EjemploObserverConPrototype_Statics::NewProp_Mundo = { "Mundo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PatronesIntegracion_eventEjemploObserverConPrototype_Parms, Mundo), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPatronesIntegracion_EjemploObserverConPrototype_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPatronesIntegracion_EjemploObserverConPrototype_Statics::NewProp_Mundo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPatronesIntegracion_EjemploObserverConPrototype_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPatronesIntegracion_EjemploObserverConPrototype_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPatronesIntegracion, nullptr, "EjemploObserverConPrototype", nullptr, nullptr, Z_Construct_UFunction_UPatronesIntegracion_EjemploObserverConPrototype_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPatronesIntegracion_EjemploObserverConPrototype_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPatronesIntegracion_EjemploObserverConPrototype_Statics::PatronesIntegracion_eventEjemploObserverConPrototype_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPatronesIntegracion_EjemploObserverConPrototype_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPatronesIntegracion_EjemploObserverConPrototype_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPatronesIntegracion_EjemploObserverConPrototype_Statics::PatronesIntegracion_eventEjemploObserverConPrototype_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPatronesIntegracion_EjemploObserverConPrototype()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPatronesIntegracion_EjemploObserverConPrototype_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPatronesIntegracion::execEjemploObserverConPrototype)
{
	P_GET_OBJECT(UWorld,Z_Param_Mundo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EjemploObserverConPrototype(Z_Param_Mundo);
	P_NATIVE_END;
}
// End Class UPatronesIntegracion Function EjemploObserverConPrototype

// Begin Class UPatronesIntegracion
void UPatronesIntegracion::StaticRegisterNativesUPatronesIntegracion()
{
	UClass* Class = UPatronesIntegracion::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EjemploBuilderConFacade", &UPatronesIntegracion::execEjemploBuilderConFacade },
		{ "EjemploBusquedaTiles", &UPatronesIntegracion::execEjemploBusquedaTiles },
		{ "EjemploCreacionEnemigos", &UPatronesIntegracion::execEjemploCreacionEnemigos },
		{ "EjemploExplosionEnCadena", &UPatronesIntegracion::execEjemploExplosionEnCadena },
		{ "EjemploIntegracionCompleta", &UPatronesIntegracion::execEjemploIntegracionCompleta },
		{ "EjemploIteratorConComposite", &UPatronesIntegracion::execEjemploIteratorConComposite },
		{ "EjemploObserverConPrototype", &UPatronesIntegracion::execEjemploObserverConPrototype },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatronesIntegracion);
UClass* Z_Construct_UClass_UPatronesIntegracion_NoRegister()
{
	return UPatronesIntegracion::StaticClass();
}
struct Z_Construct_UClass_UPatronesIntegracion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PatronesIntegracion.h" },
		{ "ModuleRelativePath", "PatronesIntegracion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayFacade_MetaData[] = {
		{ "ModuleRelativePath", "PatronesIntegracion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstructorMapa_MetaData[] = {
		{ "ModuleRelativePath", "PatronesIntegracion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileIterator_MetaData[] = {
		{ "ModuleRelativePath", "PatronesIntegracion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeccionPrincipal_MetaData[] = {
		{ "ModuleRelativePath", "PatronesIntegracion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameplayFacade;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstructorMapa;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileIterator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SeccionPrincipal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPatronesIntegracion_EjemploBuilderConFacade, "EjemploBuilderConFacade" }, // 2733578471
		{ &Z_Construct_UFunction_UPatronesIntegracion_EjemploBusquedaTiles, "EjemploBusquedaTiles" }, // 1972879029
		{ &Z_Construct_UFunction_UPatronesIntegracion_EjemploCreacionEnemigos, "EjemploCreacionEnemigos" }, // 3820705073
		{ &Z_Construct_UFunction_UPatronesIntegracion_EjemploExplosionEnCadena, "EjemploExplosionEnCadena" }, // 2637003729
		{ &Z_Construct_UFunction_UPatronesIntegracion_EjemploIntegracionCompleta, "EjemploIntegracionCompleta" }, // 3740761406
		{ &Z_Construct_UFunction_UPatronesIntegracion_EjemploIteratorConComposite, "EjemploIteratorConComposite" }, // 3413874790
		{ &Z_Construct_UFunction_UPatronesIntegracion_EjemploObserverConPrototype, "EjemploObserverConPrototype" }, // 2529895707
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatronesIntegracion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatronesIntegracion_Statics::NewProp_GameplayFacade = { "GameplayFacade", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatronesIntegracion, GameplayFacade), Z_Construct_UClass_UGameplayFacade_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayFacade_MetaData), NewProp_GameplayFacade_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatronesIntegracion_Statics::NewProp_ConstructorMapa = { "ConstructorMapa", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatronesIntegracion, ConstructorMapa), Z_Construct_UClass_UConstructorMapa_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstructorMapa_MetaData), NewProp_ConstructorMapa_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatronesIntegracion_Statics::NewProp_TileIterator = { "TileIterator", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatronesIntegracion, TileIterator), Z_Construct_UClass_UMapTileIterator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileIterator_MetaData), NewProp_TileIterator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatronesIntegracion_Statics::NewProp_SeccionPrincipal = { "SeccionPrincipal", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatronesIntegracion, SeccionPrincipal), Z_Construct_UClass_ASeccionMapa_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeccionPrincipal_MetaData), NewProp_SeccionPrincipal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatronesIntegracion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatronesIntegracion_Statics::NewProp_GameplayFacade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatronesIntegracion_Statics::NewProp_ConstructorMapa,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatronesIntegracion_Statics::NewProp_TileIterator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatronesIntegracion_Statics::NewProp_SeccionPrincipal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatronesIntegracion_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPatronesIntegracion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalBomberMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatronesIntegracion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatronesIntegracion_Statics::ClassParams = {
	&UPatronesIntegracion::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPatronesIntegracion_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPatronesIntegracion_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatronesIntegracion_Statics::Class_MetaDataParams), Z_Construct_UClass_UPatronesIntegracion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPatronesIntegracion()
{
	if (!Z_Registration_Info_UClass_UPatronesIntegracion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatronesIntegracion.OuterSingleton, Z_Construct_UClass_UPatronesIntegracion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPatronesIntegracion.OuterSingleton;
}
template<> FINALBOMBERMAN_API UClass* StaticClass<UPatronesIntegracion>()
{
	return UPatronesIntegracion::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPatronesIntegracion);
UPatronesIntegracion::~UPatronesIntegracion() {}
// End Class UPatronesIntegracion

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_PatronesIntegracion_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPatronesIntegracion, UPatronesIntegracion::StaticClass, TEXT("UPatronesIntegracion"), &Z_Registration_Info_UClass_UPatronesIntegracion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatronesIntegracion), 2739804660U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_PatronesIntegracion_h_2776579127(TEXT("/Script/FinalBomberMan"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_PatronesIntegracion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_PatronesIntegracion_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
