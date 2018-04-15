#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD2_Scoring_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD2_Scoring.HUD2_Scoring_C
// 0x0058 (0x02A0 - 0x0248)
class UHUD2_Scoring_C : public UShooterUserWidget
{
public:
	class UHUD_ScoreLogPrimary_C*                      BigScoreDisplay;                                          // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UShooterCachedWidget*                        CachedBigScoreLog;                                        // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UShooterCachedWidget*                        NEWScoreLog;                                              // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UScoreDebugWIdget_C*                         ScoreDebugWIdget;                                         // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UNEW_Scorelog_C*                             SmallScoreDisplay;                                        // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               NoBattery;                                                // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0271(0x0003) MISSED OFFSET
	float                                              ReticuleBarCursor;                                        // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ReticuleBarColor;                                         // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESlateVisibility>                      GhostBarVisibility;                                       // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESlateVisibility>                      DisplayCarryBatteryMessage;                               // 0x0289(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x028A(0x0002) MISSED OFFSET
	float                                              FuelBarPercent;                                           // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESlateVisibility>                      FuelVisibility;                                           // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESlateVisibility>                      AmmoVisible;                                              // 0x0291(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0292(0x0002) MISSED OFFSET
	float                                              Ability_Bar_Cursor;                                       // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESlateVisibility>                      AbilityBarIsVisible;                                      // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0299(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD2_Scoring.HUD2_Scoring_C");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> SetVisibility_ServerFull();
	float GetWeaponBarPercent();
	TEnumAsByte<ESlateVisibility> GetVisibility_NewHud();
	TEnumAsByte<ESlateVisibility> GetVisibility_GhostBar();
	struct FLinearColor GetReticleBarColor();
	TEnumAsByte<ESlateVisibility> Get_Offhand_Ammo_Visible();
	TEnumAsByte<ESlateVisibility> Get_Ability_Bar_Visibility_1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
