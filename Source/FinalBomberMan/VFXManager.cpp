// Copyright Epic Games, Inc. All Rights Reserved.
#include "VFXManager.h"
#include "FinalBomberManCharacter.h"
#include "PowerUp.h"
#include "Engine/World.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"

UVFXManager::UVFXManager()
{
    MundoActual = nullptr;
}

void UVFXManager::OnBombaColocada(FVector2D Posicion, int32 RadioExplosion)
{
    // Efecto sutil cuando se coloca una bomba
    CrearEfectoDestruccion(Posicion);
}

void UVFXManager::OnBombaExplotada(FVector2D Posicion, int32 RadioExplosion)
{
    CrearEfectoExplosion(Posicion, RadioExplosion);
}

void UVFXManager::OnJugadorMuerto(AFinalBomberManCharacter* Jugador)
{
    if (Jugador)
    {
        FVector2D Posicion = FVector2D(Jugador->GetActorLocation().X, Jugador->GetActorLocation().Y);
        CrearEfectoMuerte(Posicion);
    }
}

void UVFXManager::OnPowerUpRecogido(APowerUp* PowerUp)
{
    if (PowerUp)
    {
        FVector2D Posicion = FVector2D(PowerUp->GetActorLocation().X, PowerUp->GetActorLocation().Y);
        CrearEfectoPowerUp(Posicion);
    }
}

void UVFXManager::OnBloqueDestruido(FVector2D Posicion)
{
    CrearEfectoDestruccion(Posicion);
}

void UVFXManager::OnEnemigoEliminado(FVector2D Posicion)
{
    CrearEfectoMuerte(Posicion);
}

void UVFXManager::OnNivelCompletado()
{
    CrearEfectoVictoria();
}

void UVFXManager::OnJugadorHerido(AFinalBomberManCharacter* Jugador, int32 Dano)
{
    if (Jugador)
    {
        FVector2D Posicion = FVector2D(Jugador->GetActorLocation().X, Jugador->GetActorLocation().Y);
        CrearEfectoDano(Posicion);
    }
}

void UVFXManager::CrearEfectoExplosion(FVector2D Posicion, int32 Radio)
{
    if (!MundoActual)
    {
        ConfigurarMundo(GetWorld());
    }

    FVector Posicion3D = ConvertirPosicion2DTo3D(Posicion);
    
    // Crear efecto de explosión en el centro
    // En un juego real, aquí cargarías un sistema de partículas
    UE_LOG(LogTemp, Warning, TEXT("VFX: Efecto de explosión en (%f, %f) con radio %d"), Posicion.X, Posicion.Y, Radio);
    
    // Crear efectos en las 4 direcciones según el radio
    for (int32 i = 1; i <= Radio; i++)
    {
        // Norte
        FVector2D PosNorte = Posicion + FVector2D(0, i * 200);
        CrearEfectoDestruccion(PosNorte);
        
        // Sur
        FVector2D PosSur = Posicion + FVector2D(0, -i * 200);
        CrearEfectoDestruccion(PosSur);
        
        // Este
        FVector2D PosEste = Posicion + FVector2D(i * 200, 0);
        CrearEfectoDestruccion(PosEste);
        
        // Oeste
        FVector2D PosOeste = Posicion + FVector2D(-i * 200, 0);
        CrearEfectoDestruccion(PosOeste);
    }
}

void UVFXManager::CrearEfectoDestruccion(FVector2D Posicion)
{
    if (!MundoActual)
    {
        ConfigurarMundo(GetWorld());
    }

    FVector Posicion3D = ConvertirPosicion2DTo3D(Posicion);
    
    // Efecto de destrucción de bloque
    UE_LOG(LogTemp, Log, TEXT("VFX: Efecto de destrucción en (%f, %f)"), Posicion.X, Posicion.Y);
}

void UVFXManager::CrearEfectoPowerUp(FVector2D Posicion)
{
    if (!MundoActual)
    {
        ConfigurarMundo(GetWorld());
    }

    FVector Posicion3D = ConvertirPosicion2DTo3D(Posicion);
    
    // Efecto de recolección de power-up
    UE_LOG(LogTemp, Log, TEXT("VFX: Efecto de power-up recogido en (%f, %f)"), Posicion.X, Posicion.Y);
}

void UVFXManager::CrearEfectoMuerte(FVector2D Posicion)
{
    if (!MundoActual)
    {
        ConfigurarMundo(GetWorld());
    }

    FVector Posicion3D = ConvertirPosicion2DTo3D(Posicion);
    
    // Efecto de muerte
    UE_LOG(LogTemp, Warning, TEXT("VFX: Efecto de muerte en (%f, %f)"), Posicion.X, Posicion.Y);
}

void UVFXManager::CrearEfectoVictoria()
{
    // Efecto de victoria/nivel completado
    UE_LOG(LogTemp, Warning, TEXT("VFX: Efecto de victoria - Nivel completado!"));
}

void UVFXManager::CrearEfectoDano(FVector2D Posicion)
{
    if (!MundoActual)
    {
        ConfigurarMundo(GetWorld());
    }

    FVector Posicion3D = ConvertirPosicion2DTo3D(Posicion);
    
    // Efecto de daño al jugador
    UE_LOG(LogTemp, Log, TEXT("VFX: Efecto de daño en (%f, %f)"), Posicion.X, Posicion.Y);
}

void UVFXManager::ConfigurarMundo(UWorld* Mundo)
{
    MundoActual = Mundo;
}

FVector UVFXManager::ConvertirPosicion2DTo3D(FVector2D Posicion2D)
{
    return FVector(Posicion2D.X, Posicion2D.Y, 50.0f); // Altura de 50 unidades
} 