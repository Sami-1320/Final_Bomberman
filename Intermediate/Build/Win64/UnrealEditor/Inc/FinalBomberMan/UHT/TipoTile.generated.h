// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TipoTile.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINALBOMBERMAN_TipoTile_generated_h
#error "TipoTile.generated.h already included, missing '#pragma once' in TipoTile.h"
#endif
#define FINALBOMBERMAN_TipoTile_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_TipoTile_h


#define FOREACH_ENUM_ETIPOTILE(op) \
	op(ETipoTile::Vacio) \
	op(ETipoTile::BloqueIndestructible) \
	op(ETipoTile::BloqueDestructible) \
	op(ETipoTile::SpawnJugador) \
	op(ETipoTile::SpawnEnemigo) \
	op(ETipoTile::SalidaNivel) 

enum class ETipoTile : uint8;
template<> struct TIsUEnumClass<ETipoTile> { enum { Value = true }; };
template<> FINALBOMBERMAN_API UEnum* StaticEnum<ETipoTile>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
