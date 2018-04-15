#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_EOM_REWARDS_SLOT_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass EOM_REWARDS_SLOT.EOM_REWARDS_SLOT_C
// 0x0008 (0x0260 - 0x0258)
class UEOM_REWARDS_SLOT_C : public UShooterEomRewardsSlotWidget
{
public:
	class UImage*                                      EOM_REWARDS_SLOT_ICON;                                    // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass EOM_REWARDS_SLOT.EOM_REWARDS_SLOT_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
