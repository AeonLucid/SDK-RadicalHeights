#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_hud_InvCardWpn_SlotEntry_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass hud_InvCardWpn_SlotEntry.hud_InvCardWpn_SlotEntry_C
// 0x0018 (0x0270 - 0x0258)
class Uhud_InvCardWpn_SlotEntry_C : public UShooterInventoryBaseSwitcherEntry
{
public:
	class Uhud_InvCardWpn_SlotEntry_ACTIVE_C*          hud_InvCardWpn_SlotEntry_ACTIVE;                          // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class Uhud_InvCardWpn_SlotEntry_INACTIVE_C*        hud_InvCardWpn_SlotEntry_INACTIVE;                        // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                         // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass hud_InvCardWpn_SlotEntry.hud_InvCardWpn_SlotEntry_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
