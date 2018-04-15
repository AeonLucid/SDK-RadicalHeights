#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_ScoreLogEntry_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_ScoreLogEntry.HUD_ScoreLogEntry_C
// 0x0000 (0x02D0 - 0x02D0)
class UHUD_ScoreLogEntry_C : public UShooterScoreMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_ScoreLogEntry.HUD_ScoreLogEntry_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
