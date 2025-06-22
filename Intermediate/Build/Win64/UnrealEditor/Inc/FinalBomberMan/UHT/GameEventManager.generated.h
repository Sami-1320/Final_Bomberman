// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameEventManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFinalBomberManCharacter;
class APowerUp;
class IIGameObserver;
#ifdef FINALBOMBERMAN_GameEventManager_generated_h
#error "GameEventManager.generated.h already included, missing '#pragma once' in GameEventManager.h"
#endif
#define FINALBOMBERMAN_GameEventManager_generated_h

#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_GameEventManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNotificarJugadorHerido); \
	DECLARE_FUNCTION(execNotificarNivelCompletado); \
	DECLARE_FUNCTION(execNotificarEnemigoEliminado); \
	DECLARE_FUNCTION(execNotificarBloqueDestruido); \
	DECLARE_FUNCTION(execNotificarPowerUpRecogido); \
	DECLARE_FUNCTION(execNotificarJugadorMuerto); \
	DECLARE_FUNCTION(execNotificarBombaExplotada); \
	DECLARE_FUNCTION(execNotificarBombaColocada); \
	DECLARE_FUNCTION(execRemoverObserver); \
	DECLARE_FUNCTION(execAgregarObserver);


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_GameEventManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameEventManager(); \
	friend struct Z_Construct_UClass_UGameEventManager_Statics; \
public: \
	DECLARE_CLASS(UGameEventManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FinalBomberMan"), NO_API) \
	DECLARE_SERIALIZER(UGameEventManager)


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_GameEventManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameEventManager(UGameEventManager&&); \
	UGameEventManager(const UGameEventManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameEventManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameEventManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameEventManager) \
	NO_API virtual ~UGameEventManager();


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_GameEventManager_h_13_PROLOG
#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_GameEventManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_GameEventManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_GameEventManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_GameEventManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALBOMBERMAN_API UClass* StaticClass<class UGameEventManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_GameEventManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
