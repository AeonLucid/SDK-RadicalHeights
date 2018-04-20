#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_InGameHud_RNR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass InGameHud_RNR.InGameHud_RNR_C
// 0x00A8 (0x0338 - 0x0290)
class UInGameHud_RNR_C : public UShooterHudWidget
{
public:
	class UShooterCachedWidget*                        CachedCharInfo;                                           // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UCharacterInfo_RNR_C*                        CharacterInfo_RNR_1;                                      // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UInvalidationBox*                            FullRes_InvBox;                                           // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD2_Scoring_C*                             HUD2_Scoring;                                             // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_Damage_Alert_C*                         HUD_Damage_Alert_C_91;                                    // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_Threats_C*                              HUDThreats;                                               // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_Toast_C*                                HUDToastWidget;                                           // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UInvalidationBox*                            InvalidationBoxOptimization;                              // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class ULetterBoxWidget*                            LetterBoxWidget_1;                                        // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class URNR_ATM_Menu_C*                             RNR_ATM_Menu_213;                                         // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UShooterCachedWidget*                        ToastCacheWidget;                                         // 0x02E0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_TUT_Tooltips_C*                         ToolTip;                                                  // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UShooterCachedWidget*                        ToolTipCached;                                            // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               NoBattery;                                                // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02F9(0x0003) MISSED OFFSET
	float                                              ReticuleBarCursor;                                        // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ReticuleBarColor;                                         // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESlateVisibility>                      GhostBarVisibility;                                       // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESlateVisibility>                      DisplayCarryBatteryMessage;                               // 0x0311(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0312(0x0002) MISSED OFFSET
	float                                              FuelBarPercent;                                           // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESlateVisibility>                      FuelVisibility;                                           // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESlateVisibility>                      AmmoVisible;                                              // 0x0319(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x031A(0x0002) MISSED OFFSET
	float                                              Ability_Bar_Cursor;                                       // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESlateVisibility>                      AbilityBarIsVisible;                                      // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0321(0x0003) MISSED OFFSET
	int                                                NumChatLines;                                             // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      TempString;                                               // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass InGameHud_RNR.InGameHud_RNR_C");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> SetVisibility_ServerFull();
	float GetWeaponBarPercent();
	TEnumAsByte<ESlateVisibility> GetVisibility_NewHud();
	TEnumAsByte<ESlateVisibility> GetVisibility_HudChatInput();
	TEnumAsByte<ESlateVisibility> GetVisibility_GhostBar();
	TEnumAsByte<ESlateVisibility> GetThreatsVisibility();
	struct FLinearColor GetReticleBarColor();
	TEnumAsByte<ESlateVisibility> Get_Offhand_Ammo_Visible();
	TEnumAsByte<ESlateVisibility> Get_Ability_Bar_Visibility_1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
