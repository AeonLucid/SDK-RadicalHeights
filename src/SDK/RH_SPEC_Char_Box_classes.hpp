#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_SPEC_Char_Box_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass SPEC_Char_Box.SPEC_Char_Box_C
// 0x0120 (0x0460 - 0x0340)
class USPEC_Char_Box_C : public UShooterSpecScoreboardEntry
{
public:
	class UWidgetAnimation*                            Anim_portrait_icon;                                       // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Health_Symbol;                                            // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  Name;                                                     // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UOverlay*                                    ObjectiveCarry;                                           // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      OC_Carry;                                                 // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Player_box_background;                                    // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Player_box_border;                                        // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      SelectedFX;                                               // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      SelectedGlow;                                             // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FLinearColor                                NeutralColor;                                             // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShooterAllegiance>                    Temp_byte_Variable;                                       // 0x0398(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0399(0x0003) MISSED OFFSET
	struct FLinearColor                                Temp_struct_Variable;                                     // 0x039C(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor;                            // 0x03AC(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor2;                           // 0x03BC(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor3;                           // 0x03CC(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor4;                           // 0x03DC(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EShooterAllegiance>                    K2Node_CustomEvent_Allegiance;                            // 0x03EC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EShooterPlayerStatus>                  K2Node_Event_PlayerStatus;                                // 0x03ED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x03EE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x03EF(0x0001) MISSED OFFSET
	struct FLinearColor                                CallFunc_GetBreakerColorPrimary_ReturnValue;              // 0x03F0(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_GetLawColorPrimary_ReturnValue;                  // 0x0400(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_Select_Default;                                    // 0x0410(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor5;                           // 0x0420(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor6;                           // 0x0430(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor7;                           // 0x0440(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor8;                           // 0x0450(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass SPEC_Char_Box.SPEC_Char_Box_C");
		return ptr;
	}


	void SetAllegiance(TEnumAsByte<EShooterAllegiance> bpp__Allegiance__pf);
	void OnPlayerStatusChanged(TEnumAsByte<EShooterPlayerStatus> bpp__PlayerStatus__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
