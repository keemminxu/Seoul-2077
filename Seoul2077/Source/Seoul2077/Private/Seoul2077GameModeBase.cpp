// Copyright Epic Games, Inc. All Rights Reserved.


#include "Seoul2077GameModeBase.h"
#include "CPP_HUD.h"
#include "CPP_Player01.h"
#include "UObject/ConstructorHelpers.h"


ASeoul2077GameModeBase::ASeoul2077GameModeBase()
{

	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/BP_CPP_Player01"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/BP_CPP_Player01"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	HUDClass = ACPP_HUD::StaticClass();
}
