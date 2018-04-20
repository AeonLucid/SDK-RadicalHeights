#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Spec_Scoreboard_Bar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C
// 0x02C8 (0x0548 - 0x0280)
class USpec_Scoreboard_Bar_C : public UShooterSpecScoreboardBar
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0280(0x0008) MISSED OFFSET
	class UButton*                                     Button_F1;                                                // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     Button_F10;                                               // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     Button_F2;                                                // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     Button_F3;                                                // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     Button_F4;                                                // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     Button_F5;                                                // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     Button_F6;                                                // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     Button_F7;                                                // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     Button_F8;                                                // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     Button_F9;                                                // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Button_L;                                                 // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Button_R;                                                 // 0x02E0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     PlayerButton1;                                            // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     PlayerButton10;                                           // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     PlayerButton2;                                            // 0x02F8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     PlayerButton3;                                            // 0x0300(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     PlayerButton4;                                            // 0x0308(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     PlayerButton5;                                            // 0x0310(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     PlayerButton6;                                            // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     PlayerButton7;                                            // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     PlayerButton8;                                            // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     PlayerButton9;                                            // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UShooterCachedWidget*                        ShooterCachedWidget_1;                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UShooterCachedWidget*                        ShooterCachedWidget_2;                                    // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UShooterCachedWidget*                        ShooterCachedWidget_3;                                    // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UShooterCachedWidget*                        ShooterCachedWidget_4;                                    // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UShooterCachedWidget*                        ShooterCachedWidget_5;                                    // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UShooterCachedWidget*                        ShooterCachedWidget_6;                                    // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UShooterCachedWidget*                        ShooterCachedWidget_7;                                    // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UShooterCachedWidget*                        ShooterCachedWidget_8;                                    // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UShooterCachedWidget*                        ShooterCachedWidget_9;                                    // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UShooterCachedWidget*                        ShooterCachedWidget_10;                                   // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class USPEC_Char_Box_C*                            SPEC_Char_Box1;                                           // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class USPEC_Char_Box_C*                            SPEC_Char_Box10;                                          // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class USPEC_Char_Box_C*                            SPEC_Char_Box2;                                           // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class USPEC_Char_Box_C*                            SPEC_Char_Box3;                                           // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class USPEC_Char_Box_C*                            SPEC_Char_Box4;                                           // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class USPEC_Char_Box_C*                            SPEC_Char_Box5;                                           // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class USPEC_Char_Box_C*                            SPEC_Char_Box6;                                           // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class USPEC_Char_Box_C*                            SPEC_Char_Box7;                                           // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class USPEC_Char_Box_C*                            SPEC_Char_Box8;                                           // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class USPEC_Char_Box_C*                            SPEC_Char_Box9;                                           // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	TArray<class USPEC_Char_Box_C*>                    CharBoxes;                                                // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAkAudioEvent*                               OnHoveredSound;                                           // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OnClickedSound;                                           // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UButton*>                             FButtons;                                                 // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Temp_int_Array_Index_Variable;                            // 0x0408(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x040C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x0410(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0414(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x0418(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable3;                          // 0x041C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue3;                         // 0x0420(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Array_Index_Variable2;                           // 0x0424(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Array_Index_Variable3;                           // 0x0428(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable4;                          // 0x042C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue4;                         // 0x0430(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_True_if_break_was_hit_Variable;                 // 0x0434(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0435(0x0003) MISSED OFFSET
	int                                                Temp_int_Array_Index_Variable4;                           // 0x0438(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x043C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x043D(0x0003) MISSED OFFSET
	class AShooterPlayerController*                    CallFunc_GetOwningShooterPlayerController_ReturnValue;    // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EShooterAllegiance>                    K2Node_Event_Allegiance;                                  // 0x0448(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0449(0x0007) MISSED OFFSET
	struct FText                                       K2Node_Event_Role;                                        // 0x0450(0x0018) (Transient, DuplicateTransient)
	class AShooterCharacter*                           K2Node_Event_Target;                                      // 0x0468(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x0470(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0471(0x0007) MISSED OFFSET
	class USPEC_Char_Box_C*                            K2Node_CustomEvent_Char_Box;                              // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsVisible_ReturnValue;                           // 0x0480(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0481(0x0007) MISSED OFFSET
	class USPEC_Char_Box_C*                            K2Node_CustomEvent_CharBox;                               // 0x0488(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsVisible_ReturnValue2;                          // 0x0490(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0491(0x0007) MISSED OFFSET
	TArray<class USPEC_Char_Box_C*>                    K2Node_MakeArray_Array;                                   // 0x0498(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class USPEC_Char_Box_C*                            CallFunc_Array_Get_Item;                                  // 0x04A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x04B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_Index2;                                // 0x04B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x04B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x04B9(0x0007) MISSED OFFSET
	class USPEC_Char_Box_C*                            CallFunc_Array_Get_Item2;                                 // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsVisible_ReturnValue3;                          // 0x04C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x04C9(0x0003) MISSED OFFSET
	int                                                K2Node_CustomEvent_Index;                                 // 0x04CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x04D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x04D1(0x0007) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x04D8(0x0014) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class USPEC_Char_Box_C*                            CallFunc_Array_Get_Item3;                                 // 0x04E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x04F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x04F4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bUseGamepad;                                 // 0x04F5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x04F6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1];                                       // 0x04F7(0x0001) MISSED OFFSET
	class USPEC_Char_Box_C*                            CallFunc_Array_Get_Item4;                                 // 0x04F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue3;                       // 0x0500(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue3;                        // 0x0504(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsVisible_ReturnValue4;                          // 0x0505(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0506(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x0507(0x0001) MISSED OFFSET
	TArray<class UButton*>                             K2Node_MakeArray_Array2;                                  // 0x0508(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     CallFunc_Array_Get_Item5;                                 // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UShooterPlayerListEntry*                     K2Node_Event_Entry;                                       // 0x0520(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bIsVisible;                                  // 0x0528(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0529(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue4;                       // 0x052C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USPEC_Char_Box_C*                            CallFunc_Array_Get_Item6;                                 // 0x0530(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue4;                        // 0x0538(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0539(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x053A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x5];                                       // 0x053B(0x0005) MISSED OFFSET
	class UButton*                                     CallFunc_Array_Get_Item7;                                 // 0x0540(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Spec_Scoreboard_Bar.Spec_Scoreboard_Bar_C");
		return ptr;
	}


	void SetHoveredIfExists(class USPEC_Char_Box_C* bpp__CharBox__pf);
	void SelectCharBox(class USPEC_Char_Box_C* bpp__CharxBox__pfT);
	void OnUserSettingsChanged(bool bpp__bUseGamepad__pf);
	void OnSpectatorTargetChanged(TEnumAsByte<EShooterAllegiance> bpp__Allegiance__pf, const struct FText& bpp__Role__pf, class AShooterCharacter* bpp__Target__pf);
	void OnSpectatorPlayerChosen(int bpp__Index__pf);
	void OnEntryVisibilityChanged(class UShooterPlayerListEntry* bpp__Entry__pf, bool bpp__bIsVisible__pf);
	void HideHoveredIfNotActive(int bpp__Index__pf);
	void Construct();
	void BndEvt__PlayerButton9_K2Node_ComponentBoundEvent_396_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PlayerButton9_K2Node_ComponentBoundEvent_2325_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerButton9_K2Node_ComponentBoundEvent_2280_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerButton8_K2Node_ComponentBoundEvent_291_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PlayerButton8_K2Node_ComponentBoundEvent_2192_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerButton8_K2Node_ComponentBoundEvent_2150_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerButton7_K2Node_ComponentBoundEvent_295_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PlayerButton7_K2Node_ComponentBoundEvent_2068_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerButton7_K2Node_ComponentBoundEvent_2029_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerButton6_K2Node_ComponentBoundEvent_275_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PlayerButton6_K2Node_ComponentBoundEvent_1034_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerButton6_K2Node_ComponentBoundEvent_1006_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerButton5_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PlayerButton5_K2Node_ComponentBoundEvent_527_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerButton5_K2Node_ComponentBoundEvent_118_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerButton4_K2Node_ComponentBoundEvent_885_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerButton4_K2Node_ComponentBoundEvent_861_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerButton4_K2Node_ComponentBoundEvent_482_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PlayerButton3_K2Node_ComponentBoundEvent_415_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PlayerButton3_K2Node_ComponentBoundEvent_1845_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerButton3_K2Node_ComponentBoundEvent_1806_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerButton2_K2Node_ComponentBoundEvent_316_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PlayerButton2_K2Node_ComponentBoundEvent_1951_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerButton2_K2Node_ComponentBoundEvent_1915_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerButton1_K2Node_ComponentBoundEvent_1169_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerButton1_K2Node_ComponentBoundEvent_1138_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerButton10_K2Node_ComponentBoundEvent_512_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PlayerButton10_K2Node_ComponentBoundEvent_2467_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerButton10_K2Node_ComponentBoundEvent_2419_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CyclePlayerUp_K2Node_ComponentBoundEvent_2818_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CyclePlayerDown_K2Node_ComponentBoundEvent_2875_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_F9_K2Node_ComponentBoundEvent_3815_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_F8_K2Node_ComponentBoundEvent_3868_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_F7_K2Node_ComponentBoundEvent_3922_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_F6_K2Node_ComponentBoundEvent_3977_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_F5_K2Node_ComponentBoundEvent_4033_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_F4_K2Node_ComponentBoundEvent_4090_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_F3_K2Node_ComponentBoundEvent_4148_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_F2_K2Node_ComponentBoundEvent_4207_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_F1_K2Node_ComponentBoundEvent_4267_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_F10_K2Node_ComponentBoundEvent_3755_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_354_OnButtonClickedEvent__DelegateSignature();
	void SpectatorIndexChosen__DelegateSignature(int Index);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
