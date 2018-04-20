#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_VOIP_ENTRY_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_VOIP_ENTRY.HUD_VOIP_ENTRY_C
// 0x0050 (0x02C8 - 0x0278)
class UHUD_VOIP_ENTRY_C : public UShooterVoipEntryWidget
{
public:
	class UImage*                                      DefaultQuiet;                                             // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      DefaultSpeaking;                                          // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      DiscordQuiet;                                             // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      DiscordSpeaking;                                          // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Muted;                                                    // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  PlayerName;                                               // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetSwitcher*                             VoipStateSwitcher;                                        // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FText                                       K2Node_Event_NewName;                                     // 0x02B0(0x0018) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_VOIP_ENTRY.HUD_VOIP_ENTRY_C");
		return ptr;
	}


	void SetVoipName(const struct FText& bpp__NewName__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
