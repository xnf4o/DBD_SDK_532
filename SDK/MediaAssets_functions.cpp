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
//		Offset -> 0x05152DC0
//		Name   -> Function MediaAssets.MediaSource.Validate
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaSource::Validate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSource.Validate"));

	UMediaSource_Validate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05152360
//		Name   -> Function MediaAssets.MediaSource.SetMediaOptionString
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSource::SetMediaOptionString(const struct FName& Key, const struct FString& value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSource.SetMediaOptionString"));

	UMediaSource_SetMediaOptionString_Params params {};
	params.Key = Key;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05152280
//		Name   -> Function MediaAssets.MediaSource.SetMediaOptionInt64
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int64_t                                            value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSource::SetMediaOptionInt64(const struct FName& Key, int64_t value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSource.SetMediaOptionInt64"));

	UMediaSource_SetMediaOptionInt64_Params params {};
	params.Key = Key;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05152190
//		Name   -> Function MediaAssets.MediaSource.SetMediaOptionFloat
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSource::SetMediaOptionFloat(const struct FName& Key, float value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSource.SetMediaOptionFloat"));

	UMediaSource_SetMediaOptionFloat_Params params {};
	params.Key = Key;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x051520A0
//		Name   -> Function MediaAssets.MediaSource.SetMediaOptionBool
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSource::SetMediaOptionBool(const struct FName& Key, bool value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSource.SetMediaOptionBool"));

	UMediaSource_SetMediaOptionBool_Params params {};
	params.Key = Key;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x051509E0
//		Name   -> Function MediaAssets.MediaSource.GetUrl
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMediaSource::GetUrl()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSource.GetUrl"));

	UMediaSource_GetUrl_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05151F70
//		Name   -> Function MediaAssets.FileMediaSource.SetFilePath
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFileMediaSource::SetFilePath(const struct FString& Path)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.FileMediaSource.SetFilePath"));

	UFileMediaSource_SetFilePath_Params params {};
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0514F920
//		Name   -> Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FMediaCaptureDevice>                 OutDevices                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Filter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaBlueprintFunctionLibrary::STATIC_EnumerateWebcamCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int Filter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices"));

	UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Params params {};
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDevices != nullptr)
		*OutDevices = params.OutDevices;

}


// Function:
//		Offset -> 0x0514F7D0
//		Name   -> Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FMediaCaptureDevice>                 OutDevices                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Filter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaBlueprintFunctionLibrary::STATIC_EnumerateVideoCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int Filter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices"));

	UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Params params {};
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDevices != nullptr)
		*OutDevices = params.OutDevices;

}


// Function:
//		Offset -> 0x0514F680
//		Name   -> Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FMediaCaptureDevice>                 OutDevices                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Filter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaBlueprintFunctionLibrary::STATIC_EnumerateAudioCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int Filter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices"));

	UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Params params {};
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDevices != nullptr)
		*OutDevices = params.OutDevices;

}


// Function:
//		Offset -> 0x0375B280
//		Name   -> Function MediaAssets.MediaComponent.GetMediaTexture
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UMediaTexture*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaTexture* UMediaComponent::GetMediaTexture()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaComponent.GetMediaTexture"));

	UMediaComponent_GetMediaTexture_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030B8C70
//		Name   -> Function MediaAssets.MediaComponent.GetMediaPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UMediaPlayer*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaPlayer* UMediaComponent::GetMediaPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaComponent.GetMediaPlayer"));

	UMediaComponent_GetMediaPlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05152D90
//		Name   -> Function MediaAssets.MediaPlayer.SupportsSeeking
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SupportsSeeking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SupportsSeeking"));

	UMediaPlayer_SupportsSeeking_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05152D60
//		Name   -> Function MediaAssets.MediaPlayer.SupportsScrubbing
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SupportsScrubbing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SupportsScrubbing"));

	UMediaPlayer_SupportsScrubbing_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05152C90
//		Name   -> Function MediaAssets.MediaPlayer.SupportsRate
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Unthinned                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SupportsRate(float Rate, bool Unthinned)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SupportsRate"));

	UMediaPlayer_SupportsRate_Params params {};
	params.Rate = Rate;
	params.Unthinned = Unthinned;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05152BB0
//		Name   -> Function MediaAssets.MediaPlayer.SetViewRotation
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FRotator                                    Rotation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               Absolute                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetViewRotation(const struct FRotator& Rotation, bool Absolute)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetViewRotation"));

	UMediaPlayer_SetViewRotation_Params params {};
	params.Rotation = Rotation;
	params.Absolute = Absolute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05152AA0
//		Name   -> Function MediaAssets.MediaPlayer.SetViewField
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Horizontal                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Vertical                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Absolute                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetViewField(float Horizontal, float Vertical, bool Absolute)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetViewField"));

	UMediaPlayer_SetViewField_Params params {};
	params.Horizontal = Horizontal;
	params.Vertical = Vertical;
	params.Absolute = Absolute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x051529A0
//		Name   -> Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              FrameRate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetVideoTrackFrameRate(int TrackIndex, int FormatIndex, float FrameRate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate"));

	UMediaPlayer_SetVideoTrackFrameRate_Params params {};
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;
	params.FrameRate = FrameRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x051528A0
//		Name   -> Function MediaAssets.MediaPlayer.SetTrackFormat
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		MediaAssets_EMediaPlayerTrack                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetTrackFormat(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex, int FormatIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetTrackFormat"));

	UMediaPlayer_SetTrackFormat_Params params {};
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05152820
//		Name   -> Function MediaAssets.MediaPlayer.SetTimeDelay
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FTimespan                                   TimeDelay                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaPlayer::SetTimeDelay(const struct FTimespan& TimeDelay)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetTimeDelay"));

	UMediaPlayer_SetTimeDelay_Params params {};
	params.TimeDelay = TimeDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05152670
//		Name   -> Function MediaAssets.MediaPlayer.SetRate
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetRate(float Rate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetRate"));

	UMediaPlayer_SetRate_Params params {};
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x051525E0
//		Name   -> Function MediaAssets.MediaPlayer.SetNativeVolume
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetNativeVolume(float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetNativeVolume"));

	UMediaPlayer_SetNativeVolume_Params params {};
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05152460
//		Name   -> Function MediaAssets.MediaPlayer.SetMediaOptions
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMediaSource*                                Options                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaPlayer::SetMediaOptions(class UMediaSource* Options)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetMediaOptions"));

	UMediaPlayer_SetMediaOptions_Params params {};
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05152010
//		Name   -> Function MediaAssets.MediaPlayer.SetLooping
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Looping                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetLooping(bool Looping)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetLooping"));

	UMediaPlayer_SetLooping_Params params {};
	params.Looping = Looping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05151CF0
//		Name   -> Function MediaAssets.MediaPlayer.SetDesiredPlayerName
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       PlayerName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaPlayer::SetDesiredPlayerName(const struct FName& PlayerName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetDesiredPlayerName"));

	UMediaPlayer_SetDesiredPlayerName_Params params {};
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05151C60
//		Name   -> Function MediaAssets.MediaPlayer.SetBlockOnTime
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FTimespan                                   Time                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaPlayer::SetBlockOnTime(const struct FTimespan& Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetBlockOnTime"));

	UMediaPlayer_SetBlockOnTime_Params params {};
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05151BA0
//		Name   -> Function MediaAssets.MediaPlayer.SelectTrack
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		MediaAssets_EMediaPlayerTrack                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SelectTrack(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SelectTrack"));

	UMediaPlayer_SelectTrack_Params params {};
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05151B00
//		Name   -> Function MediaAssets.MediaPlayer.Seek
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FTimespan                                   Time                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Seek(const struct FTimespan& Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Seek"));

	UMediaPlayer_Seek_Params params {};
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05151AD0
//		Name   -> Function MediaAssets.MediaPlayer.Rewind
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Rewind()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Rewind"));

	UMediaPlayer_Rewind_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x051519E0
//		Name   -> Function MediaAssets.MediaPlayer.Reopen
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Reopen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Reopen"));

	UMediaPlayer_Reopen_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05151890
//		Name   -> Function MediaAssets.MediaPlayer.Previous
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Previous()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Previous"));

	UMediaPlayer_Previous_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05151870
//		Name   -> Function MediaAssets.MediaPlayer.PlayAndSeek
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMediaPlayer::PlayAndSeek()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.PlayAndSeek"));

	UMediaPlayer_PlayAndSeek_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05151840
//		Name   -> Function MediaAssets.MediaPlayer.Play
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Play()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Play"));

	UMediaPlayer_Play_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05151810
//		Name   -> Function MediaAssets.MediaPlayer.Pause
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Pause()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Pause"));

	UMediaPlayer_Pause_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05151760
//		Name   -> Function MediaAssets.MediaPlayer.OpenUrl
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::OpenUrl(const struct FString& URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenUrl"));

	UMediaPlayer_OpenUrl_Params params {};
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05151660
//		Name   -> Function MediaAssets.MediaPlayer.OpenSourceWithOptions
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FMediaPlayerOptions                         Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::OpenSourceWithOptions(class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenSourceWithOptions"));

	UMediaPlayer_OpenSourceWithOptions_Params params {};
	params.MediaSource = MediaSource;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05151480
//		Name   -> Function MediaAssets.MediaPlayer.OpenSourceLatent
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FMediaPlayerOptions                         Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaPlayer::OpenSourceLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options, bool* bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenSourceLatent"));

	UMediaPlayer_OpenSourceLatent_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.MediaSource = MediaSource;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

}


// Function:
//		Offset -> 0x051513F0
//		Name   -> Function MediaAssets.MediaPlayer.OpenSource
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::OpenSource(class UMediaSource* MediaSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenSource"));

	UMediaPlayer_OpenSource_Params params {};
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05151330
//		Name   -> Function MediaAssets.MediaPlayer.OpenPlaylistIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMediaPlaylist*                              InPlaylist                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenPlaylistIndex"));

	UMediaPlayer_OpenPlaylistIndex_Params params {};
	params.InPlaylist = InPlaylist;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05151290
//		Name   -> Function MediaAssets.MediaPlayer.OpenPlaylist
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMediaPlaylist*                              InPlaylist                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::OpenPlaylist(class UMediaPlaylist* InPlaylist)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenPlaylist"));

	UMediaPlayer_OpenPlaylist_Params params {};
	params.InPlaylist = InPlaylist;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x051511E0
//		Name   -> Function MediaAssets.MediaPlayer.OpenFile
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::OpenFile(const struct FString& FilePath)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenFile"));

	UMediaPlayer_OpenFile_Params params {};
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05151190
//		Name   -> Function MediaAssets.MediaPlayer.Next
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Next()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Next"));

	UMediaPlayer_Next_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05151160
//		Name   -> Function MediaAssets.MediaPlayer.IsReady
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsReady"));

	UMediaPlayer_IsReady_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05151130
//		Name   -> Function MediaAssets.MediaPlayer.IsPreparing
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsPreparing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsPreparing"));

	UMediaPlayer_IsPreparing_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05151100
//		Name   -> Function MediaAssets.MediaPlayer.IsPlaying
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsPlaying()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsPlaying"));

	UMediaPlayer_IsPlaying_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x051510D0
//		Name   -> Function MediaAssets.MediaPlayer.IsPaused
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsPaused()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsPaused"));

	UMediaPlayer_IsPaused_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x051510A0
//		Name   -> Function MediaAssets.MediaPlayer.IsLooping
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsLooping()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsLooping"));

	UMediaPlayer_IsLooping_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05151070
//		Name   -> Function MediaAssets.MediaPlayer.IsConnecting
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsConnecting()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsConnecting"));

	UMediaPlayer_IsConnecting_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05151040
//		Name   -> Function MediaAssets.MediaPlayer.IsClosed
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsClosed"));

	UMediaPlayer_IsClosed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05151010
//		Name   -> Function MediaAssets.MediaPlayer.IsBuffering
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsBuffering()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsBuffering"));

	UMediaPlayer_IsBuffering_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05150F20
//		Name   -> Function MediaAssets.MediaPlayer.HasError
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::HasError()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.HasError"));

	UMediaPlayer_HasError_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05150EB0
//		Name   -> Function MediaAssets.MediaPlayer.GetViewRotation
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UMediaPlayer::GetViewRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetViewRotation"));

	UMediaPlayer_GetViewRotation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05150DB0
//		Name   -> Function MediaAssets.MediaPlayer.GetVideoTrackType
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMediaPlayer::GetVideoTrackType(int TrackIndex, int FormatIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetVideoTrackType"));

	UMediaPlayer_GetVideoTrackType_Params params {};
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05150CE0
//		Name   -> Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FFloatRange                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FFloatRange UMediaPlayer::GetVideoTrackFrameRates(int TrackIndex, int FormatIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates"));

	UMediaPlayer_GetVideoTrackFrameRates_Params params {};
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05150C20
//		Name   -> Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaPlayer::GetVideoTrackFrameRate(int TrackIndex, int FormatIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate"));

	UMediaPlayer_GetVideoTrackFrameRate_Params params {};
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05150B50
//		Name   -> Function MediaAssets.MediaPlayer.GetVideoTrackDimensions
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntPoint                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntPoint UMediaPlayer::GetVideoTrackDimensions(int TrackIndex, int FormatIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetVideoTrackDimensions"));

	UMediaPlayer_GetVideoTrackDimensions_Params params {};
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05150A90
//		Name   -> Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaPlayer::GetVideoTrackAspectRatio(int TrackIndex, int FormatIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio"));

	UMediaPlayer_GetVideoTrackAspectRatio_Params params {};
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05150A60
//		Name   -> Function MediaAssets.MediaPlayer.GetVerticalFieldOfView
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaPlayer::GetVerticalFieldOfView()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetVerticalFieldOfView"));

	UMediaPlayer_GetVerticalFieldOfView_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x051509A0
//		Name   -> Function MediaAssets.MediaPlayer.GetUrl
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMediaPlayer::GetUrl()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetUrl"));

	UMediaPlayer_GetUrl_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05150890
//		Name   -> Function MediaAssets.MediaPlayer.GetTrackLanguage
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		MediaAssets_EMediaPlayerTrack                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMediaPlayer::GetTrackLanguage(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTrackLanguage"));

	UMediaPlayer_GetTrackLanguage_Params params {};
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x051507D0
//		Name   -> Function MediaAssets.MediaPlayer.GetTrackFormat
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		MediaAssets_EMediaPlayerTrack                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetTrackFormat(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTrackFormat"));

	UMediaPlayer_GetTrackFormat_Params params {};
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x051506B0
//		Name   -> Function MediaAssets.MediaPlayer.GetTrackDisplayName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		MediaAssets_EMediaPlayerTrack                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UMediaPlayer::GetTrackDisplayName(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTrackDisplayName"));

	UMediaPlayer_GetTrackDisplayName_Params params {};
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05150670
//		Name   -> Function MediaAssets.MediaPlayer.GetTimeDelay
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FTimespan                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FTimespan UMediaPlayer::GetTimeDelay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTimeDelay"));

	UMediaPlayer_GetTimeDelay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05150630
//		Name   -> Function MediaAssets.MediaPlayer.GetTime
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FTimespan                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FTimespan UMediaPlayer::GetTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTime"));

	UMediaPlayer_GetTime_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05150530
//		Name   -> Function MediaAssets.MediaPlayer.GetSupportedRates
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<struct FFloatRange>                         OutRates                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Unthinned                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaPlayer::GetSupportedRates(TArray<struct FFloatRange>* OutRates, bool Unthinned)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetSupportedRates"));

	UMediaPlayer_GetSupportedRates_Params params {};
	params.Unthinned = Unthinned;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutRates != nullptr)
		*OutRates = params.OutRates;

}


// Function:
//		Offset -> 0x05150420
//		Name   -> Function MediaAssets.MediaPlayer.GetSelectedTrack
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		MediaAssets_EMediaPlayerTrack                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetSelectedTrack(MediaAssets_EMediaPlayerTrack TrackType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetSelectedTrack"));

	UMediaPlayer_GetSelectedTrack_Params params {};
	params.TrackType = TrackType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x051503F0
//		Name   -> Function MediaAssets.MediaPlayer.GetRate
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaPlayer::GetRate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetRate"));

	UMediaPlayer_GetRate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05150290
//		Name   -> Function MediaAssets.MediaPlayer.GetPlaylistIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetPlaylistIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetPlaylistIndex"));

	UMediaPlayer_GetPlaylistIndex_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05150270
//		Name   -> Function MediaAssets.MediaPlayer.GetPlaylist
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UMediaPlaylist*                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaPlaylist* UMediaPlayer::GetPlaylist()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetPlaylist"));

	UMediaPlayer_GetPlaylist_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05150230
//		Name   -> Function MediaAssets.MediaPlayer.GetPlayerName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UMediaPlayer::GetPlayerName()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetPlayerName"));

	UMediaPlayer_GetPlayerName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x051501A0
//		Name   -> Function MediaAssets.MediaPlayer.GetNumTracks
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		MediaAssets_EMediaPlayerTrack                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetNumTracks(MediaAssets_EMediaPlayerTrack TrackType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetNumTracks"));

	UMediaPlayer_GetNumTracks_Params params {};
	params.TrackType = TrackType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x051500E0
//		Name   -> Function MediaAssets.MediaPlayer.GetNumTrackFormats
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		MediaAssets_EMediaPlayerTrack                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetNumTrackFormats(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetNumTrackFormats"));

	UMediaPlayer_GetNumTrackFormats_Params params {};
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0514FF40
//		Name   -> Function MediaAssets.MediaPlayer.GetMediaName
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UMediaPlayer::GetMediaName()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetMediaName"));

	UMediaPlayer_GetMediaName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0514FF00
//		Name   -> Function MediaAssets.MediaPlayer.GetLastVideoSampleProcessedTime
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FTimespan                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FTimespan UMediaPlayer::GetLastVideoSampleProcessedTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetLastVideoSampleProcessedTime"));

	UMediaPlayer_GetLastVideoSampleProcessedTime_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0514FEC0
//		Name   -> Function MediaAssets.MediaPlayer.GetLastAudioSampleProcessedTime
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FTimespan                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FTimespan UMediaPlayer::GetLastAudioSampleProcessedTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetLastAudioSampleProcessedTime"));

	UMediaPlayer_GetLastAudioSampleProcessedTime_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0514FE90
//		Name   -> Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaPlayer::GetHorizontalFieldOfView()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView"));

	UMediaPlayer_GetHorizontalFieldOfView_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0514FDF0
//		Name   -> Function MediaAssets.MediaPlayer.GetDuration
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FTimespan                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FTimespan UMediaPlayer::GetDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetDuration"));

	UMediaPlayer_GetDuration_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0514FDB0
//		Name   -> Function MediaAssets.MediaPlayer.GetDesiredPlayerName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UMediaPlayer::GetDesiredPlayerName()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetDesiredPlayerName"));

	UMediaPlayer_GetDesiredPlayerName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0514FCB0
//		Name   -> Function MediaAssets.MediaPlayer.GetAudioTrackType
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMediaPlayer::GetAudioTrackType(int TrackIndex, int FormatIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetAudioTrackType"));

	UMediaPlayer_GetAudioTrackType_Params params {};
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0514FBF0
//		Name   -> Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetAudioTrackSampleRate(int TrackIndex, int FormatIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate"));

	UMediaPlayer_GetAudioTrackSampleRate_Params params {};
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0514FB30
//		Name   -> Function MediaAssets.MediaPlayer.GetAudioTrackChannels
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetAudioTrackChannels(int TrackIndex, int FormatIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetAudioTrackChannels"));

	UMediaPlayer_GetAudioTrackChannels_Params params {};
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0514F660
//		Name   -> Function MediaAssets.MediaPlayer.Close
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMediaPlayer::Close()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Close"));

	UMediaPlayer_Close_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0514F5B0
//		Name   -> Function MediaAssets.MediaPlayer.CanPlayUrl
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::CanPlayUrl(const struct FString& URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.CanPlayUrl"));

	UMediaPlayer_CanPlayUrl_Params params {};
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0514F520
//		Name   -> Function MediaAssets.MediaPlayer.CanPlaySource
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::CanPlaySource(class UMediaSource* MediaSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.CanPlaySource"));

	UMediaPlayer_CanPlaySource_Params params {};
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0514F4F0
//		Name   -> Function MediaAssets.MediaPlayer.CanPause
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::CanPause()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.CanPause"));

	UMediaPlayer_CanPause_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05151A10
//		Name   -> Function MediaAssets.MediaPlaylist.Replace
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMediaSource*                                Replacement                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlaylist::Replace(int Index, class UMediaSource* Replacement)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Replace"));

	UMediaPlaylist_Replace_Params params {};
	params.Index = Index;
	params.Replacement = Replacement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05151950
//		Name   -> Function MediaAssets.MediaPlaylist.RemoveAt
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlaylist::RemoveAt(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.RemoveAt"));

	UMediaPlaylist_RemoveAt_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x051518C0
//		Name   -> Function MediaAssets.MediaPlaylist.Remove
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlaylist::Remove(class UMediaSource* MediaSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Remove"));

	UMediaPlaylist_Remove_Params params {};
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x051511C0
//		Name   -> Function MediaAssets.MediaPlaylist.Num
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlaylist::Num()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Num"));

	UMediaPlaylist_Num_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05150F50
//		Name   -> Function MediaAssets.MediaPlaylist.Insert
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaPlaylist::Insert(class UMediaSource* MediaSource, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Insert"));

	UMediaPlaylist_Insert_Params params {};
	params.MediaSource = MediaSource;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05150350
//		Name   -> Function MediaAssets.MediaPlaylist.GetRandom
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                OutIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMediaSource*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaSource* UMediaPlaylist::GetRandom(int* OutIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.GetRandom"));

	UMediaPlaylist_GetRandom_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x051502B0
//		Name   -> Function MediaAssets.MediaPlaylist.GetPrevious
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                InOutIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMediaSource*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaSource* UMediaPlaylist::GetPrevious(int* InOutIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.GetPrevious"));

	UMediaPlaylist_GetPrevious_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InOutIndex != nullptr)
		*InOutIndex = params.InOutIndex;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05150040
//		Name   -> Function MediaAssets.MediaPlaylist.GetNext
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                InOutIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMediaSource*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaSource* UMediaPlaylist::GetNext(int* InOutIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.GetNext"));

	UMediaPlaylist_GetNext_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InOutIndex != nullptr)
		*InOutIndex = params.InOutIndex;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0514FA70
//		Name   -> Function MediaAssets.MediaPlaylist.Get
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMediaSource*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaSource* UMediaPlaylist::Get(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Get"));

	UMediaPlaylist_Get_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0514F1F0
//		Name   -> Function MediaAssets.MediaPlaylist.AddUrl
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlaylist::AddUrl(const struct FString& URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.AddUrl"));

	UMediaPlaylist_AddUrl_Params params {};
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0514F140
//		Name   -> Function MediaAssets.MediaPlaylist.AddFile
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlaylist::AddFile(const struct FString& FilePath)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.AddFile"));

	UMediaPlaylist_AddFile_Params params {};
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0514F0B0
//		Name   -> Function MediaAssets.MediaPlaylist.Add
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlaylist::Add(class UMediaSource* MediaSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Add"));

	UMediaPlaylist_Add_Params params {};
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05152700
//		Name   -> Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<float>                                      InFrequenciesToAnalyze                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MediaAssets_EMediaSoundComponentFFTSize            InFFTSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSoundComponent::SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, MediaAssets_EMediaSoundComponentFFTSize InFFTSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings"));

	UMediaSoundComponent_SetSpectralAnalysisSettings_Params params {};
	params.InFrequenciesToAnalyze = InFrequenciesToAnalyze;
	params.InFFTSize = InFFTSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x051524E0
//		Name   -> Function MediaAssets.MediaSoundComponent.SetMediaPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMediaPlayer*                                NewMediaPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSoundComponent::SetMediaPlayer(class UMediaPlayer* NewMediaPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.SetMediaPlayer"));

	UMediaSoundComponent_SetMediaPlayer_Params params {};
	params.NewMediaPlayer = NewMediaPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05151EB0
//		Name   -> Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                AttackTimeMsec                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReleaseTimeMsec                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSoundComponent::SetEnvelopeFollowingsettings(int AttackTimeMsec, int ReleaseTimeMsec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings"));

	UMediaSoundComponent_SetEnvelopeFollowingsettings_Params params {};
	params.AttackTimeMsec = AttackTimeMsec;
	params.ReleaseTimeMsec = ReleaseTimeMsec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05151E20
//		Name   -> Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInSpectralAnalysisEnabled                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSoundComponent::SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis"));

	UMediaSoundComponent_SetEnableSpectralAnalysis_Params params {};
	params.bInSpectralAnalysisEnabled = bInSpectralAnalysisEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05151D90
//		Name   -> Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInEnvelopeFollowing                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSoundComponent::SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing"));

	UMediaSoundComponent_SetEnableEnvelopeFollowing_Params params {};
	params.bInEnvelopeFollowing = bInEnvelopeFollowing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x051504B0
//		Name   -> Function MediaAssets.MediaSoundComponent.GetSpectralData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FMediaSoundComponentSpectralData>    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FMediaSoundComponentSpectralData> UMediaSoundComponent::GetSpectralData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.GetSpectralData"));

	UMediaSoundComponent_GetSpectralData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0514FFE0
//		Name   -> Function MediaAssets.MediaSoundComponent.GetMediaPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UMediaPlayer*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaPlayer* UMediaSoundComponent::GetMediaPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.GetMediaPlayer"));

	UMediaSoundComponent_GetMediaPlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0514FE30
//		Name   -> Function MediaAssets.MediaSoundComponent.GetEnvelopeValue
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaSoundComponent::GetEnvelopeValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.GetEnvelopeValue"));

	UMediaSoundComponent_GetEnvelopeValue_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0514F2A0
//		Name   -> Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FSoundAttenuationSettings                   OutAttenuationSettings                                     (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaSoundComponent::BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings* OutAttenuationSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply"));

	UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAttenuationSettings != nullptr)
		*OutAttenuationSettings = params.OutAttenuationSettings;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05152560
//		Name   -> Function MediaAssets.MediaTexture.SetMediaPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMediaPlayer*                                NewMediaPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaTexture::SetMediaPlayer(class UMediaPlayer* NewMediaPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaTexture.SetMediaPlayer"));

	UMediaTexture_SetMediaPlayer_Params params {};
	params.NewMediaPlayer = NewMediaPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05150EF0
//		Name   -> Function MediaAssets.MediaTexture.GetWidth
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaTexture::GetWidth()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaTexture.GetWidth"));

	UMediaTexture_GetWidth_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05150010
//		Name   -> Function MediaAssets.MediaTexture.GetMediaPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UMediaPlayer*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaPlayer* UMediaTexture::GetMediaPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaTexture.GetMediaPlayer"));

	UMediaTexture_GetMediaPlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0514FE60
//		Name   -> Function MediaAssets.MediaTexture.GetHeight
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaTexture::GetHeight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaTexture.GetHeight"));

	UMediaTexture_GetHeight_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0514FB00
//		Name   -> Function MediaAssets.MediaTexture.GetAspectRatio
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaTexture::GetAspectRatio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaTexture.GetAspectRatio"));

	UMediaTexture_GetAspectRatio_Params params {};

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
