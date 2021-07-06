// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include <Components/BoxComponent.h>
#include <Components/StaticMeshComponent.h>
#include <Components/ArrowComponent.h>
#include "PlayerMove.h"
#include "PlayerFire.h"
#include <Components/SceneComponent.h>
#include <Components/SkeletalMeshComponent.h>
#include "CPP_Player01.generated.h"


UCLASS(config = Game)
class SEOUL2077_API ACPP_Player01 : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACPP_Player01();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:
	UPROPERTY(VisibleAnywhere, Category = "Component")
	class UBoxComponent* boxComp;

	UPROPERTY(VisibleAnywhere, Category = "Component")
	class UStaticMeshComponent* meshComp;

	UPROPERTY(VisibleAnywhere, Category = "Component")
	class USkeletalMeshComponent* swatComp;

	UPROPERTY(VisibleDefaultsOnly, Category = "Mesh")
	class USkeletalMeshComponent* gun;

	UPROPERTY(VisibleAnywhere, Category = "Component")
	class UStaticMeshComponent* gunComp;

	UPROPERTY(VisibleAnywhere, Category = "Component")
	class UPlayerMove* playerMove;


	UPROPERTY(VisibleAnywhere, Category = "Component")
	class UPlayerFire* playerFire;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* followCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class USpringArmComponent* cameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	float BaseTurnRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	float BaseLookUPRate;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	USceneComponent* muzzle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	FVector GunOffset;

	UPROPERTY(EditDefaultsOnly, Category = "Bullet")
	TSubclassOf<class ABullet> bulletClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	uint8 bUsingMotionControllers : 1;

public:
	void OnFire();
	void MoveForward(float Value);
	void MoveRight(float Value);
	void TurnAtRate(float Rate);
	void LookUpAtRate(float Rate);

public:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const
	{
		return cameraBoom;
	}
	FORCEINLINE class UCameraComponent* GetFollowCamera() const
	{
		return followCamera;
	}
};
