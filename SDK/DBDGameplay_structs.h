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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DBDGameplay.AimDirection
// 0x0024
struct FAimDirection
{
	unsigned char                                      UnknownData_NSTX[0x24];                                    // 0x0000(0x0024) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDGameplay.BlindTargetViewData
// 0x0040
struct FBlindTargetViewData
{
	unsigned char                                      UnknownData_K4UR[0x40];                                    // 0x0000(0x0040) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDGameplay.TestableStatModifier
// 0x0000 (0x0030 - 0x0030)
struct FTestableStatModifier : public FStatModifier
{

};

// ScriptStruct DBDGameplay.TestableStat
// 0x0008 (0x0088 - 0x0080)
struct FTestableStat : public FTunableStat
{
	unsigned char                                      UnknownData_Y1M7[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
