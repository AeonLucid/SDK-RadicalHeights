#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_hud_InvCardStats_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass hud_InvCardStats.hud_InvCardStats_C
// 0x0028 (0x0280 - 0x0258)
class Uhud_InvCardStats_C : public UShooterInvCardWeapStatList
{
public:
	class Uhud_InvCardStats_ENTRY_C*                   hud_InvCardStats_ENTRY_1;                                 // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class Uhud_InvCardStats_ENTRY_C*                   hud_InvCardStats_ENTRY_2;                                 // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class Uhud_InvCardStats_ENTRY_C*                   hud_InvCardStats_ENTRY_3;                                 // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class Uhud_InvCardStats_ENTRY_C*                   hud_InvCardStats_ENTRY_4;                                 // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class Uhud_InvCardStats_ENTRY_C*                   hud_InvCardStats_ENTRY_5;                                 // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass hud_InvCardStats.hud_InvCardStats_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
