﻿// Name: DBD, Version: 5.3.2

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
//		Offset -> 0x05CE2900
//		Name   -> Function InputUtilities.AxisFlickMasher.OnAxisFlicked2
//		Flags  -> (Final, Native, Private)
void UAxisFlickMasher::OnAxisFlicked2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InputUtilities.AxisFlickMasher.OnAxisFlicked2"));

	UAxisFlickMasher_OnAxisFlicked2_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05CE28E0
//		Name   -> Function InputUtilities.AxisFlickMasher.OnAxisFlicked1
//		Flags  -> (Final, Native, Private)
void UAxisFlickMasher::OnAxisFlicked1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InputUtilities.AxisFlickMasher.OnAxisFlicked1"));

	UAxisFlickMasher_OnAxisFlicked1_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
