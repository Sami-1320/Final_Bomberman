// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FinalBomberManGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATile;
class UGameplayFacade;
#ifdef FINALBOMBERMAN_FinalBomberManGameMode_generated_h
#error "FinalBomberManGameMode.generated.h already included, missing '#pragma once' in FinalBomberManGameMode.h"
#endif
#define FINALBOMBERMAN_FinalBomberManGameMode_generated_h

#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_FinalBomberManGameMode_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execObtenerGameplayFacade); \
	DECLARE_FUNCTION(execActualizarContadorPuntosGlobal); \
	DECLARE_FUNCTION(execSpawnEnemigosAleatorios); \
	DECLARE_FUNCTION(execObtenerAltoMapa); \
	DECLARE_FUNCTION(execObtenerAnchoMapa); \
	DECLARE_FUNCTION(execObtenerTileEn); \
	DECLARE_FUNCTION(execObtenerNivelActual); \
	DECLARE_FUNCTION(execReiniciarNivel); \
	DECLARE_FUNCTION(execSiguienteNivel); \
	DECLARE_FUNCTION(execCargarNivel);


#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_FinalBomberManGameMode_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFinalBomberManGameMode(); \
	friend struct Z_Construct_UClass_AFinalBomberManGameMode_Statics; \
public: \
	DECLARE_CLASS(AFinalBomberManGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalBomberMan"), FINALBOMBERMAN_API) \
	DECLARE_SERIALIZER(AFinalBomberManGameMode)


#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_FinalBomberManGameMode_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFinalBomberManGameMode(AFinalBomberManGameMode&&); \
	AFinalBomberManGameMode(const AFinalBomberManGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FINALBOMBERMAN_API, AFinalBomberManGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinalBomberManGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFinalBomberManGameMode) \
	FINALBOMBERMAN_API virtual ~AFinalBomberManGameMode();


#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_FinalBomberManGameMode_h_15_PROLOG
#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_FinalBomberManGameMode_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_FinalBomberManGameMode_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_FinalBomberManGameMode_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_FinalBomberManGameMode_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALBOMBERMAN_API UClass* StaticClass<class AFinalBomberManGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_FinalBomberManGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
