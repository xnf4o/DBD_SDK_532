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

// ScriptStruct WebBrowser.WebJSCallbackBase
// 0x0020
struct FWebJSCallbackBase
{
	unsigned char                                      UnknownData_MDDC[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct WebBrowser.WebJSResponse
// 0x0000 (0x0020 - 0x0020)
struct FWebJSResponse : public FWebJSCallbackBase
{

};

// ScriptStruct WebBrowser.WebJSFunction
// 0x0000 (0x0020 - 0x0020)
struct FWebJSFunction : public FWebJSCallbackBase
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
