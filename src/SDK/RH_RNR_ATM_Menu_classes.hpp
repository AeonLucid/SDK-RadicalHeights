#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_RNR_ATM_Menu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass RNR_ATM_Menu.RNR_ATM_Menu_C
// 0x0018 (0x0270 - 0x0258)
class URNR_ATM_Menu_C : public UShooterUserWidget_ATM
{
public:
	class UButton*                                     Deposit;                                                  // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_1;                                                  // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     Withdraw;                                                 // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass RNR_ATM_Menu.RNR_ATM_Menu_C");
		return ptr;
	}


	void BndEvt__Withdraw_K2Node_ComponentBoundEvent_156_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Deposit_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
