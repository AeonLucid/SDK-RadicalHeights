#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Droid_Dummy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Droid_Dummy.Droid_Dummy_C
// 0x0028 (0x03F0 - 0x03C8)
class ADroid_Dummy_C : public AShooterTotem
{
public:
	class UCapsuleComponent*                           Capsule;                                                  // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      DummyMesh;                                                // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x03D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetComponentLocation_ReturnValue;             // 0x03DC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x03E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Droid_Dummy.Droid_Dummy_C");
		return ptr;
	}


	void UserConstructionScript();
	void NetMulticastDummyDestroyedFX();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
