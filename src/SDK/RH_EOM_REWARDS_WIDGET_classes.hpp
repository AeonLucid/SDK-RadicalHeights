#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_EOM_REWARDS_WIDGET_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass EOM_REWARDS_WIDGET.EOM_REWARDS_WIDGET_C
// 0x0028 (0x0280 - 0x0258)
class UEOM_REWARDS_WIDGET_C : public UShooterEomRewardsWidget
{
public:
	class UEOM_REWARDS_SLOT_C*                         EOM_REWARDS_SLOT1;                                        // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UEOM_REWARDS_SLOT_C*                         EOM_REWARDS_SLOT2;                                        // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UEOM_REWARDS_SLOT_C*                         EOM_REWARDS_SLOT3;                                        // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_1;                                                  // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_2;                                                  // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass EOM_REWARDS_WIDGET.EOM_REWARDS_WIDGET_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
