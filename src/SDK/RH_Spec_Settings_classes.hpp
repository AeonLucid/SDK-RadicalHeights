#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Spec_Settings_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Spec_Settings.Spec_Settings_C
// 0x09A0 (0x0BE8 - 0x0248)
class USpec_Settings_C : public UShooterUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0248(0x0008) MISSED OFFSET
	class UImage*                                      ButtonRImage;                                             // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     CloseButton;                                              // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  DescriptionText;                                          // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     Display_Chat_button;                                      // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     Display_HUD_button;                                       // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     Display_Killfeed_button;                                  // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     Display_Obj_button;                                       // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     Display_PlayerCard_Button;                                // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     Display_Reticle_button;                                   // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     Display_Score_Button;                                     // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     Display_Toolbar_button;                                   // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     Display_XRAY_Button;                                      // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UOverlay*                                    EButtonOverlay;                                           // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class USlider*                                     FOV_Slider;                                               // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  FOV_Slider_Number;                                        // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     FOVButton;                                                // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_2;                                                  // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_3;                                                  // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_8;                                                  // 0x02E0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_9;                                                  // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_79;                                                 // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_80;                                                 // 0x02F8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_81;                                                 // 0x0300(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_82;                                                 // 0x0308(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_83;                                                 // 0x0310(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_84;                                                 // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_85;                                                 // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_86;                                                 // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_87;                                                 // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_88;                                                 // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_89;                                                 // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_90;                                                 // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_91;                                                 // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_92;                                                 // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Left_BK_2;                                                // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Left_BK_3;                                                // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Left_BK_4;                                                // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Left_BK_5;                                                // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Left_BK_6;                                                // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Left_BK_7;                                                // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Left_BK_8;                                                // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Left_BK_9;                                                // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Left_BK_10;                                               // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Left_BK_11;                                               // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Left_HL_2;                                                // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Left_HL_3;                                                // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Left_HL_4;                                                // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Left_HL_5;                                                // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Left_HL_6;                                                // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Left_HL_7;                                                // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Left_HL_8;                                                // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Left_HL_9;                                                // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Left_HL_10;                                               // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Left_HL_11;                                               // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  Option_Chat_YN;                                           // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  Option_HUD_YN;                                            // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  Option_KillFeed_YN;                                       // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  Option_Loadout_YN;                                        // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  Option_Obj_YN;                                            // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  Option_Reticle_YN;                                        // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  Option_Score_YN;                                          // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  Option_Toolbar_YN;                                        // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  Option_xray_YN;                                           // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Right_BK_2;                                               // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Right_BK_3;                                               // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Right_BK_4;                                               // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Right_BK_5;                                               // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Right_BK_6;                                               // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Right_BK_7;                                               // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Right_BK_8;                                               // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Right_BK_9;                                               // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Right_BK_10;                                              // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Right_BK_11;                                              // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Right_HL_2;                                               // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Right_HL_3;                                               // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Right_HL_4;                                               // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Right_HL_5;                                               // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Right_HL_6;                                               // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Right_HL_7;                                               // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Right_HL_8;                                               // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Right_HL_9;                                               // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Right_HL_10;                                              // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Right_HL_11;                                              // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      SettingsBackground;                                       // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      SettingsTitleBackground;                                  // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      ToggleSelectionImage;                                     // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FLinearColor                                Neutral_Color;                                            // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FOVMinMax;                                                // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OnHoveredSound;                                           // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OnClickedSound;                                           // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OnAcceptSound;                                            // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OnScrollSound;                                            // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentSettingIndex;                                      // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x053C(0x0004) MISSED OFFSET
	TArray<class UImage*>                              LeftHLs;                                                  // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TArray<class UImage*>                              RightHLs;                                                 // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	float                                              DigitalFOVIncrement;                                      // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0564(0x0004) MISSED OFFSET
	struct FText                                       Temp_text_Variable;                                       // 0x0568(0x0018) (Transient, DuplicateTransient)
	bool                                               Temp_bool_Variable;                                       // 0x0580(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0581(0x0007) MISSED OFFSET
	struct FText                                       Temp_text_Variable2;                                      // 0x0588(0x0018) (Transient, DuplicateTransient)
	struct FText                                       Temp_text_Variable3;                                      // 0x05A0(0x0018) (Transient, DuplicateTransient)
	bool                                               Temp_bool_Variable2;                                      // 0x05B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x05B9(0x0007) MISSED OFFSET
	struct FText                                       Temp_text_Variable4;                                      // 0x05C0(0x0018) (Transient, DuplicateTransient)
	struct FText                                       Temp_text_Variable5;                                      // 0x05D8(0x0018) (Transient, DuplicateTransient)
	bool                                               Temp_bool_Variable3;                                      // 0x05F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x05F1(0x0007) MISSED OFFSET
	struct FText                                       Temp_text_Variable6;                                      // 0x05F8(0x0018) (Transient, DuplicateTransient)
	struct FText                                       Temp_text_Variable7;                                      // 0x0610(0x0018) (Transient, DuplicateTransient)
	TEnumAsByte<EShooterAllegiance>                    Temp_byte_Variable;                                       // 0x0628(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0629(0x0003) MISSED OFFSET
	struct FLinearColor                                Temp_struct_Variable;                                     // 0x062C(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x063C(0x0004) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x0640(0x0014) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate2;                    // 0x0650(0x0014) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate3;                    // 0x0660(0x0014) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate4;                    // 0x0670(0x0014) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate5;                    // 0x0680(0x0014) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate6;                    // 0x0690(0x0014) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate7;                    // 0x06A0(0x0014) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FText                                       Temp_text_Variable8;                                      // 0x06B0(0x0018) (Transient, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate8;                    // 0x06C8(0x0014) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	bool                                               Temp_bool_Variable4;                                      // 0x06D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x06D9(0x0007) MISSED OFFSET
	struct FText                                       Temp_text_Variable9;                                      // 0x06E0(0x0018) (Transient, DuplicateTransient)
	struct FText                                       Temp_text_Variable10;                                     // 0x06F8(0x0018) (Transient, DuplicateTransient)
	bool                                               Temp_bool_Variable5;                                      // 0x0710(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0711(0x0007) MISSED OFFSET
	struct FText                                       Temp_text_Variable11;                                     // 0x0718(0x0018) (Transient, DuplicateTransient)
	struct FText                                       Temp_text_Variable12;                                     // 0x0730(0x0018) (Transient, DuplicateTransient)
	bool                                               Temp_bool_Variable6;                                      // 0x0748(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0749(0x0007) MISSED OFFSET
	struct FText                                       Temp_text_Variable13;                                     // 0x0750(0x0018) (Transient, DuplicateTransient)
	struct FText                                       Temp_text_Variable14;                                     // 0x0768(0x0018) (Transient, DuplicateTransient)
	bool                                               Temp_bool_Variable7;                                      // 0x0780(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0781(0x0007) MISSED OFFSET
	struct FText                                       Temp_text_Variable15;                                     // 0x0788(0x0018) (Transient, DuplicateTransient)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x07A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x07A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Array_Index_Variable;                            // 0x07A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x07AC(0x0004) MISSED OFFSET
	struct FText                                       Temp_text_Variable16;                                     // 0x07B0(0x0018) (Transient, DuplicateTransient)
	struct FText                                       Temp_text_Variable17;                                     // 0x07C8(0x0018) (Transient, DuplicateTransient)
	bool                                               Temp_bool_Variable8;                                      // 0x07E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x07E1(0x0007) MISSED OFFSET
	struct FText                                       Temp_text_Variable18;                                     // 0x07E8(0x0018) (Transient, DuplicateTransient)
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x0800(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x0804(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Array_Index_Variable2;                           // 0x0808(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Variable9;                                      // 0x080C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x080D(0x0003) MISSED OFFSET
	struct FText                                       Temp_text_Variable19;                                     // 0x0810(0x0018) (Transient, DuplicateTransient)
	struct FText                                       Temp_text_Variable20;                                     // 0x0828(0x0018) (Transient, DuplicateTransient)
	bool                                               Temp_bool_Variable10;                                     // 0x0840(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x0841(0x0007) MISSED OFFSET
	struct FText                                       Temp_text_Variable21;                                     // 0x0848(0x0018) (Transient, DuplicateTransient)
	class AShooterPlayerController*                    CallFunc_GetOwningShooterPlayerController_ReturnValue;    // 0x0860(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FText                                       K2Node_Select_Default;                                    // 0x0868(0x0018) (Transient, DuplicateTransient)
	struct FText                                       K2Node_Select2_Default;                                   // 0x0880(0x0018) (Transient, DuplicateTransient)
	struct FText                                       K2Node_Select3_Default;                                   // 0x0898(0x0018) (Transient, DuplicateTransient)
	bool                                               K2Node_CustomEvent_bEnabled8;                             // 0x08B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bEnabled7;                             // 0x08B1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x6];                                       // 0x08B2(0x0006) MISSED OFFSET
	struct FText                                       K2Node_Select4_Default;                                   // 0x08B8(0x0018) (Transient, DuplicateTransient)
	class AShooterPlayerController*                    CallFunc_GetOwningShooterPlayerController_ReturnValue2;   // 0x08D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bEnabled6;                             // 0x08D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x08D9(0x0007) MISSED OFFSET
	struct FText                                       K2Node_Select5_Default;                                   // 0x08E0(0x0018) (Transient, DuplicateTransient)
	bool                                               K2Node_CustomEvent_bEnabled5;                             // 0x08F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bEnabled4;                             // 0x08F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x6];                                       // 0x08FA(0x0006) MISSED OFFSET
	struct FText                                       K2Node_Select6_Default;                                   // 0x0900(0x0018) (Transient, DuplicateTransient)
	struct FText                                       Temp_text_Variable22;                                     // 0x0918(0x0018) (Transient, DuplicateTransient)
	bool                                               Temp_bool_Variable11;                                     // 0x0930(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x0931(0x0007) MISSED OFFSET
	struct FText                                       Temp_text_Variable23;                                     // 0x0938(0x0018) (Transient, DuplicateTransient)
	struct FText                                       K2Node_Select7_Default;                                   // 0x0950(0x0018) (Transient, DuplicateTransient)
	struct FText                                       Temp_text_Variable24;                                     // 0x0968(0x0018) (Transient, DuplicateTransient)
	TEnumAsByte<EShooterAllegiance>                    K2Node_Event_Allegiance;                                  // 0x0980(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x7];                                       // 0x0981(0x0007) MISSED OFFSET
	struct FText                                       K2Node_Event_Role;                                        // 0x0988(0x0018) (Transient, DuplicateTransient)
	class AShooterCharacter*                           K2Node_Event_Target;                                      // 0x09A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_ComponentBoundEvent_Value;                         // 0x09A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X;                                 // 0x09AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y;                                 // 0x09B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x09B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bEnabled3;                             // 0x09B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x09B9(0x0003) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x09BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x09C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x09C4(0x0004) MISSED OFFSET
	struct FText                                       K2Node_Select8_Default;                                   // 0x09C8(0x0018) (Transient, DuplicateTransient)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x09E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Round_ReturnValue;                               // 0x09E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_IntToFloat_ReturnValue;                     // 0x09E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x09EC(0x0004) MISSED OFFSET
	struct FText                                       CallFunc_Conv_IntToText_ReturnValue;                      // 0x09F0(0x0018) (Transient, DuplicateTransient)
	struct FLinearColor                                CallFunc_GetBreakerColorPrimary_ReturnValue;              // 0x0A08(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_GetLawColorPrimary_ReturnValue;                  // 0x0A18(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_Select9_Default;                                   // 0x0A28(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor;                            // 0x0A38(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor2;                           // 0x0A48(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bEnabled2;                             // 0x0A58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bEnabled;                              // 0x0A59(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x2];                                       // 0x0A5A(0x0002) MISSED OFFSET
	int                                                K2Node_CustomEvent_SettingIndex;                          // 0x0A5C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue3;                         // 0x0A60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Subtract_IntInt_ReturnValue;                     // 0x0A64(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchInteger_CmpSuccess;                          // 0x0A68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Variable12;                                     // 0x0A69(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchInteger2_CmpSuccess;                         // 0x0A6A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x5];                                       // 0x0A6B(0x0005) MISSED OFFSET
	struct FText                                       K2Node_Select10_Default;                                  // 0x0A70(0x0018) (Transient, DuplicateTransient)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x0A88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue2;                  // 0x0A89(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x6];                                       // 0x0A8A(0x0006) MISSED OFFSET
	class UImage*                                      CallFunc_Array_Get_Item;                                  // 0x0A90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UImage*                                      CallFunc_Array_Get_Item2;                                 // 0x0A98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x0AA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x0AA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x0AA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x0AA9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x2];                                       // 0x0AAA(0x0002) MISSED OFFSET
	float                                              CallFunc_BreakVector2D_X2;                                // 0x0AAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y2;                                // 0x0AB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x0AB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Value;                                 // 0x0AB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue2;                                // 0x0ABC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x0AC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x4];                                       // 0x0AC4(0x0004) MISSED OFFSET
	struct FText                                       Temp_text_Variable25;                                     // 0x0AC8(0x0018) (Transient, DuplicateTransient)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue3;                // 0x0AE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x0AE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Round_ReturnValue2;                              // 0x0AE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_IntToFloat_ReturnValue2;                    // 0x0AEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FText                                       CallFunc_Conv_IntToText_ReturnValue2;                     // 0x0AF0(0x0018) (Transient, DuplicateTransient)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue4;                // 0x0B08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x0B0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    CallFunc_GetOwningShooterPlayerController_ReturnValue3;   // 0x0B10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FText                                       K2Node_Select11_Default;                                  // 0x0B18(0x0018) (Transient, DuplicateTransient)
	struct FText                                       K2Node_Select12_Default;                                  // 0x0B30(0x0018) (Transient, DuplicateTransient)
	struct FText                                       K2Node_Select13_Default;                                  // 0x0B48(0x0018) (Transient, DuplicateTransient)
	float                                              CallFunc_BreakVector2D_X3;                                // 0x0B60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y3;                                // 0x0B64(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue3;                       // 0x0B68(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EBluePrintBranchControl>               CallFunc_BranchFloat_OutResult;                           // 0x0B6C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EBluePrintBranchControl>               CallFunc_BranchFloat_OutResult2;                          // 0x0B6D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0B6E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x0B6F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue4;                       // 0x0B70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Min_ReturnValue;                                 // 0x0B74(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Subtract_IntInt_ReturnValue2;                    // 0x0B78(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x0B7C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x0B7D(0x0003) MISSED OFFSET
	struct FText                                       Temp_text_Variable26;                                     // 0x0B80(0x0018) (Transient, DuplicateTransient)
	bool                                               K2Node_Event_bUseGamepad;                                 // 0x0B98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0B99(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x2];                                       // 0x0B9A(0x0002) MISSED OFFSET
	int                                                CallFunc_MakeLiteralInt_ReturnValue;                      // 0x0B9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue3;                        // 0x0BA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x7];                                       // 0x0BA1(0x0007) MISSED OFFSET
	TArray<class UImage*>                              K2Node_MakeArray_Array;                                   // 0x0BA8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UImage*>                              K2Node_MakeArray_Array2;                                  // 0x0BB8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Temp_bool_Variable13;                                     // 0x0BC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x7];                                       // 0x0BC9(0x0007) MISSED OFFSET
	struct FText                                       K2Node_Select14_Default;                                  // 0x0BD0(0x0018) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Spec_Settings.Spec_Settings_C");
		return ptr;
	}


	void SetFOVSlider(float bpp__Value__pf);
	void SelectSetting(int bpp__SettingIndex__pf);
	void OnUserSettingsChanged(bool bpp__bUseGamepad__pf);
	void OnSpectatorXRayVisionToggled(bool bpp__bEnabled__pf);
	void OnSpectatorToolbarToggled(bool bpp__bEnabled__pf);
	void OnSpectatorTargetChanged(TEnumAsByte<EShooterAllegiance> bpp__Allegiance__pf, const struct FText& bpp__Role__pf, class AShooterCharacter* bpp__Target__pf);
	void OnSpectatorSettingSelect(bool bpp__bEnabled__pf);
	void OnSpectatorSettingChange(bool bpp__bEnabled__pf);
	void OnSpectatorScoreboardToggled(bool bpp__bEnabled__pf);
	void OnSpectatorLoadoutToggled(bool bpp__bEnabled__pf);
	void OnSpectatorHUDToggled(bool bpp__bEnabled__pf);
	void OnSpectatorGameModeToggled(bool bpp__bEnabled__pf);
	void Construct();
	void BndEvt__FOVButton_K2Node_ComponentBoundEvent_211_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__FOV_Slider_K2Node_ComponentBoundEvent_67_OnFloatValueChangedEvent__DelegateSignature(float bpp__Value__pf);
	void BndEvt__Display_XRAY_Button_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Display_XRAY_Button_K2Node_ComponentBoundEvent_220_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Display_Toolbar_button_K2Node_ComponentBoundEvent_361_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Display_Toolbar_button_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Display_Score_Button_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Display_Score_Button_K2Node_ComponentBoundEvent_241_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Display_Reticle_button_K2Node_ComponentBoundEvent_335_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Display_PlayerCard_Button_K2Node_ComponentBoundEvent_280_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Display_PlayerCard_Button_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Display_Obj_button_K2Node_ComponentBoundEvent_286_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Display_Obj_button_K2Node_ComponentBoundEvent_142_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Display_Killfeed_button_K2Node_ComponentBoundEvent_73_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Display_Killfeed_button_K2Node_ComponentBoundEvent_310_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Display_HUD_button_K2Node_ComponentBoundEvent_263_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Display_HUD_button_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Display_Chat_button_K2Node_ComponentBoundEvent_1106_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Display_Chat_button_K2Node_ComponentBoundEvent_1007_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Display_Ammo_button_K2Node_ComponentBoundEvent_95_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_78_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_106_OnButtonClickedEvent__DelegateSignature();
	void SpectatorFlagChanged__DelegateSignature(bool bEnabled);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
