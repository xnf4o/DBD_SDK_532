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
//		Offset -> 0x02EB22A0
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		GooglePAD_EGooglePADErrorCode                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::STATIC_ShowCellularDataConfirmation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation"));

	UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02EB2200
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GooglePAD_EGooglePADErrorCode                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::STATIC_RequestRemoval(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval"));

	UGooglePADFunctionLibrary_RequestRemoval_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02EB1C80
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.RequestInfo
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FString>                             AssetPacks                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GooglePAD_EGooglePADErrorCode                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::STATIC_RequestInfo(TArray<struct FString> AssetPacks)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.RequestInfo"));

	UGooglePADFunctionLibrary_RequestInfo_Params params {};
	params.AssetPacks = AssetPacks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02EB1C80
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.RequestDownload
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FString>                             AssetPacks                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GooglePAD_EGooglePADErrorCode                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::STATIC_RequestDownload(TArray<struct FString> AssetPacks)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.RequestDownload"));

	UGooglePADFunctionLibrary_RequestDownload_Params params {};
	params.AssetPacks = AssetPacks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02EB2190
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                State                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGooglePADFunctionLibrary::STATIC_ReleaseDownloadState(int State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState"));

	UGooglePADFunctionLibrary_ReleaseDownloadState_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02EB2190
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGooglePADFunctionLibrary::STATIC_ReleaseAssetPackLocation(int Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation"));

	UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Params params {};
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02EB1F80
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                State                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGooglePADFunctionLibrary::STATIC_GetTotalBytesToDownload(int State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload"));

	UGooglePADFunctionLibrary_GetTotalBytesToDownload_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02EB2110
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GooglePAD_EGooglePADStorageMethod                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADStorageMethod UGooglePADFunctionLibrary::STATIC_GetStorageMethod(int Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod"));

	UGooglePADFunctionLibrary_GetStorageMethod_Params params {};
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02EB2080
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		GooglePAD_EGooglePADCellularDataConfirmStatus      status                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GooglePAD_EGooglePADErrorCode                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::STATIC_GetShowCellularDataConfirmationStatus(GooglePAD_EGooglePADCellularDataConfirmStatus* status)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus"));

	UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (status != nullptr)
		*status = params.status;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02EB2000
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                State                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GooglePAD_EGooglePADDownloadStatus                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADDownloadStatus UGooglePADFunctionLibrary::STATIC_GetDownloadStatus(int State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus"));

	UGooglePADFunctionLibrary_GetDownloadStatus_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02EB1DE0
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GooglePAD_EGooglePADErrorCode                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::STATIC_GetDownloadState(const struct FString& Name, int* State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState"));

	UGooglePADFunctionLibrary_GetDownloadState_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02EB1F80
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                State                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGooglePADFunctionLibrary::STATIC_GetBytesDownloaded(int State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded"));

	UGooglePADFunctionLibrary_GetBytesDownloaded_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02EB1EC0
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGooglePADFunctionLibrary::STATIC_GetAssetsPath(int Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath"));

	UGooglePADFunctionLibrary_GetAssetsPath_Params params {};
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02EB1DE0
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GooglePAD_EGooglePADErrorCode                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::STATIC_GetAssetPackLocation(const struct FString& Name, int* Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation"));

	UGooglePADFunctionLibrary_GetAssetPackLocation_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02EB1C80
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.CancelDownload
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FString>                             AssetPacks                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GooglePAD_EGooglePADErrorCode                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::STATIC_CancelDownload(TArray<struct FString> AssetPacks)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.CancelDownload"));

	UGooglePADFunctionLibrary_CancelDownload_Params params {};
	params.AssetPacks = AssetPacks;

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
