#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_hud_InvCardAmmo_INFO_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass hud_InvCardAmmo_INFO.hud_InvCardAmmo_INFO_C
// 0x0018 (0x0278 - 0x0260)
class Uhud_InvCardAmmo_INFO_C : public UShooterInvCardAmmoInfo
{
public:
	class UImage*                                      hud_InvCardAmmo_Icon;                                     // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      hud_InvCardAmmo_IconBG;                                   // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      hud_InvCardAmmo_InfoBG;                                   // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass hud_InvCardAmmo_INFO.hud_InvCardAmmo_INFO_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
