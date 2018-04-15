#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Droid_RX_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Droid_RX.Droid_RX_C
// 0x0018 (0x0590 - 0x0578)
class ADroid_RX_C : public AShooterDroid_Bomb
{
public:
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_Emissive_5C9F16A1487B5CCFB08A15923D6DAF17;     // 0x0580(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_5C9F16A1487B5CCFB08A15923D6DAF17;   // 0x0584(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0585(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0588(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Droid_RX.Droid_RX_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Droid_RX_2(int bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
