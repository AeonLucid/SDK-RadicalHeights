#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_hud_InvCardWpn_INFO_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass hud_InvCardWpn_INFO.hud_InvCardWpn_INFO_C
// 0x0030 (0x02D8 - 0x02A8)
class Uhud_InvCardWpn_INFO_C : public UShooterInvCardWeaponInfo
{
public:
	class UImage*                                      hud_InvCardWpn_FireMode_Auto;                             // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      hud_InvCardWpn_FireMode_Burst;                            // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      hud_InvCardWpn_FireMode_Single;                           // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      hud_InvCardWpn_Icon;                                      // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      hud_InvCardWpn_IconBG;                                    // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      hud_InvCardWpn_InfoBG;                                    // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass hud_InvCardWpn_INFO.hud_InvCardWpn_INFO_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
