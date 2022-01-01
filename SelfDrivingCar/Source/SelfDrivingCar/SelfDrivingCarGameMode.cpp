// Copyright Epic Games, Inc. All Rights Reserved.

#include "SelfDrivingCarGameMode.h"
#include "SelfDrivingCarPawn.h"
#include "SelfDrivingCarHud.h"

ASelfDrivingCarGameMode::ASelfDrivingCarGameMode()
{
	DefaultPawnClass = ASelfDrivingCarPawn::StaticClass();
	HUDClass = ASelfDrivingCarHud::StaticClass();
}
