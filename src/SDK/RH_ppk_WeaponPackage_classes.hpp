#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_ppk_WeaponPackage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ppk_WeaponPackage.ppk_WeaponPackage_C
// 0x0000 (0x0658 - 0x0658)
class Uppk_WeaponPackage_C : public UWeaponAnimationPackage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ppk_WeaponPackage.ppk_WeaponPackage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
