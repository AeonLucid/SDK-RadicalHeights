#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Basic.hpp"
#include "RH_Engine_classes.hpp"
#include "RH_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AkAudio.EAkDeferredLoadBehaviorOverride
enum class EAkDeferredLoadBehaviorOverride : uint8_t
{
	EAkDeferredLoadBehaviorOverride__Default = 0,
	EAkDeferredLoadBehaviorOverride__DontPlayIfNotLoaded = 1,
	EAkDeferredLoadBehaviorOverride__EAkDeferredLoadBehaviorOverride_MAX = 2
};


// Enum AkAudio.EStopWhenOwnerIsDestroyedOverride
enum class EStopWhenOwnerIsDestroyedOverride : uint8_t
{
	EStopWhenOwnerIsDestroyedOverride__Default = 0,
	EStopWhenOwnerIsDestroyedOverride__Stop = 1,
	EStopWhenOwnerIsDestroyedOverride__DontStop = 2,
	EStopWhenOwnerIsDestroyedOverride__EStopWhenOwnerIsDestroyedOverride_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AkAudio.AkAudioEventTrackKey
// 0x0010
struct FAkAudioEventTrackKey
{
	float                                              TIME;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct AkAudio.AkAmbSoundCheckpointRecord
// 0x0001
struct FAkAmbSoundCheckpointRecord
{
	bool                                               bCurrentlyPlaying;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkAudioSwitch
// 0x0020
struct FAkAudioSwitch
{
	class FString                                      SwitchGroup;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      SwitchState;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
