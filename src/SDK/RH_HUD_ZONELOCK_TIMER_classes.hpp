#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_ZONELOCK_TIMER_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_ZONELOCK_TIMER.HUD_ZONELOCK_TIMER_C
// 0x0018 (0x0270 - 0x0258)
class UHUD_ZONELOCK_TIMER_C : public UZonelockTimerWidget
{
public:
	class UWidgetAnimation*                            TimerStop_Scaledown;                                      // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            TimerLow;                                                 // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  HUD_ZONELOCK_CLOCK;                                       // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_ZONELOCK_TIMER.HUD_ZONELOCK_TIMER_C");
		return ptr;
	}


	void OnZoneTimerWarningStop();
	void OnZoneTimerWarningStart();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
