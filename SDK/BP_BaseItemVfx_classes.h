#pragma once

// Name: DBD, Version: 5.3.2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BaseItemVfx.BP_BaseItemVfx_C
// 0x0008 (FullSize[0x0250] - InheritedSize[0x0248])
class ABP_BaseItemVfx_C : public AItemVfx
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_BaseItemVfx.BP_BaseItemVfx_C"));
		return ptr;
	}



	void SpawnEmitter(class UParticleSystem* EmitterTemplate, class USkeletalMeshComponent* AttachToComponent, const struct FName& attachPointName, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool Absolute_Rotation, class UParticleSystemComponent** Particle_System);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
