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

// Class TheNurse.BalancedLanding
// 0x0020 (FullSize[0x03E8] - InheritedSize[0x03C8])
class UBalancedLanding : public UPerk
{
public:
	unsigned char                                      UnknownData_FMCJ[0x4];                                     // 0x03C8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _sprintDuration;                                           // 0x03CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _exhaustionDurationPerLevel[0x3];                          // 0x03D0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XJZM[0x4];                                     // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UActivatableExhaustedEffect*                 _exhaustedEffect;                                          // 0x03E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheNurse.BalancedLanding"));
		return ptr;
	}



	void Server_WarnBalancedLandingPredicted();
	void Client_UnvalidateBalanceLanding();
};

// Class TheNurse.BlinkAttack
// 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
class UBlinkAttack : public UPounceAttack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheNurse.BlinkAttack"));
		return ptr;
	}



};

// Class TheNurse.BlinkAttackSuccessSubstate
// 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
class UBlinkAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheNurse.BlinkAttackSuccessSubstate"));
		return ptr;
	}



};

// Class TheNurse.NurseAnimInstance
// 0x0008 (FullSize[0x05B0] - InheritedSize[0x05A8])
class UNurseAnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_C3RC[0x8];                                     // 0x05A8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheNurse.NurseAnimInstance"));
		return ptr;
	}



};

// Class TheNurse.NurseBurnable
// 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
class UNurseBurnable : public UPlayerLightBurnable
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheNurse.NurseBurnable"));
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
