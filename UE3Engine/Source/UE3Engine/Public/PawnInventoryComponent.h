// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PawnInventoryComponent.generated.h"

/*
* UPawnInventoryComponent
* 
* Handles inventory management for UE3Character
*/
UCLASS(MinimalAPI, Blueprintable, meta=(BlueprintSpawnableComponent) )
class UE3ENGINE_API UPawnInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPawnInventoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
