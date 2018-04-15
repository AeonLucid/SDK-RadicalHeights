#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Spec_PanelInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Spec_PanelInterface.Spec_PanelInterface_C
// 0x0000 (0x0028 - 0x0028)
class USpec_PanelInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Spec_PanelInterface.Spec_PanelInterface_C");
		return ptr;
	}


	void OnUserSettingsChanged(bool bpp__bUseGamepad__pf);
	void OnSpectatorTargetChanged(TEnumAsByte<EShooterAllegiance> bpp__Allegiance__pf, const struct FText& bpp__Role__pf, class AShooterCharacter* bpp__Target__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
