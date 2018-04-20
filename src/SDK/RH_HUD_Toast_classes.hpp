#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_Toast_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_Toast.HUD_Toast_C
// 0x00D0 (0x03A0 - 0x02D0)
class UHUD_Toast_C : public UShooterToastWidget
{
public:
	class UWidgetAnimation*                            Anim_Toast;                                               // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Achievement_Icon;                                         // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  Flair_Text_2;                                             // 0x02E0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      icon_back;                                                // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      NameSparkleFX;                                            // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Toast_background;                                         // 0x02F8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  Toast_Description;                                        // 0x0300(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  Toast_Label;                                              // 0x0308(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class AShooterCharacter*                           CallFunc_GetOwningShooterCharacter_ReturnValue;           // 0x0310(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0318(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0319(0x0007) MISSED OFFSET
	struct FText                                       K2Node_Event_ToastDescription;                            // 0x0320(0x0018) (Transient, DuplicateTransient)
	struct FText                                       K2Node_Event_ToastLabel;                                  // 0x0338(0x0018) (Transient, DuplicateTransient)
	struct FText                                       K2Node_Event_FlairText1;                                  // 0x0350(0x0018) (Transient, DuplicateTransient)
	struct FText                                       K2Node_Event_FlairText2;                                  // 0x0368(0x0018) (Transient, DuplicateTransient)
	class UTexture2D*                                  K2Node_Event_AchievementImage;                            // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0388(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	class UAkSoundInstance*                            CallFunc_PostEvent_ReturnValue;                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0398(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0399(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_Toast.HUD_Toast_C");
		return ptr;
	}


	void ExecuteUbergraph_HUD_Toast_1(int bpp__EntryPoint__pf);
	void Construct();
	void BPToastMessage(const struct FText& bpp__ToastDescription__pf, const struct FText& bpp__ToastLabel__pf, const struct FText& bpp__FlairText1__pf, const struct FText& bpp__FlairText2__pf, class UTexture2D* bpp__AchievementImage__pf__const);
	void BPHideToast();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
