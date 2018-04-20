#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_LMS_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_LMS.HUD_LMS_C
// 0x0178 (0x03D0 - 0x0258)
class UHUD_LMS_C : public UShooterHUD_LMS
{
public:
	class UWidgetAnimation*                            BigAdviceZone30;                                          // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            ZoneClosing;                                              // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            BigAdviceTextSlide_Back;                                  // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            BidAdviceTextFade;                                        // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            BigAdviceTextSlide;                                       // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  BigAdviceText;                                            // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      BikeRace_Icon;                                            // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      BikeRace_IconActive;                                      // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  BikeRaceText;                                             // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      CashZone_Icon;                                            // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      CashZone_IconActive;                                      // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  CashZoneText;                                             // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_GAMESTATE_C*                            HUD_GAMESTATE_180;                                        // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Spin2Win_Icon;                                            // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Spin2Win_IconActive;                                      // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  Spin2WinText;                                             // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                         // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  ZoneWarning;                                              // 0x02E0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                K2Node_CustomEvent_Switch;                                // 0x02E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor;                            // 0x02EC(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor2;                           // 0x02FC(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor3;                           // 0x030C(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x031C(0x0004) MISSED OFFSET
	struct FText                                       CallFunc_Conv_StringToText_ReturnValue;                   // 0x0320(0x0018) (Transient, DuplicateTransient)
	struct FText                                       CallFunc_Conv_StringToText_ReturnValue2;                  // 0x0338(0x0018) (Transient, DuplicateTransient)
	struct FText                                       CallFunc_Conv_StringToText_ReturnValue3;                  // 0x0350(0x0018) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            K2Node_Event_Animation;                                   // 0x0368(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FText                                       K2Node_Event_WarningText;                                 // 0x0370(0x0018) (Transient, DuplicateTransient)
	struct FText                                       CallFunc_Conv_StringToText_ReturnValue4;                  // 0x0388(0x0018) (Transient, DuplicateTransient)
	struct FText                                       CallFunc_Conv_StringToText_ReturnValue5;                  // 0x03A0(0x0018) (Transient, DuplicateTransient)
	struct FText                                       CallFunc_Conv_StringToText_ReturnValue6;                  // 0x03B8(0x0018) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_LMS.HUD_LMS_C");
		return ptr;
	}


	void ZoneWarning_6();
	void ZoneWarning_31();
	void Set_CashDropText(int bpp__Switch__pf);
	void OnZoneCloseWarning(const struct FText& bpp__WarningText__pf);
	void OnSpinToWinStart();
	void OnSpinToWinEnd();
	void OnHideAdvice();
	void OnFinalShowdownCountdown();
	void OnFinalShowdownClosing();
	void OnEnterWarningZone();
	void OnEnterDangerZone();
	void OnBikeRaceStart();
	void OnBikeRaceEnd();
	void ExecuteUbergraph_HUD_LMS_9(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_HUD_LMS_6(int bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
