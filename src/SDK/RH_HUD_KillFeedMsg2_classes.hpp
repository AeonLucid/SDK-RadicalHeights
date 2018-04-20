#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_KillFeedMsg2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_KillFeedMsg2.HUD_KillFeedMsg2_C
// 0x0040 (0x03C0 - 0x0380)
class UHUD_KillFeedMsg2_C : public UShooterKillFeedMessage
{
public:
	class UImage*                                      BG_Image;                                                 // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      bgsomething;                                              // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      KillIcon;                                                 // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHorizontalBox*                              MessageTextbox;                                           // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UCanvasPanel*                                RelevantToSelf;                                           // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      SelfIconKiller;                                           // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      SelfIconVictim;                                           // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_KillFeedMsg2.HUD_KillFeedMsg2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
