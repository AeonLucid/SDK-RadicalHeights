#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_hud_InvCardAmmo_WpnList_SlotEntry_INACTIVE_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass hud_InvCardAmmo_WpnList_SlotEntry_INACTIVE.hud_InvCardAmmo_WpnList_SlotEntry_INACTIVE_C
// 0x0008 (0x0260 - 0x0258)
class Uhud_InvCardAmmo_WpnList_SlotEntry_INACTIVE_C : public UShooterInvCardAmmoGunListEntry
{
public:
	class UImage*                                      SlotEntry_Icon;                                           // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass hud_InvCardAmmo_WpnList_SlotEntry_INACTIVE.hud_InvCardAmmo_WpnList_SlotEntry_INACTIVE_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
