#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_EQUIPSLOT_ENTRY_EMPTY_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_EQUIPSLOT_ENTRY_EMPTY.HUD_EQUIPSLOT_ENTRY_EMPTY_C
// 0x0000 (0x0288 - 0x0288)
class UHUD_EQUIPSLOT_ENTRY_EMPTY_C : public UShooterInventoryListEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_EQUIPSLOT_ENTRY_EMPTY.HUD_EQUIPSLOT_ENTRY_EMPTY_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
