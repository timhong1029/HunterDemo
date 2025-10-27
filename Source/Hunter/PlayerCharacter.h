#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "PlayerCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UInputMappingContext;
class UInputAction;

UCLASS()
class HUNTER_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	APlayerCharacter();

protected:
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(class UInputComponent *PlayerInputComponent) override;

	// === 输入映射 ===
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputMappingContext *DefaultMappingContext;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction *MoveAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction *LookAction;

	// === 相机 ===
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent *CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent *FollowCamera;

	// === 输入响应 ===
	void Move(const FInputActionValue &Value);
	void Look(const FInputActionValue &Value);
};
