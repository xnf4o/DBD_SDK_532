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

// Class TickUtilities.RoundRobinTicker
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class URoundRobinTicker : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData_0QD4[0x50];                                    // 0x0038(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TickUtilities.RoundRobinTicker"));
		return ptr;
	}



};

// Class TickUtilities.TimeBudgeter
// 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
class UTimeBudgeter : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData_Z1KT[0x58];                                    // 0x0038(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TickUtilities.TimeBudgeter"));
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
