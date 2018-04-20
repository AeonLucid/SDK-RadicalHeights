#pragma once

// Radical Heights (ALPHA-1-201356) SDK

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
// 0x0048 (0x02A0 - 0x0258)
class UHUD_ZONELOCK_TIMER_C : public UZonelockTimerWidget
{
public:
	class UWidgetAnimation*                            TimerStop_Scaledown;                                      // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            TimerLow;                                                 // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  HUD_ZONELOCK_CLOCK;                                       // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                Minutes;                                                  // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Seconds;                                                  // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       NewVar_1;                                                 // 0x0278(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                      CallFunc_GetDisplayName_ReturnValue;                      // 0x0290(0x0010) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_ZONELOCK_TIMER.HUD_ZONELOCK_TIMER_C");
		return ptr;
	}


	void ZoneTimertoSeconds();
	void OnZoneTimerWarningStop();
	void OnZoneTimerWarningStart();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
