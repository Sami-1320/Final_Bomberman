// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UIManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayFacade;
#ifdef FINALBOMBERMAN_UIManager_generated_h
#error "UIManager.generated.h already included, missing '#pragma once' in UIManager.h"
#endif
#define FINALBOMBERMAN_UIManager_generated_h

#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_UIManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEstablecerGameplayFacade); \
	DECLARE_FUNCTION(execInicializarUIManager); \
	DECLARE_FUNCTION(execMostrarContadorPuntosPermanente); \
	DECLARE_FUNCTION(execCambiarNivelPorPuntos); \
	DECLARE_FUNCTION(execObtenerPuntosPorBloques); \
	DECLARE_FUNCTION(execReiniciarPuntos); \
	DECLARE_FUNCTION(execAgregarPuntoPorBloque); \
	DECLARE_FUNCTION(execActualizarVidaJugador); \
	DECLARE_FUNCTION(execMostrarPowerUpRecogido); \
	DECLARE_FUNCTION(execMostrarPantallaVictoria); \
	DECLARE_FUNCTION(execMostrarPantallaMuerte); \
	DECLARE_FUNCTION(execMostrarMensaje); \
	DECLARE_FUNCTION(execActualizarPuntuacion); \
	DECLARE_FUNCTION(execActualizarContadorEnemigos); \
	DECLARE_FUNCTION(execActualizarContadorBombas);


#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_UIManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIManager(); \
	friend struct Z_Construct_UClass_UUIManager_Statics; \
public: \
	DECLARE_CLASS(UUIManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FinalBomberMan"), NO_API) \
	DECLARE_SERIALIZER(UUIManager) \
	virtual UObject* _getUObject() const override { return const_cast<UUIManager*>(this); }


#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_UIManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUIManager(UUIManager&&); \
	UUIManager(const UUIManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIManager) \
	NO_API virtual ~UUIManager();


#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_UIManager_h_12_PROLOG
#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_UIManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_UIManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_UIManager_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_UIManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALBOMBERMAN_API UClass* StaticClass<class UUIManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_UIManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
