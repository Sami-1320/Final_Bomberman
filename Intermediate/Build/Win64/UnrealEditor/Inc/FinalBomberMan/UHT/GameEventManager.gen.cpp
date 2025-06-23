// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalBomberMan/GameEventManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameEventManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_AFinalBomberManCharacter_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_APowerUp_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UGameEventManager();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UGameEventManager_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UIGameObserver_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalBomberMan();
// End Cross Module References

// Begin Class UGameEventManager Function AgregarObserver
struct Z_Construct_UFunction_UGameEventManager_AgregarObserver_Statics
{
	struct GameEventManager_eventAgregarObserver_Parms
	{
		TScriptInterface<IIGameObserver> Observer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Observer management\n" },
#endif
		{ "ModuleRelativePath", "GameEventManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Observer management" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Observer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UGameEventManager_AgregarObserver_Statics::NewProp_Observer = { "Observer", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameEventManager_eventAgregarObserver_Parms, Observer), Z_Construct_UClass_UIGameObserver_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameEventManager_AgregarObserver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventManager_AgregarObserver_Statics::NewProp_Observer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_AgregarObserver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEventManager_AgregarObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameEventManager, nullptr, "AgregarObserver", nullptr, nullptr, Z_Construct_UFunction_UGameEventManager_AgregarObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_AgregarObserver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameEventManager_AgregarObserver_Statics::GameEventManager_eventAgregarObserver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_AgregarObserver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEventManager_AgregarObserver_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameEventManager_AgregarObserver_Statics::GameEventManager_eventAgregarObserver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameEventManager_AgregarObserver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEventManager_AgregarObserver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEventManager::execAgregarObserver)
{
	P_GET_TINTERFACE(IIGameObserver,Z_Param_Observer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AgregarObserver(Z_Param_Observer);
	P_NATIVE_END;
}
// End Class UGameEventManager Function AgregarObserver

// Begin Class UGameEventManager Function NotificarBloqueDestruido
struct Z_Construct_UFunction_UGameEventManager_NotificarBloqueDestruido_Statics
{
	struct GameEventManager_eventNotificarBloqueDestruido_Parms
	{
		FVector2D Posicion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Events" },
		{ "ModuleRelativePath", "GameEventManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posicion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameEventManager_NotificarBloqueDestruido_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameEventManager_eventNotificarBloqueDestruido_Parms, Posicion), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameEventManager_NotificarBloqueDestruido_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventManager_NotificarBloqueDestruido_Statics::NewProp_Posicion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_NotificarBloqueDestruido_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEventManager_NotificarBloqueDestruido_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameEventManager, nullptr, "NotificarBloqueDestruido", nullptr, nullptr, Z_Construct_UFunction_UGameEventManager_NotificarBloqueDestruido_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_NotificarBloqueDestruido_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameEventManager_NotificarBloqueDestruido_Statics::GameEventManager_eventNotificarBloqueDestruido_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_NotificarBloqueDestruido_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEventManager_NotificarBloqueDestruido_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameEventManager_NotificarBloqueDestruido_Statics::GameEventManager_eventNotificarBloqueDestruido_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameEventManager_NotificarBloqueDestruido()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEventManager_NotificarBloqueDestruido_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEventManager::execNotificarBloqueDestruido)
{
	P_GET_STRUCT(FVector2D,Z_Param_Posicion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotificarBloqueDestruido(Z_Param_Posicion);
	P_NATIVE_END;
}
// End Class UGameEventManager Function NotificarBloqueDestruido

// Begin Class UGameEventManager Function NotificarBombaColocada
struct Z_Construct_UFunction_UGameEventManager_NotificarBombaColocada_Statics
{
	struct GameEventManager_eventNotificarBombaColocada_Parms
	{
		FVector2D Posicion;
		int32 RadioExplosion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event notifications\n" },
#endif
		{ "ModuleRelativePath", "GameEventManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event notifications" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posicion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RadioExplosion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameEventManager_NotificarBombaColocada_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameEventManager_eventNotificarBombaColocada_Parms, Posicion), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameEventManager_NotificarBombaColocada_Statics::NewProp_RadioExplosion = { "RadioExplosion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameEventManager_eventNotificarBombaColocada_Parms, RadioExplosion), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameEventManager_NotificarBombaColocada_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventManager_NotificarBombaColocada_Statics::NewProp_Posicion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventManager_NotificarBombaColocada_Statics::NewProp_RadioExplosion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_NotificarBombaColocada_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEventManager_NotificarBombaColocada_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameEventManager, nullptr, "NotificarBombaColocada", nullptr, nullptr, Z_Construct_UFunction_UGameEventManager_NotificarBombaColocada_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_NotificarBombaColocada_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameEventManager_NotificarBombaColocada_Statics::GameEventManager_eventNotificarBombaColocada_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_NotificarBombaColocada_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEventManager_NotificarBombaColocada_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameEventManager_NotificarBombaColocada_Statics::GameEventManager_eventNotificarBombaColocada_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameEventManager_NotificarBombaColocada()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEventManager_NotificarBombaColocada_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEventManager::execNotificarBombaColocada)
{
	P_GET_STRUCT(FVector2D,Z_Param_Posicion);
	P_GET_PROPERTY(FIntProperty,Z_Param_RadioExplosion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotificarBombaColocada(Z_Param_Posicion,Z_Param_RadioExplosion);
	P_NATIVE_END;
}
// End Class UGameEventManager Function NotificarBombaColocada

// Begin Class UGameEventManager Function NotificarBombaExplotada
struct Z_Construct_UFunction_UGameEventManager_NotificarBombaExplotada_Statics
{
	struct GameEventManager_eventNotificarBombaExplotada_Parms
	{
		FVector2D Posicion;
		int32 RadioExplosion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Events" },
		{ "ModuleRelativePath", "GameEventManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posicion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RadioExplosion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameEventManager_NotificarBombaExplotada_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameEventManager_eventNotificarBombaExplotada_Parms, Posicion), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameEventManager_NotificarBombaExplotada_Statics::NewProp_RadioExplosion = { "RadioExplosion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameEventManager_eventNotificarBombaExplotada_Parms, RadioExplosion), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameEventManager_NotificarBombaExplotada_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventManager_NotificarBombaExplotada_Statics::NewProp_Posicion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventManager_NotificarBombaExplotada_Statics::NewProp_RadioExplosion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_NotificarBombaExplotada_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEventManager_NotificarBombaExplotada_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameEventManager, nullptr, "NotificarBombaExplotada", nullptr, nullptr, Z_Construct_UFunction_UGameEventManager_NotificarBombaExplotada_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_NotificarBombaExplotada_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameEventManager_NotificarBombaExplotada_Statics::GameEventManager_eventNotificarBombaExplotada_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_NotificarBombaExplotada_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEventManager_NotificarBombaExplotada_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameEventManager_NotificarBombaExplotada_Statics::GameEventManager_eventNotificarBombaExplotada_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameEventManager_NotificarBombaExplotada()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEventManager_NotificarBombaExplotada_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEventManager::execNotificarBombaExplotada)
{
	P_GET_STRUCT(FVector2D,Z_Param_Posicion);
	P_GET_PROPERTY(FIntProperty,Z_Param_RadioExplosion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotificarBombaExplotada(Z_Param_Posicion,Z_Param_RadioExplosion);
	P_NATIVE_END;
}
// End Class UGameEventManager Function NotificarBombaExplotada

// Begin Class UGameEventManager Function NotificarEnemigoEliminado
struct Z_Construct_UFunction_UGameEventManager_NotificarEnemigoEliminado_Statics
{
	struct GameEventManager_eventNotificarEnemigoEliminado_Parms
	{
		FVector2D Posicion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Events" },
		{ "ModuleRelativePath", "GameEventManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posicion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameEventManager_NotificarEnemigoEliminado_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameEventManager_eventNotificarEnemigoEliminado_Parms, Posicion), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameEventManager_NotificarEnemigoEliminado_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventManager_NotificarEnemigoEliminado_Statics::NewProp_Posicion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_NotificarEnemigoEliminado_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEventManager_NotificarEnemigoEliminado_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameEventManager, nullptr, "NotificarEnemigoEliminado", nullptr, nullptr, Z_Construct_UFunction_UGameEventManager_NotificarEnemigoEliminado_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_NotificarEnemigoEliminado_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameEventManager_NotificarEnemigoEliminado_Statics::GameEventManager_eventNotificarEnemigoEliminado_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_NotificarEnemigoEliminado_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEventManager_NotificarEnemigoEliminado_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameEventManager_NotificarEnemigoEliminado_Statics::GameEventManager_eventNotificarEnemigoEliminado_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameEventManager_NotificarEnemigoEliminado()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEventManager_NotificarEnemigoEliminado_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEventManager::execNotificarEnemigoEliminado)
{
	P_GET_STRUCT(FVector2D,Z_Param_Posicion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotificarEnemigoEliminado(Z_Param_Posicion);
	P_NATIVE_END;
}
// End Class UGameEventManager Function NotificarEnemigoEliminado

// Begin Class UGameEventManager Function NotificarJugadorHerido
struct Z_Construct_UFunction_UGameEventManager_NotificarJugadorHerido_Statics
{
	struct GameEventManager_eventNotificarJugadorHerido_Parms
	{
		AFinalBomberManCharacter* Jugador;
		int32 Dano;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Events" },
		{ "ModuleRelativePath", "GameEventManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Jugador;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Dano;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameEventManager_NotificarJugadorHerido_Statics::NewProp_Jugador = { "Jugador", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameEventManager_eventNotificarJugadorHerido_Parms, Jugador), Z_Construct_UClass_AFinalBomberManCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameEventManager_NotificarJugadorHerido_Statics::NewProp_Dano = { "Dano", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameEventManager_eventNotificarJugadorHerido_Parms, Dano), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameEventManager_NotificarJugadorHerido_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventManager_NotificarJugadorHerido_Statics::NewProp_Jugador,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventManager_NotificarJugadorHerido_Statics::NewProp_Dano,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_NotificarJugadorHerido_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEventManager_NotificarJugadorHerido_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameEventManager, nullptr, "NotificarJugadorHerido", nullptr, nullptr, Z_Construct_UFunction_UGameEventManager_NotificarJugadorHerido_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_NotificarJugadorHerido_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameEventManager_NotificarJugadorHerido_Statics::GameEventManager_eventNotificarJugadorHerido_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_NotificarJugadorHerido_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEventManager_NotificarJugadorHerido_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameEventManager_NotificarJugadorHerido_Statics::GameEventManager_eventNotificarJugadorHerido_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameEventManager_NotificarJugadorHerido()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEventManager_NotificarJugadorHerido_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEventManager::execNotificarJugadorHerido)
{
	P_GET_OBJECT(AFinalBomberManCharacter,Z_Param_Jugador);
	P_GET_PROPERTY(FIntProperty,Z_Param_Dano);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotificarJugadorHerido(Z_Param_Jugador,Z_Param_Dano);
	P_NATIVE_END;
}
// End Class UGameEventManager Function NotificarJugadorHerido

// Begin Class UGameEventManager Function NotificarJugadorMuerto
struct Z_Construct_UFunction_UGameEventManager_NotificarJugadorMuerto_Statics
{
	struct GameEventManager_eventNotificarJugadorMuerto_Parms
	{
		AFinalBomberManCharacter* Jugador;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Events" },
		{ "ModuleRelativePath", "GameEventManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Jugador;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameEventManager_NotificarJugadorMuerto_Statics::NewProp_Jugador = { "Jugador", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameEventManager_eventNotificarJugadorMuerto_Parms, Jugador), Z_Construct_UClass_AFinalBomberManCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameEventManager_NotificarJugadorMuerto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventManager_NotificarJugadorMuerto_Statics::NewProp_Jugador,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_NotificarJugadorMuerto_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEventManager_NotificarJugadorMuerto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameEventManager, nullptr, "NotificarJugadorMuerto", nullptr, nullptr, Z_Construct_UFunction_UGameEventManager_NotificarJugadorMuerto_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_NotificarJugadorMuerto_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameEventManager_NotificarJugadorMuerto_Statics::GameEventManager_eventNotificarJugadorMuerto_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_NotificarJugadorMuerto_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEventManager_NotificarJugadorMuerto_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameEventManager_NotificarJugadorMuerto_Statics::GameEventManager_eventNotificarJugadorMuerto_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameEventManager_NotificarJugadorMuerto()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEventManager_NotificarJugadorMuerto_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEventManager::execNotificarJugadorMuerto)
{
	P_GET_OBJECT(AFinalBomberManCharacter,Z_Param_Jugador);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotificarJugadorMuerto(Z_Param_Jugador);
	P_NATIVE_END;
}
// End Class UGameEventManager Function NotificarJugadorMuerto

// Begin Class UGameEventManager Function NotificarNivelCompletado
struct Z_Construct_UFunction_UGameEventManager_NotificarNivelCompletado_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Events" },
		{ "ModuleRelativePath", "GameEventManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEventManager_NotificarNivelCompletado_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameEventManager, nullptr, "NotificarNivelCompletado", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_NotificarNivelCompletado_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEventManager_NotificarNivelCompletado_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameEventManager_NotificarNivelCompletado()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEventManager_NotificarNivelCompletado_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEventManager::execNotificarNivelCompletado)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotificarNivelCompletado();
	P_NATIVE_END;
}
// End Class UGameEventManager Function NotificarNivelCompletado

// Begin Class UGameEventManager Function NotificarPowerUpRecogido
struct Z_Construct_UFunction_UGameEventManager_NotificarPowerUpRecogido_Statics
{
	struct GameEventManager_eventNotificarPowerUpRecogido_Parms
	{
		APowerUp* PowerUp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Events" },
		{ "ModuleRelativePath", "GameEventManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PowerUp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameEventManager_NotificarPowerUpRecogido_Statics::NewProp_PowerUp = { "PowerUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameEventManager_eventNotificarPowerUpRecogido_Parms, PowerUp), Z_Construct_UClass_APowerUp_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameEventManager_NotificarPowerUpRecogido_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventManager_NotificarPowerUpRecogido_Statics::NewProp_PowerUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_NotificarPowerUpRecogido_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEventManager_NotificarPowerUpRecogido_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameEventManager, nullptr, "NotificarPowerUpRecogido", nullptr, nullptr, Z_Construct_UFunction_UGameEventManager_NotificarPowerUpRecogido_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_NotificarPowerUpRecogido_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameEventManager_NotificarPowerUpRecogido_Statics::GameEventManager_eventNotificarPowerUpRecogido_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_NotificarPowerUpRecogido_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEventManager_NotificarPowerUpRecogido_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameEventManager_NotificarPowerUpRecogido_Statics::GameEventManager_eventNotificarPowerUpRecogido_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameEventManager_NotificarPowerUpRecogido()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEventManager_NotificarPowerUpRecogido_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEventManager::execNotificarPowerUpRecogido)
{
	P_GET_OBJECT(APowerUp,Z_Param_PowerUp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotificarPowerUpRecogido(Z_Param_PowerUp);
	P_NATIVE_END;
}
// End Class UGameEventManager Function NotificarPowerUpRecogido

// Begin Class UGameEventManager Function RemoverObserver
struct Z_Construct_UFunction_UGameEventManager_RemoverObserver_Statics
{
	struct GameEventManager_eventRemoverObserver_Parms
	{
		TScriptInterface<IIGameObserver> Observer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Events" },
		{ "ModuleRelativePath", "GameEventManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Observer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UGameEventManager_RemoverObserver_Statics::NewProp_Observer = { "Observer", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameEventManager_eventRemoverObserver_Parms, Observer), Z_Construct_UClass_UIGameObserver_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameEventManager_RemoverObserver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEventManager_RemoverObserver_Statics::NewProp_Observer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_RemoverObserver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEventManager_RemoverObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameEventManager, nullptr, "RemoverObserver", nullptr, nullptr, Z_Construct_UFunction_UGameEventManager_RemoverObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_RemoverObserver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameEventManager_RemoverObserver_Statics::GameEventManager_eventRemoverObserver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEventManager_RemoverObserver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEventManager_RemoverObserver_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameEventManager_RemoverObserver_Statics::GameEventManager_eventRemoverObserver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameEventManager_RemoverObserver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEventManager_RemoverObserver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEventManager::execRemoverObserver)
{
	P_GET_TINTERFACE(IIGameObserver,Z_Param_Observer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoverObserver(Z_Param_Observer);
	P_NATIVE_END;
}
// End Class UGameEventManager Function RemoverObserver

// Begin Class UGameEventManager
void UGameEventManager::StaticRegisterNativesUGameEventManager()
{
	UClass* Class = UGameEventManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AgregarObserver", &UGameEventManager::execAgregarObserver },
		{ "NotificarBloqueDestruido", &UGameEventManager::execNotificarBloqueDestruido },
		{ "NotificarBombaColocada", &UGameEventManager::execNotificarBombaColocada },
		{ "NotificarBombaExplotada", &UGameEventManager::execNotificarBombaExplotada },
		{ "NotificarEnemigoEliminado", &UGameEventManager::execNotificarEnemigoEliminado },
		{ "NotificarJugadorHerido", &UGameEventManager::execNotificarJugadorHerido },
		{ "NotificarJugadorMuerto", &UGameEventManager::execNotificarJugadorMuerto },
		{ "NotificarNivelCompletado", &UGameEventManager::execNotificarNivelCompletado },
		{ "NotificarPowerUpRecogido", &UGameEventManager::execNotificarPowerUpRecogido },
		{ "RemoverObserver", &UGameEventManager::execRemoverObserver },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameEventManager);
UClass* Z_Construct_UClass_UGameEventManager_NoRegister()
{
	return UGameEventManager::StaticClass();
}
struct Z_Construct_UClass_UGameEventManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameEventManager.h" },
		{ "ModuleRelativePath", "GameEventManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Observers_MetaData[] = {
		{ "ModuleRelativePath", "GameEventManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Observers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Observers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameEventManager_AgregarObserver, "AgregarObserver" }, // 3405133521
		{ &Z_Construct_UFunction_UGameEventManager_NotificarBloqueDestruido, "NotificarBloqueDestruido" }, // 1873683105
		{ &Z_Construct_UFunction_UGameEventManager_NotificarBombaColocada, "NotificarBombaColocada" }, // 3593472532
		{ &Z_Construct_UFunction_UGameEventManager_NotificarBombaExplotada, "NotificarBombaExplotada" }, // 870255741
		{ &Z_Construct_UFunction_UGameEventManager_NotificarEnemigoEliminado, "NotificarEnemigoEliminado" }, // 4190687065
		{ &Z_Construct_UFunction_UGameEventManager_NotificarJugadorHerido, "NotificarJugadorHerido" }, // 2937089631
		{ &Z_Construct_UFunction_UGameEventManager_NotificarJugadorMuerto, "NotificarJugadorMuerto" }, // 2773498686
		{ &Z_Construct_UFunction_UGameEventManager_NotificarNivelCompletado, "NotificarNivelCompletado" }, // 1164105855
		{ &Z_Construct_UFunction_UGameEventManager_NotificarPowerUpRecogido, "NotificarPowerUpRecogido" }, // 1286697762
		{ &Z_Construct_UFunction_UGameEventManager_RemoverObserver, "RemoverObserver" }, // 289014935
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameEventManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGameEventManager_Statics::NewProp_Observers_Inner = { "Observers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIGameObserver_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameEventManager_Statics::NewProp_Observers = { "Observers", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameEventManager, Observers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Observers_MetaData), NewProp_Observers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameEventManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEventManager_Statics::NewProp_Observers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEventManager_Statics::NewProp_Observers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameEventManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameEventManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalBomberMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameEventManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameEventManager_Statics::ClassParams = {
	&UGameEventManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameEventManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameEventManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameEventManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameEventManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameEventManager()
{
	if (!Z_Registration_Info_UClass_UGameEventManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameEventManager.OuterSingleton, Z_Construct_UClass_UGameEventManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameEventManager.OuterSingleton;
}
template<> FINALBOMBERMAN_API UClass* StaticClass<UGameEventManager>()
{
	return UGameEventManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameEventManager);
UGameEventManager::~UGameEventManager() {}
// End Class UGameEventManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_GameEventManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameEventManager, UGameEventManager::StaticClass, TEXT("UGameEventManager"), &Z_Registration_Info_UClass_UGameEventManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameEventManager), 4146560177U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_GameEventManager_h_3214638192(TEXT("/Script/FinalBomberMan"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_GameEventManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_GameEventManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
