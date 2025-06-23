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
#include "FinalBomberManGameMode.h"
#include "Kismet/GameplayStatics.h"

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

void UGameplayFacade::CambiarNivelPorPuntos()
{
    UE_LOG(LogTemp, Warning, TEXT("GameplayFacade CambiarNivelPorPuntos: INICIANDO"));
    
    if (!MundoActual)
    {
        UE_LOG(LogTemp, Error, TEXT("GameplayFacade CambiarNivelPorPuntos: ERROR - MundoActual es NULL"));
        return;
    }
    
    // Obtener el GameMode
    AFinalBomberManGameMode* GameMode = Cast<AFinalBomberManGameMode>(MundoActual->GetAuthGameMode());
    if (!GameMode)
    {
        UE_LOG(LogTemp, Error, TEXT("GameplayFacade CambiarNivelPorPuntos: ERROR - No se pudo obtener GameMode"));
        return;
    }
    
    UE_LOG(LogTemp, Warning, TEXT("GameplayFacade CambiarNivelPorPuntos: GameMode obtenido, procediendo con cambio de nivel"));
    
    // Obtener el jugador para reiniciar sus estadísticas
    APawn* Jugador = UGameplayStatics::GetPlayerPawn(MundoActual, 0);
    AFinalBomberManCharacter* Character = Cast<AFinalBomberManCharacter>(Jugador);
    
    if (Character)
    {
        // Reiniciar estadísticas del jugador
        Character->SetVidasJugador(5); // Reiniciar a 5 vidas
        Character->SetBombCount(20); // Reiniciar bombas a 20
        
        // Desactivar power up de salto
        Character->bTienePowerUpSalto = false;
        Character->SaltosDisponibles = 0;
        
        UE_LOG(LogTemp, Warning, TEXT("GameplayFacade: Estadísticas del jugador reiniciadas"));
    }
    
    // Reiniciar puntos en UIManager
    if (UIManager)
    {
        UIManager->ReiniciarPuntos();
        UE_LOG(LogTemp, Warning, TEXT("GameplayFacade: Puntos reiniciados en UIManager"));
    }
    
    // Cambiar al nivel 2
    UE_LOG(LogTemp, Warning, TEXT("GameplayFacade CambiarNivelPorPuntos: Llamando a GameMode->CargarNivel(2)"));
    GameMode->CargarNivel(2);
    UE_LOG(LogTemp, Warning, TEXT("GameplayFacade CambiarNivelPorPuntos: CargarNivel(2) completado"));
    
    // Activar power up de salto en el nuevo nivel
    if (Character)
    {
        UE_LOG(LogTemp, Warning, TEXT("GameplayFacade CambiarNivelPorPuntos: Activando power up de salto"));
        Character->ActivarPowerUpSalto();
    }
    
    UE_LOG(LogTemp, Warning, TEXT("GameplayFacade: Nivel 2 cargado exitosamente con estadísticas reiniciadas"));
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

    // Aquí se implementaría la lógica para remover power-ups
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
        UE_LOG(LogTemp, Log, TEXT("GameplayFacade: Enemigo spawneado en (%f, %f)"), Posicion.X, Posicion.Y);
    }

    return NuevoEnemigo;
}

void UGameplayFacade::EliminarEnemigo(AEnemigo* Enemigo)
{
    if (Enemigo)
    {
        EnemigosActivos.Remove(Enemigo);
        Enemigo->Destroy();
        UE_LOG(LogTemp, Log, TEXT("GameplayFacade: Enemigo eliminado"));
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
    UE_LOG(LogTemp, Warning, TEXT("GameplayFacade ConfigurarSistemas: INICIANDO"));
    
    // Crear y configurar sistemas
    DirectorNiveles = NewObject<UDirectorNiveles>();
    UE_LOG(LogTemp, Warning, TEXT("GameplayFacade ConfigurarSistemas: DirectorNiveles creado"));
    
    GameEventManager = NewObject<UGameEventManager>();
    UE_LOG(LogTemp, Warning, TEXT("GameplayFacade ConfigurarSistemas: GameEventManager creado"));
    
    VFXManager = NewObject<UVFXManager>();
    if (GameEventManager && VFXManager)
    {
        GameEventManager->AgregarObserver(VFXManager);
        UE_LOG(LogTemp, Warning, TEXT("GameplayFacade ConfigurarSistemas: VFXManager registrado como observer"));
    }
    
    UIManager = NewObject<UUIManager>();
    UE_LOG(LogTemp, Warning, TEXT("GameplayFacade ConfigurarSistemas: UIManager creado: %s"), UIManager ? TEXT("VÁLIDO") : TEXT("NULL"));
    
    if (GameEventManager && UIManager)
    {
        GameEventManager->AgregarObserver(UIManager);
        UE_LOG(LogTemp, Warning, TEXT("GameplayFacade ConfigurarSistemas: UIManager registrado como observer"));
        
        // Establecer la referencia al GameplayFacade en UIManager
        UIManager->EstablecerGameplayFacade(this);
        UE_LOG(LogTemp, Warning, TEXT("GameplayFacade ConfigurarSistemas: Referencia al GameplayFacade establecida en UIManager"));
        
        // Inicializar el UIManager después de un pequeño delay
        if (GetWorld())
        {
            FTimerHandle TimerHandle;
            GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this]()
            {
                if (UIManager)
                {
                    UIManager->InicializarUIManager();
                    UE_LOG(LogTemp, Warning, TEXT("GameplayFacade ConfigurarSistemas: UIManager inicializado"));
                }
            }, 0.5f, false);
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("GameplayFacade ConfigurarSistemas: ERROR - No se pudo registrar UIManager como observer"));
    }

    UE_LOG(LogTemp, Warning, TEXT("GameplayFacade ConfigurarSistemas: Sistemas configurados completado"));
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