#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_INV_PRIZESLOTS_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_INV_PRIZESLOTS.HUD_INV_PRIZESLOTS_C
// 0x0018 (0x0288 - 0x0270)
class UHUD_INV_PRIZESLOTS_C : public UShooterInventoryPrizeList
{
public:
	class UHUD_INV_PRIZESLOTS_ENTRY_C*                 HUD_INV_PRIZESLOTS_ENTRY;                                 // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_INV_PRIZESLOTS_ENTRY_C*                 HUD_INV_PRIZESLOTS_ENTRY_1;                               // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_INV_PRIZESLOTS_ENTRY_C*                 HUD_INV_PRIZESLOTS_ENTRY_2;                               // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_INV_PRIZESLOTS.HUD_INV_PRIZESLOTS_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
