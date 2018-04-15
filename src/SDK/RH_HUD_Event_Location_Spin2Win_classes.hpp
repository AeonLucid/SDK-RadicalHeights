#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_Event_Location_Spin2Win_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_Event_Location_Spin2Win.HUD_Event_Location_Spin2Win_C
// 0x0018 (0x0260 - 0x0248)
class UHUD_Event_Location_Spin2Win_C : public UShooterUserWidget
{
public:
	class UTextBlock*                                  distance_meters_text;                                     // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      HUD_Event_Location_Icon;                                  // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  HUD_Event_Location_Text;                                  // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_Event_Location_Spin2Win.HUD_Event_Location_Spin2Win_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
