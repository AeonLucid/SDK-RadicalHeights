#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_AkAudio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AkAudio.AkAmbientSound
// 0x0018 (0x03B0 - 0x0398)
class AAkAmbientSound : public AActor
{
public:
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                AkComponent;                                              // 0x03A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               StopWhenOwnerIsDestroyed;                                 // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAmbientSound");
		return ptr;
	}


	void StopAmbientSound();
	void StartAmbientSound();
};


// Class AkAudio.AkAudioBank
// 0x0068 (0x0090 - 0x0028)
class UAkAudioBank : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	bool                                               AutoLoad;                                                 // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DeferLoad;                                                // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLoaded;                                                // 0x003A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x003B(0x0005) MISSED OFFSET
	TMap<class FString, float>                         EventAndMaxAttenuationMap;                                // 0x0040(0x0050) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioBank");
		return ptr;
	}

};


// Class AkAudio.AkAudioEvent
// 0x0010 (0x0038 - 0x0028)
class UAkAudioEvent : public UObject
{
public:
	class UAkAudioBank*                                RequiredBank;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxOcclusion;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAttenuationRadius;                                     // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioEvent");
		return ptr;
	}

};


// Class AkAudio.AkSoundGameObject
// 0x0160 (0x0188 - 0x0028)
class UAkSoundGameObject : public UObject
{
public:
	TArray<class UAkSoundInstance*>                    PlayingSounds;                                            // 0x0028(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET
	double                                             CreationTime;                                             // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              AttenuationScalingFactor;                                 // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	class AActor*                                      Actor;                                                    // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x0080(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIs2DSound;                                               // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseReverbVolumes;                                        // 0x00B1(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsRegistered;                                            // 0x00B2(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroyWhenAllSoundsStopped;                         // 0x00B3(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xD4];                                      // 0x00B4(0x00D4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSoundGameObject");
		return ptr;
	}


	void StopAll(bool bForceStopAll);
};


// Class AkAudio.AkComponent
// 0x0090 (0x02E0 - 0x0250)
class UAkComponent : public USceneComponent
{
public:
	TArray<class UAkSoundGameObject*>                  SoundGameObjects;                                         // 0x0250(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0260(0x0078) MISSED OFFSET
	bool                                               WasPlayingLastFrame;                                      // 0x02D8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               NeedsDeferedPositionUpdate;                               // 0x02D9(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               StopWhenOwnerDestroyed;                                   // 0x02DA(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x02DB(0x0001) MISSED OFFSET
	float                                              AttenuationScalingFactor;                                 // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkComponent");
		return ptr;
	}


	void UseReverbVolumes(bool inUseReverbVolumes);
	void StopAndResumeAll();
	void StopAll();
	void SetSwitch(const class FString& SwitchGroup, const class FString& SwitchState);
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
	void SetRTPCValue(const class FString& RTPC, float Value, int InterpolationTimeMs);
	void SetActiveListeners(int in_uListenerMask);
	void PostTrigger(const class FString& Trigger);
	class UAkSoundInstance* PostAkEvent(class UAkAudioEvent* AkEvent, TEnumAsByte<ETeamSpecificAudio> TeamOverride, TEnumAsByte<EStopWhenOwnerIsDestroyedOverride> StopOverride, const struct FName& SocketName);
	bool IsPlaying();
};


// Class AkAudio.AkGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkGameplayStatics");
		return ptr;
	}


	void STATIC_UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);
	void STATIC_StopProfilerCapture();
	void STATIC_StopOutputCapture();
	void STATIC_StopAndResumeActor(class AActor* Actor);
	void STATIC_StopAllAmbientSounds(class UObject* WorldContextObject);
	void STATIC_StopAll(bool bIncludingUISounds);
	void STATIC_StopActor(class AActor* Actor);
	void STATIC_StartProfilerCapture(const class FString& Filename);
	void STATIC_StartOutputCapture(const class FString& Filename);
	void STATIC_StartAllAmbientSounds(class UObject* WorldContextObject);
	class UAkComponent* STATIC_SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, bool AutoDestroy);
	void STATIC_SetUiSwitch(const struct FName& SwitchGroup, const struct FName& SwitchState);
	void STATIC_SetSwitch(const struct FName& SwitchGroup, const struct FName& SwitchState, class AActor* Actor);
	void STATIC_SetState(const struct FName& StateGroup, const struct FName& State);
	void STATIC_SetRTPCValue(const class FString& RTPC, float Value, int InterpolationTimeMs, class AActor* Actor);
	void STATIC_SetRandomSeed(int Seed);
	void STATIC_SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);
	void STATIC_PostUiEvent(class UAkAudioEvent* AkEvent);
	void STATIC_PostTrigger(const struct FName& Trigger, class AActor* Actor);
	class UAkSoundInstance* STATIC_PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, const struct FName& AttachPointName, bool bStopWhenAttachedToDestroyed);
	void STATIC_PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject, TEnumAsByte<ETeamSpecificAudio> TeamOverride, class AActor* SwitchInheritActor, bool bSpawnActor, float SpawnedActorLifeSpan);
	class UAkSoundInstance* STATIC_PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, const struct FName& SocketName);
	class FString STATIC_GetLanguageFromCode(const class FString& LocCode);
	class UAkComponent* STATIC_GetAkComponentFromActor(class AActor* Actor);
	class UAkComponent* STATIC_GetAkComponent(class USceneComponent* AttachToComponent);
	void STATIC_ClearBanks();
	void STATIC_ChangeAudioCulture(const class FString& NewCulture);
	void STATIC_AddOutputCaptureMarker(const class FString& MarkerText);
};


// Class AkAudio.AkReverbVolume
// 0x0038 (0x0408 - 0x03D0)
class AAkReverbVolume : public AVolume
{
public:
	unsigned char                                      bEnabled : 1;                                             // 0x03D0(0x0001) (Edit, BlueprintVisible, Net)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET
	class FString                                      AuxBusName;                                               // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              SendLevel;                                                // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeRate;                                                 // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	class AAkReverbVolume*                             NextLowerPriorityAkReverbVolume;                          // 0x03F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0400(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkReverbVolume");
		return ptr;
	}

};


// Class AkAudio.AkSettings
// 0x0038 (0x0060 - 0x0028)
class UAkSettings : public UObject
{
public:
	unsigned char                                      MaxSimultaneousReverbVolumes;                             // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FFilePath                                   WwiseProjectPath;                                         // 0x0030(0x0010) (Edit, Config)
	struct FDirectoryPath                              WwiseWindowsInstallationPath;                             // 0x0040(0x0010) (Edit, Config)
	struct FFilePath                                   WwiseMacInstallationPath;                                 // 0x0050(0x0010) (Edit, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSettings");
		return ptr;
	}

};


// Class AkAudio.AkSoundInstance
// 0x0048 (0x0070 - 0x0028)
class UAkSoundInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	double                                             CreationTime;                                             // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAkSoundGameObject*                          GameObject;                                               // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Event;                                                    // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class FString                                      EventName;                                                // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               IsPlaying;                                                // 0x0060(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsReadyToPlay;                                            // 0x0061(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPinnedForStreaming;                                     // 0x0062(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               StopWhenOwnerDestroyed;                                   // 0x0063(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               WasStopped;                                               // 0x0064(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               WasResumed;                                               // 0x0065(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0066(0x0002) MISSED OFFSET
	class AHUD*                                        HUD;                                                      // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSoundInstance");
		return ptr;
	}


	void Stop();
	float GetAttenuationRadius();
};


// Class AkAudio.InterpTrackAkAudioEvent
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{
public:
	TArray<struct FAkAudioEventTrackKey>               Events;                                                   // 0x0090(0x0010) (ZeroConstructor)
	unsigned char                                      bContinueEventOnMatineeEnd : 1;                           // 0x00A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkAudioEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkAudioRTPC
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{
public:
	class FString                                      Param;                                                    // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bPlayOnReverse : 1;                                       // 0x00A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bContinueRTPCOnMatineeEnd : 1;                            // 0x00A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkAudioRTPC");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioEvent
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioRTPC
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioRTPC");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
