// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "WebcameraPluginActor.h"
//#include "WebcameraPlugin.h"
#include "WebcameraPrivatePCH.h"
#include "Animation/AnimInstance.h"
#include "GameFramework/InputSettings.h"

#include "IAnyCam.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AWebcameraPluginActor

AWebcameraPluginActor::AWebcameraPluginActor()
{

}


void AWebcameraPluginActor::BeginPlay()
{
	Super::BeginPlay();
}

void AWebcameraPluginActor::BeginDestroy()
{
	Super::BeginDestroy();
}

UTexture2D* AWebcameraPluginActor::ConnectToCamera(int32 cameraID) 
{
	return IAnyCam::Get().Connect(cameraID);
}

void AWebcameraPluginActor::DisconnectCamera(int32 cameraID)
{
	IAnyCam::Get().Disconnect(cameraID);
}





