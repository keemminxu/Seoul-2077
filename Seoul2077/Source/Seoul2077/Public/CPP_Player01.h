// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include <Components/BoxComponent.h>
#include <Components/StaticMeshComponent.h>
#include <Components/ArrowComponent.h>
#include "PlayerMove.h"
#include "PlayerFire.h"
#include "CPP_Player01.generated.h"

UCLASS(config=Game)
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

	// 필요속성 : 총구위치, 공장
	UPROPERTY(EditAnywhere, Category = "Component")
	class UArrowComponent* firePosition;

	// PlayerMove 컴포넌트 추가
	UPROPERTY(VisibleAnywhere, Category = "Component")
	class UPlayerMove* playerMove;

	// PlayerFire 컴포넌트 추가
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

protected:
	void MoveForward(float Value);
	void MoveRight(float Value);
	void TurnAtRate(float Rate);
	void LookUpAtRate(float Rate);

protected:
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
