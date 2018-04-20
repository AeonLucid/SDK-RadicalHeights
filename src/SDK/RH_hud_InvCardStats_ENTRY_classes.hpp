#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_hud_InvCardStats_ENTRY_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass hud_InvCardStats_ENTRY.hud_InvCardStats_ENTRY_C
// 0x0028 (0x0290 - 0x0268)
class Uhud_InvCardStats_ENTRY_C : public UShooterInvCardWeapStatListEntry
{
public:
	class Uhud_InvCardStats_STARS_C*                   hud_InvCardStats_STARS_2;                                 // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class Uhud_InvCardStats_STARS_C*                   hud_InvCardStats_STARS_3;                                 // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class Uhud_InvCardStats_STARS_C*                   hud_InvCardStats_STARS_4;                                 // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class Uhud_InvCardStats_STARS_C*                   hud_InvCardStats_STARS_5;                                 // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class Uhud_InvCardStats_STARS_C*                   hud_InvCardStats_STARS_6;                                 // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass hud_InvCardStats_ENTRY.hud_InvCardStats_ENTRY_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
