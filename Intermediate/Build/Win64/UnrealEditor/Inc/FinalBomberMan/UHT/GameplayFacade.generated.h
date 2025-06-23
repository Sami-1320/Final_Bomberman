// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayFacade.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABomba;
class AEnemigo;
class AFinalBomberManCharacter;
class APowerUp;
class UGameEventManager;
class UWorld;
enum class ETipoEnemigo : uint8;
enum class ETipoPowerUp : uint8;
#ifdef FINALBOMBERMAN_GameplayFacade_generated_h
#error "GameplayFacade.generated.h already included, missing '#pragma once' in GameplayFacade.h"
#endif
#define FINALBOMBERMAN_GameplayFacade_generated_h

#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_GameplayFacade_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execObtenerGameEventManager); \
	DECLARE_FUNCTION(execEstaJuegoTerminado); \
	DECLARE_FUNCTION(execEstaJuegoPausado); \
	DECLARE_FUNCTION(execObtenerNivelActual); \
	DECLARE_FUNCTION(execObtenerPuntuacionActual); \
	DECLARE_FUNCTION(execCrearEfectoDestruccion); \
	DECLARE_FUNCTION(execCrearEfectoExplosion); \
	DECLARE_FUNCTION(execMostrarPantallaVictoria); \
	DECLARE_FUNCTION(execMostrarPantallaMuerte); \
	DECLARE_FUNCTION(execActualizarPuntuacion); \
	DECLARE_FUNCTION(execMostrarMensaje); \
	DECLARE_FUNCTION(execRespawnearJugador); \
	DECLARE_FUNCTION(execMatarJugador); \
	DECLARE_FUNCTION(execHerirJugador); \
	DECLARE_FUNCTION(execObtenerEnemigosVivos); \
	DECLARE_FUNCTION(execEliminarEnemigo); \
	DECLARE_FUNCTION(execSpawnearEnemigo); \
	DECLARE_FUNCTION(execRemoverPowerUp); \
	DECLARE_FUNCTION(execAplicarPowerUp); \
	DECLARE_FUNCTION(execCrearPowerUp); \
	DECLARE_FUNCTION(execCancelarBomba); \
	DECLARE_FUNCTION(execDetonarBomba); \
	DECLARE_FUNCTION(execColocarBomba); \
	DECLARE_FUNCTION(execCambiarNivelPorPuntos); \
	DECLARE_FUNCTION(execReiniciarNivel); \
	DECLARE_FUNCTION(execCompletarNivel); \
	DECLARE_FUNCTION(execCargarNivel); \
	DECLARE_FUNCTION(execTerminarJuego); \
	DECLARE_FUNCTION(execReanudarJuego); \
	DECLARE_FUNCTION(execPausarJuego); \
	DECLARE_FUNCTION(execIniciarJuego); \
	DECLARE_FUNCTION(execInicializarJuego);


#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_GameplayFacade_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayFacade(); \
	friend struct Z_Construct_UClass_UGameplayFacade_Statics; \
public: \
	DECLARE_CLASS(UGameplayFacade, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FinalBomberMan"), NO_API) \
	DECLARE_SERIALIZER(UGameplayFacade)


#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_GameplayFacade_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameplayFacade(UGameplayFacade&&); \
	UGameplayFacade(const UGameplayFacade&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayFacade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayFacade); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameplayFacade) \
	NO_API virtual ~UGameplayFacade();


#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_GameplayFacade_h_20_PROLOG
#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_GameplayFacade_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_GameplayFacade_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_GameplayFacade_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_GameplayFacade_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALBOMBERMAN_API UClass* StaticClass<class UGameplayFacade>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_GameplayFacade_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
