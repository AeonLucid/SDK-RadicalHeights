#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_hud_InvCard_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass hud_InvCard_ItemInfo.hud_InvCard_ItemInfo_C
// 0x0008 (0x0270 - 0x0268)
class Uhud_InvCard_ItemInfo_C : public UShooterInvCardItemInfo
{
public:
	class UImage*                                      hud_InvCardItem_InfoBG;                                   // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass hud_InvCard_ItemInfo.hud_InvCard_ItemInfo_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
