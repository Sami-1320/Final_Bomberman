// Copyright Epic Games, Inc. All Rights Reserved.
#include "FinalBomberManGameMode.h"
#include "FinalBomberManCharacter.h"
#include "ConstructorMapa.h"
#include "DirectorNiveles.h"
#include "Tile.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"
#include "PowerUp.h"
#include "Enemigo.h"
#include "UIManager.h"
#include "GameplayFacade.h"

AFinalBomberManGameMode::AFinalBomberManGameMode()
{
    // Establecer el pawn por defecto del jugador
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
    if (PlayerPawnBPClass.Class != NULL)
    {
        DefaultPawnClass = PlayerPawnBPClass.Class;
    }

    // Inicializar variables
    NivelActual = 1;
    ConstructorMapaActual = nullptr;
    DirectorNivelesActual = nullptr;
    MapaActual = nullptr;

    // Encontrar la clase del PowerUp para poder spawnearla
    static ConstructorHelpers::FClassFinder<APowerUp> PowerUpClassFinder(TEXT("/Script/FinalBomberMan.PowerUp"));
    if (PowerUpClassFinder.Succeeded())
    {
        PowerUpClass = PowerUpClassFinder.Class;
        UE_LOG(LogTemp, Warning, TEXT("PowerUpClass encontrada correctamente"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("ERROR: No se pudo encontrar PowerUpClass"));
        // Intentar con una aproximación alternativa
        PowerUpClass = APowerUp::StaticClass();
        if (PowerUpClass)
        {
            UE_LOG(LogTemp, Warning, TEXT("PowerUpClass encontrada usando StaticClass"));
        }
    }

    // Encontrar la clase del Enemigo para poder spawnearla
    static ConstructorHelpers::FClassFinder<AEnemigo> EnemigoClassFinder(TEXT("/Script/FinalBomberMan.Enemigo"));
    if (EnemigoClassFinder.Succeeded())
    {
        EnemigoClass = EnemigoClassFinder.Class;
        UE_LOG(LogTemp, Warning, TEXT("EnemigoClass encontrada correctamente"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("ERROR: No se pudo encontrar EnemigoClass"));
        // Intentar con una aproximación alternativa
        EnemigoClass = AEnemigo::StaticClass();
        if (EnemigoClass)
        {
            UE_LOG(LogTemp, Warning, TEXT("EnemigoClass encontrada usando StaticClass"));
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("ERROR CRÍTICO: No se puede obtener la clase Enemigo de ninguna manera"));
        }
    }

    // Verificación final de las clases
    if (!PowerUpClass)
    {
        UE_LOG(LogTemp, Error, TEXT("ADVERTENCIA: PowerUpClass es NULL"));
    }
    if (!EnemigoClass)
    {
        UE_LOG(LogTemp, Error, TEXT("ADVERTENCIA: EnemigoClass es NULL"));
    }

    // Configurar valores por defecto
    NivelActual = 1;
    MapaActual = nullptr;
    PowerUpClass = APowerUp::StaticClass();
    
    UE_LOG(LogTemp, Warning, TEXT("GameMode Constructor: Iniciando..."));
    
    // Crear y configurar GameplayFacade
    GameplayFacade = NewObject<UGameplayFacade>();
    if (GameplayFacade)
    {
        GameplayFacade->InicializarJuego(GetWorld());
        UE_LOG(LogTemp, Warning, TEXT("GameMode Constructor: GameplayFacade creado y configurado"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("GameMode Constructor: ERROR - No se pudo crear GameplayFacade"));
    }
    
    // Mostrar contador de puntos inicial directamente
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(300, -1.0f, FColor::Yellow, TEXT("PUNTOS: 0/10"));
        UE_LOG(LogTemp, Warning, TEXT("GameMode Constructor: Contador de puntos inicial mostrado"));
    }
    
    // Spawnear power-ups aleatorios (comentado para evitar duplicados)
    // SpawnPowerUpsAleatorios();
}

void AFinalBomberManGameMode::BeginPlay()
{
    Super::BeginPlay();

    // Crear instancia del director
    DirectorNivelesActual = NewObject<UDirectorNiveles>();

    // Cargar el primer nivel
    CargarNivel(1);

    UE_LOG(LogTemp, Warning, TEXT("GameMode iniciado - Patrn Builder implementado"));
}

void AFinalBomberManGameMode::CargarNivel(int32 NumeroNivel)
{
    UE_LOG(LogTemp, Warning, TEXT("GameMode CargarNivel: INICIANDO - Nivel solicitado: %d"), NumeroNivel);
    
    if (!DirectorNivelesActual)
    {
        UE_LOG(LogTemp, Error, TEXT("Director no inicializado"));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("GameMode CargarNivel: Director válido, limpiando mapa anterior"));
    
    // Limpiar mapa anterior
    LimpiarMapaActual();

    // Establecer nivel actual
    NivelActual = NumeroNivel;
    UE_LOG(LogTemp, Warning, TEXT("GameMode CargarNivel: Nivel actual establecido en: %d"), NivelActual);

    // Crear el nivel segn el nmero
    switch (NumeroNivel)
    {
    case 1:
        UE_LOG(LogTemp, Warning, TEXT("GameMode CargarNivel: Creando nivel 1 (madera)"));
        MapaActual = UDirectorNiveles::CrearNivel1(GetWorld());
        break;
    case 2:
        UE_LOG(LogTemp, Warning, TEXT("GameMode CargarNivel: Creando nivel 2 (ladrillo)"));
        MapaActual = UDirectorNiveles::CrearNivel2(GetWorld());
        break;
    default:
        UE_LOG(LogTemp, Warning, TEXT("Nivel %d no existe, cargando nivel 1"), NumeroNivel);
        NivelActual = 1;
        MapaActual = UDirectorNiveles::CrearNivel1(GetWorld());
        break;
    }

    UE_LOG(LogTemp, Warning, TEXT("GameMode CargarNivel: Mapa creado: %s"), MapaActual ? TEXT("VÁLIDO") : TEXT("NULL"));

    if (!MapaActual)
    {
        UE_LOG(LogTemp, Error, TEXT("Error al crear el mapa del nivel %d"), NivelActual);
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("GameMode CargarNivel: Configurando cámara"));
    
    // Configurar cmara para el nuevo mapa
    ConfigurarCamaraParaMapa();

    UE_LOG(LogTemp, Warning, TEXT("GameMode CargarNivel: Posicionando jugador"));
    
    // Posicionar jugador en spawn
    APawn* Jugador = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    if (Jugador)
    {
        // Buscar spawn del jugador
        for (int32 Y = 0; Y < MapaActual->ObtenerAlto(); Y++)
        {
            for (int32 X = 0; X < MapaActual->ObtenerAncho(); X++)
            {
                ATile* TileActual = MapaActual->ObtenerTileEn(X, Y);
                if (TileActual && TileActual->ObtenerTipoTile() == ETipoTile::SpawnJugador)
                {
                    FVector SpawnPos = TileActual->GetActorLocation() + FVector(0, 0, 150);
                    Jugador->SetActorLocation(SpawnPos);
                    UE_LOG(LogTemp, Warning, TEXT("Jugador posicionado en spawn: %s"), *SpawnPos.ToString());
                    goto SpawnEncontrado; // Salir de ambos loops
                }
            }
        }
    SpawnEncontrado:;
    }

    UE_LOG(LogTemp, Warning, TEXT("Nivel %d cargado exitosamente"), NivelActual);

    // Reiniciar puntos del sistema de conteo
    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), UUIManager::StaticClass(), FoundActors);
    if (FoundActors.Num() > 0)
    {
        UUIManager* UIManager = Cast<UUIManager>(FoundActors[0]);
        if (UIManager)
        {
            UIManager->ReiniciarPuntos();
            UE_LOG(LogTemp, Warning, TEXT("GameMode CargarNivel: Puntos reiniciados"));
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("GameMode CargarNivel: ERROR - UIManager es NULL"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("GameMode CargarNivel: ERROR - No se encontró UIManager en el mundo"));
        
        // Mostrar mensaje de puntos directamente si no hay UIManager
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(300, -1.0f, FColor::Yellow, TEXT("PUNTOS: 0/10"));
            UE_LOG(LogTemp, Warning, TEXT("GameMode CargarNivel: Mostrando contador de puntos directamente"));
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("GameMode CargarNivel: Spawneando power-ups específicos"));
    
    // Spawnear power-ups en el nuevo nivel
    SpawnPowerUpsEspecificos();

    UE_LOG(LogTemp, Warning, TEXT("GameMode CargarNivel: Spawneando enemigos"));
    
    // Spawnear enemigos en el nuevo nivel
    SpawnEnemigosAleatorios();
    
    UE_LOG(LogTemp, Warning, TEXT("GameMode CargarNivel: COMPLETADO - Nivel %d cargado exitosamente"), NivelActual);
}

void AFinalBomberManGameMode::SiguienteNivel()
{
    int32 ProximoNivel = NivelActual + 1;
    if (ProximoNivel <= 2) // Solo tenemos 2 niveles
    {
        CargarNivel(ProximoNivel);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("�Juego completado! Reiniciando al nivel 1"));
        CargarNivel(1);
    }
}

void AFinalBomberManGameMode::ReiniciarNivel()
{
    CargarNivel(NivelActual);
}

ATile* AFinalBomberManGameMode::ObtenerTileEn(int32 X, int32 Y) const
{
    if (MapaActual)
    {
        return MapaActual->ObtenerTileEn(X, Y);
    }
    return nullptr;
}

int32 AFinalBomberManGameMode::ObtenerAnchoMapa() const
{
    if (MapaActual)
    {
        return MapaActual->ObtenerAncho();
    }
    return 0;
}

int32 AFinalBomberManGameMode::ObtenerAltoMapa() const
{
    if (MapaActual)
    {
        return MapaActual->ObtenerAlto();
    }
    return 0;
}

void AFinalBomberManGameMode::LimpiarMapaActual()
{
    if (MapaActual)
    {
        MapaActual->LimpiarMapa();
        MapaActual = nullptr;
    }
}

void AFinalBomberManGameMode::ConfigurarCamaraParaMapa()
{
    // Aqu� se puede configurar la c�mara para que se ajuste al tama�o del mapa
    // Por ejemplo, ajustar la altura de la c�mara seg�n el tama�o del grid

    APawn* Jugador = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    if (Jugador)
    {
        // Configuraciones adicionales de c�mara si es necesario
        UE_LOG(LogTemp, Warning, TEXT("C�mara configurada para el mapa"));
    }
}

void AFinalBomberManGameMode::SpawnPowerUpsEspecificos()
{
    UE_LOG(LogTemp, Warning, TEXT("=== INICIANDO SpawnPowerUpsEspecificos ==="));
    
    // Limpiar power-ups existentes antes de spawnear nuevos
    TArray<AActor*> PowerUpsExistentes;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), APowerUp::StaticClass(), PowerUpsExistentes);
    
    UE_LOG(LogTemp, Warning, TEXT("Power-ups existentes antes de limpiar: %d"), PowerUpsExistentes.Num());
    
    for (AActor* PowerUp : PowerUpsExistentes)
    {
        if (PowerUp && IsValid(PowerUp))
        {
            PowerUp->Destroy();
        }
    }
    
    UE_LOG(LogTemp, Warning, TEXT("Power-ups existentes eliminados"));
    
    if (!PowerUpClass)
    {
        UE_LOG(LogTemp, Error, TEXT("ERROR: PowerUpClass es NULL"));
        return;
    }
    
    if (!MapaActual)
    {
        UE_LOG(LogTemp, Error, TEXT("ERROR: MapaActual es NULL"));
        return;
    }
    
    UE_LOG(LogTemp, Warning, TEXT("PowerUpClass válida: %s"), PowerUpClass ? TEXT("SÍ") : TEXT("NO"));
    UE_LOG(LogTemp, Warning, TEXT("MapaActual válido: %s"), MapaActual ? TEXT("SÍ") : TEXT("NO"));
    UE_LOG(LogTemp, Warning, TEXT("GetWorld() válido: %s"), GetWorld() ? TEXT("SÍ") : TEXT("NO"));

    int32 PowerUpsSpawneados = 0;
    TArray<FVector2D> PosicionesVacias;

    // Recolectar todas las posiciones vacías del mapa
    for (int32 Y = 0; Y < MapaActual->ObtenerAlto(); Y++)
    {
        for (int32 X = 0; X < MapaActual->ObtenerAncho(); X++)
        {
            ATile* TileActual = MapaActual->ObtenerTileEn(X, Y);
            if (TileActual && TileActual->ObtenerTipoTile() == ETipoTile::Vacio)
            {
                // Verificar si está en la zona segura del spawn del jugador
                bool bEnZonaSegura = false;
                
                // Buscar el spawn del jugador
                for (int32 SY = 0; SY < MapaActual->ObtenerAlto(); SY++)
                {
                    for (int32 SX = 0; SX < MapaActual->ObtenerAncho(); SX++)
                    {
                        ATile* TileSpawn = MapaActual->ObtenerTileEn(SX, SY);
                        if (TileSpawn && TileSpawn->ObtenerTipoTile() == ETipoTile::SpawnJugador)
                        {
                            // Verificar si la posición actual está en la zona segura (3x3)
                            if (FMath::Abs(X - SX) <= 1 && FMath::Abs(Y - SY) <= 1)
                            {
                                bEnZonaSegura = true;
                                break;
                            }
                        }
                    }
                    if (bEnZonaSegura) break;
                }
                
                // Solo agregar si no está en la zona segura
                if (!bEnZonaSegura)
                {
                    PosicionesVacias.Add(FVector2D(X, Y));
                }
            }
        }
    }
    
    UE_LOG(LogTemp, Warning, TEXT("Posiciones vacías encontradas: %d"), PosicionesVacias.Num());

    // Spawnear power-ups específicos: 2 de salto alto y 2 de vida extra
    int32 PowerUpsSaltoAlto = 0;
    int32 PowerUpsVidaExtra = 0;
    
    UE_LOG(LogTemp, Warning, TEXT("=== INICIANDO SPAWN DE POWER UPS ==="));
    UE_LOG(LogTemp, Warning, TEXT("Posiciones vacías disponibles: %d"), PosicionesVacias.Num());
    
    // Spawnear 2 power-ups de salto alto
    for (int32 i = 0; i < 2 && PosicionesVacias.Num() > 0; i++)
    {
        // Seleccionar una posición aleatoria
        int32 IndiceAleatorio = FMath::RandRange(0, PosicionesVacias.Num() - 1);
        FVector2D PosicionGrid = PosicionesVacias[IndiceAleatorio];
        
        // Calcular posición en el mundo
        FVector PosicionMundo = FVector(
            PosicionGrid.X * MapaActual->ObtenerTamanoTile(),
            PosicionGrid.Y * MapaActual->ObtenerTamanoTile(),
            50.0f // Altura para que esté visible
        );

        UE_LOG(LogTemp, Warning, TEXT("Intentando spawnear PowerUp Salto Alto %d en posición: %s"), i + 1, *PosicionMundo.ToString());

        // Spawnear el power-up de salto alto
        APowerUp* NewPowerUp = GetWorld()->SpawnActor<APowerUp>(PowerUpClass, PosicionMundo, FRotator::ZeroRotator);
        if (NewPowerUp)
        {
            NewPowerUp->TipoPowerUp = ETipoPowerUp::SaltoAlto;
            PowerUpsSaltoAlto++;
            PowerUpsSpawneados++;
            UE_LOG(LogTemp, Warning, TEXT("✓ PowerUp Salto Alto %d spawneado exitosamente en (%f, %f)"), 
                PowerUpsSaltoAlto, PosicionGrid.X, PosicionGrid.Y);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("✗ Falló al spawnear PowerUp Salto Alto %d"), i + 1);
        }

        // Remover la posición usada para evitar duplicados
        PosicionesVacias.RemoveAt(IndiceAleatorio);
    }
    
    UE_LOG(LogTemp, Warning, TEXT("PowerUps Salto Alto spawneados: %d"), PowerUpsSaltoAlto);
    UE_LOG(LogTemp, Warning, TEXT("Posiciones vacías restantes: %d"), PosicionesVacias.Num());
    
    // Spawnear 2 power-ups de vida extra
    for (int32 i = 0; i < 2 && PosicionesVacias.Num() > 0; i++)
    {
        // Seleccionar una posición aleatoria
        int32 IndiceAleatorio = FMath::RandRange(0, PosicionesVacias.Num() - 1);
        FVector2D PosicionGrid = PosicionesVacias[IndiceAleatorio];
        
        // Calcular posición en el mundo
        FVector PosicionMundo = FVector(
            PosicionGrid.X * MapaActual->ObtenerTamanoTile(),
            PosicionGrid.Y * MapaActual->ObtenerTamanoTile(),
            50.0f // Altura para que esté visible
        );

        UE_LOG(LogTemp, Warning, TEXT("Intentando spawnear PowerUp Vida Extra %d en posición: %s"), i + 1, *PosicionMundo.ToString());

        // Spawnear el power-up de vida extra
        APowerUp* NewPowerUp = GetWorld()->SpawnActor<APowerUp>(PowerUpClass, PosicionMundo, FRotator::ZeroRotator);
        if (NewPowerUp)
        {
            NewPowerUp->TipoPowerUp = ETipoPowerUp::VidaExtra;
            PowerUpsVidaExtra++;
            PowerUpsSpawneados++;
            UE_LOG(LogTemp, Warning, TEXT("✓ PowerUp Vida Extra %d spawneado exitosamente en (%f, %f)"), 
                PowerUpsVidaExtra, PosicionGrid.X, PosicionGrid.Y);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("✗ Falló al spawnear PowerUp Vida Extra %d"), i + 1);
        }

        // Remover la posición usada para evitar duplicados
        PosicionesVacias.RemoveAt(IndiceAleatorio);
    }
    
    UE_LOG(LogTemp, Warning, TEXT("PowerUps Vida Extra spawneados: %d"), PowerUpsVidaExtra);
    UE_LOG(LogTemp, Warning, TEXT("=== FINALIZADO SPAWN DE POWER UPS ==="));

    // Mostrar mensaje en pantalla
    // FString Mensaje = FString::Printf(TEXT("¡Se han spawneado %d power-ups en el mapa!"), PowerUpsSpawneados);
    // FString MensajeDetallado = FString::Printf(TEXT("Salto Alto: %d | Vida Extra: %d"), PowerUpsSaltoAlto, PowerUpsVidaExtra);
    // FString MensajeTipos = TEXT("Tipos de Power Up: Salto Alto (2), Vida Extra (2)");
    
    // Usar GEngine para mostrar el mensaje en pantalla con color más llamativo
    // if (GEngine)
    // {
    //     GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Green, Mensaje);
    //     GEngine->AddOnScreenDebugMessage(-1, 6.0f, FColor::Cyan, MensajeDetallado);
    //     GEngine->AddOnScreenDebugMessage(-1, 6.0f, FColor::Yellow, MensajeTipos);
    // }
    
    UE_LOG(LogTemp, Warning, TEXT("Se han spawneado %d power-ups en el mapa"), PowerUpsSpawneados);
    UE_LOG(LogTemp, Warning, TEXT("Salto Alto: %d | Vida Extra: %d"), PowerUpsSaltoAlto, PowerUpsVidaExtra);
    UE_LOG(LogTemp, Warning, TEXT("Tipos of Power Up: Salto Alto (2), Vida Extra (2)"));
}

void AFinalBomberManGameMode::SpawnEnemigosAleatorios()
{
    UE_LOG(LogTemp, Warning, TEXT("=== INICIANDO SpawnEnemigosAleatorios ==="));
    
    // Prueba simple: intentar spawnear un actor básico
    FVector PosicionPrueba = FVector(0, 0, 100);
    AActor* ActorPrueba = GetWorld()->SpawnActor<AActor>(AActor::StaticClass(), PosicionPrueba, FRotator::ZeroRotator);
    if (ActorPrueba)
    {
        UE_LOG(LogTemp, Warning, TEXT("PRUEBA: Actor básico spawneado exitosamente"));
        ActorPrueba->Destroy();
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("PRUEBA: Falló al spawnear actor básico"));
    }
    
    // Si EnemigoClass es NULL, intentar usar StaticClass como fallback
    TSubclassOf<AEnemigo> ClaseEnemigoParaUsar = EnemigoClass;
    if (!ClaseEnemigoParaUsar)
    {
        UE_LOG(LogTemp, Warning, TEXT("EnemigoClass es NULL, intentando usar StaticClass"));
        ClaseEnemigoParaUsar = AEnemigo::StaticClass();
    }
    
    if (!ClaseEnemigoParaUsar)
    {
        UE_LOG(LogTemp, Error, TEXT("ERROR: No se puede obtener la clase del enemigo"));
        return;
    }
    
    if (!MapaActual)
    {
        UE_LOG(LogTemp, Error, TEXT("ERROR: MapaActual es NULL"));
        return;
    }
    
    UE_LOG(LogTemp, Warning, TEXT("Clase enemigo y MapaActual son válidos"));

    int32 EnemigosSpawneados = 0;
    TArray<FVector2D> PosicionesVacias;

    // Recolectar todas las posiciones vacías del mapa
    for (int32 Y = 0; Y < MapaActual->ObtenerAlto(); Y++)
    {
        for (int32 X = 0; X < MapaActual->ObtenerAncho(); X++)
        {
            ATile* TileActual = MapaActual->ObtenerTileEn(X, Y);
            if (TileActual && TileActual->ObtenerTipoTile() == ETipoTile::Vacio)
            {
                // Verificar si está en la zona segura del spawn del jugador
                bool bEnZonaSegura = false;
                
                // Buscar el spawn del jugador
                for (int32 SY = 0; SY < MapaActual->ObtenerAlto(); SY++)
                {
                    for (int32 SX = 0; SX < MapaActual->ObtenerAncho(); SX++)
                    {
                        ATile* TileSpawn = MapaActual->ObtenerTileEn(SX, SY);
                        if (TileSpawn && TileSpawn->ObtenerTipoTile() == ETipoTile::SpawnJugador)
                        {
                            // Verificar si la posición actual está en la zona segura (3x3)
                            if (FMath::Abs(X - SX) <= 1 && FMath::Abs(Y - SY) <= 1)
                            {
                                bEnZonaSegura = true;
                                break;
                            }
                        }
                    }
                    if (bEnZonaSegura) break;
                }
                
                // Solo agregar si no está en la zona segura
                if (!bEnZonaSegura)
                {
                    PosicionesVacias.Add(FVector2D(X, Y));
                }
            }
        }
    }
    
    UE_LOG(LogTemp, Warning, TEXT("Posiciones vacías encontradas: %d"), PosicionesVacias.Num());

    // Remover posiciones donde ya están los power-ups
    TArray<AActor*> PowerUpsExistentes;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), APowerUp::StaticClass(), PowerUpsExistentes);
    
    UE_LOG(LogTemp, Warning, TEXT("PowerUps existentes: %d"), PowerUpsExistentes.Num());
    
    for (AActor* PowerUp : PowerUpsExistentes)
    {
        if (PowerUp)
        {
            FVector PosicionPowerUp = PowerUp->GetActorLocation();
            FVector2D PosicionGridPowerUp = FVector2D(
                FMath::RoundToInt(PosicionPowerUp.X / MapaActual->ObtenerTamanoTile()),
                FMath::RoundToInt(PosicionPowerUp.Y / MapaActual->ObtenerTamanoTile())
            );
            
            // Remover esta posición de las posiciones vacías
            PosicionesVacias.Remove(PosicionGridPowerUp);
        }
    }
    
    UE_LOG(LogTemp, Warning, TEXT("Posiciones vacías después de remover power-ups: %d"), PosicionesVacias.Num());

    // Generar número aleatorio de enemigos entre 1 y 3
    int32 NumeroEnemigos = FMath::Clamp(FMath::RandRange(1, 3), 1, PosicionesVacias.Num());
    if (NumeroEnemigos < 1 && PosicionesVacias.Num() > 0) NumeroEnemigos = 1;
    
    // En el nivel 2, agregar un enemigo extra
    if (NivelActual == 2)
    {
        NumeroEnemigos = FMath::Min(NumeroEnemigos + 1, PosicionesVacias.Num());
        UE_LOG(LogTemp, Warning, TEXT("Nivel 2 detectado - Agregando enemigo extra. Total: %d"), NumeroEnemigos);
    }
    
    UE_LOG(LogTemp, Warning, TEXT("Número de enemigos a spawnear: %d"), NumeroEnemigos);
    
    // Si no hay posiciones vacías, intentar spawnear en una posición fija
    if (PosicionesVacias.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("No hay posiciones vacías, intentando spawnear en posición fija"));
        
        // Intentar spawnear en una posición fija (esquina del mapa)
        FVector PosicionFija = FVector(400.0f, 400.0f, 100.0f); // Posición fija en el mundo
        
        AEnemigo* EnemigoFijo = GetWorld()->SpawnActor<AEnemigo>(ClaseEnemigoParaUsar, PosicionFija, FRotator::ZeroRotator);
        if (EnemigoFijo)
        {
            EnemigoFijo->TipoEnemigo = ETipoEnemigo::Basico;
            EnemigosSpawneados++;
            UE_LOG(LogTemp, Warning, TEXT("Enemigo spawneado en posición fija exitosamente"));
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("ERROR: Falló al spawnear enemigo en posición fija"));
        }
        
        // Mostrar mensaje en pantalla
        // FString Mensaje = FString::Printf(TEXT("¡Se han spawneado %d enemigos en el mapa!"), EnemigosSpawneados);
        // if (GEngine)
        // {
        //     GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Red, Mensaje);
        // }
        
        // Mostrar mensaje en pantalla
        FString Mensaje = FString::Printf(TEXT("Enemigos: %d"), EnemigosSpawneados);
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Red, Mensaje);
        }
        return;
    }

    // Spawnear enemigos en posiciones aleatorias
    for (int32 i = 0; i < NumeroEnemigos && PosicionesVacias.Num() > 0; i++)
    {
        // Seleccionar una posición aleatoria
        int32 IndiceAleatorio = FMath::RandRange(0, PosicionesVacias.Num() - 1);
        FVector2D PosicionGrid = PosicionesVacias[IndiceAleatorio];
        
        // Calcular posición en el mundo
        FVector PosicionMundo = FVector(
            PosicionGrid.X * MapaActual->ObtenerTamanoTile(),
            PosicionGrid.Y * MapaActual->ObtenerTamanoTile(),
            100.0f // Altura para que esté visible sobre el suelo
        );

        UE_LOG(LogTemp, Warning, TEXT("Intentando spawnear enemigo en posición: %s"), *PosicionMundo.ToString());

        // Spawnear el enemigo usando la clase que determinamos
        AEnemigo* NewEnemigo = GetWorld()->SpawnActor<AEnemigo>(ClaseEnemigoParaUsar, PosicionMundo, FRotator::ZeroRotator);
        if (NewEnemigo)
        {
            // Asignar un tipo aleatorio
            ETipoEnemigo TiposDisponibles[] = {
                ETipoEnemigo::Basico,
                ETipoEnemigo::Rapido,
                ETipoEnemigo::Tanque,
                ETipoEnemigo::Explosivo,
                ETipoEnemigo::Volador
            };
            
            int32 TipoAleatorio = FMath::RandRange(0, 4);
            NewEnemigo->TipoEnemigo = TiposDisponibles[TipoAleatorio];
            
            EnemigosSpawneados++;
            UE_LOG(LogTemp, Warning, TEXT("Enemigo spawneado exitosamente en (%f, %f) - Tipo: %d"), 
                PosicionGrid.X, PosicionGrid.Y, (int32)NewEnemigo->TipoEnemigo);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("ERROR: Falló al spawnear enemigo en posición %s"), *PosicionMundo.ToString());
            
            // Información adicional de debug
            UE_LOG(LogTemp, Error, TEXT("DEBUG: ClaseEnemigoParaUsar válida: %s"), ClaseEnemigoParaUsar ? TEXT("SÍ") : TEXT("NO"));
            UE_LOG(LogTemp, Error, TEXT("DEBUG: GetWorld() válido: %s"), GetWorld() ? TEXT("SÍ") : TEXT("NO"));
            
            // Intentar con una posición diferente
            FVector PosicionAlternativa = PosicionMundo + FVector(0, 0, 50.0f);
            UE_LOG(LogTemp, Warning, TEXT("Intentando spawnear en posición alternativa: %s"), *PosicionAlternativa.ToString());
            
            AEnemigo* EnemigoAlternativo = GetWorld()->SpawnActor<AEnemigo>(ClaseEnemigoParaUsar, PosicionAlternativa, FRotator::ZeroRotator);
            if (EnemigoAlternativo)
            {
                EnemigoAlternativo->TipoEnemigo = ETipoEnemigo::Basico;
                EnemigosSpawneados++;
                UE_LOG(LogTemp, Warning, TEXT("Enemigo spawneado exitosamente en posición alternativa"));
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("ERROR: También falló en posición alternativa"));
            }
        }

        // Remover la posición usada para evitar duplicados
        PosicionesVacias.RemoveAt(IndiceAleatorio);
    }

    // Mostrar mensaje en pantalla
    // FString Mensaje = FString::Printf(TEXT("¡Se han spawneado %d enemigos en el mapa!"), EnemigosSpawneados);
    
    // Usar GEngine para mostrar el mensaje en pantalla
    // if (GEngine)
    // {
    //     GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Red, Mensaje);
    // }
    
    // Mostrar mensaje en pantalla
    FString Mensaje = FString::Printf(TEXT("Enemigos: %d"), EnemigosSpawneados);
    
    // Usar GEngine para mostrar el mensaje en pantalla
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Red, Mensaje);
    }
    
    UE_LOG(LogTemp, Warning, TEXT("=== FINALIZADO SpawnEnemigosAleatorios - Enemigos spawneados: %d ==="), EnemigosSpawneados);
    
}

// Función estática para actualizar puntos desde cualquier lugar
void AFinalBomberManGameMode::ActualizarContadorPuntosGlobal(int32 PuntosActuales, int32 PuntosMaximos, bool bEsEnemigo)
{
    if (GEngine)
    {
        FString MensajePuntos = FString::Printf(TEXT("PUNTOS: %d/%d"), PuntosActuales, PuntosMaximos);
        GEngine->AddOnScreenDebugMessage(300, -1.0f, FColor::Yellow, MensajePuntos);
        
        // Mostrar mensaje de confirmación según el tipo
        if (bEsEnemigo)
        {
            FString MensajeConfirmacion = FString::Printf(TEXT("¡+2 PUNTOS! Enemigo eliminado. Total: %d"), PuntosActuales);
            GEngine->AddOnScreenDebugMessage(302, 2.0f, FColor::Red, MensajeConfirmacion);
        }
        else if (PuntosActuales > 0)
        {
            FString MensajeConfirmacion = FString::Printf(TEXT("Puntos: %d"), PuntosActuales);
            GEngine->AddOnScreenDebugMessage(301, 2.0f, FColor::Green, MensajeConfirmacion);
        }
        
        UE_LOG(LogTemp, Warning, TEXT("GameMode ActualizarContadorPuntosGlobal: Puntos actualizados a %d/%d (Enemigo: %s)"), 
               PuntosActuales, PuntosMaximos, bEsEnemigo ? TEXT("SÍ") : TEXT("NO"));
    }
}