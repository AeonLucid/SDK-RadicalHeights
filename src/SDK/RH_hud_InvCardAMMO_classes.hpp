#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_hud_InvCardAMMO_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass hud_InvCardAMMO.hud_InvCardAMMO_C
// 0x0018 (0x0278 - 0x0260)
class Uhud_InvCardAMMO_C : public UShooterInvCardAmmo
{
public:
	class UImage*                                      hud_InvCardAmmo_BG;                                       // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class Uhud_InvCardAmmo_INFO_C*                     hud_InvCardAmmo_INFO;                                     // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class Uhud_InvCardAmmo_WpnList_Slots_C*            hud_InvCardAmmo_WpnList_Slots;                            // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass hud_InvCardAMMO.hud_InvCardAMMO_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
