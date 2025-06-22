// Copyright Epic Games, Inc. All Rights Reserved.
#include "DirectorNiveles.h"
#include "ConstructorMapa.h"
#include "Tile.h"
#include "BloqueMadera.h"
#include "BloqueLadrillo.h"
#include "Engine/World.h"

UDirectorNiveles::UDirectorNiveles()
{
}

UConstructorMapa* UDirectorNiveles::CrearConstructorMapa()
{
    return NewObject<UConstructorMapa>();
}

UConstructorMapa* UDirectorNiveles::CrearNivel1(UWorld* Mundo)
{
    if (!Mundo)
    {
        UE_LOG(LogTemp, Error, TEXT("DirectorNiveles: Mundo no v�lido"));
        return nullptr;
    }

    UConstructorMapa* Constructor = CrearConstructorMapa();
    if (!Constructor)
        return nullptr;

    // Configurar Nivel 1 - Bloques de Madera destructibles
    TArray<FVector2D> SpawnsEnemigos = {
        FVector2D(11, 1),
        FVector2D(1, 9),
        FVector2D(11, 9)
    };

    Constructor
        ->EstablecerMundo(Mundo)
        ->EstablecerTamano(17, 15)
        ->EstablecerTamanoTile(200.0f)
        ->ColocarBordesIndestructibles()
        ->ColocarPatronColumnas()
        ->ColocarSpawnJugador(FVector2D(1, 1))
        ->ColocarSpawnsEnemigos(SpawnsEnemigos)
        ->ColocarSalidaNivel(FVector2D(17, 15))
        ->LlenarConBloquesDestructibles(60.0f, ABloqueMadera::StaticClass())
        ->Construir(Mundo);

    // Colocar bloques de madera en tiles destructibles
    ColocarBloquesDestructiblesNivel1(Constructor, Mundo);

    UE_LOG(LogTemp, Warning, TEXT("Nivel 1 creado con bloques de Madera"));
    return Constructor;
}

UConstructorMapa* UDirectorNiveles::CrearNivel2(UWorld* Mundo)
{
    if (!Mundo)
    {
        UE_LOG(LogTemp, Error, TEXT("DirectorNiveles: Mundo no v�lido"));
        return nullptr;
    }

    UConstructorMapa* Constructor = CrearConstructorMapa();
    if (!Constructor)
        return nullptr;

    // Configurar Nivel 2 - Bloques de Ladrillo destructibles (m�s dif�cil)
    TArray<FVector2D> SpawnsEnemigos = {
        FVector2D(11, 1),
        FVector2D(1, 9),
        FVector2D(11, 9),
        FVector2D(5, 5),
        FVector2D(7, 3)
    };

    Constructor
        ->EstablecerMundo(Mundo)
        ->EstablecerTamano(13, 11)
        ->EstablecerTamanoTile(200.0f)
        ->ColocarBordesIndestructibles()
        ->ColocarPatronColumnas()
        ->ColocarSpawnJugador(FVector2D(1, 1))
        ->ColocarSpawnsEnemigos(SpawnsEnemigos)
        ->ColocarSalidaNivel(FVector2D(11, 9))
        ->LlenarConBloquesDestructibles(70.0f, ABloqueLadrillo::StaticClass())
        ->Construir(Mundo);

    // Colocar bloques de ladrillo en tiles destructibles
    ColocarBloquesDestructiblesNivel2(Constructor, Mundo);

    UE_LOG(LogTemp, Warning, TEXT("Nivel 2 creado con bloques de Ladrillo"));
    return Constructor;
}

void UDirectorNiveles::ColocarBloquesDestructiblesNivel1(UConstructorMapa* Constructor, UWorld* Mundo)
{
    for (int32 Y = 0; Y < Constructor->ObtenerAlto(); Y++)
    {
        for (int32 X = 0; X < Constructor->ObtenerAncho(); X++)
        {
            ATile* TileActual = Constructor->ObtenerTileEn(X, Y);
            if (TileActual && TileActual->ObtenerTipoTile() == ETipoTile::BloqueDestructible)
            {
                // POSICI�N AL RAS
                FVector PosicionTile = TileActual->GetActorLocation();
                FVector PosicionBloque = PosicionTile + FVector(0, 0, 20); // Al ras

                ABloqueMadera* BloqueNuevo = Mundo->SpawnActor<ABloqueMadera>(
                    ABloqueMadera::StaticClass(),
                    PosicionBloque,
                    FRotator::ZeroRotator
                );

                if (BloqueNuevo)
                {
                    BloqueNuevo->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
                    TileActual->ColocarBloque(BloqueNuevo);
                }
            }
        }
    }
}

void UDirectorNiveles::ColocarBloquesDestructiblesNivel2(UConstructorMapa* Constructor, UWorld* Mundo)
{
    for (int32 Y = 0; Y < Constructor->ObtenerAlto(); Y++)
    {
        for (int32 X = 0; X < Constructor->ObtenerAncho(); X++)
        {
            ATile* TileActual = Constructor->ObtenerTileEn(X, Y);
            if (TileActual && TileActual->ObtenerTipoTile() == ETipoTile::BloqueDestructible)
            {
                // POSICI�N AL RAS
                FVector PosicionTile = TileActual->GetActorLocation();
                FVector PosicionBloque = PosicionTile + FVector(0, 0, 20); // Al ras

                ABloqueLadrillo* BloqueNuevo = Mundo->SpawnActor<ABloqueLadrillo>(
                    ABloqueLadrillo::StaticClass(),
                    PosicionBloque,
                    FRotator::ZeroRotator
                );

                if (BloqueNuevo)
                {
                    BloqueNuevo->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
                    TileActual->ColocarBloque(BloqueNuevo);
                }
            }
        }
    }
}