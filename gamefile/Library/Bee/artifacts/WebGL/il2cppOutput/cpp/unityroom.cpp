#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,unityroom.Api.Internals.Scoreboard>
struct Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,unityroom.Api.Internals.Scoreboard>
struct KeyCollection_t5D29ACDC3796655A1CFFD6492632890D2C0C4FE3;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,unityroom.Api.Internals.Scoreboard>
struct ValueCollection_t74C55E7F85C88A5EE8BE1B2852713061041B6958;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,unityroom.Api.Internals.Scoreboard>[]
struct EntryU5BU5D_t174FF43266D07B95F59145A9313C77353D96618C;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Security.Cryptography.HMACSHA256
struct HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// unityroom.Api.IUnityroomApiClient
struct IUnityroomApiClient_t6A0C177A129579563926C8604E73769FEEDCEC8B;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// unityroom.Api.Internals.RetryCounter
struct RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// unityroom.Api.Internals.ScoreHolder
struct ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5;
// unityroom.Api.Internals.Scoreboard
struct Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// unityroom.Api.Internals.TimeKeeper
struct TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A;
// System.Text.UTF8Encoding
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// unityroom.Api.UnityroomApiClient
struct UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045;
// unityroom.Api.Internals.Scoreboard/<SendScoreEnumerator>d__10
struct U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5;
// System.Text.UTF8Encoding/UTF8EncodingSealed
struct UTF8EncodingSealed_tF97A34F40CABE9CE1C168967D60396F51C43DD36;

IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral09BF09881179677B8850817E265CF7C67AA42804;
IL2CPP_EXTERN_C String_t* _stringLiteral101C9F95FD7340DF70FED897219FA76BEE74D717;
IL2CPP_EXTERN_C String_t* _stringLiteral298765A9954863BA5D4ED118AD88C61DED93D3E1;
IL2CPP_EXTERN_C String_t* _stringLiteral2AA7999C60E7B451F14EE9279768642D133AF4E0;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral5390F498EEB3460412EE76C345A79B4F6A1827CB;
IL2CPP_EXTERN_C String_t* _stringLiteral5BCE6EAE7836EC0AD52C081AF09B2B99CF9D18A8;
IL2CPP_EXTERN_C String_t* _stringLiteral6065F5B01A323AEDEBDB16BF07D09128C140B9D1;
IL2CPP_EXTERN_C String_t* _stringLiteral979D01B9ED0B114E874D86D861AC3C0E18F867C6;
IL2CPP_EXTERN_C String_t* _stringLiteralA9D807BE1EFECC03B3C177C5936DD36A2DA5FC05;
IL2CPP_EXTERN_C String_t* _stringLiteralAF114CCDDFED85AD37A859C38E4EE932B2D835F8;
IL2CPP_EXTERN_C String_t* _stringLiteralB00E0785E64B18158E19EB8A0AC5A1EC6244BE79;
IL2CPP_EXTERN_C String_t* _stringLiteralB656D20F855EAD96E77A688F37C0B413976808DA;
IL2CPP_EXTERN_C String_t* _stringLiteralB85624BCAD48B6F7D8D00D411E08DD68A288D4C1;
IL2CPP_EXTERN_C String_t* _stringLiteralBD382393F0585E3C74EC569E3DCBD6A4AB4EE565;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE6512321DDCF3BDBF14F295A9AA72990C16BB671;
IL2CPP_EXTERN_C String_t* _stringLiteralEB7A6C364B0CEC17F2C93A0C52B13A3B1BD019D8;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m0B5C8FD907E3E7A5E402434E523F30A341BBA2ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mC4EFC5BB393804D6A03236AABA5C8A00700166A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAAFCD5AD7FEB9D9B1E5E23DF2D852AA9C13F291C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB7F8D39CEE782A73C1726674E973E2408C01BABB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisScoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1_mC62010232189FC067632A2DA3E6D0F3F970A44AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisUnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_mE08AF0D9D0635660053A484912641C6007B1C49A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RetryCounter_Increment_m5BA02669119E968EFFC9F6993039955BEEA83918_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScoreHolder_get_Score_mC1E799FA0B47C40A5E864199A0279281A1998D0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendScoreEnumeratorU3Ed__10_System_Collections_IEnumerator_Reset_m3462728F20E5906C7733D60D619B6516725875DE_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFB2033F4CC3574B0A320ED11A20F3FDB60C27AD0 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,unityroom.Api.Internals.Scoreboard>
struct Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t174FF43266D07B95F59145A9313C77353D96618C* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t5D29ACDC3796655A1CFFD6492632890D2C0C4FE3* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t74C55E7F85C88A5EE8BE1B2852713061041B6958* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};
struct Il2CppArrayBounds;

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
};

// unityroom.Api.Internals.Hmac
struct Hmac_tDC1BDD45089F67F2D0E427A59282D380FF434C5C  : public RuntimeObject
{
};

// unityroom.Api.Internals.RetryCounter
struct RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0  : public RuntimeObject
{
	// System.Int32 unityroom.Api.Internals.RetryCounter::_maxTryCount
	int32_t ____maxTryCount_0;
	// System.Int32 unityroom.Api.Internals.RetryCounter::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// unityroom.Api.Internals.TimeKeeper
struct TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A  : public RuntimeObject
{
	// System.Int32 unityroom.Api.Internals.TimeKeeper::_intervalSeconds
	int32_t ____intervalSeconds_0;
	// System.Int32 unityroom.Api.Internals.TimeKeeper::_lastSentTime
	int32_t ____lastSentTime_1;
};

// unityroom.Api.Internals.Util
struct Util_t5B6C5CD0731D8A5DFB76C3ED5EF080F523A58EAA  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;
};

struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields
{
	// System.Byte[] UnityEngine.WWWForm::dDash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dDash_6;
	// System.Byte[] UnityEngine.WWWForm::crlf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___crlf_7;
	// System.Byte[] UnityEngine.WWWForm::contentTypeHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___contentTypeHeader_8;
	// System.Byte[] UnityEngine.WWWForm::dispositionHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dispositionHeader_9;
	// System.Byte[] UnityEngine.WWWForm::endQuote
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___endQuote_10;
	// System.Byte[] UnityEngine.WWWForm::fileNameField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___fileNameField_11;
	// System.Byte[] UnityEngine.WWWForm::ampersand
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ampersand_12;
	// System.Byte[] UnityEngine.WWWForm::equal
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___equal_13;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// unityroom.Api.Internals.Scoreboard/<SendScoreEnumerator>d__10
struct U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5  : public RuntimeObject
{
	// System.Int32 unityroom.Api.Internals.Scoreboard/<SendScoreEnumerator>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object unityroom.Api.Internals.Scoreboard/<SendScoreEnumerator>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// unityroom.Api.Internals.Scoreboard unityroom.Api.Internals.Scoreboard/<SendScoreEnumerator>d__10::<>4__this
	Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* ___U3CU3E4__this_2;
	// System.Single unityroom.Api.Internals.Scoreboard/<SendScoreEnumerator>d__10::<score>5__2
	float ___U3CscoreU3E5__2_3;
	// UnityEngine.Networking.UnityWebRequest unityroom.Api.Internals.Scoreboard/<SendScoreEnumerator>d__10::<request>5__3
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CrequestU3E5__3_4;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t782AD417BF829DAD1267A7AE4F9B553537CCF263  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KeyValue_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.Text.UTF8Encoding
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE  : public Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095
{
	// System.Boolean System.Text.UTF8Encoding::_emitUTF8Identifier
	bool ____emitUTF8Identifier_18;
	// System.Boolean System.Text.UTF8Encoding::_isThrowException
	bool ____isThrowException_19;
};

struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_StaticFields
{
	// System.Text.UTF8Encoding/UTF8EncodingSealed System.Text.UTF8Encoding::s_default
	UTF8EncodingSealed_tF97A34F40CABE9CE1C168967D60396F51C43DD36* ___s_default_16;
	// System.Byte[] System.Text.UTF8Encoding::s_preamble
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_preamble_17;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Security.Cryptography.HMAC
struct HMAC_tD2DDF5CB02E7064020823E8EE01DA127E46E1684  : public KeyedHashAlgorithm_t782AD417BF829DAD1267A7AE4F9B553537CCF263
{
	// System.Int32 System.Security.Cryptography.HMAC::blockSizeValue
	int32_t ___blockSizeValue_5;
	// System.String System.Security.Cryptography.HMAC::m_hashName
	String_t* ___m_hashName_6;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::m_hash1
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___m_hash1_7;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::m_hash2
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___m_hash2_8;
	// System.Byte[] System.Security.Cryptography.HMAC::m_inner
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_inner_9;
	// System.Byte[] System.Security.Cryptography.HMAC::m_outer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_outer_10;
	// System.Boolean System.Security.Cryptography.HMAC::m_hashing
	bool ___m_hashing_11;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// unityroom.Api.Internals.ScoreHolder
struct ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5  : public RuntimeObject
{
	// System.Nullable`1<System.Single> unityroom.Api.Internals.ScoreHolder::_currentScore
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ____currentScore_0;
	// System.Boolean unityroom.Api.Internals.ScoreHolder::<ScoreChanged>k__BackingField
	bool ___U3CScoreChangedU3Ek__BackingField_1;
};

// unityroom.Api.Internals.UnixTime
struct UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217  : public RuntimeObject
{
};

struct UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_StaticFields
{
	// System.DateTime unityroom.Api.Internals.UnixTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_0;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Security.Cryptography.HMACSHA256
struct HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF  : public HMAC_tD2DDF5CB02E7064020823E8EE01DA127E46E1684
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// unityroom.Api.Internals.Scoreboard
struct Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// unityroom.Api.Internals.RetryCounter unityroom.Api.Internals.Scoreboard::_retryCounter
	RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* ____retryCounter_6;
	// unityroom.Api.Internals.ScoreHolder unityroom.Api.Internals.Scoreboard::_scoreHolder
	ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* ____scoreHolder_7;
	// unityroom.Api.Internals.TimeKeeper unityroom.Api.Internals.Scoreboard::_timeKeeper
	TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* ____timeKeeper_8;
	// System.Int32 unityroom.Api.Internals.Scoreboard::_boardNo
	int32_t ____boardNo_9;
	// System.String unityroom.Api.Internals.Scoreboard::_hmacKey
	String_t* ____hmacKey_10;
};

// unityroom.Api.UnityroomApiClient
struct UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String unityroom.Api.UnityroomApiClient::HmacKey
	String_t* ___HmacKey_5;
	// System.Collections.Generic.Dictionary`2<System.Int32,unityroom.Api.Internals.Scoreboard> unityroom.Api.UnityroomApiClient::_scoreboards
	Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953* ____scoreboards_6;
};

struct UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_StaticFields
{
	// unityroom.Api.UnityroomApiClient unityroom.Api.UnityroomApiClient::_instance
	UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF* ____instance_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Single>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Single>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___value0, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<unityroom.Api.UnityroomApiClient>()
inline UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF* Object_FindObjectOfType_TisUnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_mE08AF0D9D0635660053A484912641C6007B1C49A (const RuntimeMethod* method)
{
	return ((  UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// unityroom.Api.IUnityroomApiClient unityroom.Api.UnityroomApiClient::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityroomApiClient_get_Instance_m31E8C104F88F6F056DF23D0FA3FD2D304143E0C2 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,unityroom.Api.Internals.Scoreboard>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mC4EFC5BB393804D6A03236AABA5C8A00700166A0 (Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___key0, method);
}
// T UnityEngine.GameObject::AddComponent<unityroom.Api.Internals.Scoreboard>()
inline Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* GameObject_AddComponent_TisScoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1_mC62010232189FC067632A2DA3E6D0F3F970A44AC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void unityroom.Api.Internals.Scoreboard::Initialize(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scoreboard_Initialize_m999312C5326837696D5D132C885AE1B00A2AE189 (Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* __this, int32_t ___boardNo0, String_t* ___hmacKey1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,unityroom.Api.Internals.Scoreboard>::Add(TKey,TValue)
inline void Dictionary_2_Add_m0B5C8FD907E3E7A5E402434E523F30A341BBA2ED (Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953* __this, int32_t ___key0, Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953*, int32_t, Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,unityroom.Api.Internals.Scoreboard>::get_Item(TKey)
inline Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* Dictionary_2_get_Item_mB7F8D39CEE782A73C1726674E973E2408C01BABB (Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* (*) (Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___key0, method);
}
// System.Void unityroom.Api.Internals.Scoreboard::AddScore(System.Single,unityroom.Api.ScoreboardWriteMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scoreboard_AddScore_m75859FF83525E5CF1347D9B0F579F8977A292C33 (Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* __this, float ___score0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,unityroom.Api.Internals.Scoreboard>::.ctor()
inline void Dictionary_2__ctor_mAAFCD5AD7FEB9D9B1E5E23DF2D852AA9C13F291C (Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_mBCC79DB57729512321FA4F0E17342F0D1A43EA34 (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* __this, bool ___encoderShouldEmitUTF8Identifier0, const RuntimeMethod* method) ;
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.HMACSHA256::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMACSHA256__ctor_mFB46BF6A850BF47C0F079F026E79BDBFA6F866A5 (HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.String System.BitConverter::ToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitConverter_ToString_m5F1B0DD98D477249671A51379388B4A09B35B420 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 unityroom.Api.Internals.RetryCounter::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RetryCounter_get_Count_mCD4165B38EAF234D1BC6024D25D626864B75A780_inline (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, const RuntimeMethod* method) ;
// System.Void unityroom.Api.Internals.RetryCounter::set_Count(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RetryCounter_set_Count_m56F735BEB01F86A6F6A21C9127BCD55D8BD31F28_inline (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean unityroom.Api.Internals.RetryCounter::get_CanRetry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RetryCounter_get_CanRetry_m461A6FD6E16A480DCB99D1F4DE54D46D7F7F2D09 (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean unityroom.Api.Internals.ScoreHolder::get_ScoreChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ScoreHolder_get_ScoreChanged_mEAC5686B186DBC59F91E66ADB9BB8942A93CAF73_inline (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, const RuntimeMethod* method) ;
// System.Boolean unityroom.Api.Internals.TimeKeeper::IsBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeKeeper_IsBusy_mA51540216EC6BE1B6A1B2AEC1A0D0A00FC1CE70B (TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator unityroom.Api.Internals.Scoreboard::SendScoreEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Scoreboard_SendScoreEnumerator_mAC54B59A530E55D2826F66D0EED7631334F89691 (Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Boolean unityroom.Api.Internals.ScoreHolder::SetNewScore(System.Single,unityroom.Api.ScoreboardWriteMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScoreHolder_SetNewScore_m3801928CBB8DDCDEC0B0A5665A1F0C7ED01750AD (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, float ___score0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void unityroom.Api.Internals.Scoreboard/<SendScoreEnumerator>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendScoreEnumeratorU3Ed__10__ctor_mF0215622D20ADE7B67292E80C665294CEA1BD80A (U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Int32 unityroom.Api.Internals.UnixTime::GetCurrentUnixTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnixTime_GetCurrentUnixTime_m7CC8832A0E762A24580A43B6315E13A5D2E7FB3F (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.String unityroom.Api.Internals.Hmac::GetHmacSha256(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Hmac_GetHmacSha256_m246B22C8EA73A9E6330380EC1869DE2F9FE5BFC2 (String_t* ___dataText0, String_t* ___base64AuthenticationKey1, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWWForm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6 (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, String_t* ___fieldName0, String_t* ___value1, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,UnityEngine.WWWForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Post_m90D1692FE21DF17CB3DEB0948D0359B778404373 (String_t* ___uri0, WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* ___formData1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void unityroom.Api.Internals.RetryCounter::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryCounter__ctor_m1B0542EEA81D2AA15E8A375DEFAA98221BCE75B7 (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, int32_t ___maxTryCount0, const RuntimeMethod* method) ;
// System.Void unityroom.Api.Internals.ScoreHolder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreHolder__ctor_mC20FE7D9A20063C2E09D918ED6D541072384574D (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, const RuntimeMethod* method) ;
// System.Void unityroom.Api.Internals.TimeKeeper::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeKeeper__ctor_m2A77F86F234747D4EDD9A99E9E25A75596951FDB (TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* __this, int32_t ___intervalSeconds0, const RuntimeMethod* method) ;
// System.Void unityroom.Api.Internals.Scoreboard/<SendScoreEnumerator>d__10::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendScoreEnumeratorU3Ed__10_U3CU3Em__Finally1_m2B3E2F7A24A57CE9FFEBF888E013C2FEA41A83D6 (U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5* __this, const RuntimeMethod* method) ;
// System.Void unityroom.Api.Internals.Scoreboard/<SendScoreEnumerator>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendScoreEnumeratorU3Ed__10_System_IDisposable_Dispose_m768B2D5F4FB5BFCBAF7EE1BEFC83336411429F02 (U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5* __this, const RuntimeMethod* method) ;
// System.Void unityroom.Api.Internals.TimeKeeper::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeKeeper_Reset_m8CE941D600B5672FA220D96132B65C4B12430443 (TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* __this, const RuntimeMethod* method) ;
// System.Single unityroom.Api.Internals.ScoreHolder::get_Score()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScoreHolder_get_Score_mC1E799FA0B47C40A5E864199A0279281A1998D0B (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, const RuntimeMethod* method) ;
// System.Boolean unityroom.Api.Internals.Util::IsEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Util_IsEditor_mE8593ACEA2CD68B2CB5CDA1840D74E37FF486DDF (const RuntimeMethod* method) ;
// System.Void unityroom.Api.Internals.RetryCounter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryCounter_Reset_m5BCA1CC42DE65F5143C159C89886A81F06BF89FA (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, const RuntimeMethod* method) ;
// System.Void unityroom.Api.Internals.ScoreHolder::ResetChangedFlag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreHolder_ResetChangedFlag_mAE9DB8664BD537AA4411BDA80F5055ABC9C27DB4 (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest unityroom.Api.Internals.Scoreboard::CreateRequest(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* Scoreboard_CreateRequest_m4EEC018F9BED53445DB40562B450D4A64355173B (Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* __this, float ___score0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void unityroom.Api.Internals.RetryCounter::Increment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryCounter_Increment_m5BA02669119E968EFFC9F6993039955BEEA83918 (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Int32 unityroom.Api.Internals.RetryCounter::get_RemainCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RetryCounter_get_RemainCount_m640313DB6C8B6C1197ABFD466EFCAC76D8F9A64F (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Single>::get_Value()
inline float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared)(__this, method);
}
// System.Void System.Nullable`1<System.Single>::.ctor(T)
inline void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420 (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, float, const RuntimeMethod*))Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared)(__this, ___value0, method);
}
// System.Void unityroom.Api.Internals.ScoreHolder::set_ScoreChanged(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScoreHolder_set_ScoreChanged_m934B70B8DDF2ED5C38076E99204F0FBA202328C6_inline (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean unityroom.Api.Internals.TimeKeeper::IsBusy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeKeeper_IsBusy_mE98579890EF83C339DCBBE067D7889CDD2265CE4 (TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* __this, int32_t ___now0, const RuntimeMethod* method) ;
// System.Void unityroom.Api.Internals.TimeKeeper::Reset(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeKeeper_Reset_m9AD55BFCE415929F6624E9D5B6C6C3BA9D614730_inline (TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* __this, int32_t ___now0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.Int32 unityroom.Api.Internals.UnixTime::ToUnixTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnixTime_ToUnixTime_m855D1AE257886697DC5627F90980C2BFD60B0539 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___targetTime0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToUniversalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___millisecond6, int32_t ___kind7, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// unityroom.Api.IUnityroomApiClient unityroom.Api.UnityroomApiClient::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityroomApiClient_get_Instance_m31E8C104F88F6F056DF23D0FA3FD2D304143E0C2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisUnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_mE08AF0D9D0635660053A484912641C6007B1C49A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral298765A9954863BA5D4ED118AD88C61DED93D3E1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance != null) return _instance;
		UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF* L_0 = ((UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_StaticFields*)il2cpp_codegen_static_fields_for(UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (_instance != null) return _instance;
		UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF* L_2 = ((UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_StaticFields*)il2cpp_codegen_static_fields_for(UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_il2cpp_TypeInfo_var))->____instance_4;
		return L_2;
	}

IL_0013:
	{
		// _instance = FindObjectOfType<UnityroomApiClient>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF* L_3;
		L_3 = Object_FindObjectOfType_TisUnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_mE08AF0D9D0635660053A484912641C6007B1C49A(Object_FindObjectOfType_TisUnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_mE08AF0D9D0635660053A484912641C6007B1C49A_RuntimeMethod_var);
		((UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_StaticFields*)il2cpp_codegen_static_fields_for(UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_il2cpp_TypeInfo_var))->____instance_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_StaticFields*)il2cpp_codegen_static_fields_for(UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_il2cpp_TypeInfo_var))->____instance_4), (void*)L_3);
		// if (_instance == null) { Debug.LogError($"[unityroom] ????UnityroomApiClient?Prefab??????????"); }
		UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF* L_4 = ((UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_StaticFields*)il2cpp_codegen_static_fields_for(UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_il2cpp_TypeInfo_var))->____instance_4;
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// if (_instance == null) { Debug.LogError($"[unityroom] ????UnityroomApiClient?Prefab??????????"); }
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral298765A9954863BA5D4ED118AD88C61DED93D3E1, NULL);
	}

IL_0034:
	{
		// return _instance;
		UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF* L_6 = ((UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_StaticFields*)il2cpp_codegen_static_fields_for(UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_il2cpp_TypeInfo_var))->____instance_4;
		return L_6;
	}
}
// System.Void unityroom.Api.UnityroomApiClient::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityroomApiClient_Awake_mB942592ADD846AFD06F543AE2FE8077BCB535594 (UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5390F498EEB3460412EE76C345A79B4F6A1827CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB656D20F855EAD96E77A688F37C0B413976808DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((UnityroomApiClient)Instance != this)
		RuntimeObject* L_0;
		L_0 = UnityroomApiClient_get_Instance_m31E8C104F88F6F056DF23D0FA3FD2D304143E0C2(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(((UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF*)CastclassClass((RuntimeObject*)L_0, UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_il2cpp_TypeInfo_var)), __this, NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// Debug.LogWarning($"[unityroom] ???UnityroomApiClient??????????????????????????", gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteral5390F498EEB3460412EE76C345A79B4F6A1827CB, L_2, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_002d:
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_4, NULL);
		// if (string.IsNullOrEmpty(HmacKey))
		String_t* L_5 = __this->___HmacKey_5;
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		// Debug.LogError($"[unityroom] ?????????HMAC????????????????", gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(_stringLiteralB656D20F855EAD96E77A688F37C0B413976808DA, L_7, NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void unityroom.Api.UnityroomApiClient::SendScore(System.Int32,System.Single,unityroom.Api.ScoreboardWriteMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityroomApiClient_SendScore_mEA55782761EF6CC209214631EBCDFF56BBF7D44F (UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF* __this, int32_t ___boardNo0, float ___score1, int32_t ___mode2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m0B5C8FD907E3E7A5E402434E523F30A341BBA2ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC4EFC5BB393804D6A03236AABA5C8A00700166A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB7F8D39CEE782A73C1726674E973E2408C01BABB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisScoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1_mC62010232189FC067632A2DA3E6D0F3F970A44AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* V_0 = NULL;
	{
		// if (!_scoreboards.ContainsKey(boardNo))
		Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953* L_0 = __this->____scoreboards_6;
		int32_t L_1 = ___boardNo0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mC4EFC5BB393804D6A03236AABA5C8A00700166A0(L_0, L_1, Dictionary_2_ContainsKey_mC4EFC5BB393804D6A03236AABA5C8A00700166A0_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		// var b = gameObject.AddComponent<Scoreboard>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_4;
		L_4 = GameObject_AddComponent_TisScoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1_mC62010232189FC067632A2DA3E6D0F3F970A44AC(L_3, GameObject_AddComponent_TisScoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1_mC62010232189FC067632A2DA3E6D0F3F970A44AC_RuntimeMethod_var);
		V_0 = L_4;
		// b.Initialize(boardNo, HmacKey);
		Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_5 = V_0;
		int32_t L_6 = ___boardNo0;
		String_t* L_7 = __this->___HmacKey_5;
		Scoreboard_Initialize_m999312C5326837696D5D132C885AE1B00A2AE189(L_5, L_6, L_7, NULL);
		// _scoreboards.Add(boardNo, b);
		Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953* L_8 = __this->____scoreboards_6;
		int32_t L_9 = ___boardNo0;
		Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_10 = V_0;
		Dictionary_2_Add_m0B5C8FD907E3E7A5E402434E523F30A341BBA2ED(L_8, L_9, L_10, Dictionary_2_Add_m0B5C8FD907E3E7A5E402434E523F30A341BBA2ED_RuntimeMethod_var);
	}

IL_0034:
	{
		// var scoreboard = _scoreboards[boardNo];
		Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953* L_11 = __this->____scoreboards_6;
		int32_t L_12 = ___boardNo0;
		Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_13;
		L_13 = Dictionary_2_get_Item_mB7F8D39CEE782A73C1726674E973E2408C01BABB(L_11, L_12, Dictionary_2_get_Item_mB7F8D39CEE782A73C1726674E973E2408C01BABB_RuntimeMethod_var);
		// scoreboard.AddScore(score, mode);
		float L_14 = ___score1;
		int32_t L_15 = ___mode2;
		Scoreboard_AddScore_m75859FF83525E5CF1347D9B0F579F8977A292C33(L_13, L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void unityroom.Api.UnityroomApiClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityroomApiClient__ctor_mB96938A2D6594A1BE5528E8D51DEF3981986E5A2 (UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAAFCD5AD7FEB9D9B1E5E23DF2D852AA9C13F291C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<int, Scoreboard> _scoreboards = new Dictionary<int, Scoreboard>();
		Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953* L_0 = (Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953*)il2cpp_codegen_object_new(Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mAAFCD5AD7FEB9D9B1E5E23DF2D852AA9C13F291C(L_0, Dictionary_2__ctor_mAAFCD5AD7FEB9D9B1E5E23DF2D852AA9C13F291C_RuntimeMethod_var);
		__this->____scoreboards_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____scoreboards_6), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String unityroom.Api.Internals.Hmac::GetHmacSha256(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Hmac_GetHmacSha256_m246B22C8EA73A9E6330380EC1869DE2F9FE5BFC2 (String_t* ___dataText0, String_t* ___base64AuthenticationKey1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// var dataBytes = new UTF8Encoding(false).GetBytes(dataText); // BOM??UTF-8?byte?????
		UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* L_0 = (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE*)il2cpp_codegen_object_new(UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_mBCC79DB57729512321FA4F0E17342F0D1A43EA34(L_0, (bool)0, NULL);
		String_t* L_1 = ___dataText0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		// var keyBytes = Convert.FromBase64String(base64AuthenticationKey); // base64?????????????byte?????
		String_t* L_3 = ___base64AuthenticationKey1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_3, NULL);
		// var sha256 = new System.Security.Cryptography.HMACSHA256(keyBytes); // ???????SHA256????
		HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_5 = (HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF*)il2cpp_codegen_object_new(HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF_il2cpp_TypeInfo_var);
		HMACSHA256__ctor_mFB46BF6A850BF47C0F079F026E79BDBFA6F866A5(L_5, L_4, NULL);
		// var hmacBytes = sha256.ComputeHash(dataBytes); // ????????
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_5, L_6, NULL);
		// var hmacText = BitConverter.ToString(hmacBytes)
		//     .ToLower()
		//     .Replace("-", ""); // byte????16?????????
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = BitConverter_ToString_m5F1B0DD98D477249671A51379388B4A09B35B420(L_7, NULL);
		String_t* L_9;
		L_9 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_8, NULL);
		String_t* L_10;
		L_10 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_9, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// return hmacText;
		return L_10;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void unityroom.Api.Internals.RetryCounter::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryCounter__ctor_m1B0542EEA81D2AA15E8A375DEFAA98221BCE75B7 (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, int32_t ___maxTryCount0, const RuntimeMethod* method) 
{
	{
		// internal RetryCounter(int maxTryCount)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _maxTryCount = maxTryCount;
		int32_t L_0 = ___maxTryCount0;
		__this->____maxTryCount_0 = L_0;
		// }
		return;
	}
}
// System.Boolean unityroom.Api.Internals.RetryCounter::get_CanRetry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RetryCounter_get_CanRetry_m461A6FD6E16A480DCB99D1F4DE54D46D7F7F2D09 (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, const RuntimeMethod* method) 
{
	{
		// internal bool CanRetry => Count < _maxTryCount;
		int32_t L_0;
		L_0 = RetryCounter_get_Count_mCD4165B38EAF234D1BC6024D25D626864B75A780_inline(__this, NULL);
		int32_t L_1 = __this->____maxTryCount_0;
		return (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 unityroom.Api.Internals.RetryCounter::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RetryCounter_get_Count_mCD4165B38EAF234D1BC6024D25D626864B75A780 (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, const RuntimeMethod* method) 
{
	{
		// internal int Count { get; private set; } = 0;
		int32_t L_0 = __this->___U3CCountU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void unityroom.Api.Internals.RetryCounter::set_Count(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryCounter_set_Count_m56F735BEB01F86A6F6A21C9127BCD55D8BD31F28 (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal int Count { get; private set; } = 0;
		int32_t L_0 = ___value0;
		__this->___U3CCountU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Int32 unityroom.Api.Internals.RetryCounter::get_RemainCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RetryCounter_get_RemainCount_m640313DB6C8B6C1197ABFD466EFCAC76D8F9A64F (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, const RuntimeMethod* method) 
{
	{
		// internal int RemainCount => _maxTryCount - Count;
		int32_t L_0 = __this->____maxTryCount_0;
		int32_t L_1;
		L_1 = RetryCounter_get_Count_mCD4165B38EAF234D1BC6024D25D626864B75A780_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Void unityroom.Api.Internals.RetryCounter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryCounter_Reset_m5BCA1CC42DE65F5143C159C89886A81F06BF89FA (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, const RuntimeMethod* method) 
{
	{
		// Count = 0;
		RetryCounter_set_Count_m56F735BEB01F86A6F6A21C9127BCD55D8BD31F28_inline(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void unityroom.Api.Internals.RetryCounter::Increment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryCounter_Increment_m5BA02669119E968EFFC9F6993039955BEEA83918 (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (!CanRetry) throw new InvalidOperationException("????????????????");
		bool L_0;
		L_0 = RetryCounter_get_CanRetry_m461A6FD6E16A480DCB99D1F4DE54D46D7F7F2D09(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (!CanRetry) throw new InvalidOperationException("????????????????");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB7A6C364B0CEC17F2C93A0C52B13A3B1BD019D8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RetryCounter_Increment_m5BA02669119E968EFFC9F6993039955BEEA83918_RuntimeMethod_var)));
	}

IL_0013:
	{
		// Count++;
		int32_t L_2;
		L_2 = RetryCounter_get_Count_mCD4165B38EAF234D1BC6024D25D626864B75A780_inline(__this, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		RetryCounter_set_Count_m56F735BEB01F86A6F6A21C9127BCD55D8BD31F28_inline(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void unityroom.Api.Internals.Scoreboard::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scoreboard_Update_mD7D8EA32F19BAB45835F51ACA4C7E8FFF3F64E34 (Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* __this, const RuntimeMethod* method) 
{
	{
		// if (_scoreHolder.ScoreChanged && !_timeKeeper.IsBusy()) { StartCoroutine(SendScoreEnumerator()); }
		ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* L_0 = __this->____scoreHolder_7;
		bool L_1;
		L_1 = ScoreHolder_get_ScoreChanged_mEAC5686B186DBC59F91E66ADB9BB8942A93CAF73_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* L_2 = __this->____timeKeeper_8;
		bool L_3;
		L_3 = TimeKeeper_IsBusy_mA51540216EC6BE1B6A1B2AEC1A0D0A00FC1CE70B(L_2, NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		// if (_scoreHolder.ScoreChanged && !_timeKeeper.IsBusy()) { StartCoroutine(SendScoreEnumerator()); }
		RuntimeObject* L_4;
		L_4 = Scoreboard_SendScoreEnumerator_mAC54B59A530E55D2826F66D0EED7631334F89691(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void unityroom.Api.Internals.Scoreboard::Initialize(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scoreboard_Initialize_m999312C5326837696D5D132C885AE1B00A2AE189 (Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* __this, int32_t ___boardNo0, String_t* ___hmacKey1, const RuntimeMethod* method) 
{
	{
		// _boardNo = boardNo;
		int32_t L_0 = ___boardNo0;
		__this->____boardNo_9 = L_0;
		// _hmacKey = hmacKey;
		String_t* L_1 = ___hmacKey1;
		__this->____hmacKey_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hmacKey_10), (void*)L_1);
		// }
		return;
	}
}
// System.Void unityroom.Api.Internals.Scoreboard::AddScore(System.Single,unityroom.Api.ScoreboardWriteMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scoreboard_AddScore_m75859FF83525E5CF1347D9B0F579F8977A292C33 (Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* __this, float ___score0, int32_t ___mode1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB85624BCAD48B6F7D8D00D411E08DD68A288D4C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6512321DDCF3BDBF14F295A9AA72990C16BB671);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		// var scoreUpdated = _scoreHolder.SetNewScore(score, mode);
		ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* L_0 = __this->____scoreHolder_7;
		float L_1 = ___score0;
		int32_t L_2 = ___mode1;
		bool L_3;
		L_3 = ScoreHolder_SetNewScore_m3801928CBB8DDCDEC0B0A5665A1F0C7ED01750AD(L_0, L_1, L_2, NULL);
		// Debug.Log(
		//     scoreUpdated ? $"[unityroom] ??????? BoardNo={_boardNo} Score={score}"
		//         : $"[unityroom] ????????????????? BoardNo={_boardNo} Score={score}"
		// );
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4 = __this->____boardNo_9;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		float L_7 = ___score0;
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralB85624BCAD48B6F7D8D00D411E08DD68A288D4C1, L_6, L_9, NULL);
		G_B3_0 = L_10;
		goto IL_0047;
	}

IL_002c:
	{
		int32_t L_11 = __this->____boardNo_9;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		float L_14 = ___score0;
		float L_15 = L_14;
		RuntimeObject* L_16 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralE6512321DDCF3BDBF14F295A9AA72990C16BB671, L_13, L_16, NULL);
		G_B3_0 = L_17;
	}

IL_0047:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(G_B3_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator unityroom.Api.Internals.Scoreboard::SendScoreEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Scoreboard_SendScoreEnumerator_mAC54B59A530E55D2826F66D0EED7631334F89691 (Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5* L_0 = (U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5*)il2cpp_codegen_object_new(U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5_il2cpp_TypeInfo_var);
		U3CSendScoreEnumeratorU3Ed__10__ctor_mF0215622D20ADE7B67292E80C665294CEA1BD80A(L_0, 0, NULL);
		U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// UnityEngine.Networking.UnityWebRequest unityroom.Api.Internals.Scoreboard::CreateRequest(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* Scoreboard_CreateRequest_m4EEC018F9BED53445DB40562B450D4A64355173B (Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* __this, float ___score0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AA7999C60E7B451F14EE9279768642D133AF4E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9D807BE1EFECC03B3C177C5936DD36A2DA5FC05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB00E0785E64B18158E19EB8A0AC5A1EC6244BE79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD382393F0585E3C74EC569E3DCBD6A4AB4EE565);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// var path = $"/gameplay_api/v1/scoreboards/{_boardNo}/scores";
		int32_t L_0 = __this->____boardNo_9;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralB00E0785E64B18158E19EB8A0AC5A1EC6244BE79, L_2, NULL);
		V_0 = L_3;
		// var unixTime = UnixTime.GetCurrentUnixTime()
		//     .ToString();
		il2cpp_codegen_runtime_class_init_inline(UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = UnixTime_GetCurrentUnixTime_m7CC8832A0E762A24580A43B6315E13A5D2E7FB3F(NULL);
		V_5 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_5), NULL);
		V_1 = L_5;
		// var scoreText = score.ToString(CultureInfo.InvariantCulture);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_6;
		L_6 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_7;
		L_7 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A((&___score0), L_6, NULL);
		V_2 = L_7;
		// var hmacDataText = $"POST\n{path}\n{unixTime}\n{scoreText}";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		ArrayElementTypeCheck (L_9, _stringLiteralA9D807BE1EFECC03B3C177C5936DD36A2DA5FC05);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA9D807BE1EFECC03B3C177C5936DD36A2DA5FC05);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		String_t* L_11 = V_0;
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_10;
		ArrayElementTypeCheck (L_12, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		String_t* L_14 = V_1;
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_13;
		ArrayElementTypeCheck (L_15, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		String_t* L_17 = V_2;
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_17);
		String_t* L_18;
		L_18 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_16, NULL);
		// var hmac = Hmac.GetHmacSha256(hmacDataText, _hmacKey);
		String_t* L_19 = __this->____hmacKey_10;
		String_t* L_20;
		L_20 = Hmac_GetHmacSha256_m246B22C8EA73A9E6330380EC1869DE2F9FE5BFC2(L_18, L_19, NULL);
		V_3 = L_20;
		// var form = new WWWForm();
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_21 = (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045*)il2cpp_codegen_object_new(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6(L_21, NULL);
		V_4 = L_21;
		// form.AddField("score", scoreText);
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_22 = V_4;
		String_t* L_23 = V_2;
		WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D(L_22, _stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, L_23, NULL);
		// var request = UnityWebRequest.Post(path, form);
		String_t* L_24 = V_0;
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_25 = V_4;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_26;
		L_26 = UnityWebRequest_Post_m90D1692FE21DF17CB3DEB0948D0359B778404373(L_24, L_25, NULL);
		// request.SetRequestHeader("X-Unityroom-Signature", hmac);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_27 = L_26;
		String_t* L_28 = V_3;
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_27, _stringLiteralBD382393F0585E3C74EC569E3DCBD6A4AB4EE565, L_28, NULL);
		// request.SetRequestHeader("X-Unityroom-Timestamp", unixTime);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_29 = L_27;
		String_t* L_30 = V_1;
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_29, _stringLiteral2AA7999C60E7B451F14EE9279768642D133AF4E0, L_30, NULL);
		// return request;
		return L_29;
	}
}
// System.Void unityroom.Api.Internals.Scoreboard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scoreboard__ctor_m31C8298D2444CAEEA06AE2A3A910F26AB58D5630 (Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly RetryCounter _retryCounter = new RetryCounter(MaxTryCount);
		RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* L_0 = (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0*)il2cpp_codegen_object_new(RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0_il2cpp_TypeInfo_var);
		RetryCounter__ctor_m1B0542EEA81D2AA15E8A375DEFAA98221BCE75B7(L_0, 2, NULL);
		__this->____retryCounter_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____retryCounter_6), (void*)L_0);
		// private readonly ScoreHolder _scoreHolder = new ScoreHolder();
		ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* L_1 = (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5*)il2cpp_codegen_object_new(ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5_il2cpp_TypeInfo_var);
		ScoreHolder__ctor_mC20FE7D9A20063C2E09D918ED6D541072384574D(L_1, NULL);
		__this->____scoreHolder_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____scoreHolder_7), (void*)L_1);
		// private readonly TimeKeeper _timeKeeper = new TimeKeeper(IntervalSeconds);
		TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* L_2 = (TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A*)il2cpp_codegen_object_new(TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A_il2cpp_TypeInfo_var);
		TimeKeeper__ctor_m2A77F86F234747D4EDD9A99E9E25A75596951FDB(L_2, 6, NULL);
		__this->____timeKeeper_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____timeKeeper_8), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void unityroom.Api.Internals.Scoreboard/<SendScoreEnumerator>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendScoreEnumeratorU3Ed__10__ctor_mF0215622D20ADE7B67292E80C665294CEA1BD80A (U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void unityroom.Api.Internals.Scoreboard/<SendScoreEnumerator>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendScoreEnumeratorU3Ed__10_System_IDisposable_Dispose_m768B2D5F4FB5BFCBAF7EE1BEFC83336411429F02 (U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CSendScoreEnumeratorU3Ed__10_U3CU3Em__Finally1_m2B3E2F7A24A57CE9FFEBF888E013C2FEA41A83D6(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean unityroom.Api.Internals.Scoreboard/<SendScoreEnumerator>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSendScoreEnumeratorU3Ed__10_MoveNext_m25FA34867334FDB58D456BA840FA0F6B4F51001A (U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09BF09881179677B8850817E265CF7C67AA42804);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral101C9F95FD7340DF70FED897219FA76BEE74D717);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BCE6EAE7836EC0AD52C081AF09B2B99CF9D18A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6065F5B01A323AEDEBDB16BF07D09128C140B9D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF114CCDDFED85AD37A859C38E4EE932B2D835F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* V_2 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	String_t* G_B7_2 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	String_t* G_B6_2 = NULL;
	String_t* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	RuntimeObject* G_B8_2 = NULL;
	String_t* G_B8_3 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_023f:
			{// begin fault (depth: 1)
				U3CSendScoreEnumeratorU3Ed__10_System_IDisposable_Dispose_m768B2D5F4FB5BFCBAF7EE1BEFC83336411429F02(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_1 = __this->___U3CU3E4__this_2;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_001f_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_0118_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0246;
			}

IL_001f_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// _timeKeeper.Reset();
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_4 = V_2;
				TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* L_5 = L_4->____timeKeeper_8;
				TimeKeeper_Reset_m8CE941D600B5672FA220D96132B65C4B12430443(L_5, NULL);
				// var score = _scoreHolder.Score;
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_6 = V_2;
				ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* L_7 = L_6->____scoreHolder_7;
				float L_8;
				L_8 = ScoreHolder_get_Score_mC1E799FA0B47C40A5E864199A0279281A1998D0B(L_7, NULL);
				__this->___U3CscoreU3E5__2_3 = L_8;
				// if (Util.IsEditor())
				bool L_9;
				L_9 = Util_IsEditor_mE8593ACEA2CD68B2CB5CDA1840D74E37FF486DDF(NULL);
				if (!L_9)
				{
					goto IL_008b_1;
				}
			}
			{
				// Debug.Log($"[unityroom] ????? BoardNo={_boardNo} Score={score} (unityroom???????????????????????)");
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_10 = V_2;
				int32_t L_11 = L_10->____boardNo_9;
				int32_t L_12 = L_11;
				RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
				float L_14 = __this->___U3CscoreU3E5__2_3;
				float L_15 = L_14;
				RuntimeObject* L_16 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_15);
				String_t* L_17;
				L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral6065F5B01A323AEDEBDB16BF07D09128C140B9D1, L_13, L_16, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_17, NULL);
				// _retryCounter.Reset();
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_18 = V_2;
				RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* L_19 = L_18->____retryCounter_6;
				RetryCounter_Reset_m5BCA1CC42DE65F5143C159C89886A81F06BF89FA(L_19, NULL);
				// _scoreHolder.ResetChangedFlag();
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_20 = V_2;
				ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* L_21 = L_20->____scoreHolder_7;
				ScoreHolder_ResetChangedFlag_mAE9DB8664BD537AA4411BDA80F5055ABC9C27DB4(L_21, NULL);
				// yield break;
				V_0 = (bool)0;
				goto IL_0246;
			}

IL_008b_1:
			{
				// Debug.Log(
				//     $"[unityroom] ??????? BoardNo={_boardNo} Score={score} {(_retryCounter.Count > 0 ? $"????{_retryCounter.Count}??" : "")}"
				// );
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_22 = V_2;
				int32_t L_23 = L_22->____boardNo_9;
				int32_t L_24 = L_23;
				RuntimeObject* L_25 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_24);
				float L_26 = __this->___U3CscoreU3E5__2_3;
				float L_27 = L_26;
				RuntimeObject* L_28 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_27);
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_29 = V_2;
				RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* L_30 = L_29->____retryCounter_6;
				int32_t L_31;
				L_31 = RetryCounter_get_Count_mCD4165B38EAF234D1BC6024D25D626864B75A780_inline(L_30, NULL);
				G_B6_0 = L_28;
				G_B6_1 = L_25;
				G_B6_2 = _stringLiteral101C9F95FD7340DF70FED897219FA76BEE74D717;
				if ((((int32_t)L_31) > ((int32_t)0)))
				{
					G_B7_0 = L_28;
					G_B7_1 = L_25;
					G_B7_2 = _stringLiteral101C9F95FD7340DF70FED897219FA76BEE74D717;
					goto IL_00bb_1;
				}
			}
			{
				G_B8_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
				G_B8_1 = G_B6_0;
				G_B8_2 = G_B6_1;
				G_B8_3 = G_B6_2;
				goto IL_00d5_1;
			}

IL_00bb_1:
			{
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_32 = V_2;
				RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* L_33 = L_32->____retryCounter_6;
				int32_t L_34;
				L_34 = RetryCounter_get_Count_mCD4165B38EAF234D1BC6024D25D626864B75A780_inline(L_33, NULL);
				int32_t L_35 = L_34;
				RuntimeObject* L_36 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_35);
				String_t* L_37;
				L_37 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral09BF09881179677B8850817E265CF7C67AA42804, L_36, NULL);
				G_B8_0 = L_37;
				G_B8_1 = G_B7_0;
				G_B8_2 = G_B7_1;
				G_B8_3 = G_B7_2;
			}

IL_00d5_1:
			{
				String_t* L_38;
				L_38 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(G_B8_3, G_B8_2, G_B8_1, G_B8_0, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_38, NULL);
				// using var request = CreateRequest(score);
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_39 = V_2;
				float L_40 = __this->___U3CscoreU3E5__2_3;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_41;
				L_41 = Scoreboard_CreateRequest_m4EEC018F9BED53445DB40562B450D4A64355173B(L_39, L_40, NULL);
				__this->___U3CrequestU3E5__3_4 = L_41;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__3_4), (void*)L_41);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// yield return request.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_42 = __this->___U3CrequestU3E5__3_4;
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_43;
				L_43 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_42, NULL);
				__this->___U3CU3E2__current_1 = L_43;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_43);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0246;
			}

IL_0118_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// _retryCounter.Increment();
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_44 = V_2;
				RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* L_45 = L_44->____retryCounter_6;
				RetryCounter_Increment_m5BA02669119E968EFFC9F6993039955BEEA83918(L_45, NULL);
				// if (request.result == UnityWebRequest.Result.Success)
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_46 = __this->___U3CrequestU3E5__3_4;
				int32_t L_47;
				L_47 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_46, NULL);
				if ((!(((uint32_t)L_47) == ((uint32_t)1))))
				{
					goto IL_01a8_1;
				}
			}
			{
				// Debug.Log(
				//     $"[unityroom] ??????? BoardNo={_boardNo} Score={score} Response={request.responseCode} Data={request.downloadHandler.text} "
				// );
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_49 = L_48;
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_50 = V_2;
				int32_t L_51 = L_50->____boardNo_9;
				int32_t L_52 = L_51;
				RuntimeObject* L_53 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_52);
				ArrayElementTypeCheck (L_49, L_53);
				(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_53);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_54 = L_49;
				float L_55 = __this->___U3CscoreU3E5__2_3;
				float L_56 = L_55;
				RuntimeObject* L_57 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_56);
				ArrayElementTypeCheck (L_54, L_57);
				(L_54)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_57);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_58 = L_54;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_59 = __this->___U3CrequestU3E5__3_4;
				int64_t L_60;
				L_60 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_59, NULL);
				int64_t L_61 = L_60;
				RuntimeObject* L_62 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_61);
				ArrayElementTypeCheck (L_58, L_62);
				(L_58)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_62);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_63 = L_58;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_64 = __this->___U3CrequestU3E5__3_4;
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_65;
				L_65 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_64, NULL);
				String_t* L_66;
				L_66 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_65, NULL);
				ArrayElementTypeCheck (L_63, L_66);
				(L_63)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_66);
				String_t* L_67;
				L_67 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral5BCE6EAE7836EC0AD52C081AF09B2B99CF9D18A8, L_63, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_67, NULL);
				// _retryCounter.Reset();
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_68 = V_2;
				RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* L_69 = L_68->____retryCounter_6;
				RetryCounter_Reset_m5BCA1CC42DE65F5143C159C89886A81F06BF89FA(L_69, NULL);
				// _scoreHolder.ResetChangedFlag();
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_70 = V_2;
				ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* L_71 = L_70->____scoreHolder_7;
				ScoreHolder_ResetChangedFlag_mAE9DB8664BD537AA4411BDA80F5055ABC9C27DB4(L_71, NULL);
				goto IL_0212_1;
			}

IL_01a8_1:
			{
				// Debug.Log(
				//     $"[unityroom] ??????? BoardNo={_boardNo} Score={score} Response={request.responseCode} Data={request.downloadHandler.text} ?????={_retryCounter.RemainCount} "
				// );
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_72 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_73 = L_72;
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_74 = V_2;
				int32_t L_75 = L_74->____boardNo_9;
				int32_t L_76 = L_75;
				RuntimeObject* L_77 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_76);
				ArrayElementTypeCheck (L_73, L_77);
				(L_73)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_77);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_78 = L_73;
				float L_79 = __this->___U3CscoreU3E5__2_3;
				float L_80 = L_79;
				RuntimeObject* L_81 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_80);
				ArrayElementTypeCheck (L_78, L_81);
				(L_78)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_81);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_82 = L_78;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_83 = __this->___U3CrequestU3E5__3_4;
				int64_t L_84;
				L_84 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_83, NULL);
				int64_t L_85 = L_84;
				RuntimeObject* L_86 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_85);
				ArrayElementTypeCheck (L_82, L_86);
				(L_82)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_86);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_87 = L_82;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_88 = __this->___U3CrequestU3E5__3_4;
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_89;
				L_89 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_88, NULL);
				String_t* L_90;
				L_90 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_89, NULL);
				ArrayElementTypeCheck (L_87, L_90);
				(L_87)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_90);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_91 = L_87;
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_92 = V_2;
				RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* L_93 = L_92->____retryCounter_6;
				int32_t L_94;
				L_94 = RetryCounter_get_RemainCount_m640313DB6C8B6C1197ABFD466EFCAC76D8F9A64F(L_93, NULL);
				int32_t L_95 = L_94;
				RuntimeObject* L_96 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_95);
				ArrayElementTypeCheck (L_91, L_96);
				(L_91)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_96);
				String_t* L_97;
				L_97 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralAF114CCDDFED85AD37A859C38E4EE932B2D835F8, L_91, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_97, NULL);
			}

IL_0212_1:
			{
				// if (!_retryCounter.CanRetry)
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_98 = V_2;
				RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* L_99 = L_98->____retryCounter_6;
				bool L_100;
				L_100 = RetryCounter_get_CanRetry_m461A6FD6E16A480DCB99D1F4DE54D46D7F7F2D09(L_99, NULL);
				if (L_100)
				{
					goto IL_0235_1;
				}
			}
			{
				// _scoreHolder.ResetChangedFlag();
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_101 = V_2;
				ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* L_102 = L_101->____scoreHolder_7;
				ScoreHolder_ResetChangedFlag_mAE9DB8664BD537AA4411BDA80F5055ABC9C27DB4(L_102, NULL);
				// _retryCounter.Reset();
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_103 = V_2;
				RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* L_104 = L_103->____retryCounter_6;
				RetryCounter_Reset_m5BCA1CC42DE65F5143C159C89886A81F06BF89FA(L_104, NULL);
			}

IL_0235_1:
			{
				// }
				V_0 = (bool)0;
				U3CSendScoreEnumeratorU3Ed__10_U3CU3Em__Finally1_m2B3E2F7A24A57CE9FFEBF888E013C2FEA41A83D6(__this, NULL);
				goto IL_0246;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0246:
	{
		bool L_105 = V_0;
		return L_105;
	}
}
// System.Void unityroom.Api.Internals.Scoreboard/<SendScoreEnumerator>d__10::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendScoreEnumeratorU3Ed__10_U3CU3Em__Finally1_m2B3E2F7A24A57CE9FFEBF888E013C2FEA41A83D6 (U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CrequestU3E5__3_4;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CrequestU3E5__3_4;
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object unityroom.Api.Internals.Scoreboard/<SendScoreEnumerator>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSendScoreEnumeratorU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0C36CBB51B9B67CA8A193780403E93A51C3D045F (U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void unityroom.Api.Internals.Scoreboard/<SendScoreEnumerator>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendScoreEnumeratorU3Ed__10_System_Collections_IEnumerator_Reset_m3462728F20E5906C7733D60D619B6516725875DE (U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendScoreEnumeratorU3Ed__10_System_Collections_IEnumerator_Reset_m3462728F20E5906C7733D60D619B6516725875DE_RuntimeMethod_var)));
	}
}
// System.Object unityroom.Api.Internals.Scoreboard/<SendScoreEnumerator>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSendScoreEnumeratorU3Ed__10_System_Collections_IEnumerator_get_Current_m06F3127B2C9FCD702D429BD6A9315AC2D75BB9D6 (U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single unityroom.Api.Internals.ScoreHolder::get_Score()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScoreHolder_get_Score_mC1E799FA0B47C40A5E864199A0279281A1998D0B (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_currentScore != null) return _currentScore.Value;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_0 = (&__this->____currentScore_0);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_0, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (_currentScore != null) return _currentScore.Value;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_2 = (&__this->____currentScore_0);
		float L_3;
		L_3 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA(L_2, Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		return L_3;
	}

IL_0019:
	{
		// throw new InvalidOperationException("????????");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral979D01B9ED0B114E874D86D861AC3C0E18F867C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ScoreHolder_get_Score_mC1E799FA0B47C40A5E864199A0279281A1998D0B_RuntimeMethod_var)));
	}
}
// System.Boolean unityroom.Api.Internals.ScoreHolder::get_ScoreChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScoreHolder_get_ScoreChanged_mEAC5686B186DBC59F91E66ADB9BB8942A93CAF73 (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, const RuntimeMethod* method) 
{
	{
		// internal bool ScoreChanged { get; private set; } = false;
		bool L_0 = __this->___U3CScoreChangedU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void unityroom.Api.Internals.ScoreHolder::set_ScoreChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreHolder_set_ScoreChanged_m934B70B8DDF2ED5C38076E99204F0FBA202328C6 (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// internal bool ScoreChanged { get; private set; } = false;
		bool L_0 = ___value0;
		__this->___U3CScoreChangedU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Boolean unityroom.Api.Internals.ScoreHolder::SetNewScore(System.Single,unityroom.Api.ScoreboardWriteMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScoreHolder_SetNewScore_m3801928CBB8DDCDEC0B0A5665A1F0C7ED01750AD (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, float ___score0, int32_t ___mode1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_currentScore.HasValue || mode == ScoreboardWriteMode.Always ||
		//     (mode == ScoreboardWriteMode.HighScoreDesc && _currentScore.Value < score) ||
		//     (mode == ScoreboardWriteMode.HighScoreAsc && _currentScore.Value > score))
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_0 = (&__this->____currentScore_0);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_0, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_2 = ___mode1;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = ___mode1;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_4 = (&__this->____currentScore_0);
		float L_5;
		L_5 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA(L_4, Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		float L_6 = ___score0;
		if ((((float)L_5) < ((float)L_6)))
		{
			goto IL_0034;
		}
	}

IL_0022:
	{
		int32_t L_7 = ___mode1;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0049;
		}
	}
	{
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_8 = (&__this->____currentScore_0);
		float L_9;
		L_9 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA(L_8, Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		float L_10 = ___score0;
		if ((!(((float)L_9) > ((float)L_10))))
		{
			goto IL_0049;
		}
	}

IL_0034:
	{
		// _currentScore = score;
		float L_11 = ___score0;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_12), L_11, /*hidden argument*/Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		__this->____currentScore_0 = L_12;
		// ScoreChanged = true;
		ScoreHolder_set_ScoreChanged_m934B70B8DDF2ED5C38076E99204F0FBA202328C6_inline(__this, (bool)1, NULL);
		// return true;
		return (bool)1;
	}

IL_0049:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void unityroom.Api.Internals.ScoreHolder::ResetChangedFlag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreHolder_ResetChangedFlag_mAE9DB8664BD537AA4411BDA80F5055ABC9C27DB4 (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, const RuntimeMethod* method) 
{
	{
		// ScoreChanged = false;
		ScoreHolder_set_ScoreChanged_m934B70B8DDF2ED5C38076E99204F0FBA202328C6_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void unityroom.Api.Internals.ScoreHolder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreHolder__ctor_mC20FE7D9A20063C2E09D918ED6D541072384574D (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void unityroom.Api.Internals.TimeKeeper::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeKeeper__ctor_m2A77F86F234747D4EDD9A99E9E25A75596951FDB (TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* __this, int32_t ___intervalSeconds0, const RuntimeMethod* method) 
{
	{
		// private int _lastSentTime = int.MinValue;
		__this->____lastSentTime_1 = ((int32_t)-2147483648LL);
		// internal TimeKeeper(int intervalSeconds)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _intervalSeconds = intervalSeconds;
		int32_t L_0 = ___intervalSeconds0;
		__this->____intervalSeconds_0 = L_0;
		// }
		return;
	}
}
// System.Boolean unityroom.Api.Internals.TimeKeeper::IsBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeKeeper_IsBusy_mA51540216EC6BE1B6A1B2AEC1A0D0A00FC1CE70B (TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal bool IsBusy() => IsBusy(UnixTime.GetCurrentUnixTime());
		il2cpp_codegen_runtime_class_init_inline(UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = UnixTime_GetCurrentUnixTime_m7CC8832A0E762A24580A43B6315E13A5D2E7FB3F(NULL);
		bool L_1;
		L_1 = TimeKeeper_IsBusy_mE98579890EF83C339DCBBE067D7889CDD2265CE4(__this, L_0, NULL);
		return L_1;
	}
}
// System.Boolean unityroom.Api.Internals.TimeKeeper::IsBusy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeKeeper_IsBusy_mE98579890EF83C339DCBBE067D7889CDD2265CE4 (TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* __this, int32_t ___now0, const RuntimeMethod* method) 
{
	{
		// return _lastSentTime + _intervalSeconds > now;
		int32_t L_0 = __this->____lastSentTime_1;
		int32_t L_1 = __this->____intervalSeconds_0;
		int32_t L_2 = ___now0;
		return (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) > ((int32_t)L_2))? 1 : 0);
	}
}
// System.Void unityroom.Api.Internals.TimeKeeper::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeKeeper_Reset_m8CE941D600B5672FA220D96132B65C4B12430443 (TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal void Reset() => Reset(UnixTime.GetCurrentUnixTime());
		il2cpp_codegen_runtime_class_init_inline(UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = UnixTime_GetCurrentUnixTime_m7CC8832A0E762A24580A43B6315E13A5D2E7FB3F(NULL);
		TimeKeeper_Reset_m9AD55BFCE415929F6624E9D5B6C6C3BA9D614730_inline(__this, L_0, NULL);
		return;
	}
}
// System.Void unityroom.Api.Internals.TimeKeeper::Reset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeKeeper_Reset_m9AD55BFCE415929F6624E9D5B6C6C3BA9D614730 (TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* __this, int32_t ___now0, const RuntimeMethod* method) 
{
	{
		// _lastSentTime = now;
		int32_t L_0 = ___now0;
		__this->____lastSentTime_1 = L_0;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 unityroom.Api.Internals.UnixTime::GetCurrentUnixTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnixTime_GetCurrentUnixTime_m7CC8832A0E762A24580A43B6315E13A5D2E7FB3F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ToUnixTime(DateTime.Now);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		il2cpp_codegen_runtime_class_init_inline(UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = UnixTime_ToUnixTime_m855D1AE257886697DC5627F90980C2BFD60B0539(L_0, NULL);
		return L_1;
	}
}
// System.Int32 unityroom.Api.Internals.UnixTime::ToUnixTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnixTime_ToUnixTime_m855D1AE257886697DC5627F90980C2BFD60B0539 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___targetTime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// targetTime = targetTime.ToUniversalTime();
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9((&___targetTime0), NULL);
		___targetTime0 = L_0;
		// var elapsedTime = targetTime - UnixEpoch;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ___targetTime0;
		il2cpp_codegen_runtime_class_init_inline(UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = ((UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_StaticFields*)il2cpp_codegen_static_fields_for(UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var))->___UnixEpoch_0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3;
		L_3 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_1, L_2, NULL);
		V_0 = L_3;
		// return (int)elapsedTime.TotalSeconds;
		double L_4;
		L_4 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_4);
	}
}
// System.Void unityroom.Api.Internals.UnixTime::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnixTime__cctor_mB0C754AE3A9BAE201E64E38C7DD63A1D7036A554 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly DateTime UnixEpoch = new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, 1, /*hidden argument*/NULL);
		((UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_StaticFields*)il2cpp_codegen_static_fields_for(UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var))->___UnixEpoch_0 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean unityroom.Api.Internals.Util::IsEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Util_IsEditor_mE8593ACEA2CD68B2CB5CDA1840D74E37FF486DDF (const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RetryCounter_get_Count_mCD4165B38EAF234D1BC6024D25D626864B75A780_inline (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, const RuntimeMethod* method) 
{
	{
		// internal int Count { get; private set; } = 0;
		int32_t L_0 = __this->___U3CCountU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RetryCounter_set_Count_m56F735BEB01F86A6F6A21C9127BCD55D8BD31F28_inline (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal int Count { get; private set; } = 0;
		int32_t L_0 = ___value0;
		__this->___U3CCountU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ScoreHolder_get_ScoreChanged_mEAC5686B186DBC59F91E66ADB9BB8942A93CAF73_inline (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, const RuntimeMethod* method) 
{
	{
		// internal bool ScoreChanged { get; private set; } = false;
		bool L_0 = __this->___U3CScoreChangedU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScoreHolder_set_ScoreChanged_m934B70B8DDF2ED5C38076E99204F0FBA202328C6_inline (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// internal bool ScoreChanged { get; private set; } = false;
		bool L_0 = ___value0;
		__this->___U3CScoreChangedU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeKeeper_Reset_m9AD55BFCE415929F6624E9D5B6C6C3BA9D614730_inline (TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* __this, int32_t ___now0, const RuntimeMethod* method) 
{
	{
		// _lastSentTime = now;
		int32_t L_0 = ___now0;
		__this->____lastSentTime_1 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
