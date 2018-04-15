#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_ShooterAbility_Sprint_Instance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass ShooterAbility_Sprint_Instance.ShooterAbility_Sprint_Instance_C
// 0x0060 (0x0240 - 0x01E0)
class UShooterAbility_Sprint_Instance_C : public UShooterAbility_Sprint
{
public:
	bool                                               haveEnabledShieldFpScreenEffect;                          // 0x01E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01E1(0x0007) MISSED OFFSET
	class UMaterialInstance*                           enforcerScreenEffectMaterialInstance;                     // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsAbilityActive_ReturnValue;                     // 0x01F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsActive_ReturnValue;                            // 0x01F1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x01F2(0x0002) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x01F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsActive_ReturnValue2;                           // 0x01F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetShooterCharacterOwner_ReturnValue;            // 0x0200(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsSprinting_ReturnValue;                         // 0x0208(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsThirdPersonPawnNative_ReturnValue;             // 0x0209(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x020A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsFirstPerson_ReturnValue;                       // 0x020B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x020C(0x0004) MISSED OFFSET
	class UCameraComponent*                            CallFunc_GetFirstPersonCamera_ReturnValue;                // 0x0210(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsSprinting_ReturnValue2;                        // 0x0218(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0219(0x0007) MISSED OFFSET
	TArray<class UCameraComponent*>                    CallFunc_GetComponentsByClass_ReturnValue;                // 0x0220(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0230(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0231(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0232(0x0002) MISSED OFFSET
	float                                              K2Node_Event_DeltaSeconds;                                // 0x0234(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue;                     // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass ShooterAbility_Sprint_Instance.ShooterAbility_Sprint_Instance_C");
		return ptr;
	}


	void ReceiveTick(float bpp__DeltaSeconds__pf);
	void OnAbilityUpdate();
	void OnAbilityStop();
	void OnAbilityStart();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
