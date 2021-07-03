// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CPP_HUD.generated.h"

/**
 * 
 */
UCLASS()
class SEOUL2077_API ACPP_HUD : public AHUD
{
	GENERATED_BODY()

public:
	ACPP_HUD();

	virtual void DrawHUD() override;

private:
	class UTexture2D* CrosshairTex;
};
