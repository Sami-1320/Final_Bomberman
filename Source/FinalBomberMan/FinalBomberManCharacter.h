// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "PowerUp.h"
#include "FinalBomberManCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class ABomba;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class AFinalBomberManCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	
public:
	AFinalBomberManCharacter();
	
protected:
	void PlaceBombPressed();
	void SaltoAltoPressed();
	void CambiarANivel1();
	void CambiarANivel2();
	void MoveForward(float Value);
	void MoveRight(float Value);
	void Turn(float Rate);
	void LookUp(float Rate);

protected:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void BeginPlay() override;

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	/** Place a bomb at the current location */
	UFUNCTION(BlueprintCallable, Category = "Bomb")
	void PlaceBombAtLocation();

	/** Get the number of bombs the player can place */
	UFUNCTION(BlueprintCallable, Category = "Bomb")
	int32 GetBombCount() const { return BombCount; }

	/** Set the number of bombs the player can place */
	UFUNCTION(BlueprintCallable, Category = "Bomb")
	void SetBombCount(int32 NewBombCount);

	/** Get the explosion radius of the player's bombs */
	UFUNCTION(BlueprintCallable, Category = "Bomb")
	int32 GetExplosionRadius() const { return ExplosionRadius; }

	/** Set the explosion radius of the player's bombs */
	UFUNCTION(BlueprintCallable, Category = "Bomb")
	void SetExplosionRadius(int32 NewRadius) { ExplosionRadius = NewRadius; }

	void AplicarBonus(ETipoPowerUp Tipo);

	// Bonus de PowerUps
	float BonusVelocidad = 0.f;

	// Sistema de vidas
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player", meta = (AllowPrivateAccess = "true"))
	int32 VidasJugador = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player", meta = (AllowPrivateAccess = "true"))
	int32 MaxVidasJugador = 5;

	// Sistema de saltos del power up
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player", meta = (AllowPrivateAccess = "true"))
	int32 SaltosDisponibles = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player", meta = (AllowPrivateAccess = "true"))
	int32 MaxSaltosDisponibles = 2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player", meta = (AllowPrivateAccess = "true"))
	bool bTienePowerUpSalto = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player", meta = (AllowPrivateAccess = "true"))
	FVector PosicionSalto = FVector::ZeroVector;

	// Control de movimiento durante salto
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player", meta = (AllowPrivateAccess = "true"))
	bool bMovimientoBloqueado = false;

	// Funciones para manejar vidas
	UFUNCTION(BlueprintCallable, Category = "Player")
	int32 GetVidasJugador() const { return VidasJugador; }

	UFUNCTION(BlueprintCallable, Category = "Player")
	void SetVidasJugador(int32 NuevasVidas);

	UFUNCTION(BlueprintCallable, Category = "Player")
	void PerderVida();

	UFUNCTION(BlueprintCallable, Category = "Player")
	void GanarVida();

	UFUNCTION(BlueprintCallable, Category = "Player")
	bool EstaMuerto() const { return VidasJugador <= 0; }

	// Funciones para manejar saltos del power up
	UFUNCTION(BlueprintCallable, Category = "Player")
	void ActivarPowerUpSalto();

	UFUNCTION(BlueprintCallable, Category = "Player")
	void UsarSaltoAlto();

	UFUNCTION(BlueprintCallable, Category = "Player")
	bool PuedeSaltarAlto() const { return bTienePowerUpSalto && SaltosDisponibles > 0; }

	UFUNCTION(BlueprintCallable, Category = "Player")
	int32 GetSaltosDisponibles() const { return SaltosDisponibles; }

	UFUNCTION(BlueprintCallable, Category = "Player")
	void MostrarMensajeSaltos();

	// Funciones para controlar el bloqueo de movimiento
	UFUNCTION(BlueprintCallable, Category = "Player")
	void BloquearMovimiento();

	UFUNCTION(BlueprintCallable, Category = "Player")
	void DesbloquearMovimiento();

	UFUNCTION(BlueprintCallable, Category = "Player")
	bool EstaMovimientoBloqueado() const { return bMovimientoBloqueado; }

private:
	/** Number of bombs the player can place */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bomb", meta = (AllowPrivateAccess = "true"))
	int32 BombCount = 20;

	/** Maximum number of bombs the player can place */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bomb", meta = (AllowPrivateAccess = "true"))
	int32 MaxBombCount = 20;

	/** Explosion radius of the player's bombs */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bomb", meta = (AllowPrivateAccess = "true"))
	int32 ExplosionRadius = 3;

	/** Distance in front of player to place bomb */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bomb", meta = (AllowPrivateAccess = "true"))
	float BombPlaceDistance = 150.0f;

	/** Array of active bombs placed by this player */
	UPROPERTY()
	TArray<ABomba*> ActiveBombs;

	/** Bomb class to spawn */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bomb", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<ABomba> BombClass;
};

