#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Spin2Win_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Spin2Win_AnimBP.Spin2Win_AnimBP_C
// 0x0458 (0x08D0 - 0x0478)
class USpin2Win_AnimBP_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_FD8DDE504D6C9CDC7E08CF9F4B18114F;      // 0x0478(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_70F3063C4C1A27887B48C88112440166;// 0x04C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_006D7EA745AC16F913BFABB2A7170D55;// 0x0540(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DB91D9464A5239D13165858C0CE5860A;// 0x05C0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_25C0E25F4E8C37269FE14CB823259AE0;// 0x0630(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F84D659A412C8A0A64232DB9474D70A7;// 0x0678(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1665A35E41FF08B305987296B0465BA9;// 0x06E8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7953BF7A4EDFB4A7990344A2767BDE1F;// 0x0730(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7BC34FB6414E48257238119C061D1460;// 0x07A0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_E96F99154627EE93CBF6FA865B9C7558;// 0x07E8(0x00D8)
	bool                                               BoxOpen;                                                  // 0x08C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08C1(0x0003) MISSED OFFSET
	float                                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue;// 0x08C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x08C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x08C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Spin2Win_AnimBP.Spin2Win_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Spin2Win_AnimBP_AnimGraphNode_TransitionResult_70F3063C4C1A27887B48C88112440166();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Spin2Win_AnimBP_AnimGraphNode_TransitionResult_006D7EA745AC16F913BFABB2A7170D55();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
