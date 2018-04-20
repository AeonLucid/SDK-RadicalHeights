#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_hud_InvCardWpn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass hud_InvCardWpn.hud_InvCardWpn_C
// 0x0020 (0x0288 - 0x0268)
class Uhud_InvCardWpn_C : public UShooterInvCardWeapon
{
public:
	class Uhud_InvCardStats_C*                         hud_InvCardStats;                                         // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      hud_InvCardWpn_BG;                                        // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class Uhud_InvCardWpn_INFO_C*                      hud_InvCardWpn_INFO;                                      // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class Uhud_InvCardWpn_SLOTS_C*                     hud_InvCardWpn_SLOTS;                                     // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass hud_InvCardWpn.hud_InvCardWpn_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
