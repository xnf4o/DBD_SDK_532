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
//		Name   -> Function BP_BaseItemVfx.BP_BaseItemVfx_C.SpawnEmitter
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UParticleSystem*                             EmitterTemplate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USkeletalMeshComponent*                      AttachToComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       attachPointName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Absolute_Rotation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UParticleSystemComponent*                    Particle_System                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseItemVfx_C::SpawnEmitter(class UParticleSystem* EmitterTemplate, class USkeletalMeshComponent* AttachToComponent, const struct FName& attachPointName, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool Absolute_Rotation, class UParticleSystemComponent** Particle_System)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseItemVfx.BP_BaseItemVfx_C.SpawnEmitter"));

	ABP_BaseItemVfx_C_SpawnEmitter_Params params {};
	params.EmitterTemplate = EmitterTemplate;
	params.AttachToComponent = AttachToComponent;
	params.attachPointName = attachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.Absolute_Rotation = Absolute_Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Particle_System != nullptr)
		*Particle_System = params.Particle_System;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
