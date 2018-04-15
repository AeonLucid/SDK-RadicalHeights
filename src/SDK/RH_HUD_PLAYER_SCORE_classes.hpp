#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_PLAYER_SCORE_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_PLAYER_SCORE.HUD_PLAYER_SCORE_C
// 0x0060 (0x02D8 - 0x0278)
class UHUD_PLAYER_SCORE_C : public UShooterPlayerScoreWidget
{
public:
	class UWidgetAnimation*                            CashPulse;                                                // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetSwitcher*                             HUD_PLAYER_MIC;                                           // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetSwitcher*                             HUD_PLAYER_STANCE;                                        // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      HUD_PLAYERKILLS_ICON;                                     // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      MIC_MUTED;                                                // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      MIC_QUIET;                                                // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      MIC_SPEAKING;                                             // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Stance_Crouch;                                            // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      STANCE_DEAD;                                              // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      STANCE_DRIVE;                                             // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Stance_Prone;                                             // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      STANCE_UPRIGHT;                                           // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_PLAYER_SCORE.HUD_PLAYER_SCORE_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
