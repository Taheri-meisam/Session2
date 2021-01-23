// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "childClass.h"
#include "GrandChildClass.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTINGGAME_API AGrandChildClass : public AchildClass
{
	GENERATED_BODY()
public:
	AGrandChildClass();
	virtual void show(FString& message) override;
	int hp;
	FString Msg = " Grand child says Hi ";
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

};
