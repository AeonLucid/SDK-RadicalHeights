#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_CharacterInfo_RNR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass CharacterInfo_RNR.CharacterInfo_RNR_C
// 0x0028 (0x0318 - 0x02F0)
class UCharacterInfo_RNR_C : public UShooterCharacterInfoWidget
{
public:
	class UWidgetAnimation*                            ProneBlocked;                                             // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            BadReception;                                             // 0x02F8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UProgressBar*                                rnr_mysteryDoor;                                          // 0x0300(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class URadialInteract_C*                           rnr_radialinteract;                                       // 0x0308(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               CachedOverchargeState;                                    // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0311(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAnimationPlaying_ReturnValue;                  // 0x0312(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0313(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAnimationPlaying_ReturnValue2;                 // 0x0314(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0315(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass CharacterInfo_RNR.CharacterInfo_RNR_C");
		return ptr;
	}


	void ShowSupplyLineError();
	void ShowProneError();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
