// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlayerController.h"
#include "Blueprint/UserWidget.h"



void AGamePlayerController::BeginPlay()
{
    Super::BeginPlay();

   UUserWidget *HUD = CreateWidget(this, HUDClass);
	if (HUD != nullptr)
	{
		HUD->AddToViewport();
	}
}
