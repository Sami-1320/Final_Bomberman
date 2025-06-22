// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalBomberMan/SeccionMapa.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeccionMapa() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_ASeccionMapa();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_ASeccionMapa_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UIElementoMapa_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalBomberMan();
// End Cross Module References

// Begin Class ASeccionMapa Function AgregarElemento
struct Z_Construct_UFunction_ASeccionMapa_AgregarElemento_Statics
{
	struct SeccionMapa_eventAgregarElemento_Parms
	{
		TScriptInterface<IIElementoMapa> Elemento;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Secci\xc3\xb3n Mapa" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// M\xc3\xa9todos del Composite\n" },
#endif
		{ "ModuleRelativePath", "SeccionMapa.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "M\xc3\xa9todos del Composite" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Elemento;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_ASeccionMapa_AgregarElemento_Statics::NewProp_Elemento = { "Elemento", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeccionMapa_eventAgregarElemento_Parms, Elemento), Z_Construct_UClass_UIElementoMapa_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASeccionMapa_AgregarElemento_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeccionMapa_AgregarElemento_Statics::NewProp_Elemento,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASeccionMapa_AgregarElemento_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASeccionMapa_AgregarElemento_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASeccionMapa, nullptr, "AgregarElemento", nullptr, nullptr, Z_Construct_UFunction_ASeccionMapa_AgregarElemento_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASeccionMapa_AgregarElemento_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASeccionMapa_AgregarElemento_Statics::SeccionMapa_eventAgregarElemento_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASeccionMapa_AgregarElemento_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASeccionMapa_AgregarElemento_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASeccionMapa_AgregarElemento_Statics::SeccionMapa_eventAgregarElemento_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASeccionMapa_AgregarElemento()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASeccionMapa_AgregarElemento_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASeccionMapa::execAgregarElemento)
{
	P_GET_TINTERFACE(IIElementoMapa,Z_Param_Elemento);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AgregarElemento(Z_Param_Elemento);
	P_NATIVE_END;
}
// End Class ASeccionMapa Function AgregarElemento

// Begin Class ASeccionMapa Function AplicarExplosionEnCadena
struct Z_Construct_UFunction_ASeccionMapa_AplicarExplosionEnCadena_Statics
{
	struct SeccionMapa_eventAplicarExplosionEnCadena_Parms
	{
		FVector2D PosicionInicial;
		int32 RadioExplosion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Secci\xc3\xb3n Mapa" },
		{ "ModuleRelativePath", "SeccionMapa.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PosicionInicial;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RadioExplosion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASeccionMapa_AplicarExplosionEnCadena_Statics::NewProp_PosicionInicial = { "PosicionInicial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeccionMapa_eventAplicarExplosionEnCadena_Parms, PosicionInicial), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASeccionMapa_AplicarExplosionEnCadena_Statics::NewProp_RadioExplosion = { "RadioExplosion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeccionMapa_eventAplicarExplosionEnCadena_Parms, RadioExplosion), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASeccionMapa_AplicarExplosionEnCadena_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeccionMapa_AplicarExplosionEnCadena_Statics::NewProp_PosicionInicial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeccionMapa_AplicarExplosionEnCadena_Statics::NewProp_RadioExplosion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASeccionMapa_AplicarExplosionEnCadena_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASeccionMapa_AplicarExplosionEnCadena_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASeccionMapa, nullptr, "AplicarExplosionEnCadena", nullptr, nullptr, Z_Construct_UFunction_ASeccionMapa_AplicarExplosionEnCadena_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASeccionMapa_AplicarExplosionEnCadena_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASeccionMapa_AplicarExplosionEnCadena_Statics::SeccionMapa_eventAplicarExplosionEnCadena_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASeccionMapa_AplicarExplosionEnCadena_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASeccionMapa_AplicarExplosionEnCadena_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASeccionMapa_AplicarExplosionEnCadena_Statics::SeccionMapa_eventAplicarExplosionEnCadena_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASeccionMapa_AplicarExplosionEnCadena()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASeccionMapa_AplicarExplosionEnCadena_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASeccionMapa::execAplicarExplosionEnCadena)
{
	P_GET_STRUCT(FVector2D,Z_Param_PosicionInicial);
	P_GET_PROPERTY(FIntProperty,Z_Param_RadioExplosion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AplicarExplosionEnCadena(Z_Param_PosicionInicial,Z_Param_RadioExplosion);
	P_NATIVE_END;
}
// End Class ASeccionMapa Function AplicarExplosionEnCadena

// Begin Class ASeccionMapa Function ConfigurarSeccion
struct Z_Construct_UFunction_ASeccionMapa_ConfigurarSeccion_Statics
{
	struct SeccionMapa_eventConfigurarSeccion_Parms
	{
		FVector2D PosicionInicial;
		FVector2D Tamano;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Secci\xc3\xb3n Mapa" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// M\xc3\xa9todos espec\xc3\xad""ficos para secciones\n" },
#endif
		{ "ModuleRelativePath", "SeccionMapa.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "M\xc3\xa9todos espec\xc3\xad""ficos para secciones" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PosicionInicial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tamano;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASeccionMapa_ConfigurarSeccion_Statics::NewProp_PosicionInicial = { "PosicionInicial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeccionMapa_eventConfigurarSeccion_Parms, PosicionInicial), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASeccionMapa_ConfigurarSeccion_Statics::NewProp_Tamano = { "Tamano", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeccionMapa_eventConfigurarSeccion_Parms, Tamano), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASeccionMapa_ConfigurarSeccion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeccionMapa_ConfigurarSeccion_Statics::NewProp_PosicionInicial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeccionMapa_ConfigurarSeccion_Statics::NewProp_Tamano,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASeccionMapa_ConfigurarSeccion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASeccionMapa_ConfigurarSeccion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASeccionMapa, nullptr, "ConfigurarSeccion", nullptr, nullptr, Z_Construct_UFunction_ASeccionMapa_ConfigurarSeccion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASeccionMapa_ConfigurarSeccion_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASeccionMapa_ConfigurarSeccion_Statics::SeccionMapa_eventConfigurarSeccion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASeccionMapa_ConfigurarSeccion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASeccionMapa_ConfigurarSeccion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASeccionMapa_ConfigurarSeccion_Statics::SeccionMapa_eventConfigurarSeccion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASeccionMapa_ConfigurarSeccion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASeccionMapa_ConfigurarSeccion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASeccionMapa::execConfigurarSeccion)
{
	P_GET_STRUCT(FVector2D,Z_Param_PosicionInicial);
	P_GET_STRUCT(FVector2D,Z_Param_Tamano);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfigurarSeccion(Z_Param_PosicionInicial,Z_Param_Tamano);
	P_NATIVE_END;
}
// End Class ASeccionMapa Function ConfigurarSeccion

// Begin Class ASeccionMapa Function ContienePosicion
struct Z_Construct_UFunction_ASeccionMapa_ContienePosicion_Statics
{
	struct SeccionMapa_eventContienePosicion_Parms
	{
		FVector2D Posicion;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Secci\xc3\xb3n Mapa" },
		{ "ModuleRelativePath", "SeccionMapa.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posicion;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASeccionMapa_ContienePosicion_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeccionMapa_eventContienePosicion_Parms, Posicion), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASeccionMapa_ContienePosicion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SeccionMapa_eventContienePosicion_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASeccionMapa_ContienePosicion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SeccionMapa_eventContienePosicion_Parms), &Z_Construct_UFunction_ASeccionMapa_ContienePosicion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASeccionMapa_ContienePosicion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeccionMapa_ContienePosicion_Statics::NewProp_Posicion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeccionMapa_ContienePosicion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASeccionMapa_ContienePosicion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASeccionMapa_ContienePosicion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASeccionMapa, nullptr, "ContienePosicion", nullptr, nullptr, Z_Construct_UFunction_ASeccionMapa_ContienePosicion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASeccionMapa_ContienePosicion_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASeccionMapa_ContienePosicion_Statics::SeccionMapa_eventContienePosicion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASeccionMapa_ContienePosicion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASeccionMapa_ContienePosicion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASeccionMapa_ContienePosicion_Statics::SeccionMapa_eventContienePosicion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASeccionMapa_ContienePosicion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASeccionMapa_ContienePosicion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASeccionMapa::execContienePosicion)
{
	P_GET_STRUCT(FVector2D,Z_Param_Posicion);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ContienePosicion(Z_Param_Posicion);
	P_NATIVE_END;
}
// End Class ASeccionMapa Function ContienePosicion

// Begin Class ASeccionMapa Function LimpiarElementos
struct Z_Construct_UFunction_ASeccionMapa_LimpiarElementos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Secci\xc3\xb3n Mapa" },
		{ "ModuleRelativePath", "SeccionMapa.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASeccionMapa_LimpiarElementos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASeccionMapa, nullptr, "LimpiarElementos", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASeccionMapa_LimpiarElementos_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASeccionMapa_LimpiarElementos_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASeccionMapa_LimpiarElementos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASeccionMapa_LimpiarElementos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASeccionMapa::execLimpiarElementos)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LimpiarElementos();
	P_NATIVE_END;
}
// End Class ASeccionMapa Function LimpiarElementos

// Begin Class ASeccionMapa Function ObtenerCantidadElementos
struct Z_Construct_UFunction_ASeccionMapa_ObtenerCantidadElementos_Statics
{
	struct SeccionMapa_eventObtenerCantidadElementos_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Secci\xc3\xb3n Mapa" },
		{ "ModuleRelativePath", "SeccionMapa.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASeccionMapa_ObtenerCantidadElementos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeccionMapa_eventObtenerCantidadElementos_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASeccionMapa_ObtenerCantidadElementos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeccionMapa_ObtenerCantidadElementos_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASeccionMapa_ObtenerCantidadElementos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASeccionMapa_ObtenerCantidadElementos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASeccionMapa, nullptr, "ObtenerCantidadElementos", nullptr, nullptr, Z_Construct_UFunction_ASeccionMapa_ObtenerCantidadElementos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASeccionMapa_ObtenerCantidadElementos_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASeccionMapa_ObtenerCantidadElementos_Statics::SeccionMapa_eventObtenerCantidadElementos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASeccionMapa_ObtenerCantidadElementos_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASeccionMapa_ObtenerCantidadElementos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASeccionMapa_ObtenerCantidadElementos_Statics::SeccionMapa_eventObtenerCantidadElementos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASeccionMapa_ObtenerCantidadElementos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASeccionMapa_ObtenerCantidadElementos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASeccionMapa::execObtenerCantidadElementos)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ObtenerCantidadElementos();
	P_NATIVE_END;
}
// End Class ASeccionMapa Function ObtenerCantidadElementos

// Begin Class ASeccionMapa Function ObtenerElementos
struct Z_Construct_UFunction_ASeccionMapa_ObtenerElementos_Statics
{
	struct SeccionMapa_eventObtenerElementos_Parms
	{
		TArray<TScriptInterface<IIElementoMapa> > ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Secci\xc3\xb3n Mapa" },
		{ "ModuleRelativePath", "SeccionMapa.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_ASeccionMapa_ObtenerElementos_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIElementoMapa_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASeccionMapa_ObtenerElementos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeccionMapa_eventObtenerElementos_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASeccionMapa_ObtenerElementos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeccionMapa_ObtenerElementos_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeccionMapa_ObtenerElementos_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASeccionMapa_ObtenerElementos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASeccionMapa_ObtenerElementos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASeccionMapa, nullptr, "ObtenerElementos", nullptr, nullptr, Z_Construct_UFunction_ASeccionMapa_ObtenerElementos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASeccionMapa_ObtenerElementos_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASeccionMapa_ObtenerElementos_Statics::SeccionMapa_eventObtenerElementos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASeccionMapa_ObtenerElementos_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASeccionMapa_ObtenerElementos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASeccionMapa_ObtenerElementos_Statics::SeccionMapa_eventObtenerElementos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASeccionMapa_ObtenerElementos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASeccionMapa_ObtenerElementos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASeccionMapa::execObtenerElementos)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<TScriptInterface<IIElementoMapa> >*)Z_Param__Result=P_THIS->ObtenerElementos();
	P_NATIVE_END;
}
// End Class ASeccionMapa Function ObtenerElementos

// Begin Class ASeccionMapa Function ObtenerElementosEnPosicion
struct Z_Construct_UFunction_ASeccionMapa_ObtenerElementosEnPosicion_Statics
{
	struct SeccionMapa_eventObtenerElementosEnPosicion_Parms
	{
		FVector2D Posicion;
		TArray<TScriptInterface<IIElementoMapa> > ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Secci\xc3\xb3n Mapa" },
		{ "ModuleRelativePath", "SeccionMapa.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posicion;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASeccionMapa_ObtenerElementosEnPosicion_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeccionMapa_eventObtenerElementosEnPosicion_Parms, Posicion), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_ASeccionMapa_ObtenerElementosEnPosicion_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIElementoMapa_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASeccionMapa_ObtenerElementosEnPosicion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeccionMapa_eventObtenerElementosEnPosicion_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASeccionMapa_ObtenerElementosEnPosicion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeccionMapa_ObtenerElementosEnPosicion_Statics::NewProp_Posicion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeccionMapa_ObtenerElementosEnPosicion_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeccionMapa_ObtenerElementosEnPosicion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASeccionMapa_ObtenerElementosEnPosicion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASeccionMapa_ObtenerElementosEnPosicion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASeccionMapa, nullptr, "ObtenerElementosEnPosicion", nullptr, nullptr, Z_Construct_UFunction_ASeccionMapa_ObtenerElementosEnPosicion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASeccionMapa_ObtenerElementosEnPosicion_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASeccionMapa_ObtenerElementosEnPosicion_Statics::SeccionMapa_eventObtenerElementosEnPosicion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASeccionMapa_ObtenerElementosEnPosicion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASeccionMapa_ObtenerElementosEnPosicion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASeccionMapa_ObtenerElementosEnPosicion_Statics::SeccionMapa_eventObtenerElementosEnPosicion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASeccionMapa_ObtenerElementosEnPosicion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASeccionMapa_ObtenerElementosEnPosicion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASeccionMapa::execObtenerElementosEnPosicion)
{
	P_GET_STRUCT(FVector2D,Z_Param_Posicion);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<TScriptInterface<IIElementoMapa> >*)Z_Param__Result=P_THIS->ObtenerElementosEnPosicion(Z_Param_Posicion);
	P_NATIVE_END;
}
// End Class ASeccionMapa Function ObtenerElementosEnPosicion

// Begin Class ASeccionMapa Function RemoverElemento
struct Z_Construct_UFunction_ASeccionMapa_RemoverElemento_Statics
{
	struct SeccionMapa_eventRemoverElemento_Parms
	{
		TScriptInterface<IIElementoMapa> Elemento;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Secci\xc3\xb3n Mapa" },
		{ "ModuleRelativePath", "SeccionMapa.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Elemento;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_ASeccionMapa_RemoverElemento_Statics::NewProp_Elemento = { "Elemento", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeccionMapa_eventRemoverElemento_Parms, Elemento), Z_Construct_UClass_UIElementoMapa_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASeccionMapa_RemoverElemento_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeccionMapa_RemoverElemento_Statics::NewProp_Elemento,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASeccionMapa_RemoverElemento_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASeccionMapa_RemoverElemento_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASeccionMapa, nullptr, "RemoverElemento", nullptr, nullptr, Z_Construct_UFunction_ASeccionMapa_RemoverElemento_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASeccionMapa_RemoverElemento_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASeccionMapa_RemoverElemento_Statics::SeccionMapa_eventRemoverElemento_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASeccionMapa_RemoverElemento_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASeccionMapa_RemoverElemento_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASeccionMapa_RemoverElemento_Statics::SeccionMapa_eventRemoverElemento_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASeccionMapa_RemoverElemento()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASeccionMapa_RemoverElemento_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASeccionMapa::execRemoverElemento)
{
	P_GET_TINTERFACE(IIElementoMapa,Z_Param_Elemento);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoverElemento(Z_Param_Elemento);
	P_NATIVE_END;
}
// End Class ASeccionMapa Function RemoverElemento

// Begin Class ASeccionMapa
void ASeccionMapa::StaticRegisterNativesASeccionMapa()
{
	UClass* Class = ASeccionMapa::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AgregarElemento", &ASeccionMapa::execAgregarElemento },
		{ "AplicarExplosionEnCadena", &ASeccionMapa::execAplicarExplosionEnCadena },
		{ "ConfigurarSeccion", &ASeccionMapa::execConfigurarSeccion },
		{ "ContienePosicion", &ASeccionMapa::execContienePosicion },
		{ "LimpiarElementos", &ASeccionMapa::execLimpiarElementos },
		{ "ObtenerCantidadElementos", &ASeccionMapa::execObtenerCantidadElementos },
		{ "ObtenerElementos", &ASeccionMapa::execObtenerElementos },
		{ "ObtenerElementosEnPosicion", &ASeccionMapa::execObtenerElementosEnPosicion },
		{ "RemoverElemento", &ASeccionMapa::execRemoverElemento },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASeccionMapa);
UClass* Z_Construct_UClass_ASeccionMapa_NoRegister()
{
	return ASeccionMapa::StaticClass();
}
struct Z_Construct_UClass_ASeccionMapa_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SeccionMapa.h" },
		{ "ModuleRelativePath", "SeccionMapa.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementosHijos_MetaData[] = {
		{ "ModuleRelativePath", "SeccionMapa.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ElementosHijos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ElementosHijos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASeccionMapa_AgregarElemento, "AgregarElemento" }, // 3387835393
		{ &Z_Construct_UFunction_ASeccionMapa_AplicarExplosionEnCadena, "AplicarExplosionEnCadena" }, // 2370480168
		{ &Z_Construct_UFunction_ASeccionMapa_ConfigurarSeccion, "ConfigurarSeccion" }, // 187001935
		{ &Z_Construct_UFunction_ASeccionMapa_ContienePosicion, "ContienePosicion" }, // 612679426
		{ &Z_Construct_UFunction_ASeccionMapa_LimpiarElementos, "LimpiarElementos" }, // 1871471963
		{ &Z_Construct_UFunction_ASeccionMapa_ObtenerCantidadElementos, "ObtenerCantidadElementos" }, // 4112807048
		{ &Z_Construct_UFunction_ASeccionMapa_ObtenerElementos, "ObtenerElementos" }, // 504853598
		{ &Z_Construct_UFunction_ASeccionMapa_ObtenerElementosEnPosicion, "ObtenerElementosEnPosicion" }, // 3260346859
		{ &Z_Construct_UFunction_ASeccionMapa_RemoverElemento, "RemoverElemento" }, // 1819059740
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASeccionMapa>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ASeccionMapa_Statics::NewProp_ElementosHijos_Inner = { "ElementosHijos", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIElementoMapa_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASeccionMapa_Statics::NewProp_ElementosHijos = { "ElementosHijos", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASeccionMapa, ElementosHijos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementosHijos_MetaData), NewProp_ElementosHijos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASeccionMapa_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeccionMapa_Statics::NewProp_ElementosHijos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeccionMapa_Statics::NewProp_ElementosHijos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASeccionMapa_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASeccionMapa_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalBomberMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASeccionMapa_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASeccionMapa_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIElementoMapa_NoRegister, (int32)VTABLE_OFFSET(ASeccionMapa, IIElementoMapa), false },  // 1511220777
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASeccionMapa_Statics::ClassParams = {
	&ASeccionMapa::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASeccionMapa_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASeccionMapa_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASeccionMapa_Statics::Class_MetaDataParams), Z_Construct_UClass_ASeccionMapa_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASeccionMapa()
{
	if (!Z_Registration_Info_UClass_ASeccionMapa.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASeccionMapa.OuterSingleton, Z_Construct_UClass_ASeccionMapa_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASeccionMapa.OuterSingleton;
}
template<> FINALBOMBERMAN_API UClass* StaticClass<ASeccionMapa>()
{
	return ASeccionMapa::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASeccionMapa);
ASeccionMapa::~ASeccionMapa() {}
// End Class ASeccionMapa

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_SeccionMapa_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASeccionMapa, ASeccionMapa::StaticClass, TEXT("ASeccionMapa"), &Z_Registration_Info_UClass_ASeccionMapa, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASeccionMapa), 155164261U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_SeccionMapa_h_2052034819(TEXT("/Script/FinalBomberMan"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_SeccionMapa_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_SeccionMapa_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
