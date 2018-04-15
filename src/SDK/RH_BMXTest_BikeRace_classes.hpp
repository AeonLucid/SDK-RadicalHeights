#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_BMXTest_BikeRace_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass BMXTest_BikeRace.BMXTest_BikeRace_C
// 0x0040 (0x0690 - 0x0650)
class ABMXTest_BikeRace_C : public ABMXTest_C
{
public:
	bool                                               PlayMusicWhenRidden;                                      // 0x0650(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0651(0x0007) MISSED OFFSET
	class AShooterCharacter*                           K2Node_CustomEvent_Interactor;                            // 0x0658(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0660(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0661(0x0007) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x0668(0x0014) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x0678(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0679(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetDriver_ReturnValue;                           // 0x0680(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0688(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0689(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass BMXTest_BikeRace.BMXTest_BikeRace_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ForceStopMusic();
	void BikeInteraction(class AShooterCharacter* bpp__Interactor__pf);
	void OnInteractDelegate__DelegateSignature(class AShooterCharacter* Interactor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
