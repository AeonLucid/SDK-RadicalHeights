#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Ability_CombatRoll_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Ability_CombatRoll.Ability_CombatRoll_C
// 0x0000 (0x0238 - 0x0238)
class UAbility_CombatRoll_C : public UShooterAbility_CombatRoll
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Ability_CombatRoll.Ability_CombatRoll_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
