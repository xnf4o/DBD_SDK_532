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
//		Offset -> 0x038CF3B0
//		Name   -> Function TheHuntress.HatchetLauncher.IsLaunchedHatchetFullyCharged
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHatchetLauncher::IsLaunchedHatchetFullyCharged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheHuntress.HatchetLauncher.IsLaunchedHatchetFullyCharged"));

	UHatchetLauncher_IsLaunchedHatchetFullyCharged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function TheHuntress.HatchetRack.SetMovableHatchetVisibility
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AHatchetRack::SetMovableHatchetVisibility(bool visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheHuntress.HatchetRack.SetMovableHatchetVisibility"));

	AHatchetRack_SetMovableHatchetVisibility_Params params {};
	params.visible = visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x038CF920
//		Name   -> Function TheHuntress.HatchetThrow.GetOwningHatchetSpawner
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ATheHuntressPower*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ATheHuntressPower* UHatchetThrow::GetOwningHatchetSpawner()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheHuntress.HatchetThrow.GetOwningHatchetSpawner"));

	UHatchetThrow_GetOwningHatchetSpawner_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x038CFB10
//		Name   -> Function TheHuntress.ReloadHatchet.IsInteractionPossible_Shared
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UReloadHatchet::IsInteractionPossible_Shared(class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheHuntress.ReloadHatchet.IsInteractionPossible_Shared"));

	UReloadHatchet_IsInteractionPossible_Shared_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x038D0240
//		Name   -> Function TheHuntress.TheHuntressPower.StartHatchetShineCosmetic
//		Flags  -> (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
void ATheHuntressPower::StartHatchetShineCosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheHuntress.TheHuntressPower.StartHatchetShineCosmetic"));

	ATheHuntressPower_StartHatchetShineCosmetic_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03862210
//		Name   -> Function TheHuntress.TheHuntressPower.SetPercentThrowStrength
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              percentStrength                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ATheHuntressPower::SetPercentThrowStrength(float percentStrength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheHuntress.TheHuntressPower.SetPercentThrowStrength"));

	ATheHuntressPower_SetPercentThrowStrength_Params params {};
	params.percentStrength = percentStrength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x038D01B0
//		Name   -> Function TheHuntress.TheHuntressPower.SetHatchetVisible
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               visible                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ATheHuntressPower::SetHatchetVisible(bool visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheHuntress.TheHuntressPower.SetHatchetVisible"));

	ATheHuntressPower_SetHatchetVisible_Params params {};
	params.visible = visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function TheHuntress.TheHuntressPower.PrintDebugThrowInfo
//		Flags  -> (Event, Public, BlueprintEvent)
void ATheHuntressPower::PrintDebugThrowInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheHuntress.TheHuntressPower.PrintDebugThrowInfo"));

	ATheHuntressPower_PrintDebugThrowInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x038D0180
//		Name   -> Function TheHuntress.TheHuntressPower.IsHatchetThrowFullyCharged
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ATheHuntressPower::IsHatchetThrowFullyCharged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheHuntress.TheHuntressPower.IsHatchetThrowFullyCharged"));

	ATheHuntressPower_IsHatchetThrowFullyCharged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x038D0150
//		Name   -> Function TheHuntress.TheHuntressPower.HasHatchet
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ATheHuntressPower::HasHatchet()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheHuntress.TheHuntressPower.HasHatchet"));

	ATheHuntressPower_HasHatchet_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x038D0120
//		Name   -> Function TheHuntress.TheHuntressPower.GetOwningKiller
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ASlasherPlayer*                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ASlasherPlayer* ATheHuntressPower::GetOwningKiller()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheHuntress.TheHuntressPower.GetOwningKiller"));

	ATheHuntressPower_GetOwningKiller_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function TheHuntress.TheHuntressPower.GetHatchetProjectileLauncher
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class UBaseProjectileLauncher*                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBaseProjectileLauncher* ATheHuntressPower::GetHatchetProjectileLauncher()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheHuntress.TheHuntressPower.GetHatchetProjectileLauncher"));

	ATheHuntressPower_GetHatchetProjectileLauncher_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function TheHuntress.TheHuntressPower.GetHatchetCooldown
//		Flags  -> (Event, Public, BlueprintEvent, Const)
// Parameters:
//		class UHatchetCooldown*                            ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHatchetCooldown* ATheHuntressPower::GetHatchetCooldown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheHuntress.TheHuntressPower.GetHatchetCooldown"));

	ATheHuntressPower_GetHatchetCooldown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function TheHuntress.TheHuntressPower.GetAkAudioHatchetSpawner
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class UAkComponent*                                ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAkComponent* ATheHuntressPower::GetAkAudioHatchetSpawner()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheHuntress.TheHuntressPower.GetAkAudioHatchetSpawner"));

	ATheHuntressPower_GetAkAudioHatchetSpawner_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionStart
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ATheHuntressPower::Cosmetic_OnThrowInteractionStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionStart"));

	ATheHuntressPower_Cosmetic_OnThrowInteractionStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionCancelled
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ATheHuntressPower::Cosmetic_OnThrowInteractionCancelled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionCancelled"));

	ATheHuntressPower_Cosmetic_OnThrowInteractionCancelled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
