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

// Class NiagaraCore.NiagaraMergeable
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UNiagaraMergeable : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class NiagaraCore.NiagaraMergeable"));
		return ptr;
	}



};

// Class NiagaraCore.NiagaraDataInterfaceBase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UNiagaraDataInterfaceBase : public UNiagaraMergeable
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class NiagaraCore.NiagaraDataInterfaceBase"));
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
