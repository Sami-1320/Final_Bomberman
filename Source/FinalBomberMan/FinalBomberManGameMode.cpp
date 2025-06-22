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
}

void AFinalBomberManGameMode::BeginPlay()
{
    Super::BeginPlay();

    // Crear instancia del director
    DirectorNivelesActual = NewObject<UDirectorNiveles>();

    // Cargar el primer nivel
    CargarNivel(1);

    // Solo spawneamos power-ups si el mapa se ha cargado correctamente
    if (MapaActual)
    {
        SpawnPowerUpsAleatorios();
    }

    UE_LOG(LogTemp, Warning, TEXT("GameMode iniciado - Patrn Builder implementado"));
}

void AFinalBomberManGameMode::CargarNivel(int32 NumeroNivel)
{
    if (!DirectorNivelesActual)
    {
        UE_LOG(LogTemp, Error, TEXT("Director no inicializado"));
        return;
    }

    // Limpiar mapa anterior
    LimpiarMapaActual();

    // Establecer nivel actual
    NivelActual = NumeroNivel;

    // Crear el nivel seg�n el n�mero
    switch (NumeroNivel)
    {
    case 1:
        MapaActual = UDirectorNiveles::CrearNivel1(GetWorld());
        break;
    case 2:
        MapaActual = UDirectorNiveles::CrearNivel2(GetWorld());
        break;
    default:
        UE_LOG(LogTemp, Warning, TEXT("Nivel %d no existe, cargando nivel 1"), NumeroNivel);
        NivelActual = 1;
        MapaActual = UDirectorNiveles::CrearNivel1(GetWorld());
        break;
    }

    if (!MapaActual)
    {
        UE_LOG(LogTemp, Error, TEXT("Error al crear el mapa del nivel %d"), NivelActual);
        return;
    }

    // Configurar c�mara para el nuevo mapa
    ConfigurarCamaraParaMapa();

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

    // Spawnear power-ups en el nuevo nivel
    SpawnPowerUpsAleatorios();

    // Spawnear enemigos en el nuevo nivel
    SpawnEnemigosAleatorios();
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

void AFinalBomberManGameMode::SpawnPowerUpsAleatorios()
{
    if (!PowerUpClass || !MapaActual)
    {
        UE_LOG(LogTemp, Error, TEXT("No se puede spawnear power-ups: PowerUpClass o MapaActual no válidos"));
        return;
    }

    int32 PowerUpsSpawneados = 0;
    TArray<FVector2D> PosicionesVacias;

    // Recolectar todas las posiciones vacías del mapa
    int32 TotalTiles = 0;
    int32 TilesVacios = 0;
    int32 TilesBloques = 0;
    int32 TilesSpawnJugador = 0;
    int32 TilesSpawnEnemigos = 0;
    int32 TilesSalida = 0;
    
    for (int32 Y = 0; Y < MapaActual->ObtenerAlto(); Y++)
    {
        for (int32 X = 0; X < MapaActual->ObtenerAncho(); X++)
        {
            ATile* TileActual = MapaActual->ObtenerTileEn(X, Y);
            TotalTiles++;
            
            if (TileActual)
            {
                switch (TileActual->ObtenerTipoTile())
                {
                    case ETipoTile::Vacio:
                        TilesVacios++;
                        PosicionesVacias.Add(FVector2D(X, Y));
                        break;
                    case ETipoTile::BloqueDestructible:
                    case ETipoTile::BloqueIndestructible:
                        TilesBloques++;
                        break;
                    case ETipoTile::SpawnJugador:
                        TilesSpawnJugador++;
                        break;
                    case ETipoTile::SpawnEnemigo:
                        TilesSpawnEnemigos++;
                        // También considerar spawns de enemigos como posiciones válidas
                        PosicionesVacias.Add(FVector2D(X, Y));
                        break;
                    case ETipoTile::SalidaNivel:
                        TilesSalida++;
                        break;
                }
            }
        }
    }
    
    UE_LOG(LogTemp, Warning, TEXT("=== ESTADÍSTICAS DEL MAPA ==="));
    UE_LOG(LogTemp, Warning, TEXT("Total de tiles: %d"), TotalTiles);
    UE_LOG(LogTemp, Warning, TEXT("Tiles vacíos: %d"), TilesVacios);
    UE_LOG(LogTemp, Warning, TEXT("Tiles con bloques: %d"), TilesBloques);
    UE_LOG(LogTemp, Warning, TEXT("Tiles spawn jugador: %d"), TilesSpawnJugador);
    UE_LOG(LogTemp, Warning, TEXT("Tiles spawn enemigos: %d"), TilesSpawnEnemigos);
    UE_LOG(LogTemp, Warning, TEXT("Tiles salida: %d"), TilesSalida);
    UE_LOG(LogTemp, Warning, TEXT("Posiciones disponibles (vacías + spawns enemigos): %d"), PosicionesVacias.Num());

    // Spawnear power-ups en posiciones aleatorias
    for (int32 i = 0; i < NumeroDePowerUpsAlInicio && PosicionesVacias.Num() > 0; i++)
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

        // Spawnear el power-up
        APowerUp* NewPowerUp = GetWorld()->SpawnActor<APowerUp>(PowerUpClass, PosicionMundo, FRotator::ZeroRotator);
        if (NewPowerUp)
        {
            // Asignar un tipo aleatorio
            ETipoPowerUp TiposDisponibles[] = {
                ETipoPowerUp::BombaExtra,
                ETipoPowerUp::RadioExplosion,
                ETipoPowerUp::Velocidad,
                ETipoPowerUp::Escudo,
                ETipoPowerUp::BombaRemota,
                ETipoPowerUp::Inmortalidad
            };
            
            int32 TipoAleatorio = FMath::RandRange(0, 5);
            NewPowerUp->TipoPowerUp = TiposDisponibles[TipoAleatorio];
            
            PowerUpsSpawneados++;
            UE_LOG(LogTemp, Warning, TEXT("PowerUp spawneado en (%f, %f) - Tipo: %d"), 
                PosicionGrid.X, PosicionGrid.Y, (int32)NewPowerUp->TipoPowerUp);
        }

        // Remover la posición usada para evitar duplicados
        PosicionesVacias.RemoveAt(IndiceAleatorio);
    }

    // Mostrar mensaje en pantalla
    FString Mensaje = FString::Printf(TEXT("¡Se han spawneado %d power-ups en el mapa!"), PowerUpsSpawneados);
    
    // Usar GEngine para mostrar el mensaje en pantalla con color más llamativo
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Green, Mensaje);
    }
    
    UE_LOG(LogTemp, Warning, TEXT("Se han spawneado %d power-ups en el mapa"), PowerUpsSpawneados);
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
                PosicionesVacias.Add(FVector2D(X, Y));
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
        FString Mensaje = FString::Printf(TEXT("¡Se han spawneado %d enemigos en el mapa!"), EnemigosSpawneados);
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
    FString Mensaje = FString::Printf(TEXT("¡Se han spawneado %d enemigos en el mapa!"), EnemigosSpawneados);
    
    // Usar GEngine para mostrar el mensaje en pantalla
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Red, Mensaje);
    }
    
    UE_LOG(LogTemp, Warning, TEXT("=== FINALIZADO SpawnEnemigosAleatorios - Enemigos spawneados: %d ==="), EnemigosSpawneados);
    
    // Mostrar información adicional sobre los tipos de enemigos
    if (EnemigosSpawneados > 0)
    {
        FString MensajeTipos = TEXT("Tipos de enemigos: Básico, Rápido, Tanque, Explosivo, Volador");
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 6.0f, FColor::Orange, MensajeTipos);
        }
        
        // Mostrar mensaje sobre el número aleatorio
        FString MensajeAleatorio = TEXT("Número de enemigos: Aleatorio (1-3)");
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 6.0f, FColor::Yellow, MensajeAleatorio);
        }
    }
}