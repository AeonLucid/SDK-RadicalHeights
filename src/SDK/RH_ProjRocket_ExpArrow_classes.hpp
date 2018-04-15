#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_ProjRocket_ExpArrow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass ProjRocket_ExpArrow.ProjRocket_ExpArrow_C
// 0x0038 (0x0670 - 0x0638)
class AProjRocket_ExpArrow_C : public AShooterProjectile
{
public:
	class UStaticMeshComponent*                        Rocket;                                                   // 0x0638(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak1;                                                      // 0x0640(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_DamagedActor;                          // 0x0648(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Damage;                                // 0x0650(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0654(0x0004) MISSED OFFSET
	class UDamageType*                                 K2Node_CustomEvent_DamageType;                            // 0x0658(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 K2Node_CustomEvent_InstigatedBy;                          // 0x0660(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_DamageCauser;                          // 0x0668(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass ProjRocket_ExpArrow.ProjRocket_ExpArrow_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnTakeAnyDamage_Event(class AActor* bpp__DamagedActor__pf, float bpp__Damage__pf, class UDamageType* bpp__DamageType__pf__const, class AController* bpp__InstigatedBy__pf, class AActor* bpp__DamageCauser__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
