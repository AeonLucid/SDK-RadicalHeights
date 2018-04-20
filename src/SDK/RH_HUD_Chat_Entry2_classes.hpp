#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_Chat_Entry2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_Chat_Entry2.HUD_Chat_Entry2_C
// 0x0010 (0x0278 - 0x0268)
class UHUD_Chat_Entry2_C : public UChatEntryWidget
{
public:
	class UTextBlock*                                  CHANNEL;                                                  // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UMultiLineEditableTextBox*                   MessageBody;                                              // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_Chat_Entry2.HUD_Chat_Entry2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
