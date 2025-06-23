// Copyright Epic Games, Inc. All Rights Reserved.
#include "UIManager.h"
#include "IGameObserver.h"
#include "FinalBomberManCharacter.h"
#include "PowerUp.h"
#include "FinalBomberManGameMode.h"
#include "GameplayFacade.h"
#include "Kismet/GameplayStatics.h"

UUIManager::UUIManager()
{
    UE_LOG(LogTemp, Warning, TEXT("UIManager Constructor: Iniciando..."));
    
    PuntuacionActual = 0;
    EnemigosRestantes = 0;
    BombasDisponibles = 0;
    VidaJugador = 100;
    VidaMaximaJugador = 100;
    
    // Inicializar sistema de puntos
    PuntosPorBloques = 0;
    PuntosNecesariosParaCambioNivel = 10;
    bCambioNivelPendiente = false;
    
    UE_LOG(LogTemp, Warning, TEXT("UIManager Constructor: Sistema de puntos inicializado. Puntos: %d/%d"), PuntosPorBloques, PuntosNecesariosParaCambioNivel);
}

void UUIManager::InicializarUIManager()
{
    UE_LOG(LogTemp, Warning, TEXT("UIManager InicializarUIManager: INICIANDO"));
    
    // Mostrar contador de puntos inicial
    MostrarContadorPuntosPermanente();
    
    UE_LOG(LogTemp, Warning, TEXT("UIManager InicializarUIManager: Inicialización completada"));
}

void UUIManager::OnBombaColocada(FVector2D Posicion, int32 RadioExplosion)
{
    UE_LOG(LogTemp, Log, TEXT("UIManager: Bomba colocada en (%f, %f) con radio %d"), Posicion.X, Posicion.Y, RadioExplosion);
    ActualizarContadorBombas(BombasDisponibles - 1);
}

void UUIManager::OnBombaExplotada(FVector2D Posicion, int32 RadioExplosion)
{
    UE_LOG(LogTemp, Log, TEXT("UIManager: Bomba explotada en (%f, %f) con radio %d"), Posicion.X, Posicion.Y, RadioExplosion);
}

void UUIManager::OnJugadorMuerto(AFinalBomberManCharacter* Jugador)
{
    UE_LOG(LogTemp, Warning, TEXT("UIManager: Jugador muerto"));
    MostrarPantallaMuerte();
}

void UUIManager::OnPowerUpRecogido(APowerUp* PowerUp)
{
    if (PowerUp)
    {
        ETipoPowerUp Tipo = PowerUp->ObtenerTipo();
        UE_LOG(LogTemp, Log, TEXT("UIManager: PowerUp recogido - Tipo: %d"), (int32)Tipo);
        MostrarPowerUpRecogido(TEXT("PowerUp Recogido"));
    }
}

void UUIManager::OnBloqueDestruido(FVector2D Posicion)
{
    UE_LOG(LogTemp, Warning, TEXT("UIManager OnBloqueDestruido: Bloque destruido en (%f, %f)"), Posicion.X, Posicion.Y);
    
    // Agregar punto por bloque destruido
    UE_LOG(LogTemp, Warning, TEXT("UIManager OnBloqueDestruido: Llamando a AgregarPuntoPorBloque"));
    AgregarPuntoPorBloque();
    UE_LOG(LogTemp, Warning, TEXT("UIManager OnBloqueDestruido: AgregarPuntoPorBloque completado"));
}

void UUIManager::OnEnemigoEliminado(FVector2D Posicion)
{
    EnemigosRestantes--;
    PuntuacionActual += 100;
    
    // Agregar 2 puntos por enemigo eliminado
    PuntosPorBloques += 2;
    
    UE_LOG(LogTemp, Log, TEXT("UIManager: Enemigo eliminado en (%f, %f). Restantes: %d"), Posicion.X, Posicion.Y, EnemigosRestantes);
    UE_LOG(LogTemp, Warning, TEXT("UIManager: +2 PUNTOS por enemigo eliminado. Total: %d/%d"), PuntosPorBloques, PuntosNecesariosParaCambioNivel);
    
    // Mostrar mensaje de puntos por enemigo eliminado
    if (GEngine)
    {
        // Mostrar contador permanente con key único
        FString MensajePuntos = FString::Printf(TEXT("PUNTOS: %d/%d"), PuntosPorBloques, PuntosNecesariosParaCambioNivel);
        GEngine->AddOnScreenDebugMessage(300, -1.0f, FColor::Yellow, MensajePuntos);
        
        // Mostrar mensaje temporal de confirmación para enemigo
        FString MensajeConfirmacion = FString::Printf(TEXT("¡+2 PUNTOS! Enemigo eliminado. Total: %d"), PuntosPorBloques);
        GEngine->AddOnScreenDebugMessage(302, 3.0f, FColor::Red, MensajeConfirmacion);
        
        UE_LOG(LogTemp, Warning, TEXT("UIManager OnEnemigoEliminado: Mensajes mostrados - Contador: %s, Confirmación: %s"), *MensajePuntos, *MensajeConfirmacion);
    }
    
    ActualizarContadorEnemigos(EnemigosRestantes);
    ActualizarPuntuacion(PuntuacionActual);
    
    // Verificar si se alcanzaron los puntos necesarios para cambiar de nivel
    if (PuntosPorBloques >= PuntosNecesariosParaCambioNivel && !bCambioNivelPendiente)
    {
        UE_LOG(LogTemp, Warning, TEXT("UIManager: ¡PUNTOS MÁXIMOS ALCANZADOS! Cambiando nivel..."));
        bCambioNivelPendiente = true;
        CambiarNivelPorPuntos();
    }
}

void UUIManager::OnNivelCompletado()
{
    UE_LOG(LogTemp, Warning, TEXT("UIManager: Nivel completado"));
    MostrarPantallaVictoria();
}

void UUIManager::OnJugadorHerido(AFinalBomberManCharacter* Jugador, int32 Dano)
{
    VidaJugador -= Dano;
    if (VidaJugador < 0) VidaJugador = 0;
    
    UE_LOG(LogTemp, Warning, TEXT("UIManager: Jugador herido. Dano: %d, Vida restante: %d"), Dano, VidaJugador);
    ActualizarVidaJugador(VidaJugador, VidaMaximaJugador);
    
    if (VidaJugador <= 0)
    {
        MostrarPantallaMuerte();
    }
}

void UUIManager::ActualizarContadorBombas(int32 BombasDisponiblesNuevas)
{
    BombasDisponibles = BombasDisponiblesNuevas;
    UE_LOG(LogTemp, Log, TEXT("UIManager: Bombas disponibles actualizadas: %d"), BombasDisponibles);
}

void UUIManager::ActualizarContadorEnemigos(int32 EnemigosRestantesNuevos)
{
    EnemigosRestantes = EnemigosRestantesNuevos;
    UE_LOG(LogTemp, Log, TEXT("UIManager: Enemigos restantes actualizados: %d"), EnemigosRestantes);
}

void UUIManager::ActualizarPuntuacion(int32 NuevaPuntuacion)
{
    PuntuacionActual = NuevaPuntuacion;
    UE_LOG(LogTemp, Log, TEXT("UIManager: Puntuación actualizada: %d"), PuntuacionActual);
}

void UUIManager::MostrarMensaje(const FString& Mensaje, float Duracion)
{
    UE_LOG(LogTemp, Warning, TEXT("UIManager: Mensaje mostrado - %s"), *Mensaje);
}

void UUIManager::MostrarPantallaMuerte()
{
    UE_LOG(LogTemp, Error, TEXT("UIManager: Pantalla de muerte mostrada"));
}

void UUIManager::MostrarPantallaVictoria()
{
    UE_LOG(LogTemp, Warning, TEXT("UIManager: Pantalla de victoria mostrada"));
}

void UUIManager::MostrarPowerUpRecogido(const FString& TipoPowerUp)
{
    UE_LOG(LogTemp, Log, TEXT("UIManager: PowerUp recogido mostrado - %s"), *TipoPowerUp);
}

void UUIManager::ActualizarVidaJugador(int32 VidaActual, int32 VidaMaxima)
{
    VidaJugador = VidaActual;
    VidaMaximaJugador = VidaMaxima;
    UE_LOG(LogTemp, Log, TEXT("UIManager: Vida del jugador actualizada: %d/%d"), VidaJugador, VidaMaximaJugador);
}

void UUIManager::AgregarPuntoPorBloque()
{
    UE_LOG(LogTemp, Warning, TEXT("UIManager AgregarPuntoPorBloque: INICIANDO - Puntos actuales: %d"), PuntosPorBloques);
    
    PuntosPorBloques++;
    
    UE_LOG(LogTemp, Warning, TEXT("UIManager AgregarPuntoPorBloque: Punto agregado. Nuevo total: %d/%d"), PuntosPorBloques, PuntosNecesariosParaCambioNivel);
    
    // Mostrar mensaje de puntos en pantalla de manera más visible
    if (GEngine)
    {
        UE_LOG(LogTemp, Warning, TEXT("UIManager AgregarPuntoPorBloque: GEngine válido, mostrando mensajes"));
        
        // Mostrar contador permanente con key único
        FString MensajePuntos = FString::Printf(TEXT("PUNTOS: %d/%d"), PuntosPorBloques, PuntosNecesariosParaCambioNivel);
        GEngine->AddOnScreenDebugMessage(300, -1.0f, FColor::Yellow, MensajePuntos);
        
        // Mostrar mensaje temporal de confirmación con key único
        FString MensajeConfirmacion = FString::Printf(TEXT("Puntos: %d"), PuntosPorBloques);
        GEngine->AddOnScreenDebugMessage(301, 3.0f, FColor::Green, MensajeConfirmacion);
        
        UE_LOG(LogTemp, Warning, TEXT("UIManager AgregarPuntoPorBloque: Mensajes mostrados - Contador: %s, Confirmación: %s"), *MensajePuntos, *MensajeConfirmacion);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("UIManager AgregarPuntoPorBloque: ERROR - GEngine es NULL"));
    }
    
    UE_LOG(LogTemp, Warning, TEXT("UIManager: Punto agregado por bloque. Total: %d/%d"), PuntosPorBloques, PuntosNecesariosParaCambioNivel);
    
    // Verificar si se alcanzaron los puntos necesarios para cambiar de nivel
    UE_LOG(LogTemp, Warning, TEXT("UIManager AgregarPuntoPorBloque: Verificando cambio de nivel - Puntos: %d/%d, bCambioNivelPendiente: %s"), 
           PuntosPorBloques, PuntosNecesariosParaCambioNivel, bCambioNivelPendiente ? TEXT("TRUE") : TEXT("FALSE"));
    
    if (PuntosPorBloques >= PuntosNecesariosParaCambioNivel && !bCambioNivelPendiente)
    {
        UE_LOG(LogTemp, Warning, TEXT("UIManager AgregarPuntoPorBloque: ¡PUNTOS MÁXIMOS ALCANZADOS! Cambiando nivel..."));
        bCambioNivelPendiente = true;
        CambiarNivelPorPuntos();
    }
    else if (PuntosPorBloques >= PuntosNecesariosParaCambioNivel && bCambioNivelPendiente)
    {
        UE_LOG(LogTemp, Warning, TEXT("UIManager AgregarPuntoPorBloque: Cambio de nivel ya está pendiente, pero se está reintentando..."));
        // Resetear y reintentar el cambio de nivel
        bCambioNivelPendiente = false;
        UE_LOG(LogTemp, Warning, TEXT("UIManager AgregarPuntoPorBloque: bCambioNivelPendiente reseteado a FALSE, reintentando cambio de nivel..."));
        bCambioNivelPendiente = true;
        CambiarNivelPorPuntos();
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("UIManager AgregarPuntoPorBloque: No se cumple la condición para cambiar de nivel"));
    }
}

void UUIManager::ReiniciarPuntos()
{
    PuntosPorBloques = 0;
    bCambioNivelPendiente = false;
    
    if (GEngine)
    {
        // Actualizar el contador permanente de puntos
        GEngine->AddOnScreenDebugMessage(300, -1.0f, FColor::Yellow, TEXT("PUNTOS: 0/10"));
        
        // Mostrar mensaje de reinicio temporal
        GEngine->AddOnScreenDebugMessage(303, 3.0f, FColor::Cyan, TEXT("¡CONTADOR DE PUNTOS REINICIADO!"));
        
        UE_LOG(LogTemp, Warning, TEXT("UIManager ReiniciarPuntos: Contador reiniciado y mensajes mostrados"));
    }
    
    UE_LOG(LogTemp, Warning, TEXT("UIManager: Puntos reiniciados"));
}

void UUIManager::CambiarNivelPorPuntos()
{
    UE_LOG(LogTemp, Warning, TEXT("UIManager CambiarNivelPorPuntos: INICIANDO"));
    
    // Mostrar mensaje de cambio de nivel
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Cyan, TEXT("¡10 PUNTOS ALCANZADOS! CAMBIANDO AL NIVEL 2"));
        UE_LOG(LogTemp, Warning, TEXT("UIManager CambiarNivelPorPuntos: Mensaje de cambio mostrado"));
    }
    
    UE_LOG(LogTemp, Warning, TEXT("UIManager: Cambio de nivel por puntos alcanzados"));
    
    // Usar la referencia directa al GameplayFacade
    if (GameplayFacadeRef)
    {
        UE_LOG(LogTemp, Warning, TEXT("UIManager CambiarNivelPorPuntos: GameplayFacadeRef válido, llamando a CambiarNivelPorPuntos"));
        GameplayFacadeRef->CambiarNivelPorPuntos();
        UE_LOG(LogTemp, Warning, TEXT("UIManager CambiarNivelPorPuntos: GameplayFacade->CambiarNivelPorPuntos() completado"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("UIManager CambiarNivelPorPuntos: ERROR - GameplayFacadeRef es NULL"));
        
        // Fallback: intentar obtener el mundo y GameMode como antes
        UWorld* Mundo = GetWorld();
        UE_LOG(LogTemp, Warning, TEXT("UIManager CambiarNivelPorPuntos: Intentando fallback - Mundo obtenido desde GetWorld(): %s"), Mundo ? TEXT("VÁLIDO") : TEXT("NULL"));
        
        if (!Mundo)
        {
            if (GEngine)
            {
                Mundo = GEngine->GetWorld();
                UE_LOG(LogTemp, Warning, TEXT("UIManager CambiarNivelPorPuntos: Mundo obtenido desde GEngine como respaldo: %s"), Mundo ? TEXT("VÁLIDO") : TEXT("NULL"));
            }
            
            if (!Mundo)
            {
                UE_LOG(LogTemp, Error, TEXT("UIManager CambiarNivelPorPuntos: ERROR CRÍTICO - No se puede obtener el mundo de ninguna manera"));
                return;
            }
        }
        
        if (Mundo)
        {
            AFinalBomberManGameMode* GameMode = Cast<AFinalBomberManGameMode>(Mundo->GetAuthGameMode());
            UE_LOG(LogTemp, Warning, TEXT("UIManager CambiarNivelPorPuntos: GameMode obtenido: %s"), GameMode ? TEXT("VÁLIDO") : TEXT("NULL"));
            
            if (GameMode)
            {
                UGameplayFacade* GameplayFacade = GameMode->ObtenerGameplayFacade();
                UE_LOG(LogTemp, Warning, TEXT("UIManager CambiarNivelPorPuntos: GameplayFacade obtenido: %s"), GameplayFacade ? TEXT("VÁLIDO") : TEXT("NULL"));
                
                if (GameplayFacade)
                {
                    UE_LOG(LogTemp, Warning, TEXT("UIManager CambiarNivelPorPuntos: Llamando a GameplayFacade->CambiarNivelPorPuntos()"));
                    GameplayFacade->CambiarNivelPorPuntos();
                    UE_LOG(LogTemp, Warning, TEXT("UIManager CambiarNivelPorPuntos: GameplayFacade->CambiarNivelPorPuntos() completado"));
                }
                else
                {
                    UE_LOG(LogTemp, Error, TEXT("UIManager: No se pudo obtener el GameplayFacade"));
                }
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("UIManager: No se pudo obtener el GameMode"));
            }
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("UIManager: No se pudo obtener el mundo"));
        }
    }
    
    UE_LOG(LogTemp, Warning, TEXT("UIManager CambiarNivelPorPuntos: FUNCIÓN COMPLETADA"));
}

void UUIManager::MostrarContadorPuntosPermanente()
{
    UE_LOG(LogTemp, Warning, TEXT("UIManager MostrarContadorPuntosPermanente: INICIANDO"));
    
    if (GEngine)
    {
        UE_LOG(LogTemp, Warning, TEXT("UIManager MostrarContadorPuntosPermanente: GEngine válido"));
        
        // Mostrar el contador de puntos de manera permanente
        FString MensajePuntos = FString::Printf(TEXT("PUNTOS: %d/%d"), PuntosPorBloques, PuntosNecesariosParaCambioNivel);
        GEngine->AddOnScreenDebugMessage(300, -1.0f, FColor::Yellow, MensajePuntos);
        
        UE_LOG(LogTemp, Warning, TEXT("UIManager MostrarContadorPuntosPermanente: Contador mostrado: %s"), *MensajePuntos);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("UIManager MostrarContadorPuntosPermanente: ERROR - GEngine es NULL"));
    }
}

void UUIManager::EstablecerGameplayFacade(UGameplayFacade* Facade)
{
    GameplayFacadeRef = Facade;
    UE_LOG(LogTemp, Warning, TEXT("UIManager EstablecerGameplayFacade: GameplayFacade establecido: %s"), 
           GameplayFacadeRef ? TEXT("VÁLIDO") : TEXT("NULL"));
} 