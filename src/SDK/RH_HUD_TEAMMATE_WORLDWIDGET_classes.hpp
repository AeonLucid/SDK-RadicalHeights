#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_TEAMMATE_WORLDWIDGET_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_TEAMMATE_WORLDWIDGET.HUD_TEAMMATE_WORLDWIDGET_C
// 0x0028 (0x02A0 - 0x0278)
class UHUD_TEAMMATE_WORLDWIDGET_C : public UTeammateWorldWidget
{
public:
	class UProgressBar*                                HUD_TEAMMATE_HEALTHBAR;                                   // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetSwitcher*                             HUD_TEAMMATE_WW_STATE;                                    // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      STATE_CROUCHING;                                          // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      STATE_PRONE;                                              // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      STATE_UPRIGHT;                                            // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_TEAMMATE_WORLDWIDGET.HUD_TEAMMATE_WORLDWIDGET_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
