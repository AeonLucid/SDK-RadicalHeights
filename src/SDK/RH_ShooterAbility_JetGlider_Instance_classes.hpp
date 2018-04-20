#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_ShooterAbility_JetGlider_Instance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass ShooterAbility_JetGlider_Instance.ShooterAbility_JetGlider_Instance_C
// 0x0000 (0x0280 - 0x0280)
class UShooterAbility_JetGlider_Instance_C : public UShooterAbility_JetGlider
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass ShooterAbility_JetGlider_Instance.ShooterAbility_JetGlider_Instance_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
