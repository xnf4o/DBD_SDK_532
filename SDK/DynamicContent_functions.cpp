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
//		Offset -> 0x05D6F8A0
//		Name   -> Function DynamicContent.DownloadingTextureTask.OnDownloadSucceeded
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UTexture2DDynamic*                           textureDownloaded                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDownloadingTextureTask::OnDownloadSucceeded(class UTexture2DDynamic* textureDownloaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicContent.DownloadingTextureTask.OnDownloadSucceeded"));

	UDownloadingTextureTask_OnDownloadSucceeded_Params params {};
	params.textureDownloaded = textureDownloaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05D6F820
//		Name   -> Function DynamicContent.DownloadingTextureTask.OnDownloadFailed
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UTexture2DDynamic*                           textureDownloaded                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDownloadingTextureTask::OnDownloadFailed(class UTexture2DDynamic* textureDownloaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicContent.DownloadingTextureTask.OnDownloadFailed"));

	UDownloadingTextureTask_OnDownloadFailed_Params params {};
	params.textureDownloaded = textureDownloaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05D6FA80
//		Name   -> Function DynamicContent.DownloadMultiTextureTask.OnTextureDownloadComplete
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UDownloadingTextureTask*                     taskCompleted                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDownloadMultiTextureTask::OnTextureDownloadComplete(class UDownloadingTextureTask* taskCompleted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicContent.DownloadMultiTextureTask.OnTextureDownloadComplete"));

	UDownloadMultiTextureTask_OnTextureDownloadComplete_Params params {};
	params.taskCompleted = taskCompleted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05D6FDE0
//		Name   -> Function DynamicContent.DynamicContentHolder.OnDownloadingTaskComplete
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UDownloadMultiTextureTask*                   completeTask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDynamicContentHolder::OnDownloadingTaskComplete(class UDownloadMultiTextureTask* completeTask)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DynamicContent.DynamicContentHolder.OnDownloadingTaskComplete"));

	UDynamicContentHolder_OnDownloadingTaskComplete_Params params {};
	params.completeTask = completeTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
