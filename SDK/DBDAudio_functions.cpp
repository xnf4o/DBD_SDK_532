// Name: DBD, Version: 5.3.2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x02FB9450
//		Name   -> Function DBDAudio.AudioUtilities.PostAkAudioEvent
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UAkAudioEvent*                               audioEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAudioUtilities::STATIC_PostAkAudioEvent(class UAkAudioEvent* audioEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAudio.AudioUtilities.PostAkAudioEvent"));

	UAudioUtilities_PostAkAudioEvent_Params params {};
	params.audioEvent = audioEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB9660
//		Name   -> Function DBDAudio.InteractionAudioComponent.PostAkEvent
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
//		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInteractionAudioComponent::PostAkEvent(class UAkAudioEvent* AkEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAudio.InteractionAudioComponent.PostAkEvent"));

	UInteractionAudioComponent_PostAkEvent_Params params {};
	params.AkEvent = AkEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
