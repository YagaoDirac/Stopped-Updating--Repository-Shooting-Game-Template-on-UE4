// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "CPP_PlayerPawn.generated.h"

UCLASS()
class STG_TEMPLATE_API ACPP_PlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACPP_PlayerPawn();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;


	/*
	//资料上的，我也不知道到底是不是真的需要这一句。
	UPROPERTY(EditAnywhere)
		USceneComponent* OurVisibleComponent;
	*/
	//先改成另个一个尝试性的写法
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* StaticMesh_Plane;


	
};
