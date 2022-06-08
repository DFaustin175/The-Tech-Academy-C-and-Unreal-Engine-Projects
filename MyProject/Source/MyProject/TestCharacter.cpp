// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "TestCharacter.h"


// Sets default values
ATestCharacter::ATestCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	jumping = false;
}

// Called when the game starts or when spawned
void ATestCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (jumping)
	{
		Jump();
	}
}

// Called to bind functionality to input
void ATestCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("MoveForward", this, &ATestCharacter::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ATestCharacter::MoveRight);

	InputComponent->BindAction("Jump", IE_Pressed, this, &ATestCharacter::CheckJump);
	InputComponent->BindAction("Jump", IE_Released, this, &ATestCharacter::CheckJump);
}

void ATestCharacter::MoveForward(float value)
{
	if (value)
	{
		AddMovementInput(GetActorForwardVector(), value);
	}
}

void ATestCharacter::MoveRight(float value)
{
	if (value)
	{
		AddMovementInput(GetActorRightVector(), value);
	}
}

void ATestCharacter::CheckJump()
{
	if (jumping)
	{
		jumping = false;
	}
	else
	{
		jumping = true;
	}
}
