#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_Event_Location_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_Event_Location.HUD_Event_Location_C
// 0x0038 (0x0280 - 0x0248)
class UHUD_Event_Location_C : public UShooterUserWidget
{
public:
	class UTextBlock*                                  distance_meters_text;                                     // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_27;                                                 // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_28;                                                 // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_30;                                                 // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Offscreen_BG;                                             // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Offscreen_outline;                                        // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  TextBlock_16;                                             // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_Event_Location.HUD_Event_Location_C");
		return ptr;
	}


	void TriggerOnScreen();
	void TriggerOffScreen();
	void OnRep_GM_Tutorial();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
