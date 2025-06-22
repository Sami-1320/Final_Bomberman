// Copyright Epic Games, Inc. All Rights Reserved.
#include "GameplayFacade.h"
#include "ConstructorMapa.h"
#include "DirectorNiveles.h"
#include "GameEventManager.h"
#include "VFXManager.h"
#include "UIManager.h"
#include "Bomba.h"
#include "PowerUp.h"
#include "Enemigo.h"
#include "FinalBomberManCharacter.h"
#include "Engine/World.h"

UGameplayFacade::UGameplayFacade()
{
    MundoActual = nullptr;
    ConstructorMapa = nullptr;
    DirectorNiveles = nullptr;
    GameEventManager = nullptr;
    VFXManager = nullptr;
    UIManager = nullptr;
    
    NivelActual = 1;
    PuntuacionActual = 0;
    bJuegoPausado = false;
    bJuegoTerminado = false;
}

void UGameplayFacade::InicializarJuego(UWorld* Mundo)
{
    MundoActual = Mundo;
    if (!MundoActual)
    {
        UE_LOG(LogTemp, Error, TEXT("GameplayFacade: Mundo no válido"));
        return;
    }

    ConfigurarSistemas();
    UE_LOG(LogTemp, Warning, TEXT("GameplayFacade: Juego inicializado correctamente"));
}

void UGameplayFacade::IniciarJuego(int32 NumJugadores)
{
    if (!MundoActual)
    {
        UE_LOG(LogTemp, Error, TEXT("GameplayFacade: Juego no inicializado"));
        return;
    }

    NivelActual = 1;
    PuntuacionActual = 0;
    bJuegoPausado = false;
    bJuegoTerminado = false;

    CargarNivel(NivelActual);
    UE_LOG(LogTemp, Warning, TEXT("GameplayFacade: Juego iniciado con %d jugadores"), NumJugadores);
}

void UGameplayFacade::PausarJuego()
{
    bJuegoPausado = true;
    UE_LOG(LogTemp, Log, TEXT("GameplayFacade: Juego pausado"));
}

void UGameplayFacade::ReanudarJuego()
{
    bJuegoPausado = false;
    UE_LOG(LogTemp, Log, TEXT("GameplayFacade: Juego reanudado"));
}

void UGameplayFacade::TerminarJuego()
{
    bJuegoTerminado = true;
    LimpiarNivel();
    UE_LOG(LogTemp, Warning, TEXT("GameplayFacade: Juego terminado"));
}

void UGameplayFacade::CargarNivel(int32 NumeroNivel)
{
    if (!MundoActual || !DirectorNiveles)
    {
        return;
    }

    LimpiarNivel();
    NivelActual = NumeroNivel;

    // Cargar nivel según el número
    switch (NumeroNivel)
    {
    case 1:
        ConstructorMapa = DirectorNiveles->CrearNivel1(MundoActual);
        break;
    case 2:
        ConstructorMapa = DirectorNiveles->CrearNivel2(MundoActual);
        break;
    default:
        ConstructorMapa = DirectorNiveles->CrearNivel1(MundoActual);
        break;
    }

    UE_LOG(LogTemp, Warning, TEXT("GameplayFacade: Nivel %d cargado"), NumeroNivel);
}

void UGameplayFacade::CompletarNivel()
{
    if (GameEventManager)
    {
        GameEventManager->NotificarNivelCompletado();
    }

    PuntuacionActual += 1000;
    NivelActual++;
    
    UE_LOG(LogTemp, Warning, TEXT("GameplayFacade: Nivel %d completado. Puntuación: %d"), NivelActual - 1, PuntuacionActual);
    
    // Cargar siguiente nivel
    CargarNivel(NivelActual);
}

void UGameplayFacade::ReiniciarNivel()
{
    CargarNivel(NivelActual);
    UE_LOG(LogTemp, Log, TEXT("GameplayFacade: Nivel %d reiniciado"), NivelActual);
}

ABomba* UGameplayFacade::ColocarBomba(FVector2D Posicion, int32 RadioExplosion)
{
    if (!MundoActual)
    {
        return nullptr;
    }

    ABomba* NuevaBomba = MundoActual->SpawnActor<ABomba>(ABomba::StaticClass(), FVector(Posicion.X, Posicion.Y, 0), FRotator::ZeroRotator);
    if (NuevaBomba)
    {
        NuevaBomba->RadioExplosion = RadioExplosion;
        NuevaBomba->IniciarExplosion();
        BombasActivas.Add(NuevaBomba);

        if (GameEventManager)
        {
            GameEventManager->NotificarBombaColocada(Posicion, RadioExplosion);
        }

        UE_LOG(LogTemp, Log, TEXT("GameplayFacade: Bomba colocada en (%f, %f)"), Posicion.X, Posicion.Y);
    }

    return NuevaBomba;
}

void UGameplayFacade::DetonarBomba(ABomba* Bomba)
{
    if (Bomba)
    {
        Bomba->Detonar();
        BombasActivas.Remove(Bomba);
    }
}

void UGameplayFacade::CancelarBomba(ABomba* Bomba)
{
    if (Bomba)
    {
        Bomba->CancelarExplosion();
        BombasActivas.Remove(Bomba);
    }
}

APowerUp* UGameplayFacade::CrearPowerUp(ETipoPowerUp Tipo, FVector2D Posicion)
{
    if (!MundoActual)
    {
        return nullptr;
    }

    APowerUp* NuevoPowerUp = MundoActual->SpawnActor<APowerUp>(APowerUp::StaticClass(), FVector(Posicion.X, Posicion.Y, 0), FRotator::ZeroRotator);
    if (NuevoPowerUp)
    {
        NuevoPowerUp->TipoPowerUp = Tipo;
        PowerUpsActivos.Add(NuevoPowerUp);
        UE_LOG(LogTemp, Log, TEXT("GameplayFacade: Power-up creado en (%f, %f)"), Posicion.X, Posicion.Y);
    }

    return NuevoPowerUp;
}

void UGameplayFacade::AplicarPowerUp(AFinalBomberManCharacter* Jugador, ETipoPowerUp Tipo)
{
    if (!Jugador)
    {
        return;
    }

    // Aquí se implementaría la lógica específica de cada power-up
    UE_LOG(LogTemp, Log, TEXT("GameplayFacade: Power-up aplicado al jugador"));
}

void UGameplayFacade::RemoverPowerUp(AFinalBomberManCharacter* Jugador, ETipoPowerUp Tipo)
{
    if (!Jugador)
    {
        return;
    }

    UE_LOG(LogTemp, Log, TEXT("GameplayFacade: Power-up removido del jugador"));
}

AEnemigo* UGameplayFacade::SpawnearEnemigo(ETipoEnemigo Tipo, FVector2D Posicion)
{
    if (!MundoActual)
    {
        return nullptr;
    }

    AEnemigo* NuevoEnemigo = MundoActual->SpawnActor<AEnemigo>(AEnemigo::StaticClass(), FVector(Posicion.X, Posicion.Y, 0), FRotator::ZeroRotator);
    if (NuevoEnemigo)
    {
        NuevoEnemigo->TipoEnemigo = Tipo;
        EnemigosActivos.Add(NuevoEnemigo);
        UE_LOG(LogTemp, Log, TEXT("GameplayFacade: Enemigo spawnado en (%f, %f)"), Posicion.X, Posicion.Y);
    }

    return NuevoEnemigo;
}

void UGameplayFacade::EliminarEnemigo(AEnemigo* Enemigo)
{
    if (Enemigo)
    {
        Enemigo->RecibirDano(Enemigo->Vida); // Matar instantáneamente
        EnemigosActivos.Remove(Enemigo);
    }
}

TArray<AEnemigo*> UGameplayFacade::ObtenerEnemigosVivos()
{
    TArray<AEnemigo*> EnemigosVivos;
    for (AEnemigo* Enemigo : EnemigosActivos)
    {
        if (Enemigo && Enemigo->EstaVivo())
        {
            EnemigosVivos.Add(Enemigo);
        }
    }
    return EnemigosVivos;
}

void UGameplayFacade::HerirJugador(AFinalBomberManCharacter* Jugador, int32 Dano)
{
    if (!Jugador || !GameEventManager)
    {
        return;
    }

    GameEventManager->NotificarJugadorHerido(Jugador, Dano);
    UE_LOG(LogTemp, Log, TEXT("GameplayFacade: Jugador herido con %d de daño"), Dano);
}

void UGameplayFacade::MatarJugador(AFinalBomberManCharacter* Jugador)
{
    if (!Jugador || !GameEventManager)
    {
        return;
    }

    GameEventManager->NotificarJugadorMuerto(Jugador);
    UE_LOG(LogTemp, Warning, TEXT("GameplayFacade: Jugador muerto"));
}

void UGameplayFacade::RespawnearJugador(AFinalBomberManCharacter* Jugador, FVector2D Posicion)
{
    if (!Jugador)
    {
        return;
    }

    Jugador->SetActorLocation(FVector(Posicion.X, Posicion.Y, 0));
    UE_LOG(LogTemp, Log, TEXT("GameplayFacade: Jugador respawneado en (%f, %f)"), Posicion.X, Posicion.Y);
}

void UGameplayFacade::MostrarMensaje(const FString& Mensaje, float Duracion)
{
    if (UIManager)
    {
        UIManager->MostrarMensaje(Mensaje, Duracion);
    }
}

void UGameplayFacade::ActualizarPuntuacion(int32 NuevaPuntuacion)
{
    PuntuacionActual = NuevaPuntuacion;
    if (UIManager)
    {
        UIManager->ActualizarPuntuacion(PuntuacionActual);
    }
}

void UGameplayFacade::MostrarPantallaMuerte()
{
    if (UIManager)
    {
        UIManager->MostrarPantallaMuerte();
    }
}

void UGameplayFacade::MostrarPantallaVictoria()
{
    if (UIManager)
    {
        UIManager->MostrarPantallaVictoria();
    }
}

void UGameplayFacade::CrearEfectoExplosion(FVector2D Posicion, int32 Radio)
{
    if (VFXManager)
    {
        VFXManager->CrearEfectoExplosion(Posicion, Radio);
    }
}

void UGameplayFacade::CrearEfectoDestruccion(FVector2D Posicion)
{
    if (VFXManager)
    {
        VFXManager->CrearEfectoDestruccion(Posicion);
    }
}

int32 UGameplayFacade::ObtenerPuntuacionActual() const
{
    return PuntuacionActual;
}

int32 UGameplayFacade::ObtenerNivelActual() const
{
    return NivelActual;
}

bool UGameplayFacade::EstaJuegoPausado() const
{
    return bJuegoPausado;
}

bool UGameplayFacade::EstaJuegoTerminado() const
{
    return bJuegoTerminado;
}

void UGameplayFacade::ConfigurarSistemas()
{
    // Crear y configurar sistemas
    DirectorNiveles = NewObject<UDirectorNiveles>();
    
    GameEventManager = NewObject<UGameEventManager>();
    
    VFXManager = NewObject<UVFXManager>();
    if (GameEventManager && VFXManager)
    {
        GameEventManager->AgregarObserver(VFXManager);
    }
    
    UIManager = NewObject<UUIManager>();
    if (GameEventManager && UIManager)
    {
        GameEventManager->AgregarObserver(UIManager);
    }

    UE_LOG(LogTemp, Log, TEXT("GameplayFacade: Sistemas configurados"));
}

void UGameplayFacade::LimpiarNivel()
{
    // Limpiar bombas activas
    for (ABomba* Bomba : BombasActivas)
    {
        if (Bomba && IsValid(Bomba))
        {
            Bomba->Destroy();
        }
    }
    BombasActivas.Empty();

    // Limpiar power-ups activos
    for (APowerUp* PowerUp : PowerUpsActivos)
    {
        if (PowerUp && IsValid(PowerUp))
        {
            PowerUp->Destroy();
        }
    }
    PowerUpsActivos.Empty();

    // Limpiar enemigos activos
    for (AEnemigo* Enemigo : EnemigosActivos)
    {
        if (Enemigo && IsValid(Enemigo))
        {
            Enemigo->Destroy();
        }
    }
    EnemigosActivos.Empty();

    UE_LOG(LogTemp, Log, TEXT("GameplayFacade: Nivel limpiado"));
} 