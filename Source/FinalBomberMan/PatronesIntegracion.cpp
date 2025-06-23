// Copyright Epic Games, Inc. All Rights Reserved.
#include "PatronesIntegracion.h"
#include "GameplayFacade.h"
#include "ConstructorMapa.h"
#include "DirectorNiveles.h"
#include "MapTileIterator.h"
#include "SeccionMapa.h"
#include "Bomba.h"
#include "PowerUp.h"
#include "Enemigo.h"
#include "Tile.h"
#include "Engine/World.h"

UPatronesIntegracion::UPatronesIntegracion()
{
    GameplayFacade = nullptr;
    ConstructorMapa = nullptr;
    TileIterator = nullptr;
    SeccionPrincipal = nullptr;
}

void UPatronesIntegracion::EjemploIntegracionCompleta(UWorld* Mundo)
{
    if (!Mundo)
    {
        UE_LOG(LogTemp, Error, TEXT("PatronesIntegracion: Mundo no válido"));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("=== EJEMPLO DE INTEGRACIÓN COMPLETA DE PATRONES ==="));

    // 1. FACADE: Inicializar el juego
    GameplayFacade = NewObject<UGameplayFacade>();
    GameplayFacade->InicializarJuego(Mundo);
    GameplayFacade->IniciarJuego(1);

    // 2. BUILDER: Construir nivel usando Director
    UDirectorNiveles* Director = NewObject<UDirectorNiveles>();
    ConstructorMapa = Director->CrearNivel1(Mundo);

    // 3. COMPOSITE: Crear sección del mapa
    CrearSeccionMapa(Mundo);

    // 4. ITERATOR: Configurar iterador para tiles
    TileIterator = UMapTileIterator::CrearIterator(ConstructorMapa);

    // 5. PROTOTYPE: Crear enemigos desde prototipos
    EjemploCreacionEnemigos(Mundo, 3);

    // 6. OBSERVER: Los eventos se manejan automáticamente

    UE_LOG(LogTemp, Warning, TEXT("=== INTEGRACIÓN COMPLETA FINALIZADA ==="));
}

void UPatronesIntegracion::EjemploBuilderConFacade(UWorld* Mundo)
{
    UE_LOG(LogTemp, Warning, TEXT("=== EJEMPLO BUILDER + FACADE ==="));

    // FACADE simplifica la comunicación
    GameplayFacade->CargarNivel(1);

    // BUILDER construye el nivel paso a paso
    UDirectorNiveles* Director = NewObject<UDirectorNiveles>();
    ConstructorMapa = Director->CrearNivel1(Mundo);

    UE_LOG(LogTemp, Log, TEXT("Nivel construido usando Builder y gestionado por Facade"));
}

void UPatronesIntegracion::EjemploObserverConPrototype(UWorld* Mundo)
{
    UE_LOG(LogTemp, Warning, TEXT("=== EJEMPLO OBSERVER + PROTOTYPE ==="));

    // PROTOTYPE: Crear bombas desde prototipos
    ABomba* BombaPrototipo = Mundo->SpawnActor<ABomba>(ABomba::StaticClass());
    if (BombaPrototipo)
    {
        BombaPrototipo->RadioExplosion = 2;
        BombaPrototipo->TiempoExplosion = 2.0f;

        // Clonar la bomba
        ABomba* BombaClonada = Cast<ABomba>(BombaPrototipo->Clone());
        if (BombaClonada)
        {
            BombaClonada->SetActorLocation(FVector(400, 400, 0));
            BombaClonada->IniciarExplosion();

            // OBSERVER: Los eventos se notifican automáticamente
            UE_LOG(LogTemp, Log, TEXT("Bomba clonada colocada - Observer notificará eventos"));
        }
    }
}

void UPatronesIntegracion::EjemploIteratorConComposite(UWorld* Mundo)
{
    UE_LOG(LogTemp, Warning, TEXT("=== EJEMPLO ITERATOR + COMPOSITE ==="));

    if (!TileIterator)
    {
        return;
    }

    // ITERATOR: Recorrer tiles destructibles
    TileIterator->FirstDestructible();
    int32 ContadorDestructibles = 0;

    while (!TileIterator->IsDone())
    {
        ATile* TileActual = TileIterator->ObtenerTileActual();
        if (TileActual)
        {
            ContadorDestructibles++;
            UE_LOG(LogTemp, Log, TEXT("Tile destructible encontrado en (%f, %f)"), 
                   TileActual->ObtenerPosicionGrid().X, TileActual->ObtenerPosicionGrid().Y);
        }
        TileIterator->NextDestructible();
    }

    UE_LOG(LogTemp, Log, TEXT("Total de tiles destructibles: %d"), ContadorDestructibles);

    // COMPOSITE: Aplicar operación a toda la sección
    if (SeccionPrincipal)
    {
        SeccionPrincipal->Renderizar();
        UE_LOG(LogTemp, Log, TEXT("Sección del mapa renderizada usando Composite"));
    }
}

void UPatronesIntegracion::EjemploExplosionEnCadena(UWorld* Mundo, FVector2D Posicion, int32 Radio)
{
    UE_LOG(LogTemp, Warning, TEXT("=== EJEMPLO EXPLOSIÓN EN CADENA (COMPOSITE) ==="));

    if (SeccionPrincipal)
    {
        // COMPOSITE: Aplicar explosión en cadena recursiva
        SeccionPrincipal->AplicarExplosionEnCadena(Posicion, Radio);
        UE_LOG(LogTemp, Log, TEXT("Explosión en cadena aplicada desde (%f, %f) con radio %d"), 
               Posicion.X, Posicion.Y, Radio);
    }
}

void UPatronesIntegracion::EjemploCreacionEnemigos(UWorld* Mundo, int32 Cantidad)
{
    UE_LOG(LogTemp, Warning, TEXT("=== EJEMPLO CREACIÓN DE ENEMIGOS (PROTOTYPE) ==="));

    // Crear prototipo de enemigo
    AEnemigo* EnemigoPrototipo = Mundo->SpawnActor<AEnemigo>(AEnemigo::StaticClass());
    if (EnemigoPrototipo)
    {
        EnemigoPrototipo->TipoEnemigo = ETipoEnemigo::Rapido;
        EnemigoPrototipo->Velocidad = 150.0f;
        EnemigoPrototipo->Vida = 2;

        // Clonar enemigos desde el prototipo
        for (int32 i = 0; i < Cantidad; i++)
        {
            AEnemigo* EnemigoClonado = Cast<AEnemigo>(EnemigoPrototipo->Clone());
            if (EnemigoClonado)
            {
                FVector2D PosicionSpawn = FVector2D(200 * (i + 1), 200 * (i + 1));
                EnemigoClonado->SetActorLocation(FVector(PosicionSpawn.X, PosicionSpawn.Y, 0));
                UE_LOG(LogTemp, Log, TEXT("Enemigo clonado %d creado en (%f, %f)"), 
                       i + 1, PosicionSpawn.X, PosicionSpawn.Y);
            }
        }

        // Destruir el prototipo original
        EnemigoPrototipo->Destroy();
    }
}

void UPatronesIntegracion::EjemploBusquedaTiles(UWorld* Mundo)
{
    UE_LOG(LogTemp, Warning, TEXT("=== EJEMPLO BÚSQUEDA DE TILES (ITERATOR) ==="));

    if (!TileIterator)
    {
        return;
    }

    // Buscar tiles vacíos para spawn
    TileIterator->FirstEmpty();
    TArray<FVector2D> PosicionesVacias;

    while (!TileIterator->IsDone())
    {
        FVector2D Posicion = TileIterator->ObtenerPosicionActual();
        PosicionesVacias.Add(Posicion);
        TileIterator->NextEmpty();
    }

    UE_LOG(LogTemp, Log, TEXT("Encontradas %d posiciones vacías para spawn"), PosicionesVacias.Num());

    // Buscar tiles con bloques
    TileIterator->FirstConBloque();
    int32 ContadorConBloques = 0;

    while (!TileIterator->IsDone())
    {
        ContadorConBloques++;
        TileIterator->NextConBloque();
    }

    UE_LOG(LogTemp, Log, TEXT("Encontrados %d tiles con bloques"), ContadorConBloques);
}

void UPatronesIntegracion::ConfigurarSistemas(UWorld* Mundo)
{
    UE_LOG(LogTemp, Warning, TEXT("PatronesIntegracion ConfigurarSistemas: INICIANDO"));
    
    if (!Mundo)
    {
        UE_LOG(LogTemp, Error, TEXT("PatronesIntegracion ConfigurarSistemas: ERROR - Mundo es NULL"));
        return;
    }

    // Configurar Facade
    GameplayFacade = NewObject<UGameplayFacade>();
    UE_LOG(LogTemp, Warning, TEXT("PatronesIntegracion ConfigurarSistemas: GameplayFacade creado: %s"), GameplayFacade ? TEXT("VÁLIDO") : TEXT("NULL"));
    
    GameplayFacade->InicializarJuego(Mundo);
    UE_LOG(LogTemp, Warning, TEXT("PatronesIntegracion ConfigurarSistemas: Juego inicializado"));

    // Configurar Constructor
    UDirectorNiveles* Director = NewObject<UDirectorNiveles>();
    ConstructorMapa = Director->CrearNivel1(Mundo);
    UE_LOG(LogTemp, Warning, TEXT("PatronesIntegracion ConfigurarSistemas: ConstructorMapa creado: %s"), ConstructorMapa ? TEXT("VÁLIDO") : TEXT("NULL"));

    // Configurar Iterator
    if (ConstructorMapa)
    {
        TileIterator = UMapTileIterator::CrearIterator(ConstructorMapa);
        UE_LOG(LogTemp, Warning, TEXT("PatronesIntegracion ConfigurarSistemas: TileIterator creado: %s"), TileIterator ? TEXT("VÁLIDO") : TEXT("NULL"));
    }

    // Configurar Composite
    CrearSeccionMapa(Mundo);

    UE_LOG(LogTemp, Warning, TEXT("PatronesIntegracion ConfigurarSistemas: Sistemas configurados completado"));
}

void UPatronesIntegracion::CrearSeccionMapa(UWorld* Mundo)
{
    if (!Mundo)
    {
        return;
    }

    SeccionPrincipal = Mundo->SpawnActor<ASeccionMapa>(ASeccionMapa::StaticClass());
    if (SeccionPrincipal)
    {
        SeccionPrincipal->ConfigurarSeccion(FVector2D(0, 0), FVector2D(3400, 3000)); // 17x15 tiles * 200
        UE_LOG(LogTemp, Log, TEXT("Sección principal del mapa creada"));
    }
}

void UPatronesIntegracion::ConfigurarObservers()
{
    // Los observers se configuran automáticamente en GameplayFacade
    UE_LOG(LogTemp, Log, TEXT("Observers configurados automáticamente"));
} 