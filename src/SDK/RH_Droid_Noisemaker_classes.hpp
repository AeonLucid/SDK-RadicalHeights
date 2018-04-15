#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Droid_Noisemaker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Droid_Noisemaker.Droid_Noisemaker_C
// 0x0008 (0x0558 - 0x0550)
class ADroid_Noisemaker_C : public AShooterDroid_Noisemaker
{
public:
	class UStaticMeshComponent*                        Cube;                                                     // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Droid_Noisemaker.Droid_Noisemaker_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
