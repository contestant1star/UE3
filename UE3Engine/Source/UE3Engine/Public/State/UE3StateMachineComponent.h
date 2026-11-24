// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UE3StateMachineComponent.generated.h"

/*
* UUE3StateMachineComponent
* 
* Component used for handling states and transitions
*/
UCLASS(meta=(BlueprintSpawnableComponent) )
class UE3ENGINE_API UUE3StateMachineComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UUE3StateMachineComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
