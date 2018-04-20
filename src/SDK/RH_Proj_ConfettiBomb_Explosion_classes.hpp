#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Proj_ConfettiBomb_Explosion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_ConfettiBomb_Explosion.Proj_ConfettiBomb_Explosion_C
// 0x0000 (0x0900 - 0x0900)
class AProj_ConfettiBomb_Explosion_C : public AShooterExplosionEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_ConfettiBomb_Explosion.Proj_ConfettiBomb_Explosion_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
