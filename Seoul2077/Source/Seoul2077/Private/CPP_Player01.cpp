// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Player01.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Bullet.h"
#include <Kismet/GameplayStatics.h>

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

// Sets default values
ACPP_Player01::ACPP_Player01()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	meshComp->SetupAttachment(boxComp);
	swatComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Swat"));
	swatComp->SetupAttachment(meshComp);

	gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Gun"));		
	gun->bCastDynamicShadow = false;
	gun->CastShadow = false;
	gun->SetupAttachment(meshComp);
	gunComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GunComponent"));
	gunComp->SetupAttachment(gun);

	muzzle = CreateDefaultSubobject<USceneComponent>(TEXT("Muzzle"));
	muzzle->SetupAttachment(gun);
	muzzle->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	GunOffset = FVector(0.0f, 0.0f, 0.0f);

	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	BaseTurnRate = 45.f;
	BaseLookUPRate = 45.f;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	cameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	cameraBoom->SetupAttachment(RootComponent);
	cameraBoom->TargetArmLength = 300.0f;
	cameraBoom->bUsePawnControlRotation = false;

	followCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	followCamera->SetupAttachment(cameraBoom, USpringArmComponent::SocketName);
	followCamera->bUsePawnControlRotation = false; 

}

// Called when the game starts or when spawned
void ACPP_Player01::BeginPlay()
{
	Super::BeginPlay();
	
	gun->AttachToComponent(meshComp, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));
}

// Called every frame
void ACPP_Player01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void ACPP_Player01::OnFire()
{
	if (bulletClass != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
	
				const FRotator SpawnRotation(5, GetControlRotation().Yaw, 0);
				
				const FVector SpawnLocation = ((muzzle != nullptr) ? muzzle->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

				FActorSpawnParameters ActorSpawnParams;
				ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

				World->SpawnActor<ABullet>(bulletClass, SpawnLocation, SpawnRotation, ActorSpawnParams);

				
		}
	}
}

void ACPP_Player01::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ACPP_Player01::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Value);
	}
}

void ACPP_Player01::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ACPP_Player01::LookUpAtRate(float Rate)
{
	AddControllerPitchInput(Rate * BaseLookUPRate * GetWorld()->GetDeltaSeconds());
}

// Called to bind functionality to input
void ACPP_Player01::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACPP_Player01::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACPP_Player01::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ACPP_Player01::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ACPP_Player01::LookUpAtRate);

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ACPP_Player01::OnFire);
}

