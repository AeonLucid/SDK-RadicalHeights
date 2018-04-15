#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_INV_AMMOSLOTS_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_INV_AMMOSLOTS.HUD_INV_AMMOSLOTS_C
// 0x0048 (0x02B8 - 0x0270)
class UHUD_INV_AMMOSLOTS_C : public UShooterInventoryAmmoList
{
public:
	class UHUD_INV_AMMOSLOTS_ENTRY_C*                  HUD_INV_AMMOSLOTS_ENTRY_1;                                // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_INV_AMMOSLOTS_ENTRY_C*                  HUD_INV_AMMOSLOTS_ENTRY_2;                                // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_INV_AMMOSLOTS_ENTRY_C*                  HUD_INV_AMMOSLOTS_ENTRY_3;                                // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_INV_AMMOSLOTS_ENTRY_C*                  HUD_INV_AMMOSLOTS_ENTRY_4;                                // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_INV_AMMOSLOTS_ENTRY_C*                  HUD_INV_AMMOSLOTS_ENTRY_5;                                // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_INV_AMMOSLOTS_ENTRY_C*                  HUD_INV_AMMOSLOTS_ENTRY_6;                                // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_INV_AMMOSLOTS_ENTRY_C*                  HUD_INV_AMMOSLOTS_ENTRY_7;                                // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_INV_AMMOSLOTS_ENTRY_C*                  HUD_INV_AMMOSLOTS_ENTRY_8;                                // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_INV_AMMOSLOTS_ENTRY_C*                  HUD_INV_AMMOSLOTS_ENTRY_9;                                // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_INV_AMMOSLOTS.HUD_INV_AMMOSLOTS_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
