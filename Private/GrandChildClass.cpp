// Fill out your copyright notice in the Description page of Project Settings.


#include "GrandChildClass.h"

AGrandChildClass::AGrandChildClass() {
	hp = 500;
}

void AGrandChildClass::show(FString& message)
{
	UE_LOG(LogTemp, Warning, TEXT("This is a Grand child message : %s HP is : %i"), *message, this->hp);
}

void AGrandChildClass::BeginPlay()
{
	AParent* p3 = this;
	p3->show(this->Msg);
}
