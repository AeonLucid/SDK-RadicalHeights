#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_GAMESTATE_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_GAMESTATE.HUD_GAMESTATE_C
// 0x0018 (0x0280 - 0x0268)
class UHUD_GAMESTATE_C : public UGameStateWidgetRnR
{
public:
	class UWidgetAnimation*                            PulseAnim;                                                // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            SlideInAnim;                                              // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      HUD_GAMESTATE_BG;                                         // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_GAMESTATE.HUD_GAMESTATE_C");
		return ptr;
	}


	void SlideOut();
	void SlideIn();
	void AliveCountChanged();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
