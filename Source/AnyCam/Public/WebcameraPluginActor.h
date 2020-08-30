// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/Character.h"
#include "WebcameraPrivatePCH.h"
#include "WebcameraPluginActor.generated.h"

class UInputComponent;

UCLASS(config=Game)
class AWebcameraPluginActor : public AActor
{
	GENERATED_BODY()
	/************************************************************************/
	/* Webcamera stuff                                                      */
	/************************************************************************/
public:

	UFUNCTION(BlueprintCallable)
		UTexture2D* ConnectToCamera(int32 cameraID);

	UFUNCTION(BlueprintCallable)
		void DisconnectCamera(int32 cameraID);

	virtual void BeginPlay();
	virtual void BeginDestroy();
public:
	AWebcameraPluginActor();
};

