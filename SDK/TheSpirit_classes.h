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

// Class TheSpirit.Autodidact
// 0x0020 (FullSize[0x03E8] - InheritedSize[0x03C8])
class UAutodidact : public UPerk
{
public:
	int                                                _maxTokenCountPerLevel[0x3];                               // 0x03C8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _progressionBonusPerToken;                                 // 0x03D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _initialSkillCheckProgressionPenalty;                      // 0x03D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8VRQ[0xC];                                     // 0x03DC(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheSpirit.Autodidact"));
		return ptr;
	}



};

// Class TheSpirit.DriedCherryBlossom
// 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
class UDriedCherryBlossom : public USimpleSpawnEffectsOnAllSurvivorsAddon
{
public:
	unsigned char                                      UnknownData_RAUI[0x8];                                     // 0x02B0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheSpirit.DriedCherryBlossom"));
		return ptr;
	}



};

// Class TheSpirit.KatsumoriTalisman
// 0x0020 (FullSize[0x02B8] - InheritedSize[0x0298])
class UKatsumoriTalisman : public UItemAddon
{
public:
	unsigned char                                      UnknownData_S0HN[0x10];                                    // 0x0298(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _explosionRadius;                                          // 0x02A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _blockDuration;                                            // 0x02AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QMBI[0x8];                                     // 0x02B0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheSpirit.KatsumoriTalisman"));
		return ptr;
	}



};

// Class TheSpirit.OwningPlayerInSpiritHuskRange
// 0x0010 (FullSize[0x0110] - InheritedSize[0x0100])
class UOwningPlayerInSpiritHuskRange : public UAnyActorPairQueryRangeIsTrue
{
public:
	unsigned char                                      UnknownData_8N2S[0x10];                                    // 0x0100(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheSpirit.OwningPlayerInSpiritHuskRange"));
		return ptr;
	}



	void OnKillerSet(class ASlasherPlayer* killer);
};

// Class TheSpirit.SpiritHuskOutlineUpdateStrategy
// 0x0028 (FullSize[0x00E8] - InheritedSize[0x00C0])
class USpiritHuskOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
public:
	unsigned char                                      UnknownData_OYS1[0x28];                                    // 0x00C0(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheSpirit.SpiritHuskOutlineUpdateStrategy"));
		return ptr;
	}



	void OnSlasherSet(class ASlasherPlayer* Slasher);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
