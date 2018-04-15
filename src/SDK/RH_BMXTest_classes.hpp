#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_BMXTest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass BMXTest.BMXTest_C
// 0x0030 (0x0650 - 0x0620)
class ABMXTest_C : public AShooterBike
{
public:
	class USkeletalMeshComponent*                      BikeMesh;                                                 // 0x0620(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0628(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UShooterInteractComponent*                   ShooterInteract;                                          // 0x0630(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInstance*>                   BMX_Textures_List;                                        // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UMaterialInstance*                           Bike_Texture;                                             // 0x0648(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass BMXTest.BMXTest_C");
		return ptr;
	}


	void UserConstructionScript();
	void SelectBikeColor();
	void ReceiveBeginPlay();
	void OnRep_Bike_Texture();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
