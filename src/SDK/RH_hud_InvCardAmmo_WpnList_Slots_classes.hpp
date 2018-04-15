#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_hud_InvCardAmmo_WpnList_Slots_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass hud_InvCardAmmo_WpnList_Slots.hud_InvCardAmmo_WpnList_Slots_C
// 0x0020 (0x0278 - 0x0258)
class Uhud_InvCardAmmo_WpnList_Slots_C : public UShooterInvCardAmmoGunList
{
public:
	class Uhud_InvCardAmmo_WpnList_ENTRY_C*            hud_InvCardAmmo_WpnList_ENTRY;                            // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class Uhud_InvCardAmmo_WpnList_ENTRY_C*            hud_InvCardAmmo_WpnList_ENTRY_1;                          // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class Uhud_InvCardAmmo_WpnList_ENTRY_C*            hud_InvCardAmmo_WpnList_ENTRY_2;                          // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class Uhud_InvCardAmmo_WpnList_ENTRY_C*            hud_InvCardAmmo_WpnList_ENTRY_3;                          // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass hud_InvCardAmmo_WpnList_Slots.hud_InvCardAmmo_WpnList_Slots_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
