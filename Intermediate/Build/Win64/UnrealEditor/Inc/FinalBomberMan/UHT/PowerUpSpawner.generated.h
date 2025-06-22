// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PowerUpSpawner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APowerUp;
enum class ETipoPowerUp : uint8;
#ifdef FINALBOMBERMAN_PowerUpSpawner_generated_h
#error "PowerUpSpawner.generated.h already included, missing '#pragma once' in PowerUpSpawner.h"
#endif
#define FINALBOMBERMAN_PowerUpSpawner_generated_h

#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_PowerUpSpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRandomPowerUpType); \
	DECLARE_FUNCTION(execSpawnRandomPowerUp); \
	DECLARE_FUNCTION(execSpawnPowerUp);


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_PowerUpSpawner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPowerUpSpawner(); \
	friend struct Z_Construct_UClass_APowerUpSpawner_Statics; \
public: \
	DECLARE_CLASS(APowerUpSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalBomberMan"), NO_API) \
	DECLARE_SERIALIZER(APowerUpSpawner)


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_PowerUpSpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APowerUpSpawner(APowerUpSpawner&&); \
	APowerUpSpawner(const APowerUpSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APowerUpSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APowerUpSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APowerUpSpawner) \
	NO_API virtual ~APowerUpSpawner();


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_PowerUpSpawner_h_9_PROLOG
#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_PowerUpSpawner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_PowerUpSpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_PowerUpSpawner_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_PowerUpSpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALBOMBERMAN_API UClass* StaticClass<class APowerUpSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_PowerUpSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
