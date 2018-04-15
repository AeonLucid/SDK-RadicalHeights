#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_TASC_Enforcer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass TASC_Enforcer.TASC_Enforcer_C
// 0x0080 (0x2080 - 0x2000)
class ATASC_Enforcer_C : public APlayerPawn_C
{
public:
	float                                              health_save;                                              // 0x2000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OldAlphaRight;                                            // 0x2004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OldAlphaLeft;                                             // 0x2008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar_1;                                                 // 0x200C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x200D(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaSeconds;                                // 0x2010(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EAimState>                             Temp_byte_Variable;                                       // 0x2014(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Variable;                                       // 0x2015(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bThirdPerson;                                // 0x2016(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsUsingScope_ReturnValue;                        // 0x2017(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Variable2;                                      // 0x2018(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2019(0x0007) MISSED OFFSET
	class AShooterWeapon*                              CallFunc_GetWeapon_ReturnValue;                           // 0x2020(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2028(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EAttachmentScope>                      CallFunc_GetScopeType_ReturnValue;                        // 0x2029(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x202A(0x0006) MISSED OFFSET
	class FString                                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;       // 0x2030(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       CallFunc_Conv_StringToName_ReturnValue;                   // 0x2040(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_GetVectorParameterValue_ReturnValue;             // 0x2048(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Variable3;                                      // 0x2058(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EAimState>                             CallFunc_GetAimState_ReturnValue;                         // 0x2059(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x205A(0x0006) MISSED OFFSET
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue;                     // 0x2060(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_Default;                                    // 0x2068(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x2069(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x206A(0x0006) MISSED OFFSET
	class AShooterPlayerController*                    CallFunc_GetShooterPlayerController_ReturnValue;          // 0x2070(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    CallFunc_GetShooterPlayerController_ReturnValue2;         // 0x2078(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass TASC_Enforcer.TASC_Enforcer_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float bpp__DeltaSeconds__pf);
	void OnSwitchMeshPerspectives(bool bpp__bThirdPerson__pf);
	void IK_FootTrace(const struct FName& bpp__SocketName__pf, float bpp__TraceDistance__pf, bool* bpp__HitDetection__pf, float* bpp__HipOffset__pf, struct FVector* bpp__EffectorLocation__pf);
	void GroundNormalTrace(const struct FName& bpp__SocketName__pf, float bpp__TraceDistance__pf, bool* bpp__HitDetection__pf, struct FVector* bpp__EffectorRotation__pf);
	void GetUltimateCount();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
