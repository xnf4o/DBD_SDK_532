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
//		Offset -> 0x030B5360
//		Name   -> Function DBDGameplay.AimableComponent.SetProcessors
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<class UAimPointProcessor*>                  processors                                                 (Parm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAimableComponent::SetProcessors(TArray<class UAimPointProcessor*> processors)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.AimableComponent.SetProcessors"));

	UAimableComponent_SetProcessors_Params params {};
	params.processors = processors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B52B0
//		Name   -> Function DBDGameplay.AimableComponent.SetOcclusionIgnoredActors
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<class AActor*>                              ignoredActors                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAimableComponent::SetOcclusionIgnoredActors(TArray<class AActor*> ignoredActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.AimableComponent.SetOcclusionIgnoredActors"));

	UAimableComponent_SetOcclusionIgnoredActors_Params params {};
	params.ignoredActors = ignoredActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B5130
//		Name   -> Function DBDGameplay.AimableComponent.SetMaxAimDistance
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              maxAimDistance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAimableComponent::SetMaxAimDistance(float maxAimDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.AimableComponent.SetMaxAimDistance"));

	UAimableComponent_SetMaxAimDistance_Params params {};
	params.maxAimDistance = maxAimDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B5230
//		Name   -> Function DBDGameplay.AimPointPerlinNoise.SetNoiseFrequencyMultiplier
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAimPointPerlinNoise::SetNoiseFrequencyMultiplier(float Multiplier)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.AimPointPerlinNoise.SetNoiseFrequencyMultiplier"));

	UAimPointPerlinNoise_SetNoiseFrequencyMultiplier_Params params {};
	params.Multiplier = Multiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B51B0
//		Name   -> Function DBDGameplay.AimPointPerlinNoise.SetNoiseAmplitudeMultiplier
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAimPointPerlinNoise::SetNoiseAmplitudeMultiplier(float Multiplier)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.AimPointPerlinNoise.SetNoiseAmplitudeMultiplier"));

	UAimPointPerlinNoise_SetNoiseAmplitudeMultiplier_Params params {};
	params.Multiplier = Multiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B5030
//		Name   -> Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoisePersistence
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              noisePersistence                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAimPointPerlinNoise::SetBaseInaccuracyNoisePersistence(float noisePersistence)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoisePersistence"));

	UAimPointPerlinNoise_SetBaseInaccuracyNoisePersistence_Params params {};
	params.noisePersistence = noisePersistence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B4FB0
//		Name   -> Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseOctaveCount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                octaveCount                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAimPointPerlinNoise::SetBaseInaccuracyNoiseOctaveCount(int octaveCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseOctaveCount"));

	UAimPointPerlinNoise_SetBaseInaccuracyNoiseOctaveCount_Params params {};
	params.octaveCount = octaveCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B4F30
//		Name   -> Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseFrequency
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Frequency                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAimPointPerlinNoise::SetBaseInaccuracyNoiseFrequency(float Frequency)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseFrequency"));

	UAimPointPerlinNoise_SetBaseInaccuracyNoiseFrequency_Params params {};
	params.Frequency = Frequency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B4EB0
//		Name   -> Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseAmplitude
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Amplitude                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAimPointPerlinNoise::SetBaseInaccuracyNoiseAmplitude(float Amplitude)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseAmplitude"));

	UAimPointPerlinNoise_SetBaseInaccuracyNoiseAmplitude_Params params {};
	params.Amplitude = Amplitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B4C70
//		Name   -> Function DBDGameplay.AuraOverriderComponent.ResetAura
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAuraOverriderComponent::ResetAura(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.AuraOverriderComponent.ResetAura"));

	UAuraOverriderComponent_ResetAura_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B4620
//		Name   -> Function DBDGameplay.AuraOverriderComponent.ForceShowAura
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               isAlwaysVisible                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              minimumOutlineDistance                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAuraOverriderComponent::ForceShowAura(class AActor* Actor, const struct FLinearColor& Color, bool isAlwaysVisible, float minimumOutlineDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.AuraOverriderComponent.ForceShowAura"));

	UAuraOverriderComponent_ForceShowAura_Params params {};
	params.Actor = Actor;
	params.Color = Color;
	params.isAlwaysVisible = isAlwaysVisible;
	params.minimumOutlineDistance = minimumOutlineDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B4B00
//		Name   -> Function DBDGameplay.FlashlightTargetFXComponent.OnIsLitChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               IsLit                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFlashlightTargetFXComponent::OnIsLitChanged(bool IsLit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FlashlightTargetFXComponent.OnIsLitChanged"));

	UFlashlightTargetFXComponent_OnIsLitChanged_Params params {};
	params.IsLit = IsLit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B47C0
//		Name   -> Function DBDGameplay.CollectableComponentUtilities.GetCollector
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UActorComponent*                             Component                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ADBDPlayer* UCollectableComponentUtilities::STATIC_GetCollector(class UActorComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.CollectableComponentUtilities.GetCollector"));

	UCollectableComponentUtilities_GetCollector_Params params {};
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030B5440
//		Name   -> Function DBDGameplay.DebugIndicator.SetVisible
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               visible                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ADebugIndicator::SetVisible(bool visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.DebugIndicator.SetVisible"));

	ADebugIndicator_SetVisible_Params params {};
	params.visible = visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B50B0
//		Name   -> Function DBDGameplay.DebugIndicator.SetColor
//		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ADebugIndicator::SetColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.DebugIndicator.SetColor"));

	ADebugIndicator_SetColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B4DB0
//		Name   -> Function DBDGameplay.EtherealComponent.Server_SetIsEthereal
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
//		float                                              Timestamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Ethereal                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEtherealComponent::Server_SetIsEthereal(float Timestamp, bool Ethereal)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.EtherealComponent.Server_SetIsEthereal"));

	UEtherealComponent_Server_SetIsEthereal_Params params {};
	params.Timestamp = Timestamp;
	params.Ethereal = Ethereal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B4BD0
//		Name   -> Function DBDGameplay.EtherealComponent.OnRep_OnIsEtherealChanged
//		Flags  -> (Final, Native, Private)
void UEtherealComponent::OnRep_OnIsEtherealChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.EtherealComponent.OnRep_OnIsEtherealChanged"));

	UEtherealComponent_OnRep_OnIsEtherealChanged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B9BD0
//		Name   -> Function DBDGameplay.RangeToActorsTrackerStrategy.OnInRangeToTrackedActorsChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URangeToActorsTrackerStrategy::OnInRangeToTrackedActorsChanged(bool InRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.RangeToActorsTrackerStrategy.OnInRangeToTrackedActorsChanged"));

	URangeToActorsTrackerStrategy_OnInRangeToTrackedActorsChanged_Params params {};
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B4900
//		Name   -> Function DBDGameplay.FadeComponent.GetFadePercent
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFadeComponent::GetFadePercent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FadeComponent.GetFadePercent"));

	UFadeComponent_GetFadePercent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> DelegateFunction DBDGameplay.FlashlightableComponent.OnFlashlightLitChangedEvent__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		bool                                               IsLit                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFlashlightableComponent::OnFlashlightLitChangedEvent__DelegateSignature(bool IsLit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction DBDGameplay.FlashlightableComponent.OnFlashlightLitChangedEvent__DelegateSignature"));

	UFlashlightableComponent_OnFlashlightLitChangedEvent__DelegateSignature_Params params {};
	params.IsLit = IsLit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> DelegateFunction DBDGameplay.FlashlightableComponent.OnFlashlightAddedRemovedEvent__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		class UFlashlightComponent*                        Flashlight                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFlashlightableComponent::OnFlashlightAddedRemovedEvent__DelegateSignature(class UFlashlightComponent* Flashlight)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction DBDGameplay.FlashlightableComponent.OnFlashlightAddedRemovedEvent__DelegateSignature"));

	UFlashlightableComponent_OnFlashlightAddedRemovedEvent__DelegateSignature_Params params {};
	params.Flashlight = Flashlight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B4960
//		Name   -> Function DBDGameplay.FlashlightableComponent.IsLit
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFlashlightableComponent::IsLit()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FlashlightableComponent.IsLit"));

	UFlashlightableComponent_IsLit_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030B54F0
//		Name   -> Function DBDGameplay.FlashlightComponent.TurnOn
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFlashlightComponent::TurnOn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FlashlightComponent.TurnOn"));

	UFlashlightComponent_TurnOn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B54D0
//		Name   -> Function DBDGameplay.FlashlightComponent.TurnOff
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFlashlightComponent::TurnOff()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FlashlightComponent.TurnOff"));

	UFlashlightComponent_TurnOff_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B4CF0
//		Name   -> Function DBDGameplay.FlashlightComponent.Server_SetAndUpdateAutonomousLitFlashlightables
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
//		TArray<class UFlashlightableComponent*>            newLitFlashlightables                                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFlashlightComponent::Server_SetAndUpdateAutonomousLitFlashlightables(TArray<class UFlashlightableComponent*> newLitFlashlightables)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FlashlightComponent.Server_SetAndUpdateAutonomousLitFlashlightables"));

	UFlashlightComponent_Server_SetAndUpdateAutonomousLitFlashlightables_Params params {};
	params.newLitFlashlightables = newLitFlashlightables;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B4BF0
//		Name   -> Function DBDGameplay.FlashlightComponent.OnRep_ReplicatedLitFlashlightables
//		Flags  -> (Final, Native, Private)
void UFlashlightComponent::OnRep_ReplicatedLitFlashlightables()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FlashlightComponent.OnRep_ReplicatedLitFlashlightables"));

	UFlashlightComponent_OnRep_ReplicatedLitFlashlightables_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B4BB0
//		Name   -> Function DBDGameplay.FlashlightComponent.OnRep_IsOwnerLagging
//		Flags  -> (Final, Native, Private)
void UFlashlightComponent::OnRep_IsOwnerLagging()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FlashlightComponent.OnRep_IsOwnerLagging"));

	UFlashlightComponent_OnRep_IsOwnerLagging_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> DelegateFunction DBDGameplay.FlashlightComponent.OnFlashlightEvent__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void UFlashlightComponent::OnFlashlightEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction DBDGameplay.FlashlightComponent.OnFlashlightEvent__DelegateSignature"));

	UFlashlightComponent_OnFlashlightEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B4990
//		Name   -> Function DBDGameplay.FlashlightComponent.IsOn
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFlashlightComponent::IsOn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FlashlightComponent.IsOn"));

	UFlashlightComponent_IsOn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030B48D0
//		Name   -> Function DBDGameplay.FlashlightComponent.GetEffectiveTimeToBlindModifier
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFlashlightComponent::GetEffectiveTimeToBlindModifier()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FlashlightComponent.GetEffectiveTimeToBlindModifier"));

	UFlashlightComponent_GetEffectiveTimeToBlindModifier_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030B4840
//		Name   -> Function DBDGameplay.FlashlightComponent.GetEffectiveBlindnessDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFlashlightComponent::GetEffectiveBlindnessDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FlashlightComponent.GetEffectiveBlindnessDuration"));

	UFlashlightComponent_GetEffectiveBlindnessDuration_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030B4930
//		Name   -> Function DBDGameplay.FlashlightConeComponent.GetOcclusionDistance
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFlashlightConeComponent::GetOcclusionDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FlashlightConeComponent.GetOcclusionDistance"));

	UFlashlightConeComponent_GetOcclusionDistance_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030B48A0
//		Name   -> Function DBDGameplay.FlashlightConeComponent.GetEffectiveConeLength
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFlashlightConeComponent::GetEffectiveConeLength()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FlashlightConeComponent.GetEffectiveConeLength"));

	UFlashlightConeComponent_GetEffectiveConeLength_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030B4870
//		Name   -> Function DBDGameplay.FlashlightConeComponent.GetEffectiveConeHalfAngle
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFlashlightConeComponent::GetEffectiveConeHalfAngle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FlashlightConeComponent.GetEffectiveConeHalfAngle"));

	UFlashlightConeComponent_GetEffectiveConeHalfAngle_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030B5510
//		Name   -> Function DBDGameplay.FlashlightFXComponent.UpdateFXTargets
//		Flags  -> (Final, Native, Private)
void UFlashlightFXComponent::UpdateFXTargets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FlashlightFXComponent.UpdateFXTargets"));

	UFlashlightFXComponent_UpdateFXTargets_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDGameplay.FlashlightFXComponent.UpdateConeEvent
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		float                                              Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              halfAngle                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFlashlightFXComponent::UpdateConeEvent(float Length, float halfAngle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FlashlightFXComponent.UpdateConeEvent"));

	UFlashlightFXComponent_UpdateConeEvent_Params params {};
	params.Length = Length;
	params.halfAngle = halfAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDGameplay.FlashlightFXComponent.PostUpdateEvent
//		Flags  -> (Event, Protected, BlueprintEvent)
void UFlashlightFXComponent::PostUpdateEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FlashlightFXComponent.PostUpdateEvent"));

	UFlashlightFXComponent_PostUpdateEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B4C50
//		Name   -> Function DBDGameplay.FlashlightFXComponent.OnTurnedOn
//		Flags  -> (Final, Native, Private)
void UFlashlightFXComponent::OnTurnedOn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FlashlightFXComponent.OnTurnedOn"));

	UFlashlightFXComponent_OnTurnedOn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B4C30
//		Name   -> Function DBDGameplay.FlashlightFXComponent.OnTurnedOff
//		Flags  -> (Final, Native, Private)
void UFlashlightFXComponent::OnTurnedOff()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FlashlightFXComponent.OnTurnedOff"));

	UFlashlightFXComponent_OnTurnedOff_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDGameplay.FlashlightFXComponent.OnStopEvent
//		Flags  -> (Event, Protected, BlueprintEvent)
void UFlashlightFXComponent::OnStopEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FlashlightFXComponent.OnStopEvent"));

	UFlashlightFXComponent_OnStopEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDGameplay.FlashlightFXComponent.OnStartEvent
//		Flags  -> (Event, Protected, BlueprintEvent)
void UFlashlightFXComponent::OnStartEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FlashlightFXComponent.OnStartEvent"));

	UFlashlightFXComponent_OnStartEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> DelegateFunction DBDGameplay.FlashlightFXComponent.OnFlashEvent__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void UFlashlightFXComponent::OnFlashEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction DBDGameplay.FlashlightFXComponent.OnFlashEvent__DelegateSignature"));

	UFlashlightFXComponent_OnFlashEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDGameplay.FlashlightFXComponent.OnDroppedEvent
//		Flags  -> (Event, Protected, BlueprintEvent)
void UFlashlightFXComponent::OnDroppedEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FlashlightFXComponent.OnDroppedEvent"));

	UFlashlightFXComponent_OnDroppedEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDGameplay.FlashlightFXComponent.OnCollectorLocallyObservedChangedEvent
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               IsLocallyObserved                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFlashlightFXComponent::OnCollectorLocallyObservedChangedEvent(bool IsLocallyObserved)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FlashlightFXComponent.OnCollectorLocallyObservedChangedEvent"));

	UFlashlightFXComponent_OnCollectorLocallyObservedChangedEvent_Params params {};
	params.IsLocallyObserved = IsLocallyObserved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDGameplay.FlashlightFXComponent.OnCollectedEvent
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  collector                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFlashlightFXComponent::OnCollectedEvent(class ADBDPlayer* collector)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FlashlightFXComponent.OnCollectedEvent"));

	UFlashlightFXComponent_OnCollectedEvent_Params params {};
	params.collector = collector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B4790
//		Name   -> Function DBDGameplay.FlashlightFXComponent.GetBlindingSuccessRatio
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFlashlightFXComponent::GetBlindingSuccessRatio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FlashlightFXComponent.GetBlindingSuccessRatio"));

	UFlashlightFXComponent_GetBlindingSuccessRatio_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030B4C10
//		Name   -> Function DBDGameplay.InteractionStarterComponent.OnRep_ShouldStartInteraction
//		Flags  -> (Final, Native, Private)
void UInteractionStarterComponent::OnRep_ShouldStartInteraction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.InteractionStarterComponent.OnRep_ShouldStartInteraction"));

	UInteractionStarterComponent_OnRep_ShouldStartInteraction_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B4AE0
//		Name   -> Function DBDGameplay.InteractionStarterComponent.OnInteractionStarted
//		Flags  -> (Final, Native, Private)
void UInteractionStarterComponent::OnInteractionStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.InteractionStarterComponent.OnInteractionStarted"));

	UInteractionStarterComponent_OnInteractionStarted_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B4B90
//		Name   -> Function DBDGameplay.LightBurnable.OnRep_IsBurning
//		Flags  -> (Final, Native, Private)
void ULightBurnable::OnRep_IsBurning()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.LightBurnable.OnRep_IsBurning"));

	ULightBurnable_OnRep_IsBurning_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B49E0
//		Name   -> Function DBDGameplay.LightBurnable.OnChargeableCompleteEvent
//		Flags  -> (Final, Native, Protected, HasOutParms)
// Parameters:
//		bool                                               COMPLETED                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class AActor*>                              instigatorsForCompletion                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULightBurnable::OnChargeableCompleteEvent(bool COMPLETED, TArray<class AActor*> instigatorsForCompletion)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.LightBurnable.OnChargeableCompleteEvent"));

	ULightBurnable_OnChargeableCompleteEvent_Params params {};
	params.COMPLETED = COMPLETED;
	params.instigatorsForCompletion = instigatorsForCompletion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B49C0
//		Name   -> Function DBDGameplay.LightBurnable.OnBurnChargeEmpty
//		Flags  -> (Native, Protected)
void ULightBurnable::OnBurnChargeEmpty()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.LightBurnable.OnBurnChargeEmpty"));

	ULightBurnable_OnBurnChargeEmpty_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> DelegateFunction DBDGameplay.LightBurnable.OnBurnChargeCompleteEvent__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
//		TArray<class AActor*>                              instigatorsForCompletion                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULightBurnable::OnBurnChargeCompleteEvent__DelegateSignature(TArray<class AActor*> instigatorsForCompletion)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction DBDGameplay.LightBurnable.OnBurnChargeCompleteEvent__DelegateSignature"));

	ULightBurnable_OnBurnChargeCompleteEvent__DelegateSignature_Params params {};
	params.instigatorsForCompletion = instigatorsForCompletion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B45A0
//		Name   -> Function DBDGameplay.LightBurnable.Authority_OnFlashlightAddedRemoved
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class UFlashlightComponent*                        Flashlight                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULightBurnable::Authority_OnFlashlightAddedRemoved(class UFlashlightComponent* Flashlight)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.LightBurnable.Authority_OnFlashlightAddedRemoved"));

	ULightBurnable_Authority_OnFlashlightAddedRemoved_Params params {};
	params.Flashlight = Flashlight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B4500
//		Name   -> Function DBDGameplay.LightBurnable.Authority_OnFirecrackerInRangeBegin
//		Flags  -> (Native, Protected, HasOutParms)
// Parameters:
//		struct FFirecrackerEffectData                      effectData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void ULightBurnable::Authority_OnFirecrackerInRangeBegin(const struct FFirecrackerEffectData& effectData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.LightBurnable.Authority_OnFirecrackerInRangeBegin"));

	ULightBurnable_Authority_OnFirecrackerInRangeBegin_Params params {};
	params.effectData = effectData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030BA830
//		Name   -> Function DBDGameplay.Medkit.UseCharge
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMedkit::UseCharge(float Seconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.Medkit.UseCharge"));

	AMedkit_UseCharge_Params params {};
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B9CA0
//		Name   -> Function DBDGameplay.Medkit.OnMedkitHealedCamper
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  healedPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMedkit::OnMedkitHealedCamper(class ADBDPlayer* healedPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.Medkit.OnMedkitHealedCamper"));

	AMedkit_OnMedkitHealedCamper_Params params {};
	params.healedPlayer = healedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B8CA0
//		Name   -> Function DBDGameplay.Medkit.HasCharge
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMedkit::HasCharge()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.Medkit.HasCharge"));

	AMedkit_HasCharge_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030B8C40
//		Name   -> Function DBDGameplay.Medkit.GetChargeMultiplier
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AMedkit::GetChargeMultiplier()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.Medkit.GetChargeMultiplier"));

	AMedkit_GetChargeMultiplier_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030B8BB0
//		Name   -> Function DBDGameplay.Medkit.Authority_OnChargeStateChange
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		bool                                               Empty                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMedkit::Authority_OnChargeStateChange(bool Empty)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.Medkit.Authority_OnChargeStateChange"));

	AMedkit_Authority_OnChargeStateChange_Params params {};
	params.Empty = Empty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B8B20
//		Name   -> Function DBDGameplay.Medkit.Authority_OnAnyOngoingInteractionChanged
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		bool                                               IsInteracting                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMedkit::Authority_OnAnyOngoingInteractionChanged(bool IsInteracting)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.Medkit.Authority_OnAnyOngoingInteractionChanged"));

	AMedkit_Authority_OnAnyOngoingInteractionChanged_Params params {};
	params.IsInteracting = IsInteracting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B8B00
//		Name   -> Function DBDGameplay.Medkit.Authority_ConsumeIfNotInteracting
//		Flags  -> (Final, Native, Protected)
void AMedkit::Authority_ConsumeIfNotInteracting()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.Medkit.Authority_ConsumeIfNotInteracting"));

	AMedkit_Authority_ConsumeIfNotInteracting_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030BA750
//		Name   -> Function DBDGameplay.PlayerInteractionListenerComponent.UnlistenToInteractionStart
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameplayTag                                interactionSemantic                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerInteractionListenerComponent::UnlistenToInteractionStart(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.PlayerInteractionListenerComponent.UnlistenToInteractionStart"));

	UPlayerInteractionListenerComponent_UnlistenToInteractionStart_Params params {};
	params.Player = Player;
	params.interactionSemantic = interactionSemantic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030BA670
//		Name   -> Function DBDGameplay.PlayerInteractionListenerComponent.UnlistenToInteractionEnd
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameplayTag                                interactionSemantic                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerInteractionListenerComponent::UnlistenToInteractionEnd(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.PlayerInteractionListenerComponent.UnlistenToInteractionEnd"));

	UPlayerInteractionListenerComponent_UnlistenToInteractionEnd_Params params {};
	params.Player = Player;
	params.interactionSemantic = interactionSemantic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B98D0
//		Name   -> Function DBDGameplay.PlayerInteractionListenerComponent.OnActorDestroyed
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerInteractionListenerComponent::OnActorDestroyed(class AActor* DestroyedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.PlayerInteractionListenerComponent.OnActorDestroyed"));

	UPlayerInteractionListenerComponent_OnActorDestroyed_Params params {};
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B8E30
//		Name   -> Function DBDGameplay.PlayerInteractionListenerComponent.ListenToInteractionStart
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameplayTag                                interactionSemantic                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             interactionDelegate                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UPlayerInteractionListenerComponent::ListenToInteractionStart(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic, const struct FScriptDelegate& interactionDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.PlayerInteractionListenerComponent.ListenToInteractionStart"));

	UPlayerInteractionListenerComponent_ListenToInteractionStart_Params params {};
	params.Player = Player;
	params.interactionSemantic = interactionSemantic;
	params.interactionDelegate = interactionDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B8CD0
//		Name   -> Function DBDGameplay.PlayerInteractionListenerComponent.ListenToInteractionEnd
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameplayTag                                interactionSemantic                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             interactionDelegate                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UPlayerInteractionListenerComponent::ListenToInteractionEnd(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic, const struct FScriptDelegate& interactionDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.PlayerInteractionListenerComponent.ListenToInteractionEnd"));

	UPlayerInteractionListenerComponent_ListenToInteractionEnd_Params params {};
	params.Player = Player;
	params.interactionSemantic = interactionSemantic;
	params.interactionDelegate = interactionDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> DelegateFunction DBDGameplay.PlayerInteractionListenerComponent.InteractionMulticastDelegate__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameplayTag                                interactionSemantic                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerInteractionListenerComponent::InteractionMulticastDelegate__DelegateSignature(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction DBDGameplay.PlayerInteractionListenerComponent.InteractionMulticastDelegate__DelegateSignature"));

	UPlayerInteractionListenerComponent_InteractionMulticastDelegate__DelegateSignature_Params params {};
	params.Player = Player;
	params.interactionSemantic = interactionSemantic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> DelegateFunction DBDGameplay.PlayerInteractionListenerComponent.InteractionDelegate__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameplayTag                                interactionSemantic                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerInteractionListenerComponent::InteractionDelegate__DelegateSignature(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction DBDGameplay.PlayerInteractionListenerComponent.InteractionDelegate__DelegateSignature"));

	UPlayerInteractionListenerComponent_InteractionDelegate__DelegateSignature_Params params {};
	params.Player = Player;
	params.interactionSemantic = interactionSemantic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B9800
//		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_SetGamepadYawCurve
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCurveFloat*                                 Curve                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerMovementUtilities::STATIC_Local_SetGamepadYawCurve(class ADBDPlayer* Player, class UCurveFloat* Curve)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.PlayerMovementUtilities.Local_SetGamepadYawCurve"));

	UPlayerMovementUtilities_Local_SetGamepadYawCurve_Params params {};
	params.Player = Player;
	params.Curve = Curve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B9750
//		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_SetGamepadPitchCurve
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCurveFloat*                                 Curve                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerMovementUtilities::STATIC_Local_SetGamepadPitchCurve(class ADBDPlayer* Player, class UCurveFloat* Curve)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.PlayerMovementUtilities.Local_SetGamepadPitchCurve"));

	UPlayerMovementUtilities_Local_SetGamepadPitchCurve_Params params {};
	params.Player = Player;
	params.Curve = Curve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B9690
//		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ResetRotationScale
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              adjustmentTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerMovementUtilities::STATIC_Local_ResetRotationScale(class ADBDPlayer* Player, float adjustmentTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.PlayerMovementUtilities.Local_ResetRotationScale"));

	UPlayerMovementUtilities_Local_ResetRotationScale_Params params {};
	params.Player = Player;
	params.adjustmentTime = adjustmentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B9620
//		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ResetGamepadLookCurves
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerMovementUtilities::STATIC_Local_ResetGamepadLookCurves(class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.PlayerMovementUtilities.Local_ResetGamepadLookCurves"));

	UPlayerMovementUtilities_Local_ResetGamepadLookCurves_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B9530
//		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ApplyYawScaleMultiplier
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              adjustmentTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerMovementUtilities::STATIC_Local_ApplyYawScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyYawScaleMultiplier"));

	UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Params params {};
	params.Player = Player;
	params.Multiplier = Multiplier;
	params.adjustmentTime = adjustmentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B9440
//		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ApplyRotationScaleMultiplier
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              adjustmentTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerMovementUtilities::STATIC_Local_ApplyRotationScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyRotationScaleMultiplier"));

	UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Params params {};
	params.Player = Player;
	params.Multiplier = Multiplier;
	params.adjustmentTime = adjustmentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B9350
//		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ApplyPitchScaleMultiplier
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              adjustmentTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerMovementUtilities::STATIC_Local_ApplyPitchScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyPitchScaleMultiplier"));

	UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Params params {};
	params.Player = Player;
	params.Multiplier = Multiplier;
	params.adjustmentTime = adjustmentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B9260
//		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ApplyMouseYawScaleMultiplier
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              adjustmentTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerMovementUtilities::STATIC_Local_ApplyMouseYawScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyMouseYawScaleMultiplier"));

	UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Params params {};
	params.Player = Player;
	params.Multiplier = Multiplier;
	params.adjustmentTime = adjustmentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B9170
//		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ApplyMousePitchScaleMultiplier
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              adjustmentTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerMovementUtilities::STATIC_Local_ApplyMousePitchScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyMousePitchScaleMultiplier"));

	UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Params params {};
	params.Player = Player;
	params.Multiplier = Multiplier;
	params.adjustmentTime = adjustmentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B9080
//		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ApplyGamepadYawScaleMultiplier
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              adjustmentTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerMovementUtilities::STATIC_Local_ApplyGamepadYawScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyGamepadYawScaleMultiplier"));

	UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Params params {};
	params.Player = Player;
	params.Multiplier = Multiplier;
	params.adjustmentTime = adjustmentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B8F90
//		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ApplyGamepadPitchScaleMultiplier
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              adjustmentTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerMovementUtilities::STATIC_Local_ApplyGamepadPitchScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyGamepadPitchScaleMultiplier"));

	UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Params params {};
	params.Player = Player;
	params.Multiplier = Multiplier;
	params.adjustmentTime = adjustmentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B9F90
//		Name   -> Function DBDGameplay.PowerChargeComponent.OnRep_CurrentCharge
//		Flags  -> (Final, Native, Private)
void UPowerChargeComponent::OnRep_CurrentCharge()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.PowerChargeComponent.OnRep_CurrentCharge"));

	UPowerChargeComponent_OnRep_CurrentCharge_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B9A50
//		Name   -> Function DBDGameplay.PowerChargeComponent.OnCurrentChargeChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		float                                              value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPowerChargeComponent::OnCurrentChargeChanged(float value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.PowerChargeComponent.OnCurrentChargeChanged"));

	UPowerChargeComponent_OnCurrentChargeChanged_Params params {};
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B9FB0
//		Name   -> Function DBDGameplay.PowerToggleComponent.OnRep_IsInPower
//		Flags  -> (Final, Native, Private, Const)
void UPowerToggleComponent::OnRep_IsInPower()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.PowerToggleComponent.OnRep_IsInPower"));

	UPowerToggleComponent_OnRep_IsInPower_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B9C80
//		Name   -> Function DBDGameplay.RangeToActorsTrackerComponent.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Private)
void URangeToActorsTrackerComponent::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.RangeToActorsTrackerComponent.OnLevelReadyToPlay"));

	URangeToActorsTrackerComponent_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B9FD0
//		Name   -> Function DBDGameplay.StruggleComponent.OnSkillCheckEnd
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               hadInput                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Bonus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		DBDSharedTypes_ESkillCheckCustomType               Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UStruggleComponent::OnSkillCheckEnd(bool hadInput, bool success, bool Bonus, DBDSharedTypes_ESkillCheckCustomType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.StruggleComponent.OnSkillCheckEnd"));

	UStruggleComponent_OnSkillCheckEnd_Params params {};
	params.hadInput = hadInput;
	params.success = success;
	params.Bonus = Bonus;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B98B0
//		Name   -> Function DBDGameplay.StruggleComponent.Local_TryActivateSkillCheck
//		Flags  -> (Final, Native, Private)
void UStruggleComponent::Local_TryActivateSkillCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.StruggleComponent.Local_TryActivateSkillCheck"));

	UStruggleComponent_Local_TryActivateSkillCheck_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030BA530
//		Name   -> Function DBDGameplay.WiggleComponent.Server_OnWiggleEnd
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
void UWiggleComponent::Server_OnWiggleEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.WiggleComponent.Server_OnWiggleEnd"));

	UWiggleComponent_Server_OnWiggleEnd_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030BA270
//		Name   -> Function DBDGameplay.WiggleComponent.OnWiggleSkillCheckEnd
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               hadInput                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Bonus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		DBDSharedTypes_ESkillCheckCustomType               Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWiggleComponent::OnWiggleSkillCheckEnd(bool hadInput, bool success, bool Bonus, DBDSharedTypes_ESkillCheckCustomType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.WiggleComponent.OnWiggleSkillCheckEnd"));

	UWiggleComponent_OnWiggleSkillCheckEnd_Params params {};
	params.hadInput = hadInput;
	params.success = success;
	params.Bonus = Bonus;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030BA250
//		Name   -> Function DBDGameplay.WiggleComponent.OnWiggleInput
//		Flags  -> (Final, Native, Private)
void UWiggleComponent::OnWiggleInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.WiggleComponent.OnWiggleInput"));

	UWiggleComponent_OnWiggleInput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030BA230
//		Name   -> Function DBDGameplay.WiggleComponent.OnWiggleEnd
//		Flags  -> (Final, Native, Private)
void UWiggleComponent::OnWiggleEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.WiggleComponent.OnWiggleEnd"));

	UWiggleComponent_OnWiggleEnd_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B9F10
//		Name   -> Function DBDGameplay.WiggleComponent.OnPlayerPickedUpStart
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ADBDPlayer*                                  picker                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWiggleComponent::OnPlayerPickedUpStart(class ADBDPlayer* picker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.WiggleComponent.OnPlayerPickedUpStart"));

	UWiggleComponent_OnPlayerPickedUpStart_Params params {};
	params.picker = picker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B9E90
//		Name   -> Function DBDGameplay.WiggleComponent.OnPlayerPickedUpEnd
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ADBDPlayer*                                  picker                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWiggleComponent::OnPlayerPickedUpEnd(class ADBDPlayer* picker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.WiggleComponent.OnPlayerPickedUpEnd"));

	UWiggleComponent_OnPlayerPickedUpEnd_Params params {};
	params.picker = picker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B9D30
//		Name   -> Function DBDGameplay.WiggleComponent.OnPickedUpSkillCheckEnd
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               hadInput                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Bonus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		DBDSharedTypes_ESkillCheckCustomType               Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWiggleComponent::OnPickedUpSkillCheckEnd(bool hadInput, bool success, bool Bonus, DBDSharedTypes_ESkillCheckCustomType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.WiggleComponent.OnPickedUpSkillCheckEnd"));

	UWiggleComponent_OnPickedUpSkillCheckEnd_Params params {};
	params.hadInput = hadInput;
	params.success = success;
	params.Bonus = Bonus;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B9C60
//		Name   -> Function DBDGameplay.WiggleComponent.OnKeyBindingsChanged
//		Flags  -> (Final, Native, Private)
void UWiggleComponent::OnKeyBindingsChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.WiggleComponent.OnKeyBindingsChanged"));

	UWiggleComponent_OnKeyBindingsChanged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B9AD0
//		Name   -> Function DBDGameplay.WiggleComponent.OnHideWiggleSkillCheck
//		Flags  -> (Final, Native, Private)
// Parameters:
//		DBDSharedTypes_ESkillCheckCustomType               Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWiggleComponent::OnHideWiggleSkillCheck(DBDSharedTypes_ESkillCheckCustomType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.WiggleComponent.OnHideWiggleSkillCheck"));

	UWiggleComponent_OnHideWiggleSkillCheck_Params params {};
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B9950
//		Name   -> Function DBDGameplay.WiggleComponent.OnChargeableCompleteEvent
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		bool                                               COMPLETED                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class AActor*>                              instigatorsForCompletion                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWiggleComponent::OnChargeableCompleteEvent(bool COMPLETED, TArray<class AActor*> instigatorsForCompletion)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.WiggleComponent.OnChargeableCompleteEvent"));

	UWiggleComponent_OnChargeableCompleteEvent_Params params {};
	params.COMPLETED = COMPLETED;
	params.instigatorsForCompletion = instigatorsForCompletion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B8C70
//		Name   -> Function DBDGameplay.WiggleComponent.GetWiggleChargeable
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UChargeableComponent*                        ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UChargeableComponent* UWiggleComponent::GetWiggleChargeable()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.WiggleComponent.GetWiggleChargeable"));

	UWiggleComponent_GetWiggleChargeable_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030B8A80
//		Name   -> Function DBDGameplay.WiggleComponent.Authority_AddWiggleCharge
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ChargeAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWiggleComponent::Authority_AddWiggleCharge(float ChargeAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.WiggleComponent.Authority_AddWiggleCharge"));

	UWiggleComponent_Authority_AddWiggleCharge_Params params {};
	params.ChargeAmount = ChargeAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030BA5E0
//		Name   -> Function DBDGameplay.WiggleMotionComponent.SetIsBeingWiggled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               isBeingWiggled                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWiggleMotionComponent::SetIsBeingWiggled(bool isBeingWiggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.WiggleMotionComponent.SetIsBeingWiggled"));

	UWiggleMotionComponent_SetIsBeingWiggled_Params params {};
	params.isBeingWiggled = isBeingWiggled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030BA550
//		Name   -> Function DBDGameplay.WiggleMotionComponent.Server_SetIsBeingWiggled
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
//		bool                                               isBeingWiggled                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWiggleMotionComponent::Server_SetIsBeingWiggled(bool isBeingWiggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.WiggleMotionComponent.Server_SetIsBeingWiggled"));

	UWiggleMotionComponent_Server_SetIsBeingWiggled_Params params {};
	params.isBeingWiggled = isBeingWiggled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030BA3D0
//		Name   -> Function DBDGameplay.WiggleMotionComponent.OnWiggleSkillCheckEnd
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               hadInput                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Bonus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		DBDSharedTypes_ESkillCheckCustomType               Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWiggleMotionComponent::OnWiggleSkillCheckEnd(bool hadInput, bool success, bool Bonus, DBDSharedTypes_ESkillCheckCustomType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.WiggleMotionComponent.OnWiggleSkillCheckEnd"));

	UWiggleMotionComponent_OnWiggleSkillCheckEnd_Params params {};
	params.hadInput = hadInput;
	params.success = success;
	params.Bonus = Bonus;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030BA1B0
//		Name   -> Function DBDGameplay.WiggleMotionComponent.OnSurvivorRemoved
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ADBDPlayer*                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWiggleMotionComponent::OnSurvivorRemoved(class ADBDPlayer* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.WiggleMotionComponent.OnSurvivorRemoved"));

	UWiggleMotionComponent_OnSurvivorRemoved_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030BA130
//		Name   -> Function DBDGameplay.WiggleMotionComponent.OnSurvivorPickedUp
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ADBDPlayer*                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWiggleMotionComponent::OnSurvivorPickedUp(class ADBDPlayer* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.WiggleMotionComponent.OnSurvivorPickedUp"));

	UWiggleMotionComponent_OnSurvivorPickedUp_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B9B50
//		Name   -> Function DBDGameplay.WiggleMotionComponent.OnHideWiggleSkillCheck
//		Flags  -> (Final, Native, Private)
// Parameters:
//		DBDSharedTypes_ESkillCheckCustomType               Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWiggleMotionComponent::OnHideWiggleSkillCheck(DBDSharedTypes_ESkillCheckCustomType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.WiggleMotionComponent.OnHideWiggleSkillCheck"));

	UWiggleMotionComponent_OnHideWiggleSkillCheck_Params params {};
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
