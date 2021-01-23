// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Parent.generated.h"

UCLASS()
class SHOOTINGGAME_API AParent : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AParent();
	UFUNCTION(BlueprintCallable, Category ="Functions")
	virtual void show(FString& message);
	int hp;
	FString Msg = " Parent says Hi ";
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
