#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_WeaponPickup_1912_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass WeaponPickup_1912.WeaponPickup_1911_C
// 0x0010 (0x0448 - 0x0438)
class AWeaponPickup_1911_C : public AShooterWeaponPickup
{
public:
	class UCapsuleComponent*                           Capsule;                                                  // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UShooterInteractComponent*                   ShooterInteract;                                          // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass WeaponPickup_1912.WeaponPickup_1911_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif