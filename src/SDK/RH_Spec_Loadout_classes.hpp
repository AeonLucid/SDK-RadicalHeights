#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Spec_Loadout_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Spec_Loadout.Spec_Loadout_C
// 0x01E8 (0x0430 - 0x0248)
class USpec_Loadout_C : public UShooterUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0248(0x0008) MISSED OFFSET
	class UImage*                                      blackback;                                                // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      BreakerLogo;                                              // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Frame;                                                    // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      LawLogo;                                                  // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  Name;                                                     // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      PlayerImage;                                              // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  Role;                                                     // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FLinearColor                                NeutralColor;                                             // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               K2Node_Event_bUseGamepad;                                 // 0x0298(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0299(0x0003) MISSED OFFSET
	struct FLinearColor                                Temp_struct_Variable;                                     // 0x029C(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_GetBreakerColorPrimary_ReturnValue;              // 0x02AC(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_GetLawColorPrimary_ReturnValue;                  // 0x02BC(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor;                            // 0x02CC(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor2;                           // 0x02DC(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EShooterAllegiance>                    K2Node_Event_Allegiance;                                  // 0x02EC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02ED(0x0003) MISSED OFFSET
	struct FText                                       K2Node_Event_Role;                                        // 0x02F0(0x0018) (Transient, DuplicateTransient)
	class AShooterCharacter*                           K2Node_Event_Target;                                      // 0x0308(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EShooterAllegiance>                    Temp_byte_Variable;                                       // 0x0310(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0311(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0312(0x0002) MISSED OFFSET
	struct FLinearColor                                K2Node_Select_Default;                                    // 0x0314(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0324(0x0004) MISSED OFFSET
	class AShooterPlayerState*                         CallFunc_GetPlayerState_ReturnValue;                      // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0330(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0331(0x0003) MISSED OFFSET
	struct FLinearColor                                K2Node_MakeStruct_LinearColor3;                           // 0x0334(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor4;                           // 0x0344(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	class UObject*                                     CallFunc_GetAccountPortraitObject_ReturnValue;            // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FText                                       CallFunc_Conv_StringToText_ReturnValue;                   // 0x0360(0x0018) (Transient, DuplicateTransient)
	class UCustomAccountPortraitData*                  K2Node_DynamicCast_AsCustom_Account_Portrait_Data;        // 0x0378(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess;                              // 0x0380(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x0381(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x0382(0x0006) MISSED OFFSET
	class UObject*                                     CallFunc_GetMediumPortraitObject_ReturnValue;             // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FSlateBrush                                 K2Node_MakeStruct_SlateBrush;                             // 0x0390(0x0090) (Transient, DuplicateTransient)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x0420(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0xF];                                       // 0x0421(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Spec_Loadout.Spec_Loadout_C");
		return ptr;
	}


	void OnUserSettingsChanged(bool bpp__bUseGamepad__pf);
	void OnSpectatorTargetChanged(TEnumAsByte<EShooterAllegiance> bpp__Allegiance__pf, const struct FText& bpp__Role__pf, class AShooterCharacter* bpp__Target__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
