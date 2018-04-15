#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Ability_QuickThrow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Ability_QuickThrow.Ability_QuickThrow_C
// 0x0000 (0x0278 - 0x0278)
class UAbility_QuickThrow_C : public UShooterAbility_QuickThrow
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Ability_QuickThrow.Ability_QuickThrow_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
