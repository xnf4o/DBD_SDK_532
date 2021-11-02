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
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLungeAttackStartCosmetic
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  SlasherPlayer                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPounceAttackOpenSubstateCosmetic::OnLungeAttackStartCosmetic(class ADBDPlayer* SlasherPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLungeAttackStartCosmetic"));

	UPounceAttackOpenSubstateCosmetic_OnLungeAttackStartCosmetic_Params params {};
	params.SlasherPlayer = SlasherPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLungeAttackEndCosmetic
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  SlasherPlayer                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPounceAttackOpenSubstateCosmetic::OnLungeAttackEndCosmetic(class ADBDPlayer* SlasherPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLungeAttackEndCosmetic"));

	UPounceAttackOpenSubstateCosmetic_OnLungeAttackEndCosmetic_Params params {};
	params.SlasherPlayer = SlasherPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLocallyObservedChangedCosmetic
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  SlasherPlayer                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPounceAttackOpenSubstateCosmetic::OnLocallyObservedChangedCosmetic(class ADBDPlayer* SlasherPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLocallyObservedChangedCosmetic"));

	UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChangedCosmetic_Params params {};
	params.SlasherPlayer = SlasherPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB7410
//		Name   -> Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLocallyObservedChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ADBDPlayer*                                  SlasherPlayer                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPounceAttackOpenSubstateCosmetic::OnLocallyObservedChanged(class ADBDPlayer* SlasherPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLocallyObservedChanged"));

	UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChanged_Params params {};
	params.SlasherPlayer = SlasherPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB7380
//		Name   -> Function DBDAttack.PounceAttackOpenSubstateCosmetic.IsLungeAttackAugmented
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ADBDPlayer*                                  SlasherPlayer                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPounceAttackOpenSubstateCosmetic::IsLungeAttackAugmented(class ADBDPlayer* SlasherPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAttack.PounceAttackOpenSubstateCosmetic.IsLungeAttackAugmented"));

	UPounceAttackOpenSubstateCosmetic_IsLungeAttackAugmented_Params params {};
	params.SlasherPlayer = SlasherPlayer;

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
