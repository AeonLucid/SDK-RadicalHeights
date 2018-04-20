#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_EQUIPMENT_SLOTS_V2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_EQUIPMENT_SLOTS_V2.HUD_EQUIPMENT_SLOTS_V2_C
// 0x0040 (0x02B0 - 0x0270)
class UHUD_EQUIPMENT_SLOTS_V2_C : public UShooterInventoryList
{
public:
	class UHUD_EQUIPSLOT_ENTRY_V2_C*                   HUD_EQUIPSLOT_ENTRY_1;                                    // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_EQUIPSLOT_ENTRY_V2_C*                   HUD_EQUIPSLOT_ENTRY_2;                                    // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_EQUIPSLOT_ENTRY_V2_C*                   HUD_EQUIPSLOT_ENTRY_3;                                    // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_EQUIPSLOT_ENTRY_V2_C*                   HUD_EQUIPSLOT_ENTRY_4;                                    // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_EQUIPSLOT_ENTRY_V2_C*                   HUD_EQUIPSLOT_ENTRY_5;                                    // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_EQUIPSLOT_ENTRY_V2_C*                   HUD_EQUIPSLOT_ENTRY_6;                                    // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_EQUIPSLOT_ENTRY_V2_C*                   HUD_EQUIPSLOT_ENTRY_MELEE;                                // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_1;                                                  // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_EQUIPMENT_SLOTS_V2.HUD_EQUIPMENT_SLOTS_V2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
