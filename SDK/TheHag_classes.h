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

// Class TheHag.HagAnimInstance
// 0x0008 (FullSize[0x05B0] - InheritedSize[0x05A8])
class UHagAnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_43R3[0x8];                                     // 0x05A8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheHag.HagAnimInstance"));
		return ptr;
	}



};

// Class TheHag.PhantomTrapBurnable
// 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
class UPhantomTrapBurnable : public ULightBurnable
{
public:
	float                                              _traceZOffset;                                             // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CFDA[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheHag.PhantomTrapBurnable"));
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
