// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "UE3Character.generated.h"

/*
* AUE3Character
* 
* The base character pawn class
* Add new behavior using components whenever possible.
*/
UCLASS(Abstract, MinimalAPI, Config=Game)
class AUE3Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AUE3Character();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
