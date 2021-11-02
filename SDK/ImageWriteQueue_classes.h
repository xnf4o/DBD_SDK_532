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

// Class ImageWriteQueue.ImageWriteBlueprintLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UImageWriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class ImageWriteQueue.ImageWriteBlueprintLibrary"));
		return ptr;
	}



	void STATIC_ExportToDisk(class UTexture* Texture, const struct FString& Filename, const struct FImageWriteOptions& Options);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
