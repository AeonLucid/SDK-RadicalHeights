#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_PLAYER_STATUS_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_PLAYER_STATUS.HUD_PLAYER_STATUS_C
// 0x0048 (0x02E8 - 0x02A0)
class UHUD_PLAYER_STATUS_C : public UShooterPlayerStatusWidget
{
public:
	class UTextBlock*                                  AdrenalineCallout;                                        // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UProgressBar*                                HUD_PLAYER_ARMOR_BAR;                                     // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      HUD_PLAYER_ARMOR_ICON;                                    // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UProgressBar*                                HUD_PLAYER_BOOST_BAR;                                     // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      HUD_PLAYER_HEALTH_ICON;                                   // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UProgressBar*                                HUD_PLAYER_HEALTHBAR;                                     // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UProgressBar*                                HUD_PLAYER_HELMET_BAR;                                    // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      HUD_PLAYER_HELMET_ICON;                                   // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_1;                                                  // 0x02E0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_PLAYER_STATUS.HUD_PLAYER_STATUS_C");
		return ptr;
	}


	void OnAdrenalineBoost();
	void ExecuteUbergraph_HUD_PLAYER_STATUS_1(int bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
