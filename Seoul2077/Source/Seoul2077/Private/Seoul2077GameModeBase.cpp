// Copyright Epic Games, Inc. All Rights Reserved.


#include "Seoul2077GameModeBase.h"


ASeoul2077GameModeBase::ASeoul2077GameModeBase()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/BP_CPP_Player01"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
