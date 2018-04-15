#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_EQUIPSLOT_ENTRY_V2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_EQUIPSLOT_ENTRY_V2.HUD_EQUIPSLOT_ENTRY_V2_C
// 0x0020 (0x02B0 - 0x0290)
class UHUD_EQUIPSLOT_ENTRY_V2_C : public UShooterInventoryListSwitcherEntry
{
public:
	class UHUD_EQUIPSLOT_ENTRY_EMPTY_C*                HUD_EQUIPSLOT_ENTRY_EMPTY;                                // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_EQUIPSLOT_ENTRY_EQUIPPED_C*             HUD_EQUIPSLOT_ENTRY_EQUIPPED;                             // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHUD_EQUIPSLOT_ENTRY_INACTIVE_C*             HUD_EQUIPSLOT_ENTRY_INACTIVE;                             // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UShooterCachedWidget*                        ShooterCachedWidget_2;                                    // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_EQUIPSLOT_ENTRY_V2.HUD_EQUIPSLOT_ENTRY_V2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
