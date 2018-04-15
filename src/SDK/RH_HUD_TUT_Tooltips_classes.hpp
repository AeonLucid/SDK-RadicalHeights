#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_TUT_Tooltips_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_TUT_Tooltips.HUD_TUT_Tooltips_C
// 0x0050 (0x02C8 - 0x0278)
class UHUD_TUT_Tooltips_C : public UShooterTutorialTooltipWidget
{
public:
	class UTextBlock*                                  ActionText;                                               // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_HOLD_INPUT_C*                           Button;                                                   // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  FlavorText;                                               // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_2;                                                  // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_12;                                                 // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetSwitcher*                             InputSwitcher;                                            // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  KEY;                                                      // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWASD_Widget_C*                              MovementKeys;                                             // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Tooltip_background;                                       // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Tooltip_highlight;                                        // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_TUT_Tooltips.HUD_TUT_Tooltips_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
