#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Event_BikeRace_Start_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Event_BikeRace_Start.Event_BikeRace_Start_C
// 0x0198 (0x0530 - 0x0398)
class AEvent_BikeRace_Start_C : public AActor
{
public:
	class UParticleSystemComponent*                    P_SpecialDelivery_Showdown_Flares1;                       // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_SpecialDelivery_Showdown_Flares;                        // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        bike_special_delivery_banner_01;                          // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UShooterIconComponent*                       ShooterIcon;                                              // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             HelmetSpawn_Location;                                     // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMapMarkerComponent*                         MapMarker;                                                // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             BikeSpawn_Location;                                       // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TempBike;                                                 // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABMXTest_C*                                  BMX_ref;                                                  // 0x03E0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RaceStarted;                                              // 0x03E8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03E9(0x0003) MISSED OFFSET
	float                                              SpawnRadius;                                              // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DespawnTime;                                              // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DespawnCheckInterval;                                     // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentDespawnTimer;                                      // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET
	class AArmorPickup_Head_Light_C*                   Helmet_ref;                                               // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x0408(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue2;                       // 0x0409(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x040A(0x0002) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetComponentRotation_ReturnValue;             // 0x040C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRotator_Roll;                               // 0x0418(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRotator_Pitch;                              // 0x041C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRotator_Yaw;                                // 0x0420(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetComponentLocation_ReturnValue;             // 0x0424(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRotator_ReturnValue;                         // 0x0430(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	struct FTransform                                  CallFunc_MakeTransform_ReturnValue;                       // 0x0440(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetComponentRotation_ReturnValue2;            // 0x0470(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x047C(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;    // 0x0480(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRotator_Roll2;                              // 0x0488(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRotator_Pitch2;                             // 0x048C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRotator_Yaw2;                               // 0x0490(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0494(0x0004) MISSED OFFSET
	class ABMXTest_BikeRace_C*                         CallFunc_FinishSpawningActor_ReturnValue;                 // 0x0498(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRotator_ReturnValue2;                        // 0x04A0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetComponentLocation_ReturnValue2;            // 0x04AC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x04B8(0x0008) MISSED OFFSET
	struct FTransform                                  CallFunc_MakeTransform_ReturnValue2;                      // 0x04C0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x04F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x04F1(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2;   // 0x04F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AArmorPickup_Head_Light_C*                   CallFunc_FinishSpawningActor_ReturnValue2;                // 0x0500(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_CustomEvent_Interactor;                            // 0x0508(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0510(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0511(0x0007) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x0518(0x0014) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FTimerHandle                                CallFunc_K2_SetTimer_ReturnValue;                         // 0x0528(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Event_BikeRace_Start.Event_BikeRace_Start_C");
		return ptr;
	}


	void UserConstructionScript();
	void StartRace(class AShooterCharacter* bpp__Interactor__pf);
	void ReceiveBeginPlay();
	void OrientBikeRack();
	void OnRep_RaceStarted();
	void CleanupRaceObjects();
	void ChooseRaceDestination();
	void CheckDespawn();
	void OnInteractDelegate__DelegateSignature(class AShooterCharacter* Interactor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
