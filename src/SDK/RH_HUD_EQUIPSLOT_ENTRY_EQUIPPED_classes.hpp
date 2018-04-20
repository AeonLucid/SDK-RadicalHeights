#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_EQUIPSLOT_ENTRY_EQUIPPED_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_EQUIPSLOT_ENTRY_EQUIPPED.HUD_EQUIPSLOT_ENTRY_EQUIPPED_C
// 0x0000 (0x02A0 - 0x02A0)
class UHUD_EQUIPSLOT_ENTRY_EQUIPPED_C : public UShooterInventoryListEntryEquipped
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_EQUIPSLOT_ENTRY_EQUIPPED.HUD_EQUIPSLOT_ENTRY_EQUIPPED_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
