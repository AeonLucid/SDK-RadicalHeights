#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_hud_InvCard_ITEM_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass hud_InvCard_ITEM.hud_InvCard_ITEM_C
// 0x0028 (0x02A0 - 0x0278)
class Uhud_InvCard_ITEM_C : public UShooterInvCardItem
{
public:
	class Uhud_InvCard_ItemInfo_C*                     hud_InvCard_ItemInfo;                                     // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      hud_InvCardItem_BG;                                       // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      hud_InvCardItem_Icon;                                     // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      hud_InvCardItem_IconBG;                                   // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      hud_InvCardItem_PrizeIcon;                                // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass hud_InvCard_ITEM.hud_InvCard_ITEM_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
