#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_INV_PRIZESLOTS_INACTIVE_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_INV_PRIZESLOTS_INACTIVE.HUD_INV_PRIZESLOTS_INACTIVE_C
// 0x0000 (0x0260 - 0x0260)
class UHUD_INV_PRIZESLOTS_INACTIVE_C : public UShooterInventoryListBaseEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_INV_PRIZESLOTS_INACTIVE.HUD_INV_PRIZESLOTS_INACTIVE_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
