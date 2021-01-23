// Fill out your copyright notice in the Description page of Project Settings.


#include "childClass.h"
#include "..\Public\childClass.h"

AchildClass::AchildClass() {
	hp = 200;
}

void AchildClass::show(FString& message)
{
	UE_LOG(LogTemp, Warning, TEXT("This is a child message : %s HP is %i"), *message,this->hp);
}

void AchildClass::BeginPlay()
{
	AParent* p1 = &(*this);
	//AParent* p2 = this;
	p1->show(Msg);

}
