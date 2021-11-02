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
//		Offset -> 0x039943A0
//		Name   -> Function TheSpirit.OwningPlayerInSpiritHuskRange.OnKillerSet
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOwningPlayerInSpiritHuskRange::OnKillerSet(class ASlasherPlayer* killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheSpirit.OwningPlayerInSpiritHuskRange.OnKillerSet"));

	UOwningPlayerInSpiritHuskRange_OnKillerSet_Params params {};
	params.killer = killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x039946C0
//		Name   -> Function TheSpirit.SpiritHuskOutlineUpdateStrategy.OnSlasherSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ASlasherPlayer*                              Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpiritHuskOutlineUpdateStrategy::OnSlasherSet(class ASlasherPlayer* Slasher)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheSpirit.SpiritHuskOutlineUpdateStrategy.OnSlasherSet"));

	USpiritHuskOutlineUpdateStrategy_OnSlasherSet_Params params {};
	params.Slasher = Slasher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
