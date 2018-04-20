#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_hud_InvCardWpn_SLOTS_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass hud_InvCardWpn_SLOTS.hud_InvCardWpn_SLOTS_C
// 0x0018 (0x0278 - 0x0260)
class Uhud_InvCardWpn_SLOTS_C : public UShooterInvCardWeapAttachList
{
public:
	class Uhud_InvCardWpn_SlotEntry_C*                 hud_InvCardWpn_SlotEntry;                                 // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class Uhud_InvCardWpn_SlotEntry_C*                 hud_InvCardWpn_SlotEntry_1;                               // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class Uhud_InvCardWpn_SlotEntry_C*                 hud_InvCardWpn_SlotEntry_2;                               // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass hud_InvCardWpn_SLOTS.hud_InvCardWpn_SLOTS_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
