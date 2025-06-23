// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PowerUp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AFinalBomberManCharacter;
class UPrimitiveComponent;
enum class ETipoPowerUp : uint8;
struct FHitResult;
#ifdef FINALBOMBERMAN_PowerUp_generated_h
#error "PowerUp.generated.h already included, missing '#pragma once' in PowerUp.h"
#endif
#define FINALBOMBERMAN_PowerUp_generated_h

#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_PowerUp_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execEsPowerUpPermanente); \
	DECLARE_FUNCTION(execObtenerValor); \
	DECLARE_FUNCTION(execObtenerDuracion); \
	DECLARE_FUNCTION(execObtenerTipo); \
	DECLARE_FUNCTION(execRemoverPowerUp); \
	DECLARE_FUNCTION(execAplicarPowerUp);


#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_PowerUp_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPowerUp(); \
	friend struct Z_Construct_UClass_APowerUp_Statics; \
public: \
	DECLARE_CLASS(APowerUp, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalBomberMan"), NO_API) \
	DECLARE_SERIALIZER(APowerUp) \
	virtual UObject* _getUObject() const override { return const_cast<APowerUp*>(this); }


#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_PowerUp_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APowerUp(APowerUp&&); \
	APowerUp(const APowerUp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APowerUp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APowerUp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APowerUp) \
	NO_API virtual ~APowerUp();


#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_PowerUp_h_22_PROLOG
#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_PowerUp_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_PowerUp_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_PowerUp_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_PowerUp_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALBOMBERMAN_API UClass* StaticClass<class APowerUp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_PowerUp_h


#define FOREACH_ENUM_ETIPOPOWERUP(op) \
	op(ETipoPowerUp::BombaExtra) \
	op(ETipoPowerUp::RadioExplosion) \
	op(ETipoPowerUp::Velocidad) \
	op(ETipoPowerUp::Escudo) \
	op(ETipoPowerUp::BombaRemota) \
	op(ETipoPowerUp::Inmortalidad) \
	op(ETipoPowerUp::SaltoAlto) \
	op(ETipoPowerUp::VidaExtra) 

enum class ETipoPowerUp : uint8;
template<> struct TIsUEnumClass<ETipoPowerUp> { enum { Value = true }; };
template<> FINALBOMBERMAN_API UEnum* StaticEnum<ETipoPowerUp>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
