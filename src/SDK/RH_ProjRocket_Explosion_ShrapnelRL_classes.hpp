#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_ProjRocket_Explosion_ShrapnelRL_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjRocket_Explosion_ShrapnelRL.ProjRocket_Explosion_ShrapnelRL_C
// 0x0000 (0x0900 - 0x0900)
class AProjRocket_Explosion_ShrapnelRL_C : public AShooterExplosionEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjRocket_Explosion_ShrapnelRL.ProjRocket_Explosion_ShrapnelRL_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
