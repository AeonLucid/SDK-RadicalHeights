#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_EQUIPPED_ITEM_V2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_EQUIPPED_ITEM_V2.HUD_EQUIPPED_ITEM_V2_C
// 0x0008 (0x0280 - 0x0278)
class UHUD_EQUIPPED_ITEM_V2_C : public UShooterInventoryEquippedItemInfo
{
public:
	class UShooterCachedWidget*                        ShooterCachedWidget_1;                                    // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_EQUIPPED_ITEM_V2.HUD_EQUIPPED_ITEM_V2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
