// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalBomberMan/GameplayFacade.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayFacade() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_ABomba_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_AEnemigo_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_AFinalBomberManCharacter_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_APowerUp_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UConstructorMapa_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UDirectorNiveles_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UGameEventManager_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UGameplayFacade();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UGameplayFacade_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UUIManager_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UVFXManager_NoRegister();
FINALBOMBERMAN_API UEnum* Z_Construct_UEnum_FinalBomberMan_ETipoEnemigo();
FINALBOMBERMAN_API UEnum* Z_Construct_UEnum_FinalBomberMan_ETipoPowerUp();
UPackage* Z_Construct_UPackage__Script_FinalBomberMan();
// End Cross Module References

// Begin Class UGameplayFacade Function ActualizarPuntuacion
struct Z_Construct_UFunction_UGameplayFacade_ActualizarPuntuacion_Statics
{
	struct GameplayFacade_eventActualizarPuntuacion_Parms
	{
		int32 NuevaPuntuacion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NuevaPuntuacion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayFacade_ActualizarPuntuacion_Statics::NewProp_NuevaPuntuacion = { "NuevaPuntuacion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventActualizarPuntuacion_Parms, NuevaPuntuacion), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFacade_ActualizarPuntuacion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_ActualizarPuntuacion_Statics::NewProp_NuevaPuntuacion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_ActualizarPuntuacion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_ActualizarPuntuacion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "ActualizarPuntuacion", nullptr, nullptr, Z_Construct_UFunction_UGameplayFacade_ActualizarPuntuacion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_ActualizarPuntuacion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayFacade_ActualizarPuntuacion_Statics::GameplayFacade_eventActualizarPuntuacion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_ActualizarPuntuacion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_ActualizarPuntuacion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayFacade_ActualizarPuntuacion_Statics::GameplayFacade_eventActualizarPuntuacion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayFacade_ActualizarPuntuacion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_ActualizarPuntuacion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execActualizarPuntuacion)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NuevaPuntuacion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActualizarPuntuacion(Z_Param_NuevaPuntuacion);
	P_NATIVE_END;
}
// End Class UGameplayFacade Function ActualizarPuntuacion

// Begin Class UGameplayFacade Function AplicarPowerUp
struct Z_Construct_UFunction_UGameplayFacade_AplicarPowerUp_Statics
{
	struct GameplayFacade_eventAplicarPowerUp_Parms
	{
		AFinalBomberManCharacter* Jugador;
		ETipoPowerUp Tipo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Jugador;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Tipo_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Tipo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayFacade_AplicarPowerUp_Statics::NewProp_Jugador = { "Jugador", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventAplicarPowerUp_Parms, Jugador), Z_Construct_UClass_AFinalBomberManCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayFacade_AplicarPowerUp_Statics::NewProp_Tipo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameplayFacade_AplicarPowerUp_Statics::NewProp_Tipo = { "Tipo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventAplicarPowerUp_Parms, Tipo), Z_Construct_UEnum_FinalBomberMan_ETipoPowerUp, METADATA_PARAMS(0, nullptr) }; // 1306924834
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFacade_AplicarPowerUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_AplicarPowerUp_Statics::NewProp_Jugador,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_AplicarPowerUp_Statics::NewProp_Tipo_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_AplicarPowerUp_Statics::NewProp_Tipo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_AplicarPowerUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_AplicarPowerUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "AplicarPowerUp", nullptr, nullptr, Z_Construct_UFunction_UGameplayFacade_AplicarPowerUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_AplicarPowerUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayFacade_AplicarPowerUp_Statics::GameplayFacade_eventAplicarPowerUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_AplicarPowerUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_AplicarPowerUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayFacade_AplicarPowerUp_Statics::GameplayFacade_eventAplicarPowerUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayFacade_AplicarPowerUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_AplicarPowerUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execAplicarPowerUp)
{
	P_GET_OBJECT(AFinalBomberManCharacter,Z_Param_Jugador);
	P_GET_ENUM(ETipoPowerUp,Z_Param_Tipo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AplicarPowerUp(Z_Param_Jugador,ETipoPowerUp(Z_Param_Tipo));
	P_NATIVE_END;
}
// End Class UGameplayFacade Function AplicarPowerUp

// Begin Class UGameplayFacade Function CambiarNivelPorPuntos
struct Z_Construct_UFunction_UGameplayFacade_CambiarNivelPorPuntos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_CambiarNivelPorPuntos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "CambiarNivelPorPuntos", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_CambiarNivelPorPuntos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_CambiarNivelPorPuntos_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameplayFacade_CambiarNivelPorPuntos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_CambiarNivelPorPuntos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execCambiarNivelPorPuntos)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CambiarNivelPorPuntos();
	P_NATIVE_END;
}
// End Class UGameplayFacade Function CambiarNivelPorPuntos

// Begin Class UGameplayFacade Function CancelarBomba
struct Z_Construct_UFunction_UGameplayFacade_CancelarBomba_Statics
{
	struct GameplayFacade_eventCancelarBomba_Parms
	{
		ABomba* Bomba;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bomba;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayFacade_CancelarBomba_Statics::NewProp_Bomba = { "Bomba", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventCancelarBomba_Parms, Bomba), Z_Construct_UClass_ABomba_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFacade_CancelarBomba_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_CancelarBomba_Statics::NewProp_Bomba,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_CancelarBomba_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_CancelarBomba_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "CancelarBomba", nullptr, nullptr, Z_Construct_UFunction_UGameplayFacade_CancelarBomba_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_CancelarBomba_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayFacade_CancelarBomba_Statics::GameplayFacade_eventCancelarBomba_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_CancelarBomba_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_CancelarBomba_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayFacade_CancelarBomba_Statics::GameplayFacade_eventCancelarBomba_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayFacade_CancelarBomba()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_CancelarBomba_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execCancelarBomba)
{
	P_GET_OBJECT(ABomba,Z_Param_Bomba);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelarBomba(Z_Param_Bomba);
	P_NATIVE_END;
}
// End Class UGameplayFacade Function CancelarBomba

// Begin Class UGameplayFacade Function CargarNivel
struct Z_Construct_UFunction_UGameplayFacade_CargarNivel_Statics
{
	struct GameplayFacade_eventCargarNivel_Parms
	{
		int32 NumeroNivel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gesti\xc3\xb3n de niveles\n" },
#endif
		{ "ModuleRelativePath", "GameplayFacade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gesti\xc3\xb3n de niveles" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumeroNivel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayFacade_CargarNivel_Statics::NewProp_NumeroNivel = { "NumeroNivel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventCargarNivel_Parms, NumeroNivel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFacade_CargarNivel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_CargarNivel_Statics::NewProp_NumeroNivel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_CargarNivel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_CargarNivel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "CargarNivel", nullptr, nullptr, Z_Construct_UFunction_UGameplayFacade_CargarNivel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_CargarNivel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayFacade_CargarNivel_Statics::GameplayFacade_eventCargarNivel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_CargarNivel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_CargarNivel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayFacade_CargarNivel_Statics::GameplayFacade_eventCargarNivel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayFacade_CargarNivel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_CargarNivel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execCargarNivel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumeroNivel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CargarNivel(Z_Param_NumeroNivel);
	P_NATIVE_END;
}
// End Class UGameplayFacade Function CargarNivel

// Begin Class UGameplayFacade Function ColocarBomba
struct Z_Construct_UFunction_UGameplayFacade_ColocarBomba_Statics
{
	struct GameplayFacade_eventColocarBomba_Parms
	{
		FVector2D Posicion;
		int32 RadioExplosion;
		ABomba* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gesti\xc3\xb3n de bombas\n" },
#endif
		{ "CPP_Default_RadioExplosion", "1" },
		{ "ModuleRelativePath", "GameplayFacade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gesti\xc3\xb3n de bombas" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posicion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RadioExplosion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayFacade_ColocarBomba_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventColocarBomba_Parms, Posicion), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayFacade_ColocarBomba_Statics::NewProp_RadioExplosion = { "RadioExplosion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventColocarBomba_Parms, RadioExplosion), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayFacade_ColocarBomba_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventColocarBomba_Parms, ReturnValue), Z_Construct_UClass_ABomba_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFacade_ColocarBomba_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_ColocarBomba_Statics::NewProp_Posicion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_ColocarBomba_Statics::NewProp_RadioExplosion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_ColocarBomba_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_ColocarBomba_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_ColocarBomba_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "ColocarBomba", nullptr, nullptr, Z_Construct_UFunction_UGameplayFacade_ColocarBomba_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_ColocarBomba_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayFacade_ColocarBomba_Statics::GameplayFacade_eventColocarBomba_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_ColocarBomba_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_ColocarBomba_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayFacade_ColocarBomba_Statics::GameplayFacade_eventColocarBomba_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayFacade_ColocarBomba()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_ColocarBomba_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execColocarBomba)
{
	P_GET_STRUCT(FVector2D,Z_Param_Posicion);
	P_GET_PROPERTY(FIntProperty,Z_Param_RadioExplosion);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ABomba**)Z_Param__Result=P_THIS->ColocarBomba(Z_Param_Posicion,Z_Param_RadioExplosion);
	P_NATIVE_END;
}
// End Class UGameplayFacade Function ColocarBomba

// Begin Class UGameplayFacade Function CompletarNivel
struct Z_Construct_UFunction_UGameplayFacade_CompletarNivel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_CompletarNivel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "CompletarNivel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_CompletarNivel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_CompletarNivel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameplayFacade_CompletarNivel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_CompletarNivel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execCompletarNivel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CompletarNivel();
	P_NATIVE_END;
}
// End Class UGameplayFacade Function CompletarNivel

// Begin Class UGameplayFacade Function CrearEfectoDestruccion
struct Z_Construct_UFunction_UGameplayFacade_CrearEfectoDestruccion_Statics
{
	struct GameplayFacade_eventCrearEfectoDestruccion_Parms
	{
		FVector2D Posicion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posicion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayFacade_CrearEfectoDestruccion_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventCrearEfectoDestruccion_Parms, Posicion), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFacade_CrearEfectoDestruccion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_CrearEfectoDestruccion_Statics::NewProp_Posicion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_CrearEfectoDestruccion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_CrearEfectoDestruccion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "CrearEfectoDestruccion", nullptr, nullptr, Z_Construct_UFunction_UGameplayFacade_CrearEfectoDestruccion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_CrearEfectoDestruccion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayFacade_CrearEfectoDestruccion_Statics::GameplayFacade_eventCrearEfectoDestruccion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_CrearEfectoDestruccion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_CrearEfectoDestruccion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayFacade_CrearEfectoDestruccion_Statics::GameplayFacade_eventCrearEfectoDestruccion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayFacade_CrearEfectoDestruccion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_CrearEfectoDestruccion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execCrearEfectoDestruccion)
{
	P_GET_STRUCT(FVector2D,Z_Param_Posicion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CrearEfectoDestruccion(Z_Param_Posicion);
	P_NATIVE_END;
}
// End Class UGameplayFacade Function CrearEfectoDestruccion

// Begin Class UGameplayFacade Function CrearEfectoExplosion
struct Z_Construct_UFunction_UGameplayFacade_CrearEfectoExplosion_Statics
{
	struct GameplayFacade_eventCrearEfectoExplosion_Parms
	{
		FVector2D Posicion;
		int32 Radio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gesti\xc3\xb3n de efectos\n" },
#endif
		{ "ModuleRelativePath", "GameplayFacade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gesti\xc3\xb3n de efectos" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posicion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Radio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayFacade_CrearEfectoExplosion_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventCrearEfectoExplosion_Parms, Posicion), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayFacade_CrearEfectoExplosion_Statics::NewProp_Radio = { "Radio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventCrearEfectoExplosion_Parms, Radio), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFacade_CrearEfectoExplosion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_CrearEfectoExplosion_Statics::NewProp_Posicion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_CrearEfectoExplosion_Statics::NewProp_Radio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_CrearEfectoExplosion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_CrearEfectoExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "CrearEfectoExplosion", nullptr, nullptr, Z_Construct_UFunction_UGameplayFacade_CrearEfectoExplosion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_CrearEfectoExplosion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayFacade_CrearEfectoExplosion_Statics::GameplayFacade_eventCrearEfectoExplosion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_CrearEfectoExplosion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_CrearEfectoExplosion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayFacade_CrearEfectoExplosion_Statics::GameplayFacade_eventCrearEfectoExplosion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayFacade_CrearEfectoExplosion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_CrearEfectoExplosion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execCrearEfectoExplosion)
{
	P_GET_STRUCT(FVector2D,Z_Param_Posicion);
	P_GET_PROPERTY(FIntProperty,Z_Param_Radio);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CrearEfectoExplosion(Z_Param_Posicion,Z_Param_Radio);
	P_NATIVE_END;
}
// End Class UGameplayFacade Function CrearEfectoExplosion

// Begin Class UGameplayFacade Function CrearPowerUp
struct Z_Construct_UFunction_UGameplayFacade_CrearPowerUp_Statics
{
	struct GameplayFacade_eventCrearPowerUp_Parms
	{
		ETipoPowerUp Tipo;
		FVector2D Posicion;
		APowerUp* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gesti\xc3\xb3n de power-ups\n" },
#endif
		{ "ModuleRelativePath", "GameplayFacade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gesti\xc3\xb3n de power-ups" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Tipo_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Tipo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posicion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayFacade_CrearPowerUp_Statics::NewProp_Tipo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameplayFacade_CrearPowerUp_Statics::NewProp_Tipo = { "Tipo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventCrearPowerUp_Parms, Tipo), Z_Construct_UEnum_FinalBomberMan_ETipoPowerUp, METADATA_PARAMS(0, nullptr) }; // 1306924834
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayFacade_CrearPowerUp_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventCrearPowerUp_Parms, Posicion), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayFacade_CrearPowerUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventCrearPowerUp_Parms, ReturnValue), Z_Construct_UClass_APowerUp_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFacade_CrearPowerUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_CrearPowerUp_Statics::NewProp_Tipo_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_CrearPowerUp_Statics::NewProp_Tipo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_CrearPowerUp_Statics::NewProp_Posicion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_CrearPowerUp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_CrearPowerUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_CrearPowerUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "CrearPowerUp", nullptr, nullptr, Z_Construct_UFunction_UGameplayFacade_CrearPowerUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_CrearPowerUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayFacade_CrearPowerUp_Statics::GameplayFacade_eventCrearPowerUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_CrearPowerUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_CrearPowerUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayFacade_CrearPowerUp_Statics::GameplayFacade_eventCrearPowerUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayFacade_CrearPowerUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_CrearPowerUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execCrearPowerUp)
{
	P_GET_ENUM(ETipoPowerUp,Z_Param_Tipo);
	P_GET_STRUCT(FVector2D,Z_Param_Posicion);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APowerUp**)Z_Param__Result=P_THIS->CrearPowerUp(ETipoPowerUp(Z_Param_Tipo),Z_Param_Posicion);
	P_NATIVE_END;
}
// End Class UGameplayFacade Function CrearPowerUp

// Begin Class UGameplayFacade Function DetonarBomba
struct Z_Construct_UFunction_UGameplayFacade_DetonarBomba_Statics
{
	struct GameplayFacade_eventDetonarBomba_Parms
	{
		ABomba* Bomba;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bomba;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayFacade_DetonarBomba_Statics::NewProp_Bomba = { "Bomba", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventDetonarBomba_Parms, Bomba), Z_Construct_UClass_ABomba_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFacade_DetonarBomba_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_DetonarBomba_Statics::NewProp_Bomba,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_DetonarBomba_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_DetonarBomba_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "DetonarBomba", nullptr, nullptr, Z_Construct_UFunction_UGameplayFacade_DetonarBomba_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_DetonarBomba_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayFacade_DetonarBomba_Statics::GameplayFacade_eventDetonarBomba_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_DetonarBomba_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_DetonarBomba_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayFacade_DetonarBomba_Statics::GameplayFacade_eventDetonarBomba_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayFacade_DetonarBomba()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_DetonarBomba_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execDetonarBomba)
{
	P_GET_OBJECT(ABomba,Z_Param_Bomba);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DetonarBomba(Z_Param_Bomba);
	P_NATIVE_END;
}
// End Class UGameplayFacade Function DetonarBomba

// Begin Class UGameplayFacade Function EliminarEnemigo
struct Z_Construct_UFunction_UGameplayFacade_EliminarEnemigo_Statics
{
	struct GameplayFacade_eventEliminarEnemigo_Parms
	{
		AEnemigo* Enemigo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemigo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayFacade_EliminarEnemigo_Statics::NewProp_Enemigo = { "Enemigo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventEliminarEnemigo_Parms, Enemigo), Z_Construct_UClass_AEnemigo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFacade_EliminarEnemigo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_EliminarEnemigo_Statics::NewProp_Enemigo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_EliminarEnemigo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_EliminarEnemigo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "EliminarEnemigo", nullptr, nullptr, Z_Construct_UFunction_UGameplayFacade_EliminarEnemigo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_EliminarEnemigo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayFacade_EliminarEnemigo_Statics::GameplayFacade_eventEliminarEnemigo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_EliminarEnemigo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_EliminarEnemigo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayFacade_EliminarEnemigo_Statics::GameplayFacade_eventEliminarEnemigo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayFacade_EliminarEnemigo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_EliminarEnemigo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execEliminarEnemigo)
{
	P_GET_OBJECT(AEnemigo,Z_Param_Enemigo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EliminarEnemigo(Z_Param_Enemigo);
	P_NATIVE_END;
}
// End Class UGameplayFacade Function EliminarEnemigo

// Begin Class UGameplayFacade Function EstaJuegoPausado
struct Z_Construct_UFunction_UGameplayFacade_EstaJuegoPausado_Statics
{
	struct GameplayFacade_eventEstaJuegoPausado_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGameplayFacade_EstaJuegoPausado_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameplayFacade_eventEstaJuegoPausado_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayFacade_EstaJuegoPausado_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameplayFacade_eventEstaJuegoPausado_Parms), &Z_Construct_UFunction_UGameplayFacade_EstaJuegoPausado_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFacade_EstaJuegoPausado_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_EstaJuegoPausado_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_EstaJuegoPausado_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_EstaJuegoPausado_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "EstaJuegoPausado", nullptr, nullptr, Z_Construct_UFunction_UGameplayFacade_EstaJuegoPausado_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_EstaJuegoPausado_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayFacade_EstaJuegoPausado_Statics::GameplayFacade_eventEstaJuegoPausado_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_EstaJuegoPausado_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_EstaJuegoPausado_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayFacade_EstaJuegoPausado_Statics::GameplayFacade_eventEstaJuegoPausado_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayFacade_EstaJuegoPausado()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_EstaJuegoPausado_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execEstaJuegoPausado)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EstaJuegoPausado();
	P_NATIVE_END;
}
// End Class UGameplayFacade Function EstaJuegoPausado

// Begin Class UGameplayFacade Function EstaJuegoTerminado
struct Z_Construct_UFunction_UGameplayFacade_EstaJuegoTerminado_Statics
{
	struct GameplayFacade_eventEstaJuegoTerminado_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGameplayFacade_EstaJuegoTerminado_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameplayFacade_eventEstaJuegoTerminado_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayFacade_EstaJuegoTerminado_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameplayFacade_eventEstaJuegoTerminado_Parms), &Z_Construct_UFunction_UGameplayFacade_EstaJuegoTerminado_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFacade_EstaJuegoTerminado_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_EstaJuegoTerminado_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_EstaJuegoTerminado_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_EstaJuegoTerminado_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "EstaJuegoTerminado", nullptr, nullptr, Z_Construct_UFunction_UGameplayFacade_EstaJuegoTerminado_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_EstaJuegoTerminado_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayFacade_EstaJuegoTerminado_Statics::GameplayFacade_eventEstaJuegoTerminado_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_EstaJuegoTerminado_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_EstaJuegoTerminado_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayFacade_EstaJuegoTerminado_Statics::GameplayFacade_eventEstaJuegoTerminado_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayFacade_EstaJuegoTerminado()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_EstaJuegoTerminado_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execEstaJuegoTerminado)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EstaJuegoTerminado();
	P_NATIVE_END;
}
// End Class UGameplayFacade Function EstaJuegoTerminado

// Begin Class UGameplayFacade Function HerirJugador
struct Z_Construct_UFunction_UGameplayFacade_HerirJugador_Statics
{
	struct GameplayFacade_eventHerirJugador_Parms
	{
		AFinalBomberManCharacter* Jugador;
		int32 Dano;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gesti\xc3\xb3n de jugadores\n" },
#endif
		{ "ModuleRelativePath", "GameplayFacade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gesti\xc3\xb3n de jugadores" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Jugador;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Dano;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayFacade_HerirJugador_Statics::NewProp_Jugador = { "Jugador", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventHerirJugador_Parms, Jugador), Z_Construct_UClass_AFinalBomberManCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayFacade_HerirJugador_Statics::NewProp_Dano = { "Dano", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventHerirJugador_Parms, Dano), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFacade_HerirJugador_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_HerirJugador_Statics::NewProp_Jugador,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_HerirJugador_Statics::NewProp_Dano,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_HerirJugador_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_HerirJugador_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "HerirJugador", nullptr, nullptr, Z_Construct_UFunction_UGameplayFacade_HerirJugador_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_HerirJugador_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayFacade_HerirJugador_Statics::GameplayFacade_eventHerirJugador_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_HerirJugador_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_HerirJugador_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayFacade_HerirJugador_Statics::GameplayFacade_eventHerirJugador_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayFacade_HerirJugador()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_HerirJugador_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execHerirJugador)
{
	P_GET_OBJECT(AFinalBomberManCharacter,Z_Param_Jugador);
	P_GET_PROPERTY(FIntProperty,Z_Param_Dano);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HerirJugador(Z_Param_Jugador,Z_Param_Dano);
	P_NATIVE_END;
}
// End Class UGameplayFacade Function HerirJugador

// Begin Class UGameplayFacade Function InicializarJuego
struct Z_Construct_UFunction_UGameplayFacade_InicializarJuego_Statics
{
	struct GameplayFacade_eventInicializarJuego_Parms
	{
		UWorld* Mundo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Inicializaci\xc3\xb3n del juego\n" },
#endif
		{ "ModuleRelativePath", "GameplayFacade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inicializaci\xc3\xb3n del juego" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mundo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayFacade_InicializarJuego_Statics::NewProp_Mundo = { "Mundo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventInicializarJuego_Parms, Mundo), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFacade_InicializarJuego_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_InicializarJuego_Statics::NewProp_Mundo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_InicializarJuego_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_InicializarJuego_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "InicializarJuego", nullptr, nullptr, Z_Construct_UFunction_UGameplayFacade_InicializarJuego_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_InicializarJuego_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayFacade_InicializarJuego_Statics::GameplayFacade_eventInicializarJuego_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_InicializarJuego_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_InicializarJuego_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayFacade_InicializarJuego_Statics::GameplayFacade_eventInicializarJuego_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayFacade_InicializarJuego()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_InicializarJuego_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execInicializarJuego)
{
	P_GET_OBJECT(UWorld,Z_Param_Mundo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InicializarJuego(Z_Param_Mundo);
	P_NATIVE_END;
}
// End Class UGameplayFacade Function InicializarJuego

// Begin Class UGameplayFacade Function IniciarJuego
struct Z_Construct_UFunction_UGameplayFacade_IniciarJuego_Statics
{
	struct GameplayFacade_eventIniciarJuego_Parms
	{
		int32 NumJugadores;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumJugadores;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayFacade_IniciarJuego_Statics::NewProp_NumJugadores = { "NumJugadores", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventIniciarJuego_Parms, NumJugadores), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFacade_IniciarJuego_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_IniciarJuego_Statics::NewProp_NumJugadores,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_IniciarJuego_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_IniciarJuego_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "IniciarJuego", nullptr, nullptr, Z_Construct_UFunction_UGameplayFacade_IniciarJuego_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_IniciarJuego_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayFacade_IniciarJuego_Statics::GameplayFacade_eventIniciarJuego_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_IniciarJuego_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_IniciarJuego_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayFacade_IniciarJuego_Statics::GameplayFacade_eventIniciarJuego_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayFacade_IniciarJuego()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_IniciarJuego_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execIniciarJuego)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumJugadores);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IniciarJuego(Z_Param_NumJugadores);
	P_NATIVE_END;
}
// End Class UGameplayFacade Function IniciarJuego

// Begin Class UGameplayFacade Function MatarJugador
struct Z_Construct_UFunction_UGameplayFacade_MatarJugador_Statics
{
	struct GameplayFacade_eventMatarJugador_Parms
	{
		AFinalBomberManCharacter* Jugador;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Jugador;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayFacade_MatarJugador_Statics::NewProp_Jugador = { "Jugador", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventMatarJugador_Parms, Jugador), Z_Construct_UClass_AFinalBomberManCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFacade_MatarJugador_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_MatarJugador_Statics::NewProp_Jugador,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_MatarJugador_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_MatarJugador_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "MatarJugador", nullptr, nullptr, Z_Construct_UFunction_UGameplayFacade_MatarJugador_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_MatarJugador_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayFacade_MatarJugador_Statics::GameplayFacade_eventMatarJugador_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_MatarJugador_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_MatarJugador_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayFacade_MatarJugador_Statics::GameplayFacade_eventMatarJugador_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayFacade_MatarJugador()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_MatarJugador_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execMatarJugador)
{
	P_GET_OBJECT(AFinalBomberManCharacter,Z_Param_Jugador);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MatarJugador(Z_Param_Jugador);
	P_NATIVE_END;
}
// End Class UGameplayFacade Function MatarJugador

// Begin Class UGameplayFacade Function MostrarMensaje
struct Z_Construct_UFunction_UGameplayFacade_MostrarMensaje_Statics
{
	struct GameplayFacade_eventMostrarMensaje_Parms
	{
		FString Mensaje;
		float Duracion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gesti\xc3\xb3n de UI\n" },
#endif
		{ "CPP_Default_Duracion", "3.000000" },
		{ "ModuleRelativePath", "GameplayFacade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gesti\xc3\xb3n de UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mensaje_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Mensaje;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duracion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameplayFacade_MostrarMensaje_Statics::NewProp_Mensaje = { "Mensaje", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventMostrarMensaje_Parms, Mensaje), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mensaje_MetaData), NewProp_Mensaje_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayFacade_MostrarMensaje_Statics::NewProp_Duracion = { "Duracion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventMostrarMensaje_Parms, Duracion), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFacade_MostrarMensaje_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_MostrarMensaje_Statics::NewProp_Mensaje,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_MostrarMensaje_Statics::NewProp_Duracion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_MostrarMensaje_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_MostrarMensaje_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "MostrarMensaje", nullptr, nullptr, Z_Construct_UFunction_UGameplayFacade_MostrarMensaje_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_MostrarMensaje_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayFacade_MostrarMensaje_Statics::GameplayFacade_eventMostrarMensaje_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_MostrarMensaje_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_MostrarMensaje_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayFacade_MostrarMensaje_Statics::GameplayFacade_eventMostrarMensaje_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayFacade_MostrarMensaje()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_MostrarMensaje_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execMostrarMensaje)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Mensaje);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duracion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MostrarMensaje(Z_Param_Mensaje,Z_Param_Duracion);
	P_NATIVE_END;
}
// End Class UGameplayFacade Function MostrarMensaje

// Begin Class UGameplayFacade Function MostrarPantallaMuerte
struct Z_Construct_UFunction_UGameplayFacade_MostrarPantallaMuerte_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_MostrarPantallaMuerte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "MostrarPantallaMuerte", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_MostrarPantallaMuerte_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_MostrarPantallaMuerte_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameplayFacade_MostrarPantallaMuerte()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_MostrarPantallaMuerte_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execMostrarPantallaMuerte)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MostrarPantallaMuerte();
	P_NATIVE_END;
}
// End Class UGameplayFacade Function MostrarPantallaMuerte

// Begin Class UGameplayFacade Function MostrarPantallaVictoria
struct Z_Construct_UFunction_UGameplayFacade_MostrarPantallaVictoria_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_MostrarPantallaVictoria_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "MostrarPantallaVictoria", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_MostrarPantallaVictoria_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_MostrarPantallaVictoria_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameplayFacade_MostrarPantallaVictoria()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_MostrarPantallaVictoria_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execMostrarPantallaVictoria)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MostrarPantallaVictoria();
	P_NATIVE_END;
}
// End Class UGameplayFacade Function MostrarPantallaVictoria

// Begin Class UGameplayFacade Function ObtenerEnemigosVivos
struct Z_Construct_UFunction_UGameplayFacade_ObtenerEnemigosVivos_Statics
{
	struct GameplayFacade_eventObtenerEnemigosVivos_Parms
	{
		TArray<AEnemigo*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayFacade_ObtenerEnemigosVivos_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEnemigo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayFacade_ObtenerEnemigosVivos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventObtenerEnemigosVivos_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFacade_ObtenerEnemigosVivos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_ObtenerEnemigosVivos_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_ObtenerEnemigosVivos_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_ObtenerEnemigosVivos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_ObtenerEnemigosVivos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "ObtenerEnemigosVivos", nullptr, nullptr, Z_Construct_UFunction_UGameplayFacade_ObtenerEnemigosVivos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_ObtenerEnemigosVivos_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayFacade_ObtenerEnemigosVivos_Statics::GameplayFacade_eventObtenerEnemigosVivos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_ObtenerEnemigosVivos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_ObtenerEnemigosVivos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayFacade_ObtenerEnemigosVivos_Statics::GameplayFacade_eventObtenerEnemigosVivos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayFacade_ObtenerEnemigosVivos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_ObtenerEnemigosVivos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execObtenerEnemigosVivos)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AEnemigo*>*)Z_Param__Result=P_THIS->ObtenerEnemigosVivos();
	P_NATIVE_END;
}
// End Class UGameplayFacade Function ObtenerEnemigosVivos

// Begin Class UGameplayFacade Function ObtenerGameEventManager
struct Z_Construct_UFunction_UGameplayFacade_ObtenerGameEventManager_Statics
{
	struct GameplayFacade_eventObtenerGameEventManager_Parms
	{
		UGameEventManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Acceso a sistemas internos\n" },
#endif
		{ "ModuleRelativePath", "GameplayFacade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Acceso a sistemas internos" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayFacade_ObtenerGameEventManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventObtenerGameEventManager_Parms, ReturnValue), Z_Construct_UClass_UGameEventManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFacade_ObtenerGameEventManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_ObtenerGameEventManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_ObtenerGameEventManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_ObtenerGameEventManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "ObtenerGameEventManager", nullptr, nullptr, Z_Construct_UFunction_UGameplayFacade_ObtenerGameEventManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_ObtenerGameEventManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayFacade_ObtenerGameEventManager_Statics::GameplayFacade_eventObtenerGameEventManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_ObtenerGameEventManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_ObtenerGameEventManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayFacade_ObtenerGameEventManager_Statics::GameplayFacade_eventObtenerGameEventManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayFacade_ObtenerGameEventManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_ObtenerGameEventManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execObtenerGameEventManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGameEventManager**)Z_Param__Result=P_THIS->ObtenerGameEventManager();
	P_NATIVE_END;
}
// End Class UGameplayFacade Function ObtenerGameEventManager

// Begin Class UGameplayFacade Function ObtenerNivelActual
struct Z_Construct_UFunction_UGameplayFacade_ObtenerNivelActual_Statics
{
	struct GameplayFacade_eventObtenerNivelActual_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayFacade_ObtenerNivelActual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventObtenerNivelActual_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFacade_ObtenerNivelActual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_ObtenerNivelActual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_ObtenerNivelActual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_ObtenerNivelActual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "ObtenerNivelActual", nullptr, nullptr, Z_Construct_UFunction_UGameplayFacade_ObtenerNivelActual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_ObtenerNivelActual_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayFacade_ObtenerNivelActual_Statics::GameplayFacade_eventObtenerNivelActual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_ObtenerNivelActual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_ObtenerNivelActual_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayFacade_ObtenerNivelActual_Statics::GameplayFacade_eventObtenerNivelActual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayFacade_ObtenerNivelActual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_ObtenerNivelActual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execObtenerNivelActual)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ObtenerNivelActual();
	P_NATIVE_END;
}
// End Class UGameplayFacade Function ObtenerNivelActual

// Begin Class UGameplayFacade Function ObtenerPuntuacionActual
struct Z_Construct_UFunction_UGameplayFacade_ObtenerPuntuacionActual_Statics
{
	struct GameplayFacade_eventObtenerPuntuacionActual_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Informaci\xc3\xb3n del juego\n" },
#endif
		{ "ModuleRelativePath", "GameplayFacade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Informaci\xc3\xb3n del juego" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayFacade_ObtenerPuntuacionActual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventObtenerPuntuacionActual_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFacade_ObtenerPuntuacionActual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_ObtenerPuntuacionActual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_ObtenerPuntuacionActual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_ObtenerPuntuacionActual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "ObtenerPuntuacionActual", nullptr, nullptr, Z_Construct_UFunction_UGameplayFacade_ObtenerPuntuacionActual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_ObtenerPuntuacionActual_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayFacade_ObtenerPuntuacionActual_Statics::GameplayFacade_eventObtenerPuntuacionActual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_ObtenerPuntuacionActual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_ObtenerPuntuacionActual_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayFacade_ObtenerPuntuacionActual_Statics::GameplayFacade_eventObtenerPuntuacionActual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayFacade_ObtenerPuntuacionActual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_ObtenerPuntuacionActual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execObtenerPuntuacionActual)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ObtenerPuntuacionActual();
	P_NATIVE_END;
}
// End Class UGameplayFacade Function ObtenerPuntuacionActual

// Begin Class UGameplayFacade Function PausarJuego
struct Z_Construct_UFunction_UGameplayFacade_PausarJuego_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_PausarJuego_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "PausarJuego", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_PausarJuego_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_PausarJuego_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameplayFacade_PausarJuego()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_PausarJuego_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execPausarJuego)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PausarJuego();
	P_NATIVE_END;
}
// End Class UGameplayFacade Function PausarJuego

// Begin Class UGameplayFacade Function ReanudarJuego
struct Z_Construct_UFunction_UGameplayFacade_ReanudarJuego_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_ReanudarJuego_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "ReanudarJuego", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_ReanudarJuego_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_ReanudarJuego_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameplayFacade_ReanudarJuego()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_ReanudarJuego_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execReanudarJuego)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReanudarJuego();
	P_NATIVE_END;
}
// End Class UGameplayFacade Function ReanudarJuego

// Begin Class UGameplayFacade Function ReiniciarNivel
struct Z_Construct_UFunction_UGameplayFacade_ReiniciarNivel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_ReiniciarNivel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "ReiniciarNivel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_ReiniciarNivel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_ReiniciarNivel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameplayFacade_ReiniciarNivel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_ReiniciarNivel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execReiniciarNivel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReiniciarNivel();
	P_NATIVE_END;
}
// End Class UGameplayFacade Function ReiniciarNivel

// Begin Class UGameplayFacade Function RemoverPowerUp
struct Z_Construct_UFunction_UGameplayFacade_RemoverPowerUp_Statics
{
	struct GameplayFacade_eventRemoverPowerUp_Parms
	{
		AFinalBomberManCharacter* Jugador;
		ETipoPowerUp Tipo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Jugador;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Tipo_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Tipo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayFacade_RemoverPowerUp_Statics::NewProp_Jugador = { "Jugador", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventRemoverPowerUp_Parms, Jugador), Z_Construct_UClass_AFinalBomberManCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayFacade_RemoverPowerUp_Statics::NewProp_Tipo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameplayFacade_RemoverPowerUp_Statics::NewProp_Tipo = { "Tipo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventRemoverPowerUp_Parms, Tipo), Z_Construct_UEnum_FinalBomberMan_ETipoPowerUp, METADATA_PARAMS(0, nullptr) }; // 1306924834
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFacade_RemoverPowerUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_RemoverPowerUp_Statics::NewProp_Jugador,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_RemoverPowerUp_Statics::NewProp_Tipo_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_RemoverPowerUp_Statics::NewProp_Tipo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_RemoverPowerUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_RemoverPowerUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "RemoverPowerUp", nullptr, nullptr, Z_Construct_UFunction_UGameplayFacade_RemoverPowerUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_RemoverPowerUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayFacade_RemoverPowerUp_Statics::GameplayFacade_eventRemoverPowerUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_RemoverPowerUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_RemoverPowerUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayFacade_RemoverPowerUp_Statics::GameplayFacade_eventRemoverPowerUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayFacade_RemoverPowerUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_RemoverPowerUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execRemoverPowerUp)
{
	P_GET_OBJECT(AFinalBomberManCharacter,Z_Param_Jugador);
	P_GET_ENUM(ETipoPowerUp,Z_Param_Tipo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoverPowerUp(Z_Param_Jugador,ETipoPowerUp(Z_Param_Tipo));
	P_NATIVE_END;
}
// End Class UGameplayFacade Function RemoverPowerUp

// Begin Class UGameplayFacade Function RespawnearJugador
struct Z_Construct_UFunction_UGameplayFacade_RespawnearJugador_Statics
{
	struct GameplayFacade_eventRespawnearJugador_Parms
	{
		AFinalBomberManCharacter* Jugador;
		FVector2D Posicion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Jugador;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posicion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayFacade_RespawnearJugador_Statics::NewProp_Jugador = { "Jugador", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventRespawnearJugador_Parms, Jugador), Z_Construct_UClass_AFinalBomberManCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayFacade_RespawnearJugador_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventRespawnearJugador_Parms, Posicion), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFacade_RespawnearJugador_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_RespawnearJugador_Statics::NewProp_Jugador,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_RespawnearJugador_Statics::NewProp_Posicion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_RespawnearJugador_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_RespawnearJugador_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "RespawnearJugador", nullptr, nullptr, Z_Construct_UFunction_UGameplayFacade_RespawnearJugador_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_RespawnearJugador_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayFacade_RespawnearJugador_Statics::GameplayFacade_eventRespawnearJugador_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_RespawnearJugador_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_RespawnearJugador_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayFacade_RespawnearJugador_Statics::GameplayFacade_eventRespawnearJugador_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayFacade_RespawnearJugador()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_RespawnearJugador_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execRespawnearJugador)
{
	P_GET_OBJECT(AFinalBomberManCharacter,Z_Param_Jugador);
	P_GET_STRUCT(FVector2D,Z_Param_Posicion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RespawnearJugador(Z_Param_Jugador,Z_Param_Posicion);
	P_NATIVE_END;
}
// End Class UGameplayFacade Function RespawnearJugador

// Begin Class UGameplayFacade Function SpawnearEnemigo
struct Z_Construct_UFunction_UGameplayFacade_SpawnearEnemigo_Statics
{
	struct GameplayFacade_eventSpawnearEnemigo_Parms
	{
		ETipoEnemigo Tipo;
		FVector2D Posicion;
		AEnemigo* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gesti\xc3\xb3n de enemigos\n" },
#endif
		{ "ModuleRelativePath", "GameplayFacade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gesti\xc3\xb3n de enemigos" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Tipo_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Tipo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posicion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayFacade_SpawnearEnemigo_Statics::NewProp_Tipo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameplayFacade_SpawnearEnemigo_Statics::NewProp_Tipo = { "Tipo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventSpawnearEnemigo_Parms, Tipo), Z_Construct_UEnum_FinalBomberMan_ETipoEnemigo, METADATA_PARAMS(0, nullptr) }; // 1003724518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayFacade_SpawnearEnemigo_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventSpawnearEnemigo_Parms, Posicion), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayFacade_SpawnearEnemigo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayFacade_eventSpawnearEnemigo_Parms, ReturnValue), Z_Construct_UClass_AEnemigo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayFacade_SpawnearEnemigo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_SpawnearEnemigo_Statics::NewProp_Tipo_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_SpawnearEnemigo_Statics::NewProp_Tipo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_SpawnearEnemigo_Statics::NewProp_Posicion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayFacade_SpawnearEnemigo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_SpawnearEnemigo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_SpawnearEnemigo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "SpawnearEnemigo", nullptr, nullptr, Z_Construct_UFunction_UGameplayFacade_SpawnearEnemigo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_SpawnearEnemigo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayFacade_SpawnearEnemigo_Statics::GameplayFacade_eventSpawnearEnemigo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_SpawnearEnemigo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_SpawnearEnemigo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayFacade_SpawnearEnemigo_Statics::GameplayFacade_eventSpawnearEnemigo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayFacade_SpawnearEnemigo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_SpawnearEnemigo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execSpawnearEnemigo)
{
	P_GET_ENUM(ETipoEnemigo,Z_Param_Tipo);
	P_GET_STRUCT(FVector2D,Z_Param_Posicion);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AEnemigo**)Z_Param__Result=P_THIS->SpawnearEnemigo(ETipoEnemigo(Z_Param_Tipo),Z_Param_Posicion);
	P_NATIVE_END;
}
// End Class UGameplayFacade Function SpawnearEnemigo

// Begin Class UGameplayFacade Function TerminarJuego
struct Z_Construct_UFunction_UGameplayFacade_TerminarJuego_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Facade" },
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayFacade_TerminarJuego_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayFacade, nullptr, "TerminarJuego", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayFacade_TerminarJuego_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayFacade_TerminarJuego_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameplayFacade_TerminarJuego()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayFacade_TerminarJuego_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayFacade::execTerminarJuego)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TerminarJuego();
	P_NATIVE_END;
}
// End Class UGameplayFacade Function TerminarJuego

// Begin Class UGameplayFacade
void UGameplayFacade::StaticRegisterNativesUGameplayFacade()
{
	UClass* Class = UGameplayFacade::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActualizarPuntuacion", &UGameplayFacade::execActualizarPuntuacion },
		{ "AplicarPowerUp", &UGameplayFacade::execAplicarPowerUp },
		{ "CambiarNivelPorPuntos", &UGameplayFacade::execCambiarNivelPorPuntos },
		{ "CancelarBomba", &UGameplayFacade::execCancelarBomba },
		{ "CargarNivel", &UGameplayFacade::execCargarNivel },
		{ "ColocarBomba", &UGameplayFacade::execColocarBomba },
		{ "CompletarNivel", &UGameplayFacade::execCompletarNivel },
		{ "CrearEfectoDestruccion", &UGameplayFacade::execCrearEfectoDestruccion },
		{ "CrearEfectoExplosion", &UGameplayFacade::execCrearEfectoExplosion },
		{ "CrearPowerUp", &UGameplayFacade::execCrearPowerUp },
		{ "DetonarBomba", &UGameplayFacade::execDetonarBomba },
		{ "EliminarEnemigo", &UGameplayFacade::execEliminarEnemigo },
		{ "EstaJuegoPausado", &UGameplayFacade::execEstaJuegoPausado },
		{ "EstaJuegoTerminado", &UGameplayFacade::execEstaJuegoTerminado },
		{ "HerirJugador", &UGameplayFacade::execHerirJugador },
		{ "InicializarJuego", &UGameplayFacade::execInicializarJuego },
		{ "IniciarJuego", &UGameplayFacade::execIniciarJuego },
		{ "MatarJugador", &UGameplayFacade::execMatarJugador },
		{ "MostrarMensaje", &UGameplayFacade::execMostrarMensaje },
		{ "MostrarPantallaMuerte", &UGameplayFacade::execMostrarPantallaMuerte },
		{ "MostrarPantallaVictoria", &UGameplayFacade::execMostrarPantallaVictoria },
		{ "ObtenerEnemigosVivos", &UGameplayFacade::execObtenerEnemigosVivos },
		{ "ObtenerGameEventManager", &UGameplayFacade::execObtenerGameEventManager },
		{ "ObtenerNivelActual", &UGameplayFacade::execObtenerNivelActual },
		{ "ObtenerPuntuacionActual", &UGameplayFacade::execObtenerPuntuacionActual },
		{ "PausarJuego", &UGameplayFacade::execPausarJuego },
		{ "ReanudarJuego", &UGameplayFacade::execReanudarJuego },
		{ "ReiniciarNivel", &UGameplayFacade::execReiniciarNivel },
		{ "RemoverPowerUp", &UGameplayFacade::execRemoverPowerUp },
		{ "RespawnearJugador", &UGameplayFacade::execRespawnearJugador },
		{ "SpawnearEnemigo", &UGameplayFacade::execSpawnearEnemigo },
		{ "TerminarJuego", &UGameplayFacade::execTerminarJuego },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayFacade);
UClass* Z_Construct_UClass_UGameplayFacade_NoRegister()
{
	return UGameplayFacade::StaticClass();
}
struct Z_Construct_UClass_UGameplayFacade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameplayFacade.h" },
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MundoActual_MetaData[] = {
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstructorMapa_MetaData[] = {
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectorNiveles_MetaData[] = {
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameEventManager_MetaData[] = {
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VFXManager_MetaData[] = {
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIManager_MetaData[] = {
		{ "ModuleRelativePath", "GameplayFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MundoActual;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstructorMapa;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DirectorNiveles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameEventManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VFXManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UIManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayFacade_ActualizarPuntuacion, "ActualizarPuntuacion" }, // 4146779596
		{ &Z_Construct_UFunction_UGameplayFacade_AplicarPowerUp, "AplicarPowerUp" }, // 2619836584
		{ &Z_Construct_UFunction_UGameplayFacade_CambiarNivelPorPuntos, "CambiarNivelPorPuntos" }, // 793227288
		{ &Z_Construct_UFunction_UGameplayFacade_CancelarBomba, "CancelarBomba" }, // 1425693702
		{ &Z_Construct_UFunction_UGameplayFacade_CargarNivel, "CargarNivel" }, // 1455691279
		{ &Z_Construct_UFunction_UGameplayFacade_ColocarBomba, "ColocarBomba" }, // 3597026068
		{ &Z_Construct_UFunction_UGameplayFacade_CompletarNivel, "CompletarNivel" }, // 914953922
		{ &Z_Construct_UFunction_UGameplayFacade_CrearEfectoDestruccion, "CrearEfectoDestruccion" }, // 898329990
		{ &Z_Construct_UFunction_UGameplayFacade_CrearEfectoExplosion, "CrearEfectoExplosion" }, // 546972015
		{ &Z_Construct_UFunction_UGameplayFacade_CrearPowerUp, "CrearPowerUp" }, // 2585755718
		{ &Z_Construct_UFunction_UGameplayFacade_DetonarBomba, "DetonarBomba" }, // 709207909
		{ &Z_Construct_UFunction_UGameplayFacade_EliminarEnemigo, "EliminarEnemigo" }, // 3843041669
		{ &Z_Construct_UFunction_UGameplayFacade_EstaJuegoPausado, "EstaJuegoPausado" }, // 28246136
		{ &Z_Construct_UFunction_UGameplayFacade_EstaJuegoTerminado, "EstaJuegoTerminado" }, // 3517693535
		{ &Z_Construct_UFunction_UGameplayFacade_HerirJugador, "HerirJugador" }, // 3796008163
		{ &Z_Construct_UFunction_UGameplayFacade_InicializarJuego, "InicializarJuego" }, // 2662623484
		{ &Z_Construct_UFunction_UGameplayFacade_IniciarJuego, "IniciarJuego" }, // 2856281988
		{ &Z_Construct_UFunction_UGameplayFacade_MatarJugador, "MatarJugador" }, // 1053617350
		{ &Z_Construct_UFunction_UGameplayFacade_MostrarMensaje, "MostrarMensaje" }, // 4003550621
		{ &Z_Construct_UFunction_UGameplayFacade_MostrarPantallaMuerte, "MostrarPantallaMuerte" }, // 2279355862
		{ &Z_Construct_UFunction_UGameplayFacade_MostrarPantallaVictoria, "MostrarPantallaVictoria" }, // 1718141742
		{ &Z_Construct_UFunction_UGameplayFacade_ObtenerEnemigosVivos, "ObtenerEnemigosVivos" }, // 3770329250
		{ &Z_Construct_UFunction_UGameplayFacade_ObtenerGameEventManager, "ObtenerGameEventManager" }, // 2296863716
		{ &Z_Construct_UFunction_UGameplayFacade_ObtenerNivelActual, "ObtenerNivelActual" }, // 2886573849
		{ &Z_Construct_UFunction_UGameplayFacade_ObtenerPuntuacionActual, "ObtenerPuntuacionActual" }, // 3696564784
		{ &Z_Construct_UFunction_UGameplayFacade_PausarJuego, "PausarJuego" }, // 3462935575
		{ &Z_Construct_UFunction_UGameplayFacade_ReanudarJuego, "ReanudarJuego" }, // 485089979
		{ &Z_Construct_UFunction_UGameplayFacade_ReiniciarNivel, "ReiniciarNivel" }, // 105688552
		{ &Z_Construct_UFunction_UGameplayFacade_RemoverPowerUp, "RemoverPowerUp" }, // 3494511560
		{ &Z_Construct_UFunction_UGameplayFacade_RespawnearJugador, "RespawnearJugador" }, // 1124613479
		{ &Z_Construct_UFunction_UGameplayFacade_SpawnearEnemigo, "SpawnearEnemigo" }, // 1410998730
		{ &Z_Construct_UFunction_UGameplayFacade_TerminarJuego, "TerminarJuego" }, // 2854566201
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayFacade>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayFacade_Statics::NewProp_MundoActual = { "MundoActual", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayFacade, MundoActual), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MundoActual_MetaData), NewProp_MundoActual_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayFacade_Statics::NewProp_ConstructorMapa = { "ConstructorMapa", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayFacade, ConstructorMapa), Z_Construct_UClass_UConstructorMapa_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstructorMapa_MetaData), NewProp_ConstructorMapa_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayFacade_Statics::NewProp_DirectorNiveles = { "DirectorNiveles", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayFacade, DirectorNiveles), Z_Construct_UClass_UDirectorNiveles_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectorNiveles_MetaData), NewProp_DirectorNiveles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayFacade_Statics::NewProp_GameEventManager = { "GameEventManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayFacade, GameEventManager), Z_Construct_UClass_UGameEventManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameEventManager_MetaData), NewProp_GameEventManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayFacade_Statics::NewProp_VFXManager = { "VFXManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayFacade, VFXManager), Z_Construct_UClass_UVFXManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VFXManager_MetaData), NewProp_VFXManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayFacade_Statics::NewProp_UIManager = { "UIManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayFacade, UIManager), Z_Construct_UClass_UUIManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIManager_MetaData), NewProp_UIManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayFacade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayFacade_Statics::NewProp_MundoActual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayFacade_Statics::NewProp_ConstructorMapa,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayFacade_Statics::NewProp_DirectorNiveles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayFacade_Statics::NewProp_GameEventManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayFacade_Statics::NewProp_VFXManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayFacade_Statics::NewProp_UIManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayFacade_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayFacade_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalBomberMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayFacade_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayFacade_Statics::ClassParams = {
	&UGameplayFacade::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameplayFacade_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayFacade_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayFacade_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayFacade_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayFacade()
{
	if (!Z_Registration_Info_UClass_UGameplayFacade.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayFacade.OuterSingleton, Z_Construct_UClass_UGameplayFacade_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayFacade.OuterSingleton;
}
template<> FINALBOMBERMAN_API UClass* StaticClass<UGameplayFacade>()
{
	return UGameplayFacade::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayFacade);
UGameplayFacade::~UGameplayFacade() {}
// End Class UGameplayFacade

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_GameplayFacade_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayFacade, UGameplayFacade::StaticClass, TEXT("UGameplayFacade"), &Z_Registration_Info_UClass_UGameplayFacade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayFacade), 1669540875U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_GameplayFacade_h_4052405747(TEXT("/Script/FinalBomberMan"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_GameplayFacade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_GameplayFacade_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
