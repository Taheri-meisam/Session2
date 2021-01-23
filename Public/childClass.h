// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Parent.h"
#include "childClass.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTINGGAME_API AchildClass : public AParent
{
	GENERATED_BODY()
public:
	AchildClass();
	virtual void show(FString& message) override;
	int hp;
	FString Msg = " child says Hi ";
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
