// Fill out your copyright notice in the Description page of Project Settings.


#include "Parent.h"
#include "..\Public\Parent.h"

// Sets default values
AParent::AParent()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	hp = 100;
	
}

void AParent::show(FString& message)
{
	UE_LOG(LogTemp, Warning, TEXT("This is a parent message : %s hp is: %i"), *message , this->hp);
}

// Called when the game starts or when spawned
void AParent::BeginPlay()
{
	AParent* p9 = &(*this);
	AParent* P0 = this;
	Super::BeginPlay();
}

// Called every frame
void AParent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AParent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

