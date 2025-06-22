// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "TipoTile.generated.h"

UENUM(BlueprintType)
enum class ETipoTile : uint8
{
    Vacio               UMETA(DisplayName = "Vacio"),
    BloqueIndestructible UMETA(DisplayName = "Bloque Indestructible"),
    BloqueDestructible  UMETA(DisplayName = "Bloque Destructible"),
    SpawnJugador        UMETA(DisplayName = "Spawn Jugador"),
    SpawnEnemigo        UMETA(DisplayName = "Spawn Enemigo"),
    SalidaNivel         UMETA(DisplayName = "Salida Nivel")
};