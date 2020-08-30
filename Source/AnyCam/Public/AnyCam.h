// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "IAnyCam.h"
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FAnyCamModule : public IAnyCam
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	virtual UTexture2D* Connect(int32 DeviceIndex) override;
	virtual void Disconnect(int32 DeviceIndex) override;
	virtual int32 GetNumDevices() override;

protected:
	int32 ReacquireDevices();
	class FVideoDevice* GetDevices();
	void InitializeVideo();

private:
	FVideoDevice* Devices;
	FVideoDevice* Current;

	int32 NumDevices;
	bool IsPlaying;
};
