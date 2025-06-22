// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalBomberMan/UIManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UIGameObserver_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UUIManager();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UUIManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalBomberMan();
// End Cross Module References

// Begin Class UUIManager Function ActualizarContadorBombas
struct Z_Construct_UFunction_UUIManager_ActualizarContadorBombas_Statics
{
	struct UIManager_eventActualizarContadorBombas_Parms
	{
		int32 BombasDisponibles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UI methods\n" },
#endif
		{ "ModuleRelativePath", "UIManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI methods" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BombasDisponibles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIManager_ActualizarContadorBombas_Statics::NewProp_BombasDisponibles = { "BombasDisponibles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManager_eventActualizarContadorBombas_Parms, BombasDisponibles), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManager_ActualizarContadorBombas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManager_ActualizarContadorBombas_Statics::NewProp_BombasDisponibles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_ActualizarContadorBombas_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManager_ActualizarContadorBombas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIManager, nullptr, "ActualizarContadorBombas", nullptr, nullptr, Z_Construct_UFunction_UUIManager_ActualizarContadorBombas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_ActualizarContadorBombas_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIManager_ActualizarContadorBombas_Statics::UIManager_eventActualizarContadorBombas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_ActualizarContadorBombas_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManager_ActualizarContadorBombas_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUIManager_ActualizarContadorBombas_Statics::UIManager_eventActualizarContadorBombas_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManager_ActualizarContadorBombas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManager_ActualizarContadorBombas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManager::execActualizarContadorBombas)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_BombasDisponibles);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActualizarContadorBombas(Z_Param_BombasDisponibles);
	P_NATIVE_END;
}
// End Class UUIManager Function ActualizarContadorBombas

// Begin Class UUIManager Function ActualizarContadorEnemigos
struct Z_Construct_UFunction_UUIManager_ActualizarContadorEnemigos_Statics
{
	struct UIManager_eventActualizarContadorEnemigos_Parms
	{
		int32 EnemigosRestantes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EnemigosRestantes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIManager_ActualizarContadorEnemigos_Statics::NewProp_EnemigosRestantes = { "EnemigosRestantes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManager_eventActualizarContadorEnemigos_Parms, EnemigosRestantes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManager_ActualizarContadorEnemigos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManager_ActualizarContadorEnemigos_Statics::NewProp_EnemigosRestantes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_ActualizarContadorEnemigos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManager_ActualizarContadorEnemigos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIManager, nullptr, "ActualizarContadorEnemigos", nullptr, nullptr, Z_Construct_UFunction_UUIManager_ActualizarContadorEnemigos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_ActualizarContadorEnemigos_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIManager_ActualizarContadorEnemigos_Statics::UIManager_eventActualizarContadorEnemigos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_ActualizarContadorEnemigos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManager_ActualizarContadorEnemigos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUIManager_ActualizarContadorEnemigos_Statics::UIManager_eventActualizarContadorEnemigos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManager_ActualizarContadorEnemigos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManager_ActualizarContadorEnemigos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManager::execActualizarContadorEnemigos)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_EnemigosRestantes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActualizarContadorEnemigos(Z_Param_EnemigosRestantes);
	P_NATIVE_END;
}
// End Class UUIManager Function ActualizarContadorEnemigos

// Begin Class UUIManager Function ActualizarPuntuacion
struct Z_Construct_UFunction_UUIManager_ActualizarPuntuacion_Statics
{
	struct UIManager_eventActualizarPuntuacion_Parms
	{
		int32 NuevaPuntuacion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NuevaPuntuacion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIManager_ActualizarPuntuacion_Statics::NewProp_NuevaPuntuacion = { "NuevaPuntuacion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManager_eventActualizarPuntuacion_Parms, NuevaPuntuacion), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManager_ActualizarPuntuacion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManager_ActualizarPuntuacion_Statics::NewProp_NuevaPuntuacion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_ActualizarPuntuacion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManager_ActualizarPuntuacion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIManager, nullptr, "ActualizarPuntuacion", nullptr, nullptr, Z_Construct_UFunction_UUIManager_ActualizarPuntuacion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_ActualizarPuntuacion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIManager_ActualizarPuntuacion_Statics::UIManager_eventActualizarPuntuacion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_ActualizarPuntuacion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManager_ActualizarPuntuacion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUIManager_ActualizarPuntuacion_Statics::UIManager_eventActualizarPuntuacion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManager_ActualizarPuntuacion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManager_ActualizarPuntuacion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManager::execActualizarPuntuacion)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NuevaPuntuacion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActualizarPuntuacion(Z_Param_NuevaPuntuacion);
	P_NATIVE_END;
}
// End Class UUIManager Function ActualizarPuntuacion

// Begin Class UUIManager Function ActualizarVidaJugador
struct Z_Construct_UFunction_UUIManager_ActualizarVidaJugador_Statics
{
	struct UIManager_eventActualizarVidaJugador_Parms
	{
		int32 VidaActual;
		int32 VidaMaxima;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_VidaActual;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VidaMaxima;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIManager_ActualizarVidaJugador_Statics::NewProp_VidaActual = { "VidaActual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManager_eventActualizarVidaJugador_Parms, VidaActual), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIManager_ActualizarVidaJugador_Statics::NewProp_VidaMaxima = { "VidaMaxima", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManager_eventActualizarVidaJugador_Parms, VidaMaxima), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManager_ActualizarVidaJugador_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManager_ActualizarVidaJugador_Statics::NewProp_VidaActual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManager_ActualizarVidaJugador_Statics::NewProp_VidaMaxima,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_ActualizarVidaJugador_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManager_ActualizarVidaJugador_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIManager, nullptr, "ActualizarVidaJugador", nullptr, nullptr, Z_Construct_UFunction_UUIManager_ActualizarVidaJugador_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_ActualizarVidaJugador_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIManager_ActualizarVidaJugador_Statics::UIManager_eventActualizarVidaJugador_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_ActualizarVidaJugador_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManager_ActualizarVidaJugador_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUIManager_ActualizarVidaJugador_Statics::UIManager_eventActualizarVidaJugador_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManager_ActualizarVidaJugador()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManager_ActualizarVidaJugador_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManager::execActualizarVidaJugador)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_VidaActual);
	P_GET_PROPERTY(FIntProperty,Z_Param_VidaMaxima);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActualizarVidaJugador(Z_Param_VidaActual,Z_Param_VidaMaxima);
	P_NATIVE_END;
}
// End Class UUIManager Function ActualizarVidaJugador

// Begin Class UUIManager Function MostrarMensaje
struct Z_Construct_UFunction_UUIManager_MostrarMensaje_Statics
{
	struct UIManager_eventMostrarMensaje_Parms
	{
		FString Mensaje;
		float Duracion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "CPP_Default_Duracion", "3.000000" },
		{ "ModuleRelativePath", "UIManager.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUIManager_MostrarMensaje_Statics::NewProp_Mensaje = { "Mensaje", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManager_eventMostrarMensaje_Parms, Mensaje), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mensaje_MetaData), NewProp_Mensaje_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUIManager_MostrarMensaje_Statics::NewProp_Duracion = { "Duracion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManager_eventMostrarMensaje_Parms, Duracion), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManager_MostrarMensaje_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManager_MostrarMensaje_Statics::NewProp_Mensaje,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManager_MostrarMensaje_Statics::NewProp_Duracion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_MostrarMensaje_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManager_MostrarMensaje_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIManager, nullptr, "MostrarMensaje", nullptr, nullptr, Z_Construct_UFunction_UUIManager_MostrarMensaje_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_MostrarMensaje_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIManager_MostrarMensaje_Statics::UIManager_eventMostrarMensaje_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_MostrarMensaje_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManager_MostrarMensaje_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUIManager_MostrarMensaje_Statics::UIManager_eventMostrarMensaje_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManager_MostrarMensaje()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManager_MostrarMensaje_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManager::execMostrarMensaje)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Mensaje);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duracion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MostrarMensaje(Z_Param_Mensaje,Z_Param_Duracion);
	P_NATIVE_END;
}
// End Class UUIManager Function MostrarMensaje

// Begin Class UUIManager Function MostrarPantallaMuerte
struct Z_Construct_UFunction_UUIManager_MostrarPantallaMuerte_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManager_MostrarPantallaMuerte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIManager, nullptr, "MostrarPantallaMuerte", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_MostrarPantallaMuerte_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManager_MostrarPantallaMuerte_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUIManager_MostrarPantallaMuerte()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManager_MostrarPantallaMuerte_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManager::execMostrarPantallaMuerte)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MostrarPantallaMuerte();
	P_NATIVE_END;
}
// End Class UUIManager Function MostrarPantallaMuerte

// Begin Class UUIManager Function MostrarPantallaVictoria
struct Z_Construct_UFunction_UUIManager_MostrarPantallaVictoria_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManager_MostrarPantallaVictoria_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIManager, nullptr, "MostrarPantallaVictoria", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_MostrarPantallaVictoria_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManager_MostrarPantallaVictoria_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUIManager_MostrarPantallaVictoria()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManager_MostrarPantallaVictoria_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManager::execMostrarPantallaVictoria)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MostrarPantallaVictoria();
	P_NATIVE_END;
}
// End Class UUIManager Function MostrarPantallaVictoria

// Begin Class UUIManager Function MostrarPowerUpRecogido
struct Z_Construct_UFunction_UUIManager_MostrarPowerUpRecogido_Statics
{
	struct UIManager_eventMostrarPowerUpRecogido_Parms
	{
		FString TipoPowerUp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipoPowerUp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TipoPowerUp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUIManager_MostrarPowerUpRecogido_Statics::NewProp_TipoPowerUp = { "TipoPowerUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIManager_eventMostrarPowerUpRecogido_Parms, TipoPowerUp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipoPowerUp_MetaData), NewProp_TipoPowerUp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIManager_MostrarPowerUpRecogido_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIManager_MostrarPowerUpRecogido_Statics::NewProp_TipoPowerUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_MostrarPowerUpRecogido_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIManager_MostrarPowerUpRecogido_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIManager, nullptr, "MostrarPowerUpRecogido", nullptr, nullptr, Z_Construct_UFunction_UUIManager_MostrarPowerUpRecogido_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_MostrarPowerUpRecogido_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIManager_MostrarPowerUpRecogido_Statics::UIManager_eventMostrarPowerUpRecogido_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIManager_MostrarPowerUpRecogido_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIManager_MostrarPowerUpRecogido_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUIManager_MostrarPowerUpRecogido_Statics::UIManager_eventMostrarPowerUpRecogido_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIManager_MostrarPowerUpRecogido()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIManager_MostrarPowerUpRecogido_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIManager::execMostrarPowerUpRecogido)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_TipoPowerUp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MostrarPowerUpRecogido(Z_Param_TipoPowerUp);
	P_NATIVE_END;
}
// End Class UUIManager Function MostrarPowerUpRecogido

// Begin Class UUIManager
void UUIManager::StaticRegisterNativesUUIManager()
{
	UClass* Class = UUIManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActualizarContadorBombas", &UUIManager::execActualizarContadorBombas },
		{ "ActualizarContadorEnemigos", &UUIManager::execActualizarContadorEnemigos },
		{ "ActualizarPuntuacion", &UUIManager::execActualizarPuntuacion },
		{ "ActualizarVidaJugador", &UUIManager::execActualizarVidaJugador },
		{ "MostrarMensaje", &UUIManager::execMostrarMensaje },
		{ "MostrarPantallaMuerte", &UUIManager::execMostrarPantallaMuerte },
		{ "MostrarPantallaVictoria", &UUIManager::execMostrarPantallaVictoria },
		{ "MostrarPowerUpRecogido", &UUIManager::execMostrarPowerUpRecogido },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIManager);
UClass* Z_Construct_UClass_UUIManager_NoRegister()
{
	return UUIManager::StaticClass();
}
struct Z_Construct_UClass_UUIManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UIManager.h" },
		{ "ModuleRelativePath", "UIManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIManager_ActualizarContadorBombas, "ActualizarContadorBombas" }, // 997915866
		{ &Z_Construct_UFunction_UUIManager_ActualizarContadorEnemigos, "ActualizarContadorEnemigos" }, // 2832561098
		{ &Z_Construct_UFunction_UUIManager_ActualizarPuntuacion, "ActualizarPuntuacion" }, // 3841797958
		{ &Z_Construct_UFunction_UUIManager_ActualizarVidaJugador, "ActualizarVidaJugador" }, // 3227382883
		{ &Z_Construct_UFunction_UUIManager_MostrarMensaje, "MostrarMensaje" }, // 3032293857
		{ &Z_Construct_UFunction_UUIManager_MostrarPantallaMuerte, "MostrarPantallaMuerte" }, // 3457742489
		{ &Z_Construct_UFunction_UUIManager_MostrarPantallaVictoria, "MostrarPantallaVictoria" }, // 3359582980
		{ &Z_Construct_UFunction_UUIManager_MostrarPowerUpRecogido, "MostrarPowerUpRecogido" }, // 1769383856
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUIManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalBomberMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUIManager_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIGameObserver_NoRegister, (int32)VTABLE_OFFSET(UUIManager, IIGameObserver), false },  // 390567672
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIManager_Statics::ClassParams = {
	&UUIManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUIManager()
{
	if (!Z_Registration_Info_UClass_UUIManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIManager.OuterSingleton, Z_Construct_UClass_UUIManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIManager.OuterSingleton;
}
template<> FINALBOMBERMAN_API UClass* StaticClass<UUIManager>()
{
	return UUIManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUIManager);
UUIManager::~UUIManager() {}
// End Class UUIManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_UIManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUIManager, UUIManager::StaticClass, TEXT("UUIManager"), &Z_Registration_Info_UClass_UUIManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIManager), 4143964530U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_UIManager_h_3501562429(TEXT("/Script/FinalBomberMan"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_UIManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_UIManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
