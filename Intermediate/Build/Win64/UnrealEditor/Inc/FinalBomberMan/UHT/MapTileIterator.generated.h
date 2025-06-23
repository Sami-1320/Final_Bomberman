// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MapTileIterator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATile;
class UConstructorMapa;
class UMapTileIterator;
enum class ETipoTile : uint8;
#ifdef FINALBOMBERMAN_MapTileIterator_generated_h
#error "MapTileIterator.generated.h already included, missing '#pragma once' in MapTileIterator.h"
#endif
#define FINALBOMBERMAN_MapTileIterator_generated_h

#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_MapTileIterator_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReiniciar); \
	DECLARE_FUNCTION(execObtenerTotalTiles); \
	DECLARE_FUNCTION(execObtenerIndiceActual); \
	DECLARE_FUNCTION(execNextConBloque); \
	DECLARE_FUNCTION(execFirstConBloque); \
	DECLARE_FUNCTION(execNextEmpty); \
	DECLARE_FUNCTION(execFirstEmpty); \
	DECLARE_FUNCTION(execNextDestructible); \
	DECLARE_FUNCTION(execFirstDestructible); \
	DECLARE_FUNCTION(execObtenerTipoTileActual); \
	DECLARE_FUNCTION(execObtenerPosicionActual); \
	DECLARE_FUNCTION(execObtenerTileActual); \
	DECLARE_FUNCTION(execCrearIterator);


#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_MapTileIterator_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapTileIterator(); \
	friend struct Z_Construct_UClass_UMapTileIterator_Statics; \
public: \
	DECLARE_CLASS(UMapTileIterator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FinalBomberMan"), NO_API) \
	DECLARE_SERIALIZER(UMapTileIterator) \
	virtual UObject* _getUObject() const override { return const_cast<UMapTileIterator*>(this); }


#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_MapTileIterator_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMapTileIterator(UMapTileIterator&&); \
	UMapTileIterator(const UMapTileIterator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapTileIterator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapTileIterator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMapTileIterator) \
	NO_API virtual ~UMapTileIterator();


#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_MapTileIterator_h_12_PROLOG
#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_MapTileIterator_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_MapTileIterator_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_MapTileIterator_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_MapTileIterator_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALBOMBERMAN_API UClass* StaticClass<class UMapTileIterator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_MapTileIterator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
