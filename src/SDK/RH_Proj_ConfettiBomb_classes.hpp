#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Proj_ConfettiBomb_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Proj_ConfettiBomb.Proj_ConfettiBomb_C
// 0x0008 (0x0640 - 0x0638)
class AProj_ConfettiBomb_C : public AShooterProjectile
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0638(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Proj_ConfettiBomb.Proj_ConfettiBomb_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
