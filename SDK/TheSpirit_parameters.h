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
// Parameters
//---------------------------------------------------------------------------

// Function TheSpirit.OwningPlayerInSpiritHuskRange.OnKillerSet
struct UOwningPlayerInSpiritHuskRange_OnKillerSet_Params
{
	class ASlasherPlayer*                              killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheSpirit.SpiritHuskOutlineUpdateStrategy.OnSlasherSet
struct USpiritHuskOutlineUpdateStrategy_OnSlasherSet_Params
{
	class ASlasherPlayer*                              Slasher;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
