#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { &p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_1_tA4CC4B05C836AB92F811D67AC960A6ED20CCCB7B;
struct IEnumerator_1_t74A831196B44E945623D4DFE6157EAB69DA16A05;
struct IEnumerator_1_tFFC0D5DA899224FBB03DA01DBD1716C6FD29C9E0;
struct IEnumerator_1_t74105E6C32CA7AC4F4202BB870BF99B1C95BA2DE;
struct IEnumerator_1_t736E9F8BD2FD38A5E9EA2E8A510AFED788D05010;
struct IEnumerator_1_t8ED46B87E7705380C41A64C1E848D3F32789C639;
struct IEnumerator_1_tB41B292FAFD525FC5C54D7E469F0BA1A193CA8B1;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_t9F467D6B8346BA28D59C7613A12C8092265D57DC;
struct IEnumerator_1_tFB94D0AF6D95F58DEC65B8B3CEFC8EA4F2418CB2;
struct IEnumerator_1_tE448B7EE079805406D664C2451CAC17486C43699;
struct IEnumerator_1_t88BE43B6DC421B6B8A63EB09557816D1F5C614D3;
struct IList_1_t09217E1EDF7CCAED72B667F406AAC92AB64B8790;
struct IList_1_t1E95A05AFA88C09BA96A40B431F7D5867BD0D622;
struct IList_1_t7DC7A22F42EEFA1E8D796516A9F22282DF4EB5FA;
struct IList_1_t8AC59FFD0F90EC2DAD4C3FA39B2A5851F9D2987A;
struct InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798;
struct Predicate_1_tDF40C5B214B8C1CD42C03A302327D001EDCFE1A0;
struct Predicate_1_tECA06EB82DA6AEBC4F101B945A192111822901DD;
struct Predicate_1_t8BFFAEFC5F80E3A5CD534EFA1FCE8E02111F2938;
struct Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88;
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
struct Predicate_1_t307A0D6E571F6E29070EB62217398E9D4D45C556;
struct Predicate_1_tDA45FFEC703500A529E702D9733C1C2095D663FC;
struct Predicate_1_tCC6C1019817F23EFFAC06C8D0EDD8803C71D54E4;
struct Predicate_1_t81E65ECFCC613C16F7408ECA5D3D94536697174D;
struct ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050;
struct ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513;
struct ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263;
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8;
struct Action_1U5BU5D_t18C922CAB85EAE463E29566305D718EF64B12A16;
struct SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06;
struct ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F;
struct BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80;
struct BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A;
struct ConvertMeshExtrasDataU5BU5D_t1420B76450ADCE1EE0AD98D00A25825A1DA9EE38;
struct ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2;
struct CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5;
struct CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61;
struct CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440;
struct CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB;
struct EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49;
struct EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1;
struct EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9;
struct FilterParameterU5BU5D_t0EF6EE29F03D6988D16E72B9209B753EE379FF58;
struct FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F;
struct FlattenedSelectorU5BU5D_tCFD484131041FE6AEF088704B99CA1C6DC732B27;
struct FlattenedSelectorPartU5BU5D_t6A3A49EF6948716EE80F0909EB9C7D5526F19643;
struct GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE;
struct GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C;
struct GfxCopyBufferRangeU5BU5D_t0C98D54584A2EE1E36B6159C1A0F9644CF80A53C;
struct GfxUpdateBufferRangeU5BU5D_tE41D12E7B85611267BA408D468B0F0422B7D1F30;
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7;
struct HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
struct NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2;
struct NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354;
struct TouchscreenU5BU5D_t73D22E3D2A7039C6C374D75B796C8F83BCA897E3;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD;
struct ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104;
struct DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE;
struct DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0;
struct BatchDrawCommandIndirect_t06F3B5DC4AF7D4B115CEECDB0A1E4E92065BC705;
struct BatchDrawCommandProcedural_t5780BD7745B5772AA54BA6E6021292F6A6553B86;
struct BatchDrawCommandProceduralIndirect_t8417CDF3495237CD8C9204B3DADC6BA4A1488B50;
struct BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8;
struct Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MemberInfo_t;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
struct String_t;
struct Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D;
IL2CPP_EXTERN_C String_t* _stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D;
IL2CPP_EXTERN_C String_t* _stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628;
IL2CPP_EXTERN_C String_t* _stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_com;
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_pinvoke;

struct SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06;
struct ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F;
struct BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80;
struct BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A;
struct ConvertMeshExtrasDataU5BU5D_t1420B76450ADCE1EE0AD98D00A25825A1DA9EE38;
struct ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2;
struct CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5;
struct CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61;
struct CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440;
struct CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B;
struct DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB;
struct EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49;
struct EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1;
struct EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9;
struct FilterParameterU5BU5D_t0EF6EE29F03D6988D16E72B9209B753EE379FF58;
struct FlattenedSelectorU5BU5D_tCFD484131041FE6AEF088704B99CA1C6DC732B27;
struct FlattenedSelectorPartU5BU5D_t6A3A49EF6948716EE80F0909EB9C7D5526F19643;
struct GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE;
struct GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C;
struct GfxCopyBufferRangeU5BU5D_t0C98D54584A2EE1E36B6159C1A0F9644CF80A53C;
struct GfxUpdateBufferRangeU5BU5D_tE41D12E7B85611267BA408D468B0F0422B7D1F30;
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7;
struct HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD;
struct ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104;
struct DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE;
struct DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EmptyArray_1_t0542F0EB5C43D54C8F4ADCAB1E94F18AEA151867  : public RuntimeObject
{
};
struct EmptyArray_1_t910BE047C1A6E9E334831BFBF9773D3C3852ED95  : public RuntimeObject
{
};
struct EmptyArray_1_tA6E339CF983886C190886835190061C2E3B679F2  : public RuntimeObject
{
};
struct EmptyArray_1_t42D5099F7FCE2834141926DB372392B8C75ADBEC  : public RuntimeObject
{
};
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C  : public RuntimeObject
{
};
struct EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1  : public RuntimeObject
{
};
struct EmptyArray_1_tC72AE83DCB4E240E4B2AC2595448148BB03F9498  : public RuntimeObject
{
};
struct EmptyArray_1_tF01C5B6CDD56CDA122E6B85402777F31EE92A685  : public RuntimeObject
{
};
struct EmptyArray_1_tCE52674ADF71EC22E199D7DF299141790948751A  : public RuntimeObject
{
};
struct EmptyArray_1_tB029523A05EA2FFE1EB90490D66A384F7A0D4574  : public RuntimeObject
{
};
struct EmptyArray_1_t0605DD263F295CE065C4B24BC0263FB5067617EC  : public RuntimeObject
{
};
struct EmptyArray_1_t27401338DAB1F4C8F9B8E695AB18ABBBF6573E17  : public RuntimeObject
{
};
struct EmptyArray_1_t640F34C5C1351444FCE089711FFEF74161372D64  : public RuntimeObject
{
};
struct EmptyArray_1_t7B0255D5BEE03D8E592C7F4DB26CEE268619FD74  : public RuntimeObject
{
};
struct EmptyArray_1_t662659478531CA2736931D12958F36C14566158B  : public RuntimeObject
{
};
struct EmptyArray_1_t9D02D6D1FF8E81441083A08AA0F8970E511F0900  : public RuntimeObject
{
};
struct EmptyArray_1_t2AA231E0C904F8398D206EDF41018BEF22BD2325  : public RuntimeObject
{
};
struct EmptyArray_1_t2D4836FD2685619474AF41CBDA7A6813DB13F5CA  : public RuntimeObject
{
};
struct EmptyArray_1_t00CB7A66F677EBAF03269ABB2C35F4597F8AFA77  : public RuntimeObject
{
};
struct EmptyArray_1_t3264D01575877F752602C31CBF848A455D557C15  : public RuntimeObject
{
};
struct EmptyArray_1_tED25994B188B6892932012A3712E4921DCF8DC7F  : public RuntimeObject
{
};
struct EmptyArray_1_t17EE7504AE6D24875248A3EF47B2C95F7EF62984  : public RuntimeObject
{
};
struct EmptyArray_1_tFF976FF929BF18504D078013AD3BE659BC52BBEF  : public RuntimeObject
{
};
struct EmptyArray_1_t66497C3DB84E7A464A5EB5259FF8E3CE44C961D2  : public RuntimeObject
{
};
struct EmptyArray_1_tEE36C124EB5EC64529EC1C4323F97E3809663182  : public RuntimeObject
{
};
struct EmptyArray_1_t4EE5BABC44C01484425092F57C431BC60B239E5F  : public RuntimeObject
{
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F  : public RuntimeObject
{
};
struct EmptyArray_1_t2830E284F9E70287360502CE6203C9A09CFC27A9  : public RuntimeObject
{
};
struct ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Enumerator_t143FA65339CA8DBAF42C7A5253F96ACFFA4BCC41 
{
	NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
struct Enumerator_tA94B4F01B0C3AD75EB4E9169C8ED8F921F731D64 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
struct Enumerator_t1401BB8858A2A2ED1A0698D23EB25FD52FAC9B34 
{
	TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
struct Enumerator_t16D9D4B915D69801C90AC2FD471C13830683D064 
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
struct Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
struct Enumerator_t1858EB5DA113EEDAF7EDEE685C04492B2FBE9C6D 
{
	HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
struct Enumerator_tEDF92AFCC05D1B0B00370110CE3A4BE62C632C7C 
{
	ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
struct Enumerator_t924412C78294BC2600FCB913AF5CF4D5F45C239A 
{
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
struct Enumerator_t2B51120BAD814F6BF2C35804FB000B6FB85EDCDE 
{
	DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
struct InlinedArray_1_tFABE06D675C714FC44C09C36D7B9C908690ADEAD 
{
	int32_t ___length;
	Action_1_tA4CC4B05C836AB92F811D67AC960A6ED20CCCB7B* ___firstValue;
	Action_1U5BU5D_t18C922CAB85EAE463E29566305D718EF64B12A16* ___additionalValues;
};
struct InlinedArray_1_t1BB3E1C727E53B8F4342843F1042AFE85C5A70C3 
{
	int32_t ___length;
	Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE* ___firstValue;
	TouchscreenU5BU5D_t73D22E3D2A7039C6C374D75B796C8F83BCA897E3* ___additionalValues;
};
struct ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 
{
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41 
{
	NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 
{
	NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72 
{
	TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621 
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7 
{
	HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670 
{
	ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17 
{
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570 
{
	DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 
{
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___m_Owner;
	int32_t ___m_IndexPlusOne;
	uint32_t ___m_Version;
};
struct BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D 
{
	BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0* ___drawCommands;
	BatchDrawCommandIndirect_t06F3B5DC4AF7D4B115CEECDB0A1E4E92065BC705* ___indirectDrawCommands;
	BatchDrawCommandProcedural_t5780BD7745B5772AA54BA6E6021292F6A6553B86* ___proceduralDrawCommands;
	BatchDrawCommandProceduralIndirect_t8417CDF3495237CD8C9204B3DADC6BA4A1488B50* ___proceduralIndirectDrawCommands;
	int32_t* ___visibleInstances;
	BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F* ___drawRanges;
	float* ___instanceSortingPositions;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___drawCommandPickingEntityIds;
	int32_t ___drawCommandCount;
	int32_t ___indirectDrawCommandCount;
	int32_t ___proceduralDrawCommandCount;
	int32_t ___proceduralIndirectDrawCommandCount;
	int32_t ___visibleInstanceCount;
	int32_t ___drawRangeCount;
	int32_t ___instanceSortingPositionFloatCount;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F 
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField;
	RuntimeObject* ___U3CValueU3Ek__BackingField;
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_pinvoke
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField;
	Il2CppIUnknown* ___U3CValueU3Ek__BackingField;
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_com
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField;
	Il2CppIUnknown* ___U3CValueU3Ek__BackingField;
};
struct DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 
{
	int32_t ___firstIndex;
	int32_t ___indexCount;
	int32_t ___minIndexVal;
	int32_t ___vertsReferenced;
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			uint64_t ___m_rawData;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[8];
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	int32_t ___m_Code;
};
struct GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180 
{
	uint32_t ___srcOffset;
	uint32_t ___dstOffset;
	uint32_t ___size;
};
struct GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E 
{
	float ___m_XPlacement;
	float ___m_YPlacement;
	float ___m_XAdvance;
	float ___m_YAdvance;
};
struct HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 
{
	int32_t ___m_Id;
	int32_t ___m_Version;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	String_t* ___m_StringOriginalCase;
	String_t* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase;
	char* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase;
	Il2CppChar* ___m_StringLowerCase;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
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
struct U3Cm_FadeTransitionWidthsU3Ee__FixedBuffer_tC44EA0D00BAF5D4021A10861FE9C59C8804B21E4 
{
	union
	{
		struct
		{
			uint16_t ___FixedElementField;
		};
		uint8_t U3Cm_FadeTransitionWidthsU3Ee__FixedBuffer_tC44EA0D00BAF5D4021A10861FE9C59C8804B21E4__padding[16];
	};
};
struct U3Cm_RendererCountsU3Ee__FixedBuffer_t877AF3B14647FADCA74D2F1A1BBB59648DC5AE67 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_RendererCountsU3Ee__FixedBuffer_t877AF3B14647FADCA74D2F1A1BBB59648DC5AE67__padding[8];
	};
};
struct U3Cm_ScreenRelativeTransitionHeightsU3Ee__FixedBuffer_t2C41FA0F591BD145EEED3C0E09D6F04CD521B804 
{
	union
	{
		struct
		{
			uint16_t ___FixedElementField;
		};
		uint8_t U3Cm_ScreenRelativeTransitionHeightsU3Ee__FixedBuffer_t2C41FA0F591BD145EEED3C0E09D6F04CD521B804__padding[16];
	};
};
struct LodSelectionCurve_t5E3F99BC782C22E828074538B8B43051FF859713 
{
	float ___m_LodSlope;
	float ___m_LodBias;
};
struct ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F 
{
	intptr_t ____value;
};
struct ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 
{
	intptr_t ____value;
};
struct ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 
{
	intptr_t ____value;
};
struct ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B 
{
	intptr_t ____value;
};
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	intptr_t ____value;
};
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	intptr_t ____value;
};
struct ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 
{
	intptr_t ____value;
};
struct ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE 
{
	intptr_t ____value;
};
struct ByReference_1_t2C0A9D8C238DC2DEEFEA14FBC9E777B0AEFCD6F0 
{
	intptr_t ____value;
};
struct ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 
{
	intptr_t ____value;
};
struct ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB 
{
	intptr_t ____value;
};
struct ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 
{
	intptr_t ____value;
};
struct ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 
{
	intptr_t ____value;
};
struct ByReference_1_tA7F58D709342B3D9D7560427019EB2E4432E1EDA 
{
	intptr_t ____value;
};
struct ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 
{
	intptr_t ____value;
};
struct ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF 
{
	intptr_t ____value;
};
struct ByReference_1_tCBFED671C53B2B6095EBEF9264D493D000CFD8BB 
{
	intptr_t ____value;
};
struct ByReference_1_tA39086CECC388213B09BE44EA41243514E812960 
{
	intptr_t ____value;
};
struct ByReference_1_t0CF44D19E5248AED5E1176DD36BA980A15ED1036 
{
	intptr_t ____value;
};
struct ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 
{
	intptr_t ____value;
};
struct ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 
{
	intptr_t ____value;
};
struct ByReference_1_t20C57AC0C58BA602C5935D4968734182BCDCCF6E 
{
	intptr_t ____value;
};
struct ByReference_1_tE9792401E28CE6CB45136FFF6CFB63E2B0BFEB93 
{
	intptr_t ____value;
};
struct ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E 
{
	intptr_t ____value;
};
struct ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA 
{
	intptr_t ____value;
};
struct ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 
{
	intptr_t ____value;
};
struct ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 
{
	intptr_t ____value;
};
struct ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tFABE06D675C714FC44C09C36D7B9C908690ADEAD ___m_Callbacks;
	InlinedArray_1_tFABE06D675C714FC44C09C36D7B9C908690ADEAD ___m_CallbacksToAdd;
	InlinedArray_1_tFABE06D675C714FC44C09C36D7B9C908690ADEAD ___m_CallbacksToRemove;
};
struct ReadOnlyNativeVector_1_t0DE13C6BA89CEDB2D828D3F45AA93F7EC7AD4A0E 
{
	intptr_t ___m_Ptr;
	int32_t ___m_Count;
};
struct ReadOnlyNativeVector_1_t53A6814B9ECC2D21CA860DE85D9AEB86D11F6F17 
{
	intptr_t ___m_Ptr;
	int32_t ___m_Count;
};
struct ReadOnlyNativeVector_1_tE45C179B8DFEAD70E1F59D744D5C6999873C0FFC 
{
	intptr_t ___m_Ptr;
	int32_t ___m_Count;
};
struct ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E 
{
	intptr_t ___m_TextElementInfosPtr;
	int32_t ___m_TextElementCount;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___textAssetId;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct CollisionPairHeaderFlags_tBA40F470BC1564B84C3093CEA5761804FA0650C3 
{
	uint16_t ___value__;
};
struct ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C 
{
	intptr_t ___texCoord1Src;
	int32_t ___texCoord1SrcStride;
	int32_t ___texCoord1DstOffset;
	intptr_t ___texCoord2Src;
	int32_t ___texCoord2SrcStride;
	int32_t ___texCoord2DstOffset;
	intptr_t ___texCoord3Src;
	int32_t ___texCoord3SrcStride;
	int32_t ___texCoord3DstOffset;
	intptr_t ___normalSrc;
	int32_t ___normalSrcStride;
	int32_t ___normalDstOffset;
	intptr_t ___tangentSrc;
	int32_t ___tangentSrcStride;
	int32_t ___tangentDstOffset;
};
struct CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 
{
	intptr_t ___vertSrc;
	intptr_t ___vertDst;
	int32_t ___vertCount;
	int32_t ___vertStride;
	intptr_t ___indexSrc;
	intptr_t ___indexDst;
	int32_t ___indexCount;
	int32_t ___indexOffset;
};
struct CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sphereCenter;
	float ___sphereRadius;
	int32_t ___cullingPlaneOffset;
	int32_t ___cullingPlaneCount;
	float ___cascadeBlendCullingFactor;
	float ___nearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cullingMatrix;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___U3CTypedValueU3Ek__BackingField;
	bool ___U3CIsFieldU3Ek__BackingField;
	String_t* ___U3CMemberNameU3Ek__BackingField;
	Type_t* ____attributeType;
	MemberInfo_t* ____lazyMemberInfo;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshaled_pinvoke
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_pinvoke ___U3CTypedValueU3Ek__BackingField;
	int32_t ___U3CIsFieldU3Ek__BackingField;
	char* ___U3CMemberNameU3Ek__BackingField;
	Type_t* ____attributeType;
	MemberInfo_t* ____lazyMemberInfo;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshaled_com
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_com ___U3CTypedValueU3Ek__BackingField;
	int32_t ___U3CIsFieldU3Ek__BackingField;
	Il2CppChar* ___U3CMemberNameU3Ek__BackingField;
	Type_t* ____attributeType;
	MemberInfo_t* ____lazyMemberInfo;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct EasingMode_tEF87477B9B9EB2524525550AE5ABEBC00FC7B0DF 
{
	int32_t ___value__;
};
struct EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B 
{
	U3Cm_ScreenRelativeTransitionHeightsU3Ee__FixedBuffer_t2C41FA0F591BD145EEED3C0E09D6F04CD521B804 ___m_ScreenRelativeTransitionHeights;
	U3Cm_FadeTransitionWidthsU3Ee__FixedBuffer_tC44EA0D00BAF5D4021A10861FE9C59C8804B21E4 ___m_FadeTransitionWidths;
	U3Cm_RendererCountsU3Ee__FixedBuffer_t877AF3B14647FADCA74D2F1A1BBB59648DC5AE67 ___m_RendererCounts;
	uint8_t ___m_Length;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct FilterParameterType_t7250262A78079140235AAFF6F4FA3CCB2F99E390 
{
	int32_t ___value__;
};
struct FontFeatureLookupFlags_t2000121BA341A3CAE5E0D4FAC6AA4378FE14AE1B 
{
	int32_t ___value__;
};
struct GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 
{
	int32_t ___subMeshCount;
	int32_t ___meshLodCount;
	LodSelectionCurve_t5E3F99BC782C22E828074538B8B43051FF859713 ___meshLodSelectionCurve;
};
struct GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C 
{
	uint32_t ___offsetFromWriteStart;
	uint32_t ___size;
	uintptr_t ___source;
};
struct GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 
{
	uint32_t ___m_GlyphIndex;
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___m_GlyphValueRecord;
};
struct InputUpdateType_t31A66F5342D924983382FA675EF78007C04EC590 
{
	int32_t ___value__;
};
struct MeshTopology_t815FF5CF04D62195A23E2DF8A5C0A071F11FBCBF 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SelectorAccelerationTableType_t29E86C4FCF992B838F757327FF6002927A251B9A 
{
	int32_t ___value__;
};
struct StyleSelectorRelationship_tAABCDC80BF87B347ACE1C64B32C85B05268A7F9E 
{
	int32_t ___value__;
};
struct StyleSelectorType_t425962DE6D175F785FA2B5554D793B71D39430A3 
{
	int32_t ___value__;
};
struct TextCoreSettingsMode_t335FCFC221A752C14314BF46F1043A24FB2C8568 
{
	int32_t ___value__;
};
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 
{
	Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* ___m_Finger;
	Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 ___m_TouchRecord;
};
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_pinvoke
{
	Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* ___m_Finger;
	Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 ___m_TouchRecord;
};
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_com
{
	Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* ___m_Finger;
	Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 ___m_TouchRecord;
};
struct TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79 
{
	int32_t ___value__;
};
struct VertexFlags_t4332E863C191870E63009EBE5F6E77D6D176C4FF 
{
	uint16_t ___value__;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct UsagePage_t6EF545F107AB1DED99B07C377BD0B8457DC6F7B8 
{
	int32_t ___value__;
};
struct DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 
{
	int32_t ___m_DeviceId;
	String_t* ___m_Layout;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_StateFormat;
	int32_t ___m_StateSizeInBytes;
	String_t* ___m_FullLayoutJson;
};
struct DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52_marshaled_pinvoke
{
	int32_t ___m_DeviceId;
	char* ___m_Layout;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_StateFormat;
	int32_t ___m_StateSizeInBytes;
	char* ___m_FullLayoutJson;
};
struct DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52_marshaled_com
{
	int32_t ___m_DeviceId;
	Il2CppChar* ___m_Layout;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_StateFormat;
	int32_t ___m_StateSizeInBytes;
	Il2CppChar* ___m_FullLayoutJson;
};
struct UpdateMode_tCD49766B755C4CD8E1F2DE8D57798DAC2C5CBF32 
{
	int32_t ___value__;
};
struct Flags_t36D5070200D1061BA68BF41808748FA000DEE57C 
{
	int32_t ___value__;
};
struct Flags_t1E712B23AAE0C9B46749E115A88CF844D5AD1C33 
{
	int32_t ___value__;
};
struct ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 
{
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99 
{
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B 
{
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962 
{
	ByReference_1_t2C0A9D8C238DC2DEEFEA14FBC9E777B0AEFCD6F0 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A 
{
	ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA 
{
	ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF 
{
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B 
{
	ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7 
{
	ByReference_1_tA7F58D709342B3D9D7560427019EB2E4432E1EDA ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744 
{
	ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 
{
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27 
{
	ByReference_1_tCBFED671C53B2B6095EBEF9264D493D000CFD8BB ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A 
{
	ByReference_1_tA39086CECC388213B09BE44EA41243514E812960 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D 
{
	ByReference_1_t0CF44D19E5248AED5E1176DD36BA980A15ED1036 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60 
{
	ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95 
{
	ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB 
{
	ByReference_1_t20C57AC0C58BA602C5935D4968734182BCDCCF6E ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C 
{
	ByReference_1_tE9792401E28CE6CB45136FFF6CFB63E2B0BFEB93 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032 
{
	ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97 
{
	ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71 
{
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 
{
	int32_t ___type;
	int32_t ___uniqueStringId;
};
struct Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 
{
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F ____pointer;
	int32_t ____length;
};
struct Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 ____pointer;
	int32_t ____length;
};
struct Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 ____pointer;
	int32_t ____length;
};
struct Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 
{
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B ____pointer;
	int32_t ____length;
};
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 ____pointer;
	int32_t ____length;
};
struct Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 
{
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE ____pointer;
	int32_t ____length;
};
struct Span_1_tFD51B8D0B2DA78C0F911056FC60AB6B732AD4F7C 
{
	ByReference_1_t2C0A9D8C238DC2DEEFEA14FBC9E777B0AEFCD6F0 ____pointer;
	int32_t ____length;
};
struct Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48 
{
	ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 ____pointer;
	int32_t ____length;
};
struct Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30 
{
	ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB ____pointer;
	int32_t ____length;
};
struct Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 
{
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 ____pointer;
	int32_t ____length;
};
struct Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73 
{
	ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 ____pointer;
	int32_t ____length;
};
struct Span_1_t43234050271CE7DE614C13A0021A344861FB5593 
{
	ByReference_1_tA7F58D709342B3D9D7560427019EB2E4432E1EDA ____pointer;
	int32_t ____length;
};
struct Span_1_t6834048668549DB2E233F0E7E8E71F1E3AFDE712 
{
	ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 ____pointer;
	int32_t ____length;
};
struct Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A 
{
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF ____pointer;
	int32_t ____length;
};
struct Span_1_t420A830887305E0E02A744003AACBACED16172EB 
{
	ByReference_1_tCBFED671C53B2B6095EBEF9264D493D000CFD8BB ____pointer;
	int32_t ____length;
};
struct Span_1_tD4A141E2CAE7DFB331921ECC10AB8884452E2784 
{
	ByReference_1_tA39086CECC388213B09BE44EA41243514E812960 ____pointer;
	int32_t ____length;
};
struct Span_1_tF25812E0445523D140232909284012C24E110428 
{
	ByReference_1_t0CF44D19E5248AED5E1176DD36BA980A15ED1036 ____pointer;
	int32_t ____length;
};
struct Span_1_tBFB0B8ED6E219789174070F50BFF3D1D12DDADA4 
{
	ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 ____pointer;
	int32_t ____length;
};
struct Span_1_t811A307E8A2376175E0D75B7D539482FEAFD8A2E 
{
	ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 ____pointer;
	int32_t ____length;
};
struct Span_1_t8DC512B157818570466D5394923815D2AC18CA1C 
{
	ByReference_1_t20C57AC0C58BA602C5935D4968734182BCDCCF6E ____pointer;
	int32_t ____length;
};
struct Span_1_tB93B3BC3E7EA509CCF751F8460FFA592FF1D1A68 
{
	ByReference_1_tE9792401E28CE6CB45136FFF6CFB63E2B0BFEB93 ____pointer;
	int32_t ____length;
};
struct Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB 
{
	ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E ____pointer;
	int32_t ____length;
};
struct Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C 
{
	ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA ____pointer;
	int32_t ____length;
};
struct Span_1_tC1B695440A1567664C2665D76D5614739FDF453D 
{
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 ____pointer;
	int32_t ____length;
};
struct Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer;
	int32_t ____length;
};
struct Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_BodyID;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_OtherBodyID;
	intptr_t ___m_StartPtr;
	uint32_t ___m_NbPairs;
	uint16_t ___m_Flags;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ThisBodyLinearVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ThisBodyAngularVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_OtherBodyLinearVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_OtherBodyAngularVelocity;
};
struct ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 
{
	intptr_t ___vertSrc;
	intptr_t ___vertDst;
	int32_t ___vertCount;
	int32_t ___vertStride;
	uint16_t ___clipRectId;
	uint16_t ___elementId;
	uint16_t ___dynamicColorOrTextCoreId;
	uint16_t ___flags;
	uint16_t ___textureId;
	uint16_t ___gradientSettingsIndexOffset;
	int32_t ___usesTextCoreSettings;
	intptr_t ___indexSrc;
	intptr_t ___indexDst;
	int32_t ___indexCount;
	int32_t ___indexOffset;
	int32_t ___flipIndices;
	int32_t ___forceZ;
	float ___positionZ;
	int32_t ___remapUVs;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___atlasRect;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___layoutSize;
	intptr_t ___extras;
};
struct EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 
{
	int32_t ___m_Mode;
};
struct FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 
{
	int32_t ___m_Type;
	float ___m_FloatValue;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorValue;
};
struct FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9 
{
	int32_t ___partsStart;
	int32_t ___pseudoStateMask;
	int32_t ___negatedPseudoStateMask;
	int32_t ___previousRelationship;
	uint16_t ___partCount;
};
struct FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986 
{
	int32_t ___uniqueStringId;
	int32_t ___type;
};
struct GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B 
{
	int32_t ___topology;
	uint32_t ___baseVertex;
	uint32_t ___indexStart;
	uint32_t ___indexCount;
};
struct GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E 
{
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_FirstAdjustmentRecord;
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_SecondAdjustmentRecord;
	int32_t ___m_FeatureLookupFlags;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			bool ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			Il2CppChar ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			int32_t ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			uint8_t ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			int32_t ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			uint8_t ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F 
{
	int32_t ___page;
	int32_t ___usage;
};
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 
{
	String_t* ___m_ControlPath;
	int32_t ___m_Flags;
};
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke
{
	char* ___m_ControlPath;
	int32_t ___m_Flags;
};
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com
{
	Il2CppChar* ___m_ControlPath;
	int32_t ___m_Flags;
};
struct FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D 
{
	int32_t ___updateMask;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___fingers;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___activeFingers;
	TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* ___activeTouches;
	int32_t ___activeFingerCount;
	int32_t ___activeTouchCount;
	int32_t ___totalFingerCount;
	uint32_t ___lastId;
	bool ___haveBuiltActiveTouches;
	bool ___haveActiveTouchesNeedingRefreshNextUpdate;
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___activeTouchState;
};
struct FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D_marshaled_pinvoke
{
	int32_t ___updateMask;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___fingers;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___activeFingers;
	Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_pinvoke* ___activeTouches;
	int32_t ___activeFingerCount;
	int32_t ___activeTouchCount;
	int32_t ___totalFingerCount;
	uint32_t ___lastId;
	int32_t ___haveBuiltActiveTouches;
	int32_t ___haveActiveTouchesNeedingRefreshNextUpdate;
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___activeTouchState;
};
struct FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D_marshaled_com
{
	int32_t ___updateMask;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___fingers;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___activeFingers;
	Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_com* ___activeTouches;
	int32_t ___activeFingerCount;
	int32_t ___activeTouchCount;
	int32_t ___totalFingerCount;
	uint32_t ___lastId;
	int32_t ___haveBuiltActiveTouches;
	int32_t ___haveActiveTouchesNeedingRefreshNextUpdate;
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___activeTouchState;
};
struct Predicate_1_tECA06EB82DA6AEBC4F101B945A192111822901DD  : public MulticastDelegate_t
{
};
struct Predicate_1_t8BFFAEFC5F80E3A5CD534EFA1FCE8E02111F2938  : public MulticastDelegate_t
{
};
struct Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88  : public MulticastDelegate_t
{
};
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107  : public MulticastDelegate_t
{
};
struct Predicate_1_t307A0D6E571F6E29070EB62217398E9D4D45C556  : public MulticastDelegate_t
{
};
struct Predicate_1_tCC6C1019817F23EFFAC06C8D0EDD8803C71D54E4  : public MulticastDelegate_t
{
};
struct Predicate_1_t81E65ECFCC613C16F7408ECA5D3D94536697174D  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED 
{
	String_t* ___U3CnameU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___U3CvalueU3Ek__BackingField;
};
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___U3CvalueU3Ek__BackingField;
};
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___U3CvalueU3Ek__BackingField;
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD 
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___U3CnameU3Ek__BackingField;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___U3ClayoutU3Ek__BackingField;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___U3CvariantsU3Ek__BackingField;
	String_t* ___U3CuseStateFromU3Ek__BackingField;
	String_t* ___U3CdisplayNameU3Ek__BackingField;
	String_t* ___U3CshortDisplayNameU3Ek__BackingField;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CusagesU3Ek__BackingField;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CaliasesU3Ek__BackingField;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField;
	ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41 ___U3CprocessorsU3Ek__BackingField;
	uint32_t ___U3CoffsetU3Ek__BackingField;
	uint32_t ___U3CbitU3Ek__BackingField;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField;
	int32_t ___U3CflagsU3Ek__BackingField;
	int32_t ___U3CarraySizeU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___U3CdefaultStateU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___U3CminValueU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___U3CmaxValueU3Ek__BackingField;
};
struct ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD_marshaled_pinvoke
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke ___U3CnameU3Ek__BackingField;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke ___U3ClayoutU3Ek__BackingField;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke ___U3CvariantsU3Ek__BackingField;
	char* ___U3CuseStateFromU3Ek__BackingField;
	char* ___U3CdisplayNameU3Ek__BackingField;
	char* ___U3CshortDisplayNameU3Ek__BackingField;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CusagesU3Ek__BackingField;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CaliasesU3Ek__BackingField;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField;
	ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41 ___U3CprocessorsU3Ek__BackingField;
	uint32_t ___U3CoffsetU3Ek__BackingField;
	uint32_t ___U3CbitU3Ek__BackingField;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField;
	int32_t ___U3CflagsU3Ek__BackingField;
	int32_t ___U3CarraySizeU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___U3CdefaultStateU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___U3CminValueU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___U3CmaxValueU3Ek__BackingField;
};
struct ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD_marshaled_com
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com ___U3CnameU3Ek__BackingField;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com ___U3ClayoutU3Ek__BackingField;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com ___U3CvariantsU3Ek__BackingField;
	Il2CppChar* ___U3CuseStateFromU3Ek__BackingField;
	Il2CppChar* ___U3CdisplayNameU3Ek__BackingField;
	Il2CppChar* ___U3CshortDisplayNameU3Ek__BackingField;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CusagesU3Ek__BackingField;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CaliasesU3Ek__BackingField;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField;
	ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41 ___U3CprocessorsU3Ek__BackingField;
	uint32_t ___U3CoffsetU3Ek__BackingField;
	uint32_t ___U3CbitU3Ek__BackingField;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField;
	int32_t ___U3CflagsU3Ek__BackingField;
	int32_t ___U3CarraySizeU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___U3CdefaultStateU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___U3CminValueU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___U3CmaxValueU3Ek__BackingField;
};
struct GlobalState_tFDD5D3FE93083EE02E4E8987E61A5D7D5F5CE61A 
{
	InlinedArray_1_t1BB3E1C727E53B8F4342843F1042AFE85C5A70C3 ___touchscreens;
	int32_t ___historyLengthPerFinger;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerDown;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerMove;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerUp;
	int32_t ___enhancedTouchEnabled;
	int32_t ___enhancedTouchUpdateMode;
	FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D ___playerState;
};
struct GlobalState_tFDD5D3FE93083EE02E4E8987E61A5D7D5F5CE61A_marshaled_pinvoke
{
	InlinedArray_1_t1BB3E1C727E53B8F4342843F1042AFE85C5A70C3 ___touchscreens;
	int32_t ___historyLengthPerFinger;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerDown;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerMove;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerUp;
	int32_t ___enhancedTouchEnabled;
	int32_t ___enhancedTouchUpdateMode;
	FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D_marshaled_pinvoke ___playerState;
};
struct GlobalState_tFDD5D3FE93083EE02E4E8987E61A5D7D5F5CE61A_marshaled_com
{
	InlinedArray_1_t1BB3E1C727E53B8F4342843F1042AFE85C5A70C3 ___touchscreens;
	int32_t ___historyLengthPerFinger;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerDown;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerMove;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerUp;
	int32_t ___enhancedTouchEnabled;
	int32_t ___enhancedTouchUpdateMode;
	FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D_marshaled_com ___playerState;
};
struct Predicate_1_tDF40C5B214B8C1CD42C03A302327D001EDCFE1A0  : public MulticastDelegate_t
{
};
struct Predicate_1_tDA45FFEC703500A529E702D9733C1C2095D663FC  : public MulticastDelegate_t
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct EmptyArray_1_t0542F0EB5C43D54C8F4ADCAB1E94F18AEA151867_StaticFields
{
	SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* ___Value;
};
struct EmptyArray_1_t910BE047C1A6E9E334831BFBF9773D3C3852ED95_StaticFields
{
	ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* ___Value;
};
struct EmptyArray_1_tA6E339CF983886C190886835190061C2E3B679F2_StaticFields
{
	BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* ___Value;
};
struct EmptyArray_1_t42D5099F7FCE2834141926DB372392B8C75ADBEC_StaticFields
{
	BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* ___Value;
};
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Value;
};
struct EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___Value;
};
struct EmptyArray_1_tC72AE83DCB4E240E4B2AC2595448148BB03F9498_StaticFields
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___Value;
};
struct EmptyArray_1_tF01C5B6CDD56CDA122E6B85402777F31EE92A685_StaticFields
{
	ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* ___Value;
};
struct EmptyArray_1_tCE52674ADF71EC22E199D7DF299141790948751A_StaticFields
{
	ConvertMeshExtrasDataU5BU5D_t1420B76450ADCE1EE0AD98D00A25825A1DA9EE38* ___Value;
};
struct EmptyArray_1_tB029523A05EA2FFE1EB90490D66A384F7A0D4574_StaticFields
{
	ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* ___Value;
};
struct EmptyArray_1_t0605DD263F295CE065C4B24BC0263FB5067617EC_StaticFields
{
	CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* ___Value;
};
struct EmptyArray_1_t27401338DAB1F4C8F9B8E695AB18ABBBF6573E17_StaticFields
{
	CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* ___Value;
};
struct EmptyArray_1_t640F34C5C1351444FCE089711FFEF74161372D64_StaticFields
{
	DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* ___Value;
};
struct EmptyArray_1_t7B0255D5BEE03D8E592C7F4DB26CEE268619FD74_StaticFields
{
	EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49* ___Value;
};
struct EmptyArray_1_t662659478531CA2736931D12958F36C14566158B_StaticFields
{
	EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* ___Value;
};
struct EmptyArray_1_t9D02D6D1FF8E81441083A08AA0F8970E511F0900_StaticFields
{
	EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* ___Value;
};
struct EmptyArray_1_t2AA231E0C904F8398D206EDF41018BEF22BD2325_StaticFields
{
	FilterParameterU5BU5D_t0EF6EE29F03D6988D16E72B9209B753EE379FF58* ___Value;
};
struct EmptyArray_1_t2D4836FD2685619474AF41CBDA7A6813DB13F5CA_StaticFields
{
	FlattenedSelectorU5BU5D_tCFD484131041FE6AEF088704B99CA1C6DC732B27* ___Value;
};
struct EmptyArray_1_t00CB7A66F677EBAF03269ABB2C35F4597F8AFA77_StaticFields
{
	FlattenedSelectorPartU5BU5D_t6A3A49EF6948716EE80F0909EB9C7D5526F19643* ___Value;
};
struct EmptyArray_1_t3264D01575877F752602C31CBF848A455D557C15_StaticFields
{
	GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* ___Value;
};
struct EmptyArray_1_tED25994B188B6892932012A3712E4921DCF8DC7F_StaticFields
{
	GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* ___Value;
};
struct EmptyArray_1_t17EE7504AE6D24875248A3EF47B2C95F7EF62984_StaticFields
{
	GfxCopyBufferRangeU5BU5D_t0C98D54584A2EE1E36B6159C1A0F9644CF80A53C* ___Value;
};
struct EmptyArray_1_tFF976FF929BF18504D078013AD3BE659BC52BBEF_StaticFields
{
	GfxUpdateBufferRangeU5BU5D_tE41D12E7B85611267BA408D468B0F0422B7D1F30* ___Value;
};
struct EmptyArray_1_t66497C3DB84E7A464A5EB5259FF8E3CE44C961D2_StaticFields
{
	GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___Value;
};
struct EmptyArray_1_tEE36C124EB5EC64529EC1C4323F97E3809663182_StaticFields
{
	HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* ___Value;
};
struct EmptyArray_1_t4EE5BABC44C01484425092F57C431BC60B239E5F_StaticFields
{
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___Value;
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Value;
};
struct EmptyArray_1_t2830E284F9E70287360502CE6203C9A09CFC27A9_StaticFields
{
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___Value;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_StaticFields
{
	HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 ___s_Null;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_StaticFields
{
	GlobalState_tFDD5D3FE93083EE02E4E8987E61A5D7D5F5CE61A ___s_GlobalState;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A  : public RuntimeArray
{
	ALIGN_FIELD (8) NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED m_Items[1];

	inline NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CnameU3Ek__BackingField), (void*)NULL);
	}
	inline NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CnameU3Ek__BackingField), (void*)NULL);
	}
};
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
struct TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354  : public RuntimeArray
{
	ALIGN_FIELD (8) Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 m_Items[1];

	inline Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Finger), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_TouchRecord))->___m_Owner), (void*)NULL);
		#endif
	}
	inline Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Finger), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_TouchRecord))->___m_Owner), (void*)NULL);
		#endif
	}
};
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD  : public RuntimeArray
{
	ALIGN_FIELD (8) HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F m_Items[1];

	inline HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F value)
	{
		m_Items[index] = value;
	}
};
struct ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104  : public RuntimeArray
{
	ALIGN_FIELD (8) ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD m_Items[1];

	inline ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CnameU3Ek__BackingField))->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CnameU3Ek__BackingField))->___m_StringLowerCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3ClayoutU3Ek__BackingField))->___m_StringOriginalCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3ClayoutU3Ek__BackingField))->___m_StringLowerCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CvariantsU3Ek__BackingField))->___m_StringOriginalCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CvariantsU3Ek__BackingField))->___m_StringLowerCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CuseStateFromU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CdisplayNameU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CshortDisplayNameU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CusagesU3Ek__BackingField))->___m_Array), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CaliasesU3Ek__BackingField))->___m_Array), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CparametersU3Ek__BackingField))->___m_Array), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CprocessorsU3Ek__BackingField))->___m_Array), (void*)NULL);
		#endif
	}
	inline ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CnameU3Ek__BackingField))->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CnameU3Ek__BackingField))->___m_StringLowerCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3ClayoutU3Ek__BackingField))->___m_StringOriginalCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3ClayoutU3Ek__BackingField))->___m_StringLowerCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CvariantsU3Ek__BackingField))->___m_StringOriginalCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CvariantsU3Ek__BackingField))->___m_StringLowerCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CuseStateFromU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CdisplayNameU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CshortDisplayNameU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CusagesU3Ek__BackingField))->___m_Array), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CaliasesU3Ek__BackingField))->___m_Array), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CparametersU3Ek__BackingField))->___m_Array), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CprocessorsU3Ek__BackingField))->___m_Array), (void*)NULL);
		#endif
	}
};
struct DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE  : public RuntimeArray
{
	ALIGN_FIELD (8) DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 m_Items[1];

	inline DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ControlPath), (void*)NULL);
	}
	inline DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ControlPath), (void*)NULL);
	}
};
struct DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A  : public RuntimeArray
{
	ALIGN_FIELD (8) DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 m_Items[1];

	inline DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Layout), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_FullLayoutJson), (void*)NULL);
		#endif
	}
	inline DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Layout), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_FullLayoutJson), (void*)NULL);
		#endif
	}
};
struct CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440  : public RuntimeArray
{
	ALIGN_FIELD (8) CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 m_Items[1];

	inline CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CTypedValueU3Ek__BackingField))->___U3CArgumentTypeU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CTypedValueU3Ek__BackingField))->___U3CValueU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CMemberNameU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____attributeType), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____lazyMemberInfo), (void*)NULL);
		#endif
	}
	inline CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CTypedValueU3Ek__BackingField))->___U3CArgumentTypeU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CTypedValueU3Ek__BackingField))->___U3CValueU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CMemberNameU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____attributeType), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____lazyMemberInfo), (void*)NULL);
		#endif
	}
};
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
struct CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B  : public RuntimeArray
{
	ALIGN_FIELD (8) CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F m_Items[1];

	inline CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CArgumentTypeU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CValueU3Ek__BackingField), (void*)NULL);
		#endif
	}
	inline CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CArgumentTypeU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CValueU3Ek__BackingField), (void*)NULL);
		#endif
	}
};
struct SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06  : public RuntimeArray
{
	ALIGN_FIELD (8) SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 m_Items[1];

	inline SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 value)
	{
		m_Items[index] = value;
	}
};
struct ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F  : public RuntimeArray
{
	ALIGN_FIELD (8) ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E m_Items[1];

	inline ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E value)
	{
		m_Items[index] = value;
	}
};
struct BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80  : public RuntimeArray
{
	ALIGN_FIELD (8) BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D m_Items[1];

	inline BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D value)
	{
		m_Items[index] = value;
	}
};
struct BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5  : public RuntimeArray
{
	ALIGN_FIELD (8) Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 m_Items[1];

	inline Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 value)
	{
		m_Items[index] = value;
	}
};
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
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
struct ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A  : public RuntimeArray
{
	ALIGN_FIELD (8) ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B m_Items[1];

	inline ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B value)
	{
		m_Items[index] = value;
	}
};
struct ConvertMeshExtrasDataU5BU5D_t1420B76450ADCE1EE0AD98D00A25825A1DA9EE38  : public RuntimeArray
{
	ALIGN_FIELD (8) ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C m_Items[1];

	inline ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C value)
	{
		m_Items[index] = value;
	}
};
struct ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2  : public RuntimeArray
{
	ALIGN_FIELD (8) ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 m_Items[1];

	inline ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 value)
	{
		m_Items[index] = value;
	}
};
struct CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5  : public RuntimeArray
{
	ALIGN_FIELD (8) CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 m_Items[1];

	inline CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 value)
	{
		m_Items[index] = value;
	}
};
struct CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61  : public RuntimeArray
{
	ALIGN_FIELD (8) CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 m_Items[1];

	inline CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 value)
	{
		m_Items[index] = value;
	}
};
struct DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB  : public RuntimeArray
{
	ALIGN_FIELD (8) DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 m_Items[1];

	inline DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 value)
	{
		m_Items[index] = value;
	}
};
struct EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49  : public RuntimeArray
{
	ALIGN_FIELD (8) EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 m_Items[1];

	inline EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 value)
	{
		m_Items[index] = value;
	}
};
struct EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1  : public RuntimeArray
{
	ALIGN_FIELD (8) EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B m_Items[1];

	inline EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B value)
	{
		m_Items[index] = value;
	}
};
struct EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9  : public RuntimeArray
{
	ALIGN_FIELD (8) EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 m_Items[1];

	inline EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 value)
	{
		m_Items[index] = value;
	}
};
struct FilterParameterU5BU5D_t0EF6EE29F03D6988D16E72B9209B753EE379FF58  : public RuntimeArray
{
	ALIGN_FIELD (8) FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 m_Items[1];

	inline FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 value)
	{
		m_Items[index] = value;
	}
};
struct FlattenedSelectorU5BU5D_tCFD484131041FE6AEF088704B99CA1C6DC732B27  : public RuntimeArray
{
	ALIGN_FIELD (8) FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9 m_Items[1];

	inline FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9 value)
	{
		m_Items[index] = value;
	}
};
struct FlattenedSelectorPartU5BU5D_t6A3A49EF6948716EE80F0909EB9C7D5526F19643  : public RuntimeArray
{
	ALIGN_FIELD (8) FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986 m_Items[1];

	inline FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986 value)
	{
		m_Items[index] = value;
	}
};
struct GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE  : public RuntimeArray
{
	ALIGN_FIELD (8) GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 m_Items[1];

	inline GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 value)
	{
		m_Items[index] = value;
	}
};
struct GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C  : public RuntimeArray
{
	ALIGN_FIELD (8) GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B m_Items[1];

	inline GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B value)
	{
		m_Items[index] = value;
	}
};
struct GfxCopyBufferRangeU5BU5D_t0C98D54584A2EE1E36B6159C1A0F9644CF80A53C  : public RuntimeArray
{
	ALIGN_FIELD (8) GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180 m_Items[1];

	inline GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180 value)
	{
		m_Items[index] = value;
	}
};
struct GfxUpdateBufferRangeU5BU5D_tE41D12E7B85611267BA408D468B0F0422B7D1F30  : public RuntimeArray
{
	ALIGN_FIELD (8) GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C m_Items[1];

	inline GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C value)
	{
		m_Items[index] = value;
	}
};
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7  : public RuntimeArray
{
	ALIGN_FIELD (8) GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E m_Items[1];

	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E value)
	{
		m_Items[index] = value;
	}
};
struct HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2  : public RuntimeArray
{
	ALIGN_FIELD (8) HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 m_Items[1];

	inline HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 value)
	{
		m_Items[index] = value;
	}
};
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832  : public RuntimeArray
{
	ALIGN_FIELD (8) intptr_t m_Items[1];

	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mF0C8DA1DA703B904663C8A97313FAA5D06CBB8AA_inline (Predicate_1_tDF40C5B214B8C1CD42C03A302327D001EDCFE1A0* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF76B641C6ECC5D55DD0ADE99D55E00E1A84C58D5 (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m1220E5552C080069CA1DB5186448FEF2FBCF6692 (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ReadOnlyArray_1_get_Item_m69AFBAAD6EB0E82AA39F56E13EF7F7B8FDA974FF (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m4E65B2A24A1D224A284A6E2ECCA25CD11AFDE9F3_inline (Predicate_1_tECA06EB82DA6AEBC4F101B945A192111822901DD* __this, float ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF45CF2D20F176A7517D5596DBD5CABBE3F583DB1 (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m183917F865C80BA68B0BE301A8C4DB2394B8F7A2 (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ReadOnlyArray_1_get_Item_m04330518DA15D9B10349F6FCBFB201DAFCC75747 (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m22832669961C128D8C09CB0A3CCE145415A88EED_inline (Predicate_1_t8BFFAEFC5F80E3A5CD534EFA1FCE8E02111F2938* __this, Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m9F9511167D21F99F4C841B8AC7BC928F047987A0 (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mE548447BF22930F50681C90BE4B234382E355F49 (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 ReadOnlyArray_1_get_Item_mF89401BF1E594CF00433FFAC12A3B3D321A44B37 (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_gshared_inline (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m2A273E366CAC3B638F05EFEA8E5A9E2E6763C0DC_gshared (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m8EC8B00B49A945C66D0D6BB21808DD371742C6FC_gshared (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ReadOnlyArray_1_get_Item_m2A4378A69F83291D4208F4A6617C63102E636EA3_gshared (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF961799B5F1CC1D9AEAC1E22C8F93C2EAC4E885B_fshared (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m07F14F7DAB994A9F281140C0BF87018235B5A139_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m06A064933B88C1878F75CD6984F5DCB5AA7BB726_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArray_1__ctor_m064B80B55276E5435A8AE6B652892FD7F6E8957B_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_get_Count_m62C68097BC568BB0615B56865FDD0C504C545261_fshared_inline (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArray_1_get_Item_mE4191E8B0D91DB7694107E09A98F2A084F2DF2F4_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m4F023DF8E8468E87CB5569D387D77C7D8EB411AA_inline (Predicate_1_t307A0D6E571F6E29070EB62217398E9D4D45C556* __this, HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m57A507096526418260D0E30361B6FAFC0A4C6454 (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m4FCD702E63DD1C581A6C4BE41B830C43FD048371 (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F ReadOnlyArray_1_get_Item_m1BEFFB3B6F62DAA475BFD462C7D0960755A950DB (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m697CA3A3C779F42ADA3F92BA3EE92B14B21A84DE_inline (Predicate_1_tDA45FFEC703500A529E702D9733C1C2095D663FC* __this, ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m7A9E19F7C6223CA15D490282B01CB9A4FD57C595 (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mB930858409D2AD8EF5DF95A5AF3167ED5D1F0F0B (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD ReadOnlyArray_1_get_Item_mEFFFDCA2553F1C3B52903479ED4A2F57AE42CBBB (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m3D04DB85F71978F48F2AC57D40AE436776C837F8_inline (Predicate_1_tCC6C1019817F23EFFAC06C8D0EDD8803C71D54E4* __this, DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF78BDC237CBE6E662F7A55C37142AD8ADEE4CA55 (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m775BC2314063FE7F3B00F14A4D9DE6FEAA424F5F (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 ReadOnlyArray_1_get_Item_m3C26D8D16A39B39ACAA2055880C770EF5841B083 (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m05FFB4723D44E5790A3F5FC7923C79882D0B0003_inline (Predicate_1_t81E65ECFCC613C16F7408ECA5D3D94536697174D* __this, DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m0EDE2550B1D70ECE3E72979559648052CB9C7D12 (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mE5CCEC702B75D77193949F2C716E6229BEDED58A (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 ReadOnlyArray_1_get_Item_mDFB5E4BE282F80EE3CF856F0DD06DD5BD72B8B2A (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m6B6BE788B018E462AB49965C9BF42835AA0F40FE (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC010A5256D19EE219546ED424AE97F0D94A1E97E (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m54E213256F6E5A5649AC292E96F3858D2F3B3AA0 (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mB23F2D0BBC3186365E72E6FB4BC47AAB1686211B (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mB07E1D8A7EE4081EF3A7DBD0369DB07BAB1365B2 (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m7FE8864771813C869EECD0FC9B3518D2617F47DB (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mA2DC89076EDA7FAE081CB1EBB0F544D3E25E992E (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m6FE656D0B1AC159B2743D580A2BE9B8BE8FE9654 (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m9AF1774FE249CFF994683344F3395D6C45BA74EB_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m6524BB7810330224C17351742769CA098CC80929_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mCA382B62077A4FA1B0D0F387651E41770EC39690_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mFC9BAC0925D44B0206E5F9250E502C86E0FE33EC_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m8B225EBD79F98163072E7428252E4FDAFE5A3E1A (SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___0_destination, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* Array_Empty_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m4433599FD227186796BAB47DC5BED2AF106ED67E_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_left, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_mF7B64A7A3AED5F75779174F1164B6D60E51A6215 (ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___0_destination, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* Array_Empty_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_m5293579F263F9A3750FDFA1AA45718B28873BFBB_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B (BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_destination, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* Array_Empty_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m652D1F78F0DEF31A60A1D09589A89DE06F12C3E4_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m4925E1D88272BE2E628F28AFFEC4FF09CC2EC647 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_destination, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* Array_Empty_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mB6CFBB5D8AF33F0BAE72154209AB29B8D52FBCDA_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190 (uint8_t* ___0_destination, uint8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446 (Il2CppChar* ___0_destination, Il2CppChar* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68 (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_destination, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Array_Empty_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5B415C4745E47108DD9258EBCCB422EFD6B8A0EB_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m7B231E78B8FBBF3128AC7D5D9AA1EF250AB8BBB7 (ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___0_destination, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* Array_Empty_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m2AE4E8C460D733DF5362B246ED865C5CE0C4AA60_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C_m25EF20C7583AB5F948F033EAAAD3726E13608167 (ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C* ___0_destination, ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConvertMeshExtrasDataU5BU5D_t1420B76450ADCE1EE0AD98D00A25825A1DA9EE38* Array_Empty_TisConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C_m4779104F7674EACD211A240162D4414087C431E8_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m747B7D7DC0AA466783F69D3676EC5EE854D08D52 (ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* ___0_destination, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* Array_Empty_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m164EDF2519D24430C10F8BB106ADB252BF225C26_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m8A5B65BF262A2B1C988311D13733E08E197C8A03 (CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* ___0_destination, CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* Array_Empty_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m636107AFEDC2888AAD9A190C5FCB115D4483F86F_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m9A4B5780CB8BC1ACD63C193EC68D5E217CDBAC80 (CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___0_destination, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* Array_Empty_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m46787E1D6E481E4790F1F9E63000A067C9AF33CD_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mDF1CDB2973A50B932ED2E72CC7A57E75C7FCAB54 (DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___0_destination, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* Array_Empty_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_m05A4DA3A4ACD6D784909779870EE466DF7778EC7_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m0343B8FCB3868B60552322D0BFD9C87585A924B1 (EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___0_destination, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49* Array_Empty_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m5BB1B3F942E717EB0EEA932DE146F79E347604BA_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mDFAF68DAF7C667016B41A5C085293991850D1D8C (EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* ___0_destination, EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* Array_Empty_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m87CA399E64D82A02BCE81DF2F8F52AD65AC9BC25_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8D3BF3FF1317BAF44B55A14301469F3AB0E60900 (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_destination, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* Array_Empty_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8EF4F258FBF5AEC804ED891772BFFC84A01DB5D9_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisFilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060_mDD7300E8E4A6CFCCD3B437359FAAA469263822D0 (FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060* ___0_destination, FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FilterParameterU5BU5D_t0EF6EE29F03D6988D16E72B9209B753EE379FF58* Array_Empty_TisFilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060_mA4E39A2097C6E2511B93A1BF0C9221165B65938C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisFlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9_m6C3DAA8091937F2A2CBA773FD3BAA3DCD1C9B2EF (FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9* ___0_destination, FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FlattenedSelectorU5BU5D_tCFD484131041FE6AEF088704B99CA1C6DC732B27* Array_Empty_TisFlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9_m7E0303803800EFD09E46C64192C01A6D011D4260_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisFlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986_m19C1CA978BDC4B53F03AF962E7E6296C9E5A5A33 (FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986* ___0_destination, FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FlattenedSelectorPartU5BU5D_t6A3A49EF6948716EE80F0909EB9C7D5526F19643* Array_Empty_TisFlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986_m907AAB5CF7AEF4C510C711BBF98ABA5EA468D2B1_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m83F98C10F75BBF5CBB456D86857C192E9B2D06B6 (GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* ___0_destination, GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* Array_Empty_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m0C324743704C230D82B1D3F4A8A72DAECCD01F62_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mD7A052D9C9023478CCFECFE57747903B49AA2E3F (GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* ___0_destination, GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* Array_Empty_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mE8D045B3FF593AAD4C1EC5FD9B669AAC4C2A5BDE_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180_m6CBB7E78AF634CD6349A2BEC8CDE421652E08461 (GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180* ___0_destination, GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GfxCopyBufferRangeU5BU5D_t0C98D54584A2EE1E36B6159C1A0F9644CF80A53C* Array_Empty_TisGfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180_m61FB20510C0D4FF3DC1960D813C0DA00FD7B7A26_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m2CA00C03921B3C30B95A8129FDEA92912124ED5E (GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* ___0_destination, GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GfxUpdateBufferRangeU5BU5D_tE41D12E7B85611267BA408D468B0F0422B7D1F30* Array_Empty_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC6C376B567AC6FA4773E73349EE73E984E47852B_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m83ADCB7461E31FE528831F5B88B8022C10ADE134 (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___0_destination, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* Array_Empty_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m8F21DBCF706805C9334C0B519513BA4F39EA3A95_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m68888F3441F2A44FD565D9EC942658422E97507F (HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ___0_destination, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* Array_Empty_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m706F26FDE3D55E478AE8D88D0CA5AE597D17F184_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m29ECCE2E57C6E7FEB9E50A7F7C41878E79F45B31 (int16_t* ___0_destination, int16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* Array_Empty_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m761A383758DAB252A3DBE0ACBA4259EBDF64D107_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F (intptr_t* ___0_destination, intptr_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_inline (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mF0C8DA1DA703B904663C8A97313FAA5D06CBB8AA_inline (Predicate_1_tDF40C5B214B8C1CD42C03A302327D001EDCFE1A0* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___0_obj, const RuntimeMethod* method) ;
inline Enumerator_t143FA65339CA8DBAF42C7A5253F96ACFFA4BCC41 ReadOnlyArray_1_GetEnumerator_m291B1B11D48F36771B094A675C6B1F32B01A0226 (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t143FA65339CA8DBAF42C7A5253F96ACFFA4BCC41 (*) (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF76B641C6ECC5D55DD0ADE99D55E00E1A84C58D5 (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m1220E5552C080069CA1DB5186448FEF2FBCF6692 (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ReadOnlyArray_1_get_Item_m69AFBAAD6EB0E82AA39F56E13EF7F7B8FDA974FF (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m4E65B2A24A1D224A284A6E2ECCA25CD11AFDE9F3_inline (Predicate_1_tECA06EB82DA6AEBC4F101B945A192111822901DD* __this, float ___0_obj, const RuntimeMethod* method) ;
inline Enumerator_tA94B4F01B0C3AD75EB4E9169C8ED8F921F731D64 ReadOnlyArray_1_GetEnumerator_mD19F592A5C896FAEC3D6D3693CB9A0BCE6B9B077 (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA94B4F01B0C3AD75EB4E9169C8ED8F921F731D64 (*) (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF45CF2D20F176A7517D5596DBD5CABBE3F583DB1 (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m183917F865C80BA68B0BE301A8C4DB2394B8F7A2 (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ReadOnlyArray_1_get_Item_m04330518DA15D9B10349F6FCBFB201DAFCC75747 (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m22832669961C128D8C09CB0A3CCE145415A88EED_inline (Predicate_1_t8BFFAEFC5F80E3A5CD534EFA1FCE8E02111F2938* __this, Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 ___0_obj, const RuntimeMethod* method) ;
inline Enumerator_t1401BB8858A2A2ED1A0698D23EB25FD52FAC9B34 ReadOnlyArray_1_GetEnumerator_m337048790A2E77A5E4DFDF36992EB8BCFFD6133F (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1401BB8858A2A2ED1A0698D23EB25FD52FAC9B34 (*) (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m9F9511167D21F99F4C841B8AC7BC928F047987A0 (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mE548447BF22930F50681C90BE4B234382E355F49 (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 ReadOnlyArray_1_get_Item_mF89401BF1E594CF00433FFAC12A3B3D321A44B37 (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* __this, int32_t ___0_index, const RuntimeMethod* method) ;
inline bool Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_inline (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88*, Il2CppSharedGenericObject*, const RuntimeMethod*))Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_gshared_inline)(__this, ___0_obj, method);
}
inline Enumerator_t16D9D4B915D69801C90AC2FD471C13830683D064 ReadOnlyArray_1_GetEnumerator_mD2D8BC866B0301626B3C173679A72775FB12A6C6 (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t16D9D4B915D69801C90AC2FD471C13830683D064 (*) (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared)(__this, method);
}
inline RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m2A273E366CAC3B638F05EFEA8E5A9E2E6763C0DC (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621*, const RuntimeMethod*))ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m2A273E366CAC3B638F05EFEA8E5A9E2E6763C0DC_gshared)(__this, method);
}
inline RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m8EC8B00B49A945C66D0D6BB21808DD371742C6FC (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621*, const RuntimeMethod*))ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m8EC8B00B49A945C66D0D6BB21808DD371742C6FC_gshared)(__this, method);
}
inline Il2CppSharedGenericObject* ReadOnlyArray_1_get_Item_m2A4378A69F83291D4208F4A6617C63102E636EA3 (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621*, int32_t, const RuntimeMethod*))ReadOnlyArray_1_get_Item_m2A4378A69F83291D4208F4A6617C63102E636EA3_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mF961799B5F1CC1D9AEAC1E22C8F93C2EAC4E885B (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))Enumerator__ctor_mF961799B5F1CC1D9AEAC1E22C8F93C2EAC4E885B_fshared)(__this, ___0_array, ___1_index, ___2_length, method);
}
inline RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m07F14F7DAB994A9F281140C0BF87018235B5A139 (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B*, const RuntimeMethod*))ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m07F14F7DAB994A9F281140C0BF87018235B5A139_fshared)(__this, method);
}
inline RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m06A064933B88C1878F75CD6984F5DCB5AA7BB726 (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B*, const RuntimeMethod*))ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m06A064933B88C1878F75CD6984F5DCB5AA7BB726_fshared)(__this, method);
}
inline void ReadOnlyArray_1__ctor_m064B80B55276E5435A8AE6B652892FD7F6E8957B (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))ReadOnlyArray_1__ctor_m064B80B55276E5435A8AE6B652892FD7F6E8957B_fshared)(__this, ___0_array, method);
}
inline int32_t ReadOnlyArray_1_get_Count_m62C68097BC568BB0615B56865FDD0C504C545261_inline (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B*, const RuntimeMethod*))ReadOnlyArray_1_get_Count_m62C68097BC568BB0615B56865FDD0C504C545261_fshared_inline)(__this, method);
}
inline void ReadOnlyArray_1_get_Item_mE4191E8B0D91DB7694107E09A98F2A084F2DF2F4 (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))ReadOnlyArray_1_get_Item_mE4191E8B0D91DB7694107E09A98F2A084F2DF2F4_fshared)((ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B*)__this, ___0_index, il2cppRetVal, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m4F023DF8E8468E87CB5569D387D77C7D8EB411AA_inline (Predicate_1_t307A0D6E571F6E29070EB62217398E9D4D45C556* __this, HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F ___0_obj, const RuntimeMethod* method) ;
inline Enumerator_t1858EB5DA113EEDAF7EDEE685C04492B2FBE9C6D ReadOnlyArray_1_GetEnumerator_mA10E152A9AD151DA704D1A1FF10176DA8EEC5700 (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1858EB5DA113EEDAF7EDEE685C04492B2FBE9C6D (*) (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m57A507096526418260D0E30361B6FAFC0A4C6454 (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m4FCD702E63DD1C581A6C4BE41B830C43FD048371 (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F ReadOnlyArray_1_get_Item_m1BEFFB3B6F62DAA475BFD462C7D0960755A950DB (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m697CA3A3C779F42ADA3F92BA3EE92B14B21A84DE_inline (Predicate_1_tDA45FFEC703500A529E702D9733C1C2095D663FC* __this, ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD ___0_obj, const RuntimeMethod* method) ;
inline Enumerator_tEDF92AFCC05D1B0B00370110CE3A4BE62C632C7C ReadOnlyArray_1_GetEnumerator_m41699413CDEB1EEC9A602BF3F9C8991D30908B70 (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEDF92AFCC05D1B0B00370110CE3A4BE62C632C7C (*) (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m7A9E19F7C6223CA15D490282B01CB9A4FD57C595 (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mB930858409D2AD8EF5DF95A5AF3167ED5D1F0F0B (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD ReadOnlyArray_1_get_Item_mEFFFDCA2553F1C3B52903479ED4A2F57AE42CBBB (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m3D04DB85F71978F48F2AC57D40AE436776C837F8_inline (Predicate_1_tCC6C1019817F23EFFAC06C8D0EDD8803C71D54E4* __this, DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 ___0_obj, const RuntimeMethod* method) ;
inline Enumerator_t924412C78294BC2600FCB913AF5CF4D5F45C239A ReadOnlyArray_1_GetEnumerator_mAEB7CA70C66F6C8EF48448BB1548F044185705F1 (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t924412C78294BC2600FCB913AF5CF4D5F45C239A (*) (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF78BDC237CBE6E662F7A55C37142AD8ADEE4CA55 (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m775BC2314063FE7F3B00F14A4D9DE6FEAA424F5F (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 ReadOnlyArray_1_get_Item_m3C26D8D16A39B39ACAA2055880C770EF5841B083 (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m05FFB4723D44E5790A3F5FC7923C79882D0B0003_inline (Predicate_1_t81E65ECFCC613C16F7408ECA5D3D94536697174D* __this, DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 ___0_obj, const RuntimeMethod* method) ;
inline Enumerator_t2B51120BAD814F6BF2C35804FB000B6FB85EDCDE ReadOnlyArray_1_GetEnumerator_mB2A30C74F37F825E1839880697783D05A2D950FE (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2B51120BAD814F6BF2C35804FB000B6FB85EDCDE (*) (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m0EDE2550B1D70ECE3E72979559648052CB9C7D12 (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mE5CCEC702B75D77193949F2C716E6229BEDED58A (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 ReadOnlyArray_1_get_Item_mDFB5E4BE282F80EE3CF856F0DD06DD5BD72B8B2A (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m6B6BE788B018E462AB49965C9BF42835AA0F40FE (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC010A5256D19EE219546ED424AE97F0D94A1E97E (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m54E213256F6E5A5649AC292E96F3858D2F3B3AA0 (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mB23F2D0BBC3186365E72E6FB4BC47AAB1686211B (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mB07E1D8A7EE4081EF3A7DBD0369DB07BAB1365B2 (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m7FE8864771813C869EECD0FC9B3518D2617F47DB (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mA2DC89076EDA7FAE081CB1EBB0F544D3E25E992E (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m6FE656D0B1AC159B2743D580A2BE9B8BE8FE9654 (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___0_value, const RuntimeMethod* method) ;
inline int32_t ReadOnlyCollection_1_get_Count_m9AF1774FE249CFF994683344F3395D6C45BA74EB (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m9AF1774FE249CFF994683344F3395D6C45BA74EB_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_m6524BB7810330224C17351742769CA098CC80929 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_m6524BB7810330224C17351742769CA098CC80929_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_mCA382B62077A4FA1B0D0F387651E41770EC39690 (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263*, Il2CppSharedGenericObject*, const RuntimeMethod*))ReadOnlyCollection_1_Contains_mCA382B62077A4FA1B0D0F387651E41770EC39690_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_mFC9BAC0925D44B0206E5F9250E502C86E0FE33EC (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263*, Il2CppSharedGenericObject*, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_mFC9BAC0925D44B0206E5F9250E502C86E0FE33EC_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023 (int32_t ___0_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5 (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mBA6FA6140EADE76BD14920BDC6A3E87EDB72FB76_inline (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m8B225EBD79F98163072E7428252E4FDAFE5A3E1A (SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___0_destination, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m68B11A5CBD341B71C3B49A184D9A4A0F68B2BC1B_inline (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84*, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* Array_Empty_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m4433599FD227186796BAB47DC5BED2AF106ED67E_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m273AE2A699A7739E89673154DA9E3BE6B08A180D (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 ___0_left, ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84, ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mAB8B8F731C3753B681689724D8C10D0F6706324A_inline (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_mF7B64A7A3AED5F75779174F1164B6D60E51A6215 (ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___0_destination, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m61974A48F0249F9BF95E2B30196D22127E7AD9CB_inline (ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7* __this, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7*, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* Array_Empty_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_m5293579F263F9A3750FDFA1AA45718B28873BFBB_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mEDC9BE8DCA0B1A3E86A7A3BB531829C06CFA5034 (ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7 ___0_left, ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7, ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m739A39BB426B19B7583557F308B2BDA52E2C3DD9_inline (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B (BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_destination, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m729E93C65964D6955F3A0794056B0A8FA3E1FB44_inline (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7*, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* Array_Empty_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m652D1F78F0DEF31A60A1D09589A89DE06F12C3E4_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mF6DC606C39C6583C5F7B5BD9E2C131F7250B04E2 (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7 ___0_left, ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7, ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mF487895F53310FF6F399B7BD07038C49D29A6EAB_inline (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m4925E1D88272BE2E628F28AFFEC4FF09CC2EC647 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_destination, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mB60BC31800C0877424E21575E45AE6C8AA50ADA6_inline (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* Array_Empty_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mB6CFBB5D8AF33F0BAE72154209AB29B8D52FBCDA_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m23D991AB6012F2C9896FC8EF47BC84CF63CF86CD (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99 ___0_left, ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99, ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190 (uint8_t* ___0_destination, uint8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, uint8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mB932864AE19818E61EF5ADBBCB02A87BD771CDF7 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_left, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446 (Il2CppChar* ___0_destination, Il2CppChar* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2 (String_t* __this, Il2CppChar* ___0_value, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m3ADF20EB2963614D95DD3C4605667A643990414A (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_left, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68 (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_destination, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m841651F5E0DEC77984A109EF01090F3F776571FB_inline (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC*, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Array_Empty_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5B415C4745E47108DD9258EBCCB422EFD6B8A0EB_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mB7E64928FFEDF69D6B4302B599C9461869E152C7 (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC ___0_left, ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC, ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mFC8114ED22DABAF53250748121F627D7199AFE7C_inline (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m7B231E78B8FBBF3128AC7D5D9AA1EF250AB8BBB7 (ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___0_destination, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m3263AAE2466F33D0150BF7B8223568108EB82C0B_inline (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B*, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* Array_Empty_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m2AE4E8C460D733DF5362B246ED865C5CE0C4AA60_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mCFF3D8D583CDF24902773BD33205A6488B81C7B3 (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B ___0_left, ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B, ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mBAB1E51297560C637528EE41B5EB5658D2EFE5D9_inline (Span_1_tFD51B8D0B2DA78C0F911056FC60AB6B732AD4F7C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tFD51B8D0B2DA78C0F911056FC60AB6B732AD4F7C*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C_m25EF20C7583AB5F948F033EAAAD3726E13608167 (ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C* ___0_destination, ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m137BDE40C94EA6785C970709ABF68088E145D866_inline (ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962* __this, ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962*, ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConvertMeshExtrasDataU5BU5D_t1420B76450ADCE1EE0AD98D00A25825A1DA9EE38* Array_Empty_TisConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C_m4779104F7674EACD211A240162D4414087C431E8_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mE5D73B81C2027EABC9DF61DD832743B960E6C20B (ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962 ___0_left, ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962, ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m3B50FB2CF29A0E7C0C8B69E4E5A72D75883EBC4B_inline (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m747B7D7DC0AA466783F69D3676EC5EE854D08D52 (ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* ___0_destination, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mDB9E4DFF0687E0A5405FF4F6387379524B1B07AB_inline (ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A* __this, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A*, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* Array_Empty_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m164EDF2519D24430C10F8BB106ADB252BF225C26_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m0615A4A62B9BB81921E873791EA6E0973505024A (ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A ___0_left, ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A, ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mD8B694DDD50485878B197BD97C4848FA0E770DCD_inline (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m8A5B65BF262A2B1C988311D13733E08E197C8A03 (CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* ___0_destination, CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m75A7463F5588DB7F45AC0CE204FFB188419EC066_inline (ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA* __this, CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA*, CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* Array_Empty_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m636107AFEDC2888AAD9A190C5FCB115D4483F86F_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m80E264A2D14E2F539A355539BA0FCA443D47DF41 (ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA ___0_left, ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA, ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m385F87A001B432F97C5381EF1F01B485642ED27D_inline (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m9A4B5780CB8BC1ACD63C193EC68D5E217CDBAC80 (CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___0_destination, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m7515BCC9EAB305B335A968E684B597A1FC9A5F24_inline (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF*, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* Array_Empty_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m46787E1D6E481E4790F1F9E63000A067C9AF33CD_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m26E754ACC25871CADAADB0E10FEFBC9C47C4B94B (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF ___0_left, ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF, ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mFF4419EF107B2F1CD3364357F9723EAC96433F03_inline (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mDF1CDB2973A50B932ED2E72CC7A57E75C7FCAB54 (DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___0_destination, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mB6153B16E29314D6497048CA9F509CF21C277F71_inline (ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B* __this, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B*, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* Array_Empty_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_m05A4DA3A4ACD6D784909779870EE466DF7778EC7_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mE3EC2F33B96AEACAFC2FAF883F633DF80BC23419 (ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B ___0_left, ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B, ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m43418E7D1C7802E4F31E08DAE3AD5C88BAACB75F_inline (Span_1_t43234050271CE7DE614C13A0021A344861FB5593* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t43234050271CE7DE614C13A0021A344861FB5593*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m0343B8FCB3868B60552322D0BFD9C87585A924B1 (EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___0_destination, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mF80BB7536BFA47CBB0B535E725155286821D1B34_inline (ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7* __this, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7*, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49* Array_Empty_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m5BB1B3F942E717EB0EEA932DE146F79E347604BA_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m049B1C57C88411BB8B33BBA73450C898DD25013F (ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7 ___0_left, ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7, ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m7DA42A78AA51399F6E2624EC951C4C5675A83DF4_inline (Span_1_t6834048668549DB2E233F0E7E8E71F1E3AFDE712* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t6834048668549DB2E233F0E7E8E71F1E3AFDE712*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mDFAF68DAF7C667016B41A5C085293991850D1D8C (EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* ___0_destination, EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m47891B0EBECA0C6CBF5505295F2B0E603027A014_inline (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744* __this, EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744*, EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* Array_Empty_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m87CA399E64D82A02BCE81DF2F8F52AD65AC9BC25_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m039886C6A427B52C591AA65AEA91EED22AB2F907 (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744 ___0_left, ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744, ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mF40B0389DD242EC35D44F25C7490012314A18568_inline (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8D3BF3FF1317BAF44B55A14301469F3AB0E60900 (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_destination, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m1F035A6038B22EE2B7A2E6000536EFB888AC4043_inline (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686*, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* Array_Empty_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8EF4F258FBF5AEC804ED891772BFFC84A01DB5D9_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m0064C72F0B13F04420687FB7276738A0B0DFFB3A (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 ___0_left, ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686, ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m89645090890B982B6625634865741039212A2D7D_inline (Span_1_t420A830887305E0E02A744003AACBACED16172EB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t420A830887305E0E02A744003AACBACED16172EB*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisFilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060_mDD7300E8E4A6CFCCD3B437359FAAA469263822D0 (FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060* ___0_destination, FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m25FED3B4C89777BD3B6B73F981D9CF573F5C3435_inline (ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27* __this, FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27*, FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FilterParameterU5BU5D_t0EF6EE29F03D6988D16E72B9209B753EE379FF58* Array_Empty_TisFilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060_mA4E39A2097C6E2511B93A1BF0C9221165B65938C_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mFCC221F4B2884F75CC518EB825129A4DEE06CE76 (ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27 ___0_left, ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27, ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m3A8F09C0012040ACB55950D35820310E9F94B6E6_inline (Span_1_tD4A141E2CAE7DFB331921ECC10AB8884452E2784* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tD4A141E2CAE7DFB331921ECC10AB8884452E2784*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisFlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9_m6C3DAA8091937F2A2CBA773FD3BAA3DCD1C9B2EF (FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9* ___0_destination, FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mBBF4ED998EFF74C1D72698CA0007CD8300A88835_inline (ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A* __this, FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A*, FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FlattenedSelectorU5BU5D_tCFD484131041FE6AEF088704B99CA1C6DC732B27* Array_Empty_TisFlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9_m7E0303803800EFD09E46C64192C01A6D011D4260_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m377EF66B9E4E4BD87483BC46AF730DD83D4917D1 (ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A ___0_left, ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A, ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m8CC502CE0D66420E8B9B92D8F233B020CF67E932_inline (Span_1_tF25812E0445523D140232909284012C24E110428* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tF25812E0445523D140232909284012C24E110428*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisFlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986_m19C1CA978BDC4B53F03AF962E7E6296C9E5A5A33 (FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986* ___0_destination, FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mAD01EEA7AC8462087E2A66DC8852371D56D2B4DD_inline (ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D* __this, FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D*, FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FlattenedSelectorPartU5BU5D_t6A3A49EF6948716EE80F0909EB9C7D5526F19643* Array_Empty_TisFlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986_m907AAB5CF7AEF4C510C711BBF98ABA5EA468D2B1_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mEC6D213E2DE3F5E82725CD7FFB7EE813023463C0 (ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D ___0_left, ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D, ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mE30066A0C4D7876DED68538384FA5CC160C69D64_inline (Span_1_tBFB0B8ED6E219789174070F50BFF3D1D12DDADA4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tBFB0B8ED6E219789174070F50BFF3D1D12DDADA4*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m83F98C10F75BBF5CBB456D86857C192E9B2D06B6 (GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* ___0_destination, GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m10A374622B0CBE7DF98D6204B69DB5AB8EBEDC48_inline (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60* __this, GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60*, GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* Array_Empty_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m0C324743704C230D82B1D3F4A8A72DAECCD01F62_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m1D1955D11B345171E9FF68FAD8B91958FB6F0653 (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60 ___0_left, ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60, ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m183BDBAC2D1A9253029D7DF02565C77C96404029_inline (Span_1_t811A307E8A2376175E0D75B7D539482FEAFD8A2E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t811A307E8A2376175E0D75B7D539482FEAFD8A2E*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mD7A052D9C9023478CCFECFE57747903B49AA2E3F (GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* ___0_destination, GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mAEA18BE2EAFC93735C1D95BE4DB087870A3E109E_inline (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95* __this, GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95*, GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* Array_Empty_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mE8D045B3FF593AAD4C1EC5FD9B669AAC4C2A5BDE_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m16A530CCBB18179A661F8BA900DB1B2C7350CA97 (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95 ___0_left, ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95, ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m6DFB31C4120D132E81C1F42FD13D1DAC83EAA701_inline (Span_1_t8DC512B157818570466D5394923815D2AC18CA1C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t8DC512B157818570466D5394923815D2AC18CA1C*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180_m6CBB7E78AF634CD6349A2BEC8CDE421652E08461 (GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180* ___0_destination, GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m83DDFABAADCFA4506E357BBC052976DCA94FDED6_inline (ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB* __this, GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB*, GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GfxCopyBufferRangeU5BU5D_t0C98D54584A2EE1E36B6159C1A0F9644CF80A53C* Array_Empty_TisGfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180_m61FB20510C0D4FF3DC1960D813C0DA00FD7B7A26_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m873A42BAF7EDDA8CCB88C3964C5E888E86619CB2 (ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB ___0_left, ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB, ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m4AFBDAB740A9ECD13948F54329A3D84FD198CB73_inline (Span_1_tB93B3BC3E7EA509CCF751F8460FFA592FF1D1A68* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tB93B3BC3E7EA509CCF751F8460FFA592FF1D1A68*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m2CA00C03921B3C30B95A8129FDEA92912124ED5E (GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* ___0_destination, GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m8560DF2D26A1CC196BDE7BB7DFC896FB3D65EA16_inline (ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C* __this, GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C*, GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GfxUpdateBufferRangeU5BU5D_tE41D12E7B85611267BA408D468B0F0422B7D1F30* Array_Empty_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC6C376B567AC6FA4773E73349EE73E984E47852B_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m9ABAC96FFAFAFB3BF00FEE7B40FBAE6B9725F1FE (ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C ___0_left, ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C, ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m46110E6E80C812419F09D0E502B0DB9C02CC2032_inline (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m83ADCB7461E31FE528831F5B88B8022C10ADE134 (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___0_destination, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m1DC7A6D7908C64B835E06B25D082B370AE4D8868_inline (ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032*, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* Array_Empty_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m8F21DBCF706805C9334C0B519513BA4F39EA3A95_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m6D1729104C813DE71C169D49D1CACBBE2F132DF9 (ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032 ___0_left, ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032, ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mACFA990EBDB62FB610B90BE0AA456F1F0C5F0C9D_inline (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m68888F3441F2A44FD565D9EC942658422E97507F (HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ___0_destination, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mAA67B98A40E34097F4E59A93314926C5952A71EE_inline (ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97* __this, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97*, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* Array_Empty_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m706F26FDE3D55E478AE8D88D0CA5AE597D17F184_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m8954969CE1123723F22DFFD968579AAE9CBF9822 (ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97 ___0_left, ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97, ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m4739DD3D444025ADF00780C8FA6A518C9EF8763C_inline (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m29ECCE2E57C6E7FEB9E50A7F7C41878E79F45B31 (int16_t* ___0_destination, int16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m90A46D9F599ED28AA435B1FA5CA198862515FC9E_inline (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, int16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71*, int16_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* Array_Empty_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m761A383758DAB252A3DBE0ACBA4259EBDF64D107_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mF7C1F8009FA19D7D2A9EAF0E1032CE804482B636 (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71 ___0_left, ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71, ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282*, int32_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mC16335A11418A40D4CD3FE8572157D5C84C35F55 (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 ___0_left, ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282, ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_inline (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F (intptr_t* ___0_destination, intptr_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mD019D0961769EF3E1F4E73B5E8AB46E03F706D88_inline (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, intptr_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC*, intptr_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mC446715887B374236565A1534836C4266766FE55 (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC ___0_left, ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC, ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* ReadOnlyArray_1_ToArray_m0DDBFCEFB14F1F25B4F7807A271D1EAFC0AC524D (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* V_0 = NULL;
	{
		int32_t L_0 = __this->___m_Length;
		NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* L_1 = (NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A*)(NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* L_5 = V_0;
		int32_t L_6 = __this->___m_Length;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_002e:
	{
		NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_IndexOf_m6165A6A1C60AC610DD2D20F381E5D4EA5D35728E (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* __this, Predicate_1_tDF40C5B214B8C1CD42C03A302327D001EDCFE1A0* ___0_predicate, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Predicate_1_tDF40C5B214B8C1CD42C03A302327D001EDCFE1A0* L_0 = ___0_predicate;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0012:
	{
		Predicate_1_tDF40C5B214B8C1CD42C03A302327D001EDCFE1A0* L_2 = ___0_predicate;
		NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		int32_t L_5 = V_0;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_7 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		bool L_8;
		L_8 = Predicate_1_Invoke_mF0C8DA1DA703B904663C8A97313FAA5D06CBB8AA_inline(L_2, L_7, NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_Length;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF76B641C6ECC5D55DD0ADE99D55E00E1A84C58D5 (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_t143FA65339CA8DBAF42C7A5253F96ACFFA4BCC41 L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_m291B1B11D48F36771B094A675C6B1F32B01A0226(__this, NULL);
		Enumerator_t143FA65339CA8DBAF42C7A5253F96ACFFA4BCC41 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF76B641C6ECC5D55DD0ADE99D55E00E1A84C58D5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF76B641C6ECC5D55DD0ADE99D55E00E1A84C58D5(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m1220E5552C080069CA1DB5186448FEF2FBCF6692 (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_t143FA65339CA8DBAF42C7A5253F96ACFFA4BCC41 L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_m291B1B11D48F36771B094A675C6B1F32B01A0226(__this, NULL);
		Enumerator_t143FA65339CA8DBAF42C7A5253F96ACFFA4BCC41 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m1220E5552C080069CA1DB5186448FEF2FBCF6692_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m1220E5552C080069CA1DB5186448FEF2FBCF6692(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ReadOnlyArray_1_get_Item_m69AFBAAD6EB0E82AA39F56E13EF7F7B8FDA974FF (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* L_4 = __this->___m_Array;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* L_6 = __this->___m_Array;
		int32_t L_7 = __this->___m_StartIndex;
		int32_t L_8 = ___0_index;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_10 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}
}
IL2CPP_EXTERN_C  NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ReadOnlyArray_1_get_Item_m69AFBAAD6EB0E82AA39F56E13EF7F7B8FDA974FF_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9>(__this);
	NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED _returnValue;
	_returnValue = ReadOnlyArray_1_get_Item_m69AFBAAD6EB0E82AA39F56E13EF7F7B8FDA974FF(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ReadOnlyArray_1_ToArray_m666157130B824026DB20E92ADDD1310DF45CD556 (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		int32_t L_0 = __this->___m_Length;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = V_0;
		int32_t L_6 = __this->___m_Length;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_002e:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_IndexOf_mF3FA48518E8960D3A270D8FE61868258E983A817 (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* __this, Predicate_1_tECA06EB82DA6AEBC4F101B945A192111822901DD* ___0_predicate, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Predicate_1_tECA06EB82DA6AEBC4F101B945A192111822901DD* L_0 = ___0_predicate;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0012:
	{
		Predicate_1_tECA06EB82DA6AEBC4F101B945A192111822901DD* L_2 = ___0_predicate;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		int32_t L_5 = V_0;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		float L_7 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		bool L_8;
		L_8 = Predicate_1_Invoke_m4E65B2A24A1D224A284A6E2ECCA25CD11AFDE9F3_inline(L_2, L_7, NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_Length;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF45CF2D20F176A7517D5596DBD5CABBE3F583DB1 (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_tA94B4F01B0C3AD75EB4E9169C8ED8F921F731D64 L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mD19F592A5C896FAEC3D6D3693CB9A0BCE6B9B077(__this, NULL);
		Enumerator_tA94B4F01B0C3AD75EB4E9169C8ED8F921F731D64 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF45CF2D20F176A7517D5596DBD5CABBE3F583DB1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF45CF2D20F176A7517D5596DBD5CABBE3F583DB1(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m183917F865C80BA68B0BE301A8C4DB2394B8F7A2 (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_tA94B4F01B0C3AD75EB4E9169C8ED8F921F731D64 L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mD19F592A5C896FAEC3D6D3693CB9A0BCE6B9B077(__this, NULL);
		Enumerator_tA94B4F01B0C3AD75EB4E9169C8ED8F921F731D64 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m183917F865C80BA68B0BE301A8C4DB2394B8F7A2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m183917F865C80BA68B0BE301A8C4DB2394B8F7A2(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ReadOnlyArray_1_get_Item_m04330518DA15D9B10349F6FCBFB201DAFCC75747 (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->___m_Array;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___m_Array;
		int32_t L_7 = __this->___m_StartIndex;
		int32_t L_8 = ___0_index;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		float L_10 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}
}
IL2CPP_EXTERN_C  float ReadOnlyArray_1_get_Item_m04330518DA15D9B10349F6FCBFB201DAFCC75747_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B>(__this);
	float _returnValue;
	_returnValue = ReadOnlyArray_1_get_Item_m04330518DA15D9B10349F6FCBFB201DAFCC75747(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* ReadOnlyArray_1_ToArray_m5F0F06637D0F9A4B4F300BDA7AE095D28A18D9F9 (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* V_0 = NULL;
	{
		int32_t L_0 = __this->___m_Length;
		TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* L_1 = (TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354*)(TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* L_5 = V_0;
		int32_t L_6 = __this->___m_Length;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_002e:
	{
		TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_IndexOf_m2B6BA49BFAC4DFCEBD881F5B8B200F9045774194 (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* __this, Predicate_1_t8BFFAEFC5F80E3A5CD534EFA1FCE8E02111F2938* ___0_predicate, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Predicate_1_t8BFFAEFC5F80E3A5CD534EFA1FCE8E02111F2938* L_0 = ___0_predicate;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0012:
	{
		Predicate_1_t8BFFAEFC5F80E3A5CD534EFA1FCE8E02111F2938* L_2 = ___0_predicate;
		TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		int32_t L_5 = V_0;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 L_7 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		bool L_8;
		L_8 = Predicate_1_Invoke_m22832669961C128D8C09CB0A3CCE145415A88EED_inline(L_2, L_7, NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_Length;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m9F9511167D21F99F4C841B8AC7BC928F047987A0 (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_t1401BB8858A2A2ED1A0698D23EB25FD52FAC9B34 L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_m337048790A2E77A5E4DFDF36992EB8BCFFD6133F(__this, NULL);
		Enumerator_t1401BB8858A2A2ED1A0698D23EB25FD52FAC9B34 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m9F9511167D21F99F4C841B8AC7BC928F047987A0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m9F9511167D21F99F4C841B8AC7BC928F047987A0(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mE548447BF22930F50681C90BE4B234382E355F49 (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_t1401BB8858A2A2ED1A0698D23EB25FD52FAC9B34 L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_m337048790A2E77A5E4DFDF36992EB8BCFFD6133F(__this, NULL);
		Enumerator_t1401BB8858A2A2ED1A0698D23EB25FD52FAC9B34 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mE548447BF22930F50681C90BE4B234382E355F49_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mE548447BF22930F50681C90BE4B234382E355F49(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 ReadOnlyArray_1_get_Item_mF89401BF1E594CF00433FFAC12A3B3D321A44B37 (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* L_4 = __this->___m_Array;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* L_6 = __this->___m_Array;
		int32_t L_7 = __this->___m_StartIndex;
		int32_t L_8 = ___0_index;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 L_10 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}
}
IL2CPP_EXTERN_C  Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 ReadOnlyArray_1_get_Item_mF89401BF1E594CF00433FFAC12A3B3D321A44B37_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72>(__this);
	Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 _returnValue;
	_returnValue = ReadOnlyArray_1_get_Item_mF89401BF1E594CF00433FFAC12A3B3D321A44B37(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ReadOnlyArray_1_ToArray_mFE8B41E973F86170E9C4D85ED8CB1D83D7C9B940_gshared (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	{
		int32_t L_0 = __this->___m_Length;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5 = V_0;
		int32_t L_6 = __this->___m_Length;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_002e:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_IndexOf_m2C090CFF5465365F474D4E17AE6F5CA8E30CB30D_gshared (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* __this, Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* ___0_predicate, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* L_0 = ___0_predicate;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0012:
	{
		Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* L_2 = ___0_predicate;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		int32_t L_5 = V_0;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		Il2CppSharedGenericObject* L_7 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		bool L_8;
		L_8 = Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_inline(L_2, L_7, NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_Length;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m2A273E366CAC3B638F05EFEA8E5A9E2E6763C0DC_gshared (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_t16D9D4B915D69801C90AC2FD471C13830683D064 L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mD2D8BC866B0301626B3C173679A72775FB12A6C6(__this, NULL);
		Enumerator_t16D9D4B915D69801C90AC2FD471C13830683D064 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m2A273E366CAC3B638F05EFEA8E5A9E2E6763C0DC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m2A273E366CAC3B638F05EFEA8E5A9E2E6763C0DC(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m8EC8B00B49A945C66D0D6BB21808DD371742C6FC_gshared (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_t16D9D4B915D69801C90AC2FD471C13830683D064 L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mD2D8BC866B0301626B3C173679A72775FB12A6C6(__this, NULL);
		Enumerator_t16D9D4B915D69801C90AC2FD471C13830683D064 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m8EC8B00B49A945C66D0D6BB21808DD371742C6FC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m8EC8B00B49A945C66D0D6BB21808DD371742C6FC(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ReadOnlyArray_1_get_Item_m2A4378A69F83291D4208F4A6617C63102E636EA3_gshared (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = __this->___m_Array;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = __this->___m_Array;
		int32_t L_7 = __this->___m_StartIndex;
		int32_t L_8 = ___0_index;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		Il2CppSharedGenericObject* L_10 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}
}
IL2CPP_EXTERN_C  Il2CppSharedGenericObject* ReadOnlyArray_1_get_Item_m2A4378A69F83291D4208F4A6617C63102E636EA3_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621>(__this);
	Il2CppSharedGenericObject* _returnValue;
	_returnValue = ReadOnlyArray_1_get_Item_m2A4378A69F83291D4208F4A6617C63102E636EA3(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArray_1__ctor_m064B80B55276E5435A8AE6B652892FD7F6E8957B_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* G_B2_0 = NULL;
	ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* G_B3_1 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		__this->___m_Array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Array), (void*)L_0);
		__this->___m_StartIndex = 0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0015;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0015:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		G_B3_1->___m_Length = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArray_1__ctor_mE34B75820BA6C970A87F0EDAF15E5DAA69901653_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		__this->___m_Array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Array), (void*)L_0);
		int32_t L_1 = ___1_index;
		__this->___m_StartIndex = L_1;
		int32_t L_2 = ___2_length;
		__this->___m_Length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ReadOnlyArray_1_ToArray_m2A72D5B07A38C67A79E357FA0B2A69B78993D87F_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = __this->___m_Length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_0;
		int32_t L_6 = __this->___m_Length;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_002e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_IndexOf_m6BCAB50E467E9BA03DAF8CC5B61A330EACD02273_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_predicate, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_tD95CC7A6B32B866027D236D4F8ECDF4C0F18A9B0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tD95CC7A6B32B866027D236D4F8ECDF4C0F18A9B0);
	int32_t V_0 = 0;
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_predicate;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0012:
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_2 = ___0_predicate;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		int32_t L_5 = V_0;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		il2cpp_codegen_memcpy(L_7, (L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_TValue_tD95CC7A6B32B866027D236D4F8ECDF4C0F18A9B0);
		bool L_8;
		L_8 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_Length;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_Array;
		int32_t L_1 = __this->___m_StartIndex;
		int32_t L_2 = __this->___m_Length;
		Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Enumerator__ctor_mF961799B5F1CC1D9AEAC1E22C8F93C2EAC4E885B((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m07F14F7DAB994A9F281140C0BF87018235B5A139_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 L_0;
		L_0 = ((  Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 (*) (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))(__this, NULL);
		Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m07F14F7DAB994A9F281140C0BF87018235B5A139_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m07F14F7DAB994A9F281140C0BF87018235B5A139(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m06A064933B88C1878F75CD6984F5DCB5AA7BB726_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 L_0;
		L_0 = ((  Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 (*) (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))(__this, NULL);
		Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m06A064933B88C1878F75CD6984F5DCB5AA7BB726_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m06A064933B88C1878F75CD6984F5DCB5AA7BB726(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B ReadOnlyArray_1_op_Implicit_m3A2E46C6BBDB810D228A41977FB01D42400E6DF9_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B L_1;
		memset((&L_1), 0, sizeof(L_1));
		ReadOnlyArray_1__ctor_m064B80B55276E5435A8AE6B652892FD7F6E8957B((&L_1), L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_get_Count_m62C68097BC568BB0615B56865FDD0C504C545261_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ReadOnlyArray_1_get_Count_m62C68097BC568BB0615B56865FDD0C504C545261_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B>(__this);
	int32_t _returnValue;
	_returnValue = ReadOnlyArray_1_get_Count_m62C68097BC568BB0615B56865FDD0C504C545261_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArray_1_get_Item_mE4191E8B0D91DB7694107E09A98F2A084F2DF2F4_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_tD95CC7A6B32B866027D236D4F8ECDF4C0F18A9B0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TValue_tD95CC7A6B32B866027D236D4F8ECDF4C0F18A9B0);
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->___m_Array;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->___m_Array;
		int32_t L_7 = __this->___m_StartIndex;
		int32_t L_8 = ___0_index;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		il2cpp_codegen_memcpy(L_10, (L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)), SizeOf_TValue_tD95CC7A6B32B866027D236D4F8ECDF4C0F18A9B0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_TValue_tD95CC7A6B32B866027D236D4F8ECDF4C0F18A9B0);
		return;
	}
}
IL2CPP_EXTERN_C  void ReadOnlyArray_1_get_Item_mE4191E8B0D91DB7694107E09A98F2A084F2DF2F4_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B>(__this);
	ReadOnlyArray_1_get_Item_mE4191E8B0D91DB7694107E09A98F2A084F2DF2F4(_thisAdjusted, ___0_index, il2cppRetVal, method);
	return;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD* ReadOnlyArray_1_ToArray_m7C4848AF221AD3A11F95E50E61A49B4AA1FB58FE (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD* V_0 = NULL;
	{
		int32_t L_0 = __this->___m_Length;
		HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD* L_1 = (HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD*)(HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD* L_5 = V_0;
		int32_t L_6 = __this->___m_Length;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_002e:
	{
		HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_IndexOf_mCD96F649D01B1568C86983EC4E2C0A9A5D47FFDA (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* __this, Predicate_1_t307A0D6E571F6E29070EB62217398E9D4D45C556* ___0_predicate, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Predicate_1_t307A0D6E571F6E29070EB62217398E9D4D45C556* L_0 = ___0_predicate;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0012:
	{
		Predicate_1_t307A0D6E571F6E29070EB62217398E9D4D45C556* L_2 = ___0_predicate;
		HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		int32_t L_5 = V_0;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F L_7 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		bool L_8;
		L_8 = Predicate_1_Invoke_m4F023DF8E8468E87CB5569D387D77C7D8EB411AA_inline(L_2, L_7, NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_Length;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m57A507096526418260D0E30361B6FAFC0A4C6454 (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_t1858EB5DA113EEDAF7EDEE685C04492B2FBE9C6D L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mA10E152A9AD151DA704D1A1FF10176DA8EEC5700(__this, NULL);
		Enumerator_t1858EB5DA113EEDAF7EDEE685C04492B2FBE9C6D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m57A507096526418260D0E30361B6FAFC0A4C6454_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m57A507096526418260D0E30361B6FAFC0A4C6454(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m4FCD702E63DD1C581A6C4BE41B830C43FD048371 (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_t1858EB5DA113EEDAF7EDEE685C04492B2FBE9C6D L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mA10E152A9AD151DA704D1A1FF10176DA8EEC5700(__this, NULL);
		Enumerator_t1858EB5DA113EEDAF7EDEE685C04492B2FBE9C6D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m4FCD702E63DD1C581A6C4BE41B830C43FD048371_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m4FCD702E63DD1C581A6C4BE41B830C43FD048371(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F ReadOnlyArray_1_get_Item_m1BEFFB3B6F62DAA475BFD462C7D0960755A950DB (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD* L_4 = __this->___m_Array;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD* L_6 = __this->___m_Array;
		int32_t L_7 = __this->___m_StartIndex;
		int32_t L_8 = ___0_index;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F L_10 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}
}
IL2CPP_EXTERN_C  HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F ReadOnlyArray_1_get_Item_m1BEFFB3B6F62DAA475BFD462C7D0960755A950DB_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7>(__this);
	HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F _returnValue;
	_returnValue = ReadOnlyArray_1_get_Item_m1BEFFB3B6F62DAA475BFD462C7D0960755A950DB(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* ReadOnlyArray_1_ToArray_m05906B40E65A82D08949407EA1EB1BD511E4F2A3 (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* V_0 = NULL;
	{
		int32_t L_0 = __this->___m_Length;
		ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* L_1 = (ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104*)(ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* L_5 = V_0;
		int32_t L_6 = __this->___m_Length;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_002e:
	{
		ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_IndexOf_m5C0002B7FF1AC9E0E8007637E59E26D9A22A3B88 (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* __this, Predicate_1_tDA45FFEC703500A529E702D9733C1C2095D663FC* ___0_predicate, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Predicate_1_tDA45FFEC703500A529E702D9733C1C2095D663FC* L_0 = ___0_predicate;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0012:
	{
		Predicate_1_tDA45FFEC703500A529E702D9733C1C2095D663FC* L_2 = ___0_predicate;
		ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		int32_t L_5 = V_0;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD L_7 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		bool L_8;
		L_8 = Predicate_1_Invoke_m697CA3A3C779F42ADA3F92BA3EE92B14B21A84DE_inline(L_2, L_7, NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_Length;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m7A9E19F7C6223CA15D490282B01CB9A4FD57C595 (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_tEDF92AFCC05D1B0B00370110CE3A4BE62C632C7C L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_m41699413CDEB1EEC9A602BF3F9C8991D30908B70(__this, NULL);
		Enumerator_tEDF92AFCC05D1B0B00370110CE3A4BE62C632C7C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m7A9E19F7C6223CA15D490282B01CB9A4FD57C595_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m7A9E19F7C6223CA15D490282B01CB9A4FD57C595(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mB930858409D2AD8EF5DF95A5AF3167ED5D1F0F0B (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_tEDF92AFCC05D1B0B00370110CE3A4BE62C632C7C L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_m41699413CDEB1EEC9A602BF3F9C8991D30908B70(__this, NULL);
		Enumerator_tEDF92AFCC05D1B0B00370110CE3A4BE62C632C7C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mB930858409D2AD8EF5DF95A5AF3167ED5D1F0F0B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mB930858409D2AD8EF5DF95A5AF3167ED5D1F0F0B(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD ReadOnlyArray_1_get_Item_mEFFFDCA2553F1C3B52903479ED4A2F57AE42CBBB (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* L_4 = __this->___m_Array;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* L_6 = __this->___m_Array;
		int32_t L_7 = __this->___m_StartIndex;
		int32_t L_8 = ___0_index;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD L_10 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}
}
IL2CPP_EXTERN_C  ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD ReadOnlyArray_1_get_Item_mEFFFDCA2553F1C3B52903479ED4A2F57AE42CBBB_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670>(__this);
	ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD _returnValue;
	_returnValue = ReadOnlyArray_1_get_Item_mEFFFDCA2553F1C3B52903479ED4A2F57AE42CBBB(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ReadOnlyArray_1_ToArray_mE9132A31033238EC816E1E9831572B5D2C912F2E (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* V_0 = NULL;
	{
		int32_t L_0 = __this->___m_Length;
		DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* L_1 = (DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE*)(DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* L_5 = V_0;
		int32_t L_6 = __this->___m_Length;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_002e:
	{
		DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_IndexOf_mB0290D946917DED43A56915D80416F717DDB52D5 (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* __this, Predicate_1_tCC6C1019817F23EFFAC06C8D0EDD8803C71D54E4* ___0_predicate, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Predicate_1_tCC6C1019817F23EFFAC06C8D0EDD8803C71D54E4* L_0 = ___0_predicate;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0012:
	{
		Predicate_1_tCC6C1019817F23EFFAC06C8D0EDD8803C71D54E4* L_2 = ___0_predicate;
		DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		int32_t L_5 = V_0;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 L_7 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		bool L_8;
		L_8 = Predicate_1_Invoke_m3D04DB85F71978F48F2AC57D40AE436776C837F8_inline(L_2, L_7, NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_Length;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF78BDC237CBE6E662F7A55C37142AD8ADEE4CA55 (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_t924412C78294BC2600FCB913AF5CF4D5F45C239A L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mAEB7CA70C66F6C8EF48448BB1548F044185705F1(__this, NULL);
		Enumerator_t924412C78294BC2600FCB913AF5CF4D5F45C239A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF78BDC237CBE6E662F7A55C37142AD8ADEE4CA55_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF78BDC237CBE6E662F7A55C37142AD8ADEE4CA55(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m775BC2314063FE7F3B00F14A4D9DE6FEAA424F5F (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_t924412C78294BC2600FCB913AF5CF4D5F45C239A L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mAEB7CA70C66F6C8EF48448BB1548F044185705F1(__this, NULL);
		Enumerator_t924412C78294BC2600FCB913AF5CF4D5F45C239A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m775BC2314063FE7F3B00F14A4D9DE6FEAA424F5F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m775BC2314063FE7F3B00F14A4D9DE6FEAA424F5F(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 ReadOnlyArray_1_get_Item_m3C26D8D16A39B39ACAA2055880C770EF5841B083 (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* L_4 = __this->___m_Array;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* L_6 = __this->___m_Array;
		int32_t L_7 = __this->___m_StartIndex;
		int32_t L_8 = ___0_index;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 L_10 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}
}
IL2CPP_EXTERN_C  DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 ReadOnlyArray_1_get_Item_m3C26D8D16A39B39ACAA2055880C770EF5841B083_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17>(__this);
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 _returnValue;
	_returnValue = ReadOnlyArray_1_get_Item_m3C26D8D16A39B39ACAA2055880C770EF5841B083(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A* ReadOnlyArray_1_ToArray_mAD4C7068200B8272E632EDDCA3E0D6744F7C7211 (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A* V_0 = NULL;
	{
		int32_t L_0 = __this->___m_Length;
		DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A* L_1 = (DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A*)(DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A* L_5 = V_0;
		int32_t L_6 = __this->___m_Length;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_002e:
	{
		DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_IndexOf_mFE4262FD29B7CC10555B765F22C7D263C0BC97AB (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* __this, Predicate_1_t81E65ECFCC613C16F7408ECA5D3D94536697174D* ___0_predicate, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Predicate_1_t81E65ECFCC613C16F7408ECA5D3D94536697174D* L_0 = ___0_predicate;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0012:
	{
		Predicate_1_t81E65ECFCC613C16F7408ECA5D3D94536697174D* L_2 = ___0_predicate;
		DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		int32_t L_5 = V_0;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 L_7 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		bool L_8;
		L_8 = Predicate_1_Invoke_m05FFB4723D44E5790A3F5FC7923C79882D0B0003_inline(L_2, L_7, NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_Length;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m0EDE2550B1D70ECE3E72979559648052CB9C7D12 (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_t2B51120BAD814F6BF2C35804FB000B6FB85EDCDE L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mB2A30C74F37F825E1839880697783D05A2D950FE(__this, NULL);
		Enumerator_t2B51120BAD814F6BF2C35804FB000B6FB85EDCDE L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m0EDE2550B1D70ECE3E72979559648052CB9C7D12_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m0EDE2550B1D70ECE3E72979559648052CB9C7D12(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mE5CCEC702B75D77193949F2C716E6229BEDED58A (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_t2B51120BAD814F6BF2C35804FB000B6FB85EDCDE L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mB2A30C74F37F825E1839880697783D05A2D950FE(__this, NULL);
		Enumerator_t2B51120BAD814F6BF2C35804FB000B6FB85EDCDE L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mE5CCEC702B75D77193949F2C716E6229BEDED58A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mE5CCEC702B75D77193949F2C716E6229BEDED58A(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 ReadOnlyArray_1_get_Item_mDFB5E4BE282F80EE3CF856F0DD06DD5BD72B8B2A (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A* L_4 = __this->___m_Array;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A* L_6 = __this->___m_Array;
		int32_t L_7 = __this->___m_StartIndex;
		int32_t L_8 = ___0_index;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 L_10 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}
}
IL2CPP_EXTERN_C  DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 ReadOnlyArray_1_get_Item_mDFB5E4BE282F80EE3CF856F0DD06DD5BD72B8B2A_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570>(__this);
	DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 _returnValue;
	_returnValue = ReadOnlyArray_1_get_Item_mDFB5E4BE282F80EE3CF856F0DD06DD5BD72B8B2A(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m6B6BE788B018E462AB49965C9BF42835AA0F40FE (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ReadOnlyCollection_1_get_Item_m5780FF03FA42BFFD0DA319D6310B1A6E72DA9A86 (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_2;
		L_2 = InterfaceFuncInvoker1< CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m54E213256F6E5A5649AC292E96F3858D2F3B3AA0 (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_1 = ___0_value;
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mD8C8CA0BBF3D68750ED44577FD6615AE36072924 (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		InterfaceActionInvoker2< CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mD6D0577F8EDABEEF8B0A801538743A1D4502319E (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mB23F2D0BBC3186365E72E6FB4BC47AAB1686211B (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_1 = ___0_value;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m75D185B46D4802594A64748B9DDD4118534323CE (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_2;
		L_2 = InterfaceFuncInvoker1< CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m76B14FF518C40A3C79A3EE21FF3EE849FFA2D9C7 (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m6B6BE788B018E462AB49965C9BF42835AA0F40FE(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440* L_13 = V_0;
		int32_t L_14 = ___1_index;
		InterfaceActionInvoker2< CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_35;
			L_35 = InterfaceFuncInvoker1< CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mA8915730823E8C27B918A4C3024AD68CBD8055AD (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_2;
		L_2 = InterfaceFuncInvoker1< CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC010A5256D19EE219546ED424AE97F0D94A1E97E (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02));
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mD8042138A4AC2A2671400161C731D1C1B2AC926C (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mC010A5256D19EE219546ED424AE97F0D94A1E97E(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m54E213256F6E5A5649AC292E96F3858D2F3B3AA0(__this, ((*(CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m1885C362CCD1DB7FE502C9D4369A9B8DB47CECAF (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mC010A5256D19EE219546ED424AE97F0D94A1E97E(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mB23F2D0BBC3186365E72E6FB4BC47AAB1686211B(__this, ((*(CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mB07E1D8A7EE4081EF3A7DBD0369DB07BAB1365B2 (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ReadOnlyCollection_1_get_Item_m4B6B7A4CD8390D75131239E8E81AC95EEFD56A81 (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_2;
		L_2 = InterfaceFuncInvoker1< CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mA2DC89076EDA7FAE081CB1EBB0F544D3E25E992E (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_1 = ___0_value;
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m48433668377DA36D39718CF6D1A62DCD9F607A68 (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		InterfaceActionInvoker2< CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m12A0923AE807FA4CA6F24547D0AFA5CC1521D8EC (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m6FE656D0B1AC159B2743D580A2BE9B8BE8FE9654 (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_1 = ___0_value;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mFC77FB3DA7AC142CE2767C0C974A710A6A12B1B8 (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_2;
		L_2 = InterfaceFuncInvoker1< CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mC0E4E3597C9676A03FCC998694AB810FBF471755 (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mB07E1D8A7EE4081EF3A7DBD0369DB07BAB1365B2(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B* L_13 = V_0;
		int32_t L_14 = ___1_index;
		InterfaceActionInvoker2< CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_35;
			L_35 = InterfaceFuncInvoker1< CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m4826F128F91C79D6CA4A38592A9D035855853C98 (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_2;
		L_2 = InterfaceFuncInvoker1< CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m7FE8864771813C869EECD0FC9B3518D2617F47DB (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F));
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m9E50A66F9F81F20F57031B57C6847C420EBD7636 (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m7FE8864771813C869EECD0FC9B3518D2617F47DB(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mA2DC89076EDA7FAE081CB1EBB0F544D3E25E992E(__this, ((*(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mC4C16CB9FCFDFDDDE905AAB7CCDF81C945904DF7 (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m7FE8864771813C869EECD0FC9B3518D2617F47DB(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m6FE656D0B1AC159B2743D580A2BE9B8BE8FE9654(__this, ((*(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m9AF1774FE249CFF994683344F3395D6C45BA74EB_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ReadOnlyCollection_1_get_Item_m23FB0C503360A616B4AB2D24C802A792FB262012_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		Il2CppSharedGenericObject* L_2;
		L_2 = InterfaceFuncInvoker1< Il2CppSharedGenericObject*, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mCA382B62077A4FA1B0D0F387651E41770EC39690_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		Il2CppSharedGenericObject* L_1 = ___0_value;
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Il2CppSharedGenericObject* >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m67E89EFDBC85B76754A39349FFFD92A938142387_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		InterfaceActionInvoker2< __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m4550DD869199B6BB5004D0EC5F84EAD608E5D0BD_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mFC9BAC0925D44B0206E5F9250E502C86E0FE33EC_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		Il2CppSharedGenericObject* L_1 = ___0_value;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mD59DAB2A22CDE2C16A3DF78BA60C5B779C9DC94D_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		Il2CppSharedGenericObject* L_2;
		L_2 = InterfaceFuncInvoker1< Il2CppSharedGenericObject*, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m478432D44E3926112CDE5DFEFA58C16EBB9EBDF5_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m9AF1774FE249CFF994683344F3395D6C45BA74EB(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)IsInst((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_13 = V_0;
		int32_t L_14 = ___1_index;
		InterfaceActionInvoker2< __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			Il2CppSharedGenericObject* L_35;
			L_35 = InterfaceFuncInvoker1< Il2CppSharedGenericObject*, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			ArrayElementTypeCheck (L_30, L_35);
			(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_35);
			int32_t L_36 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		}

IL_00cd_1:
		{
			int32_t L_37 = V_5;
			int32_t L_38 = V_4;
			if ((((int32_t)L_37) < ((int32_t)L_38)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_39 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mE82D2072F182EAAB44C5F8B96BE8E93033451549_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		Il2CppSharedGenericObject* L_2;
		L_2 = InterfaceFuncInvoker1< Il2CppSharedGenericObject*, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m6524BB7810330224C17351742769CA098CC80929_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_2 = V_0;
		return (bool)((((RuntimeObject*)(Il2CppSharedGenericObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m5E9D87468D2864798886B51D064CBDEEEACAE7BC_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m6524BB7810330224C17351742769CA098CC80929(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mCA382B62077A4FA1B0D0F387651E41770EC39690(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m81BF68B6CDB189B7801593C1AF869A9750788642_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m6524BB7810330224C17351742769CA098CC80929(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mFC9BAC0925D44B0206E5F9250E502C86E0FE33EC(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m903CF4492D6E4F6EE0D865BB7AA36A0DDB888355_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(7, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_list;
		__this->___list = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCDFBED2827141480BC213F53AEEDACC6213A3B66_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_get_Item_mA8D896F68E301ACA5A341DC5A225583D8ED2A255_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3E09B940962F12FD034CC8486ED4168D4721DBBE_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	{
		RuntimeObject* L_0 = __this->___list;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_value : &___0_value), SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		bool L_2;
		L_2 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mB416E0A1DB85A7CADD8262857E64FB0ADC00A1EA_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mCFEF0F9FA49B2179E5E911F9D1152340A92DB3F3_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD82DC91F5E57226382BAF1401C40E957F7DA2387_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	{
		RuntimeObject* L_0 = __this->___list;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_value : &___0_value), SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mC4F2329D15060977CE2267B4D0E87EDB561CF595_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mF4ED844686904AEE780D507416D7E7A51DFF202D_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m35A745E63BFF1D589351CE60CF9E340E75C14998_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_mF006EAEF6D337E8B834711F6905D3ADE4FA0D987_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_mFD6E4EDD6B7F30038EFD8F9C0FE3AC221626D95F_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m9F3566194F9D272B71951511DA8312C8B4ACA259_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m4F9FB8AF81AAA7BF937DC85004CA9F1F7E6ED280_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m02FCD7570EC5BAE9CD2BA0B6EF0227B6C253E006_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_mA6AF1223843F4580FD3FEB8E35845661982E0B32_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___list;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_mE2403F1271152A240384F722DBC2F51B2FE474F9_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_1 = __this->___list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_3);
		__this->____syncRoot = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____syncRoot), (void*)L_4);
		goto IL_0037;
	}

IL_0025:
	{
		RuntimeObject** L_5 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_6 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_6, NULL);
		RuntimeObject* L_7;
		L_7 = il2cpp_intrinsic_interlocked_compare_exchange(L_5, L_6, NULL);
	}

IL_0037:
	{
		RuntimeObject* L_8 = __this->____syncRoot;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m70FC2A97390955247B150E4BD8DD8B18237430F4_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_35 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ((  int32_t (*) (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)IsInst((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = V_0;
		int32_t L_14 = ___1_index;
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34, (Il2CppFullySharedGenericAny*)L_35);
			RuntimeObject* L_36 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_35);
			ArrayElementTypeCheck (L_30, L_36);
			(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_36);
			int32_t L_37 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		}

IL_00cd_1:
		{
			int32_t L_38 = V_5;
			int32_t L_39 = V_4;
			if ((((int32_t)L_38) < ((int32_t)L_39)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_40 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m08C282A2A98D3C947E83CBC9890A8E0E709A397B_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m861331F448865761DF230F9645DB5EBC1BCE886F_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_set_Item_m08B0FB302612A3978ED68B2A5B11FE2184ECEA19_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_Add_mE7A580FD2427E3D62C85553215B06F340F19C021_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Clear_mE23431676D7E7A313D7D013AA7D53134389E1F65_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mB26BF0A4B6CF73028651EA8BC0D5DB450683A405_fshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	memset(V_0, 0, SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		bool L_3 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_2);
		bool L_4 = L_3;
		return L_4;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mFD48FDEA769B42DD057189EF0893C37CB3E425A0_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		return L_5;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m99568215E4F7BA5BFC1D5EA185C16A603A96EDE4_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_3);
		int32_t L_5;
		L_5 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		return L_5;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Insert_m6E7A22F971B6F49F7A4A13748B924C5B8CD3AF69_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Remove_m772802A30F60DA8C4025283105DD3D5162CD9A40_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m8BAA6793E056F7C7F5D3EFC32F9F5D57DF86881C_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeVector_1__ctor_m64EB14620E394C425562A5F9AD826C959C29BD96_fshared (ReadOnlyNativeVector_1_tE45C179B8DFEAD70E1F59D744D5C6999873C0FFC* __this, intptr_t ___0_ptr, int32_t ___1_size, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_ptr;
		__this->___m_Ptr = L_0;
		int32_t L_1 = ___1_size;
		__this->___m_Count = L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0C325927D022A4794D0573B41E1BAC18B83DB914 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_12;
		L_12 = il2cpp_unsafe_as_ref<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474>(L_11);
		int32_t L_13 = ___1_start;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_14;
		L_14 = il2cpp_unsafe_add<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474,int32_t>(L_12, L_13, sizeof(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474));
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mAAA13269ECF8F777B3D66AA1381ABAF562ECAFAD (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_2;
		L_2 = il2cpp_unsafe_as_ref<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474>((uint8_t*)L_1);
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ReadOnlySpan_1_get_Item_m2D69BC4DF6C72A65AF6044FD5D9A1DA836E581CC (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_2 = __this->____pointer;
		V_0 = L_2;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_5;
		L_5 = il2cpp_unsafe_add<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474,int32_t>(L_3, L_4, sizeof(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mC13BF984D3064FAB75E9F31240A0D461090D28B5 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mBA6FA6140EADE76BD14920BDC6A3E87EDB72FB76_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 L_2 = ___0_destination;
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_3 = L_2.____pointer;
		V_0 = L_3;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_5 = __this->____pointer;
		V_0 = L_5;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m8B225EBD79F98163072E7428252E4FDAFE5A3E1A(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m69C0DC7A9642D41BA974889DBF468384BE169D08 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mBA6FA6140EADE76BD14920BDC6A3E87EDB72FB76_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 L_2 = ___0_destination;
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_3 = L_2.____pointer;
		V_1 = L_3;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_1));
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_5 = __this->____pointer;
		V_1 = L_5;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m8B225EBD79F98163072E7428252E4FDAFE5A3E1A(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mFD9D2B3920E4AFC4709C68A4404CD723A0ED8A19 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 ReadOnlySpan_1_Slice_m76C587257127EDB2661E9B2E077F2D6C2904394C (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_2 = __this->____pointer;
		V_0 = L_2;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_5;
		L_5 = il2cpp_unsafe_add<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474,int32_t>(L_3, L_4, sizeof(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m68B11A5CBD341B71C3B49A184D9A4A0F68B2BC1B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 ReadOnlySpan_1_Slice_m31FCCE32E3D3F2C5C6059960D7F47D3C0D63FAB6 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_5 = __this->____pointer;
		V_0 = L_5;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_8;
		L_8 = il2cpp_unsafe_add<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474,int32_t>(L_6, L_7, sizeof(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m68B11A5CBD341B71C3B49A184D9A4A0F68B2BC1B_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* ReadOnlySpan_1_ToArray_m935765D78782E0DA24C534996DA3AF27448E26F6 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_1;
		L_1 = Array_Empty_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m4433599FD227186796BAB47DC5BED2AF106ED67E_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_3 = (SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06*)(SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_6;
		L_6 = il2cpp_unsafe_as_ref<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474>(L_5);
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_7 = __this->____pointer;
		V_0 = L_7;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m8B225EBD79F98163072E7428252E4FDAFE5A3E1A(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mD43349D875DC6D0FB0535BE3B3830C1450435420 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 ___0_left, ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 L_0 = ___0_left;
		ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m273AE2A699A7739E89673154DA9E3BE6B08A180D(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m721EBEC6C55EAE29C1D18E357CBE1B795B121355 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m5003E9917221426C5BF4F1DD6CCD9F9C627F8CB2 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m9B98D1EF2ED1923D9193FED9660EC7C6F5139AE9 (ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7* __this, ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_12;
		L_12 = il2cpp_unsafe_as_ref<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E>(L_11);
		int32_t L_13 = ___1_start;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_14;
		L_14 = il2cpp_unsafe_add<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,int32_t>(L_12, L_13, sizeof(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E));
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m305845BDA2359516A6957E6737297A2A5F27AD55 (ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_2;
		L_2 = il2cpp_unsafe_as_ref<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E>((uint8_t*)L_1);
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ReadOnlySpan_1_get_Item_m4FEF7ACAADCD53633743A309AF589DCE48F58BFC (ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_2 = __this->____pointer;
		V_0 = L_2;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_5;
		L_5 = il2cpp_unsafe_add<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,int32_t>(L_3, L_4, sizeof(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mE406C4F286E720C0584E9688ABF2D74A7538A275 (ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7* __this, Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mAB8B8F731C3753B681689724D8C10D0F6706324A_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 L_2 = ___0_destination;
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_3 = L_2.____pointer;
		V_0 = L_3;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_5 = __this->____pointer;
		V_0 = L_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_mF7B64A7A3AED5F75779174F1164B6D60E51A6215(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mF65307BD5A58DED20FA10FBA697A4B1479A308C9 (ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7* __this, Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mAB8B8F731C3753B681689724D8C10D0F6706324A_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 L_2 = ___0_destination;
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_3 = L_2.____pointer;
		V_1 = L_3;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_1));
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_5 = __this->____pointer;
		V_1 = L_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_mF7B64A7A3AED5F75779174F1164B6D60E51A6215(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mF128D42BDDC7EC3F96FE14AEAB23A36A4E823DA5 (ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7 ReadOnlySpan_1_Slice_m8959E5E6A0528D9001B8E7A6DB4E15D5549A7766 (ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_2 = __this->____pointer;
		V_0 = L_2;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_5;
		L_5 = il2cpp_unsafe_add<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,int32_t>(L_3, L_4, sizeof(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m61974A48F0249F9BF95E2B30196D22127E7AD9CB_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7 ReadOnlySpan_1_Slice_mAC81A34684A2A53A4B1421858AE1C17E55C7E314 (ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_5 = __this->____pointer;
		V_0 = L_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_8;
		L_8 = il2cpp_unsafe_add<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,int32_t>(L_6, L_7, sizeof(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m61974A48F0249F9BF95E2B30196D22127E7AD9CB_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* ReadOnlySpan_1_ToArray_m1E4F61C18F32A1E062C45D8F74840BCA315F966E (ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_1;
		L_1 = Array_Empty_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_m5293579F263F9A3750FDFA1AA45718B28873BFBB_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_3 = (ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F*)(ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_6;
		L_6 = il2cpp_unsafe_as_ref<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E>(L_5);
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_7 = __this->____pointer;
		V_0 = L_7;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_mF7B64A7A3AED5F75779174F1164B6D60E51A6215(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mD128C1952337C40880D850BF3DDEF1E1BD97556B (ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7 ___0_left, ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7 L_0 = ___0_left;
		ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mEDC9BE8DCA0B1A3E86A7A3BB531829C06CFA5034(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m88AB28B8ACE18061C33378B00F0BA95A8160E0C2 (ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mDAEFC113AB94712BFA3A94A4248AC661617B480D (ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m4702ED3CB3E74C8B043D81F216ADF83AE0418021 (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_12;
		L_12 = il2cpp_unsafe_as_ref<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>(L_11);
		int32_t L_13 = ___1_start;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_14;
		L_14 = il2cpp_unsafe_add<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,int32_t>(L_12, L_13, sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D));
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mF08CD0D591791D31E721C8F03DC3632EC611942E (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_2;
		L_2 = il2cpp_unsafe_as_ref<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>((uint8_t*)L_1);
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ReadOnlySpan_1_get_Item_mB04EED1F39BF7ED9A120CBE4A518B201E47780D2 (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_2 = __this->____pointer;
		V_0 = L_2;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_5;
		L_5 = il2cpp_unsafe_add<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,int32_t>(L_3, L_4, sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mA3BD60807A531BFB3AFB377B9B9F7CF0B1250B91 (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m739A39BB426B19B7583557F308B2BDA52E2C3DD9_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 L_2 = ___0_destination;
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_3 = L_2.____pointer;
		V_0 = L_3;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_5 = __this->____pointer;
		V_0 = L_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m202888740EDFA7E793DB939EF69BE64DA1BC6FD6 (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m739A39BB426B19B7583557F308B2BDA52E2C3DD9_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 L_2 = ___0_destination;
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_3 = L_2.____pointer;
		V_1 = L_3;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_1));
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_5 = __this->____pointer;
		V_1 = L_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m407A2BF8F2614DCAD4AF6825F49D117C0B3C695E (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7 ReadOnlySpan_1_Slice_m34FE3198E00F512E60480008BC8801F38D0BA881 (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_2 = __this->____pointer;
		V_0 = L_2;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_5;
		L_5 = il2cpp_unsafe_add<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,int32_t>(L_3, L_4, sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m729E93C65964D6955F3A0794056B0A8FA3E1FB44_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7 ReadOnlySpan_1_Slice_m2987082B3484085C44DF03114DBB885F2F148209 (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_5 = __this->____pointer;
		V_0 = L_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_8;
		L_8 = il2cpp_unsafe_add<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,int32_t>(L_6, L_7, sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m729E93C65964D6955F3A0794056B0A8FA3E1FB44_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* ReadOnlySpan_1_ToArray_m0AE891B83FB21C2BA94D85716FC3F39D9CD54BEA (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_1;
		L_1 = Array_Empty_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m652D1F78F0DEF31A60A1D09589A89DE06F12C3E4_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_3 = (BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80*)(BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_6;
		L_6 = il2cpp_unsafe_as_ref<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>(L_5);
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_7 = __this->____pointer;
		V_0 = L_7;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mE2A7461F4801231FC4D69BB7DAA36D8F69F6A561 (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7 ___0_left, ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7 L_0 = ___0_left;
		ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mF6DC606C39C6583C5F7B5BD9E2C131F7250B04E2(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m610EFAA346D93C8C29248F5F4AD9CB8D8F333739 (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mD33AF3D7885C2998A72682CC6B91F31482E10063 (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFB384FD10F6D51D6A937EA9B1096145A2AEC76A6 (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_12;
		L_12 = il2cpp_unsafe_as_ref<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3>(L_11);
		int32_t L_13 = ___1_start;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_14;
		L_14 = il2cpp_unsafe_add<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3,int32_t>(L_12, L_13, sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC05B1826DE4F2D24EA4ACBF887B46969A32E1864 (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_2;
		L_2 = il2cpp_unsafe_as_ref<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3>((uint8_t*)L_1);
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ReadOnlySpan_1_get_Item_m6E16724B56B2556345BB55AC0A7D8C91AA15B0C7 (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_2 = __this->____pointer;
		V_0 = L_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_5;
		L_5 = il2cpp_unsafe_add<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3,int32_t>(L_3, L_4, sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m83454782190C82ABACA976D82FF6993162777E4E (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mF487895F53310FF6F399B7BD07038C49D29A6EAB_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 L_2 = ___0_destination;
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_3 = L_2.____pointer;
		V_0 = L_3;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_0));
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_5 = __this->____pointer;
		V_0 = L_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m4925E1D88272BE2E628F28AFFEC4FF09CC2EC647(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mB2196E028EF17F1F5A4C6C69A096BF0133FCC692 (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mF487895F53310FF6F399B7BD07038C49D29A6EAB_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 L_2 = ___0_destination;
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_3 = L_2.____pointer;
		V_1 = L_3;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_1));
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_5 = __this->____pointer;
		V_1 = L_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m4925E1D88272BE2E628F28AFFEC4FF09CC2EC647(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m3D8172EDC539D7ABA59D6A1845314901BA0B0537 (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99 ReadOnlySpan_1_Slice_m70440B15F28E98927CBB808DA56044558856C55E (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_2 = __this->____pointer;
		V_0 = L_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_5;
		L_5 = il2cpp_unsafe_add<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3,int32_t>(L_3, L_4, sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mB60BC31800C0877424E21575E45AE6C8AA50ADA6_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99 ReadOnlySpan_1_Slice_m0CA7AB9DED79E22C791839E29F63ABB68210603E (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_5 = __this->____pointer;
		V_0 = L_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_8;
		L_8 = il2cpp_unsafe_add<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3,int32_t>(L_6, L_7, sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mB60BC31800C0877424E21575E45AE6C8AA50ADA6_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* ReadOnlySpan_1_ToArray_m2B9E4011E3272DB371DBAE00E2C99D63C1096AF7 (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_1;
		L_1 = Array_Empty_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mB6CFBB5D8AF33F0BAE72154209AB29B8D52FBCDA_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_3 = (BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5*)(BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_6;
		L_6 = il2cpp_unsafe_as_ref<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3>(L_5);
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_7 = __this->____pointer;
		V_0 = L_7;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m4925E1D88272BE2E628F28AFFEC4FF09CC2EC647(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m21E6C8D826AE3ECB1D7EEF0FCFA5CE159462FBF5 (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99 ___0_left, ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99 L_0 = ___0_left;
		ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m23D991AB6012F2C9896FC8EF47BC84CF63CF86CD(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mC41E4D57F9D0A34A5F0B4A1FA773F175A8C07F64 (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mF294C697B0A025735FB030B09D96DE149981DB85 (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		uint8_t* L_12;
		L_12 = il2cpp_unsafe_as_ref<uint8_t>(L_11);
		int32_t L_13 = ___1_start;
		uint8_t* L_14;
		L_14 = il2cpp_unsafe_add<uint8_t,int32_t>(L_12, L_13, sizeof(uint8_t));
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>((uint8_t*)L_1);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4, sizeof(uint8_t));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3 = L_2.____pointer;
		V_0 = L_3;
		uint8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m2C902AB57D2363B06C42BDDE761F3E0DFD5541B3 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3 = L_2.____pointer;
		V_1 = L_3;
		uint8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_1 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m72B233A5EEDFB1EC10568EBB03636205A2CD2BA6 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4, sizeof(uint8_t));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7, sizeof(uint8_t));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_7 = __this->____pointer;
		V_0 = L_7;
		uint8_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m05DA1EFA944F510C32BA01D5114BFC037E2226DA (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_left, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_left;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mB932864AE19818E61EF5ADBBCB02A87BD771CDF7(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m8233C912934C08E206DCCC1E5D8A0F8DBCF01D46 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mDC71816B8A88A167F396D550E922E9236155ECA8 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mDADE08E6B4594775C6675B389078E5FE98C745D5 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Il2CppChar* L_12;
		L_12 = il2cpp_unsafe_as_ref<Il2CppChar>(L_11);
		int32_t L_13 = ___1_start;
		Il2CppChar* L_14;
		L_14 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_12, L_13, sizeof(Il2CppChar));
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB16A8EC9CCDE68A166108BE32B6DDA7D7C88BC17 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Il2CppChar* L_2;
		L_2 = il2cpp_unsafe_as_ref<Il2CppChar>((uint8_t*)L_1);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4, sizeof(Il2CppChar));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2 = ___0_destination;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3 = L_2.____pointer;
		V_0 = L_3;
		Il2CppChar* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m22E885FE905F1306DDE8000F155109F7F4987666 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2 = ___0_destination;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3 = L_2.____pointer;
		V_1 = L_3;
		Il2CppChar* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mB13A913EF211B14B719EE62133C15C298642E34D (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) 
{
	Il2CppChar* V_0 = NULL;
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
	}
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_0 = __this->____pointer;
		V_1 = L_0;
		Il2CppChar* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_2;
		L_2 = il2cpp_unsafe_as_ref<Il2CppChar>(L_1);
		V_0 = L_2;
		Il2CppChar* L_3 = V_0;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,Il2CppChar*,intptr_t,false,false>(L_3,NULL));
		int32_t L_5 = __this->____length;
		String_t* L_6;
		L_6 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)L_4, 0, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4, sizeof(Il2CppChar));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Il2CppChar* L_8;
		L_8 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_6, L_7, sizeof(Il2CppChar));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ReadOnlySpan_1_ToArray_m3CC38C41E9FB235D0C9D24033DE4D561B1017488 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1;
		L_1 = Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Il2CppChar* L_6;
		L_6 = il2cpp_unsafe_as_ref<Il2CppChar>(L_5);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_7 = __this->____pointer;
		V_0 = L_7;
		Il2CppChar* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m35D4E25108DD27E665818B5772C1168732E2336A (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_left, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___0_left;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m3ADF20EB2963614D95DD3C4605667A643990414A(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mAFC53FF457D681D6B91A0C169D2EEEAB29625F7F (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m43FCB412B29F8C6C9215173C3D4A72DC006670DF (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m541FC0E035DCC15F5DF08D213BB9F453046A4333 (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_12;
		L_12 = il2cpp_unsafe_as_ref<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(L_11);
		int32_t L_13 = ___1_start;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_14;
		L_14 = il2cpp_unsafe_add<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,int32_t>(L_12, L_13, sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B));
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m38E5369296C7EE2469A5481F2FA5FF6DBCAD417D (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_2;
		L_2 = il2cpp_unsafe_as_ref<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>((uint8_t*)L_1);
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ReadOnlySpan_1_get_Item_mC80956E0E8614BADD2650A21F33984CBCF757260 (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_2 = __this->____pointer;
		V_0 = L_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_5;
		L_5 = il2cpp_unsafe_add<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,int32_t>(L_3, L_4, sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m698DDFC2F5E22F39C11D84BAAE310BA87EFDFCEA (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_2 = ___0_destination;
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_3 = L_2.____pointer;
		V_0 = L_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_5 = __this->____pointer;
		V_0 = L_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mB1560467E9707FB23EE15CAC3F2C4C93541D2153 (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_2 = ___0_destination;
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_3 = L_2.____pointer;
		V_1 = L_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_1));
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_5 = __this->____pointer;
		V_1 = L_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mFECF2AEE52DEEB8AC80A73F4FAF03ACEE3DAC97B (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC ReadOnlySpan_1_Slice_m11D5B53A1442807A1A666F52BF070F057E0C5D54 (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_2 = __this->____pointer;
		V_0 = L_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_5;
		L_5 = il2cpp_unsafe_add<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,int32_t>(L_3, L_4, sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m841651F5E0DEC77984A109EF01090F3F776571FB_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC ReadOnlySpan_1_Slice_m7C374F833D54870C52C84B6EEDDAEB3DF98D067E (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_5 = __this->____pointer;
		V_0 = L_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_8;
		L_8 = il2cpp_unsafe_add<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,int32_t>(L_6, L_7, sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m841651F5E0DEC77984A109EF01090F3F776571FB_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ReadOnlySpan_1_ToArray_m48EC24C05110C226EF52CD8157463D40CA67B796 (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_1;
		L_1 = Array_Empty_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5B415C4745E47108DD9258EBCCB422EFD6B8A0EB_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_3 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_6;
		L_6 = il2cpp_unsafe_as_ref<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(L_5);
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_7 = __this->____pointer;
		V_0 = L_7;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m16FD1C1E0B75454E96CFD82EC29CB75E4250237E (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC ___0_left, ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC L_0 = ___0_left;
		ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mB7E64928FFEDF69D6B4302B599C9461869E152C7(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m3E6B58352198D70006EC18B7534190957698402C (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mD2CF79AC4B544BE1A8B0AE12D0B40A22A651D999 (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m032061AD3999853660D069A9EA55DB865F8A30A1 (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_12;
		L_12 = il2cpp_unsafe_as_ref<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B>(L_11);
		int32_t L_13 = ___1_start;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_14;
		L_14 = il2cpp_unsafe_add<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B,int32_t>(L_12, L_13, sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B));
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mF12C4BAD5EBEFD740D783A0199A885174F3B99A9 (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_2;
		L_2 = il2cpp_unsafe_as_ref<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B>((uint8_t*)L_1);
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ReadOnlySpan_1_get_Item_mD5E2C74DADFFF2EB2013C093403217F643E3FDEA (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_2 = __this->____pointer;
		V_0 = L_2;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_5;
		L_5 = il2cpp_unsafe_add<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B,int32_t>(L_3, L_4, sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m68D6B223E56FE5CC9235A39AB8DE9FBC47859133 (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFC8114ED22DABAF53250748121F627D7199AFE7C_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 L_2 = ___0_destination;
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_3 = L_2.____pointer;
		V_0 = L_3;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_0));
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_5 = __this->____pointer;
		V_0 = L_5;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m7B231E78B8FBBF3128AC7D5D9AA1EF250AB8BBB7(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mABACFEF143C915AAC252D2511FE39D713F095993 (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFC8114ED22DABAF53250748121F627D7199AFE7C_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 L_2 = ___0_destination;
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_3 = L_2.____pointer;
		V_1 = L_3;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_1));
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_5 = __this->____pointer;
		V_1 = L_5;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m7B231E78B8FBBF3128AC7D5D9AA1EF250AB8BBB7(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mB9CD291D96454CA0A23BB1E9C39EE497AAFD7D89 (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B ReadOnlySpan_1_Slice_m837ADFC41A3283757D806263DCCF7F05FAAC286C (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_2 = __this->____pointer;
		V_0 = L_2;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_5;
		L_5 = il2cpp_unsafe_add<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B,int32_t>(L_3, L_4, sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m3263AAE2466F33D0150BF7B8223568108EB82C0B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B ReadOnlySpan_1_Slice_m43607F00E7BAB24EF955A2BC3D5A4F23EB19ECEE (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_5 = __this->____pointer;
		V_0 = L_5;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_8;
		L_8 = il2cpp_unsafe_add<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B,int32_t>(L_6, L_7, sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m3263AAE2466F33D0150BF7B8223568108EB82C0B_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* ReadOnlySpan_1_ToArray_mECE9942E5C633C36CED10EE9B903F15E6B23305F (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_1;
		L_1 = Array_Empty_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m2AE4E8C460D733DF5362B246ED865C5CE0C4AA60_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_3 = (ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A*)(ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_6;
		L_6 = il2cpp_unsafe_as_ref<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B>(L_5);
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_7 = __this->____pointer;
		V_0 = L_7;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m7B231E78B8FBBF3128AC7D5D9AA1EF250AB8BBB7(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mE925D73963DC373FE2AB0BFA0D832C03E5DDACD3 (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B ___0_left, ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B L_0 = ___0_left;
		ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mCFF3D8D583CDF24902773BD33205A6488B81C7B3(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mE7EF0D565949C53DA00C392FB82EBBF3F0C62204 (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m962F01CDE19CACEC7562C969E3FA432C9A506FBC (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mE61DFBDCC9BBEB3D9E67475F3773405DF6FC847B (ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962* __this, ConvertMeshExtrasDataU5BU5D_t1420B76450ADCE1EE0AD98D00A25825A1DA9EE38* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		ConvertMeshExtrasDataU5BU5D_t1420B76450ADCE1EE0AD98D00A25825A1DA9EE38* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ConvertMeshExtrasDataU5BU5D_t1420B76450ADCE1EE0AD98D00A25825A1DA9EE38* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ConvertMeshExtrasDataU5BU5D_t1420B76450ADCE1EE0AD98D00A25825A1DA9EE38* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ConvertMeshExtrasDataU5BU5D_t1420B76450ADCE1EE0AD98D00A25825A1DA9EE38* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C* L_12;
		L_12 = il2cpp_unsafe_as_ref<ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C>(L_11);
		int32_t L_13 = ___1_start;
		ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C* L_14;
		L_14 = il2cpp_unsafe_add<ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C,int32_t>(L_12, L_13, sizeof(ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C));
		ByReference_1_t2C0A9D8C238DC2DEEFEA14FBC9E777B0AEFCD6F0 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mE6679731A19770BBE0DA855EA7D4EA93256CC87A (ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C* L_2;
		L_2 = il2cpp_unsafe_as_ref<ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C>((uint8_t*)L_1);
		ByReference_1_t2C0A9D8C238DC2DEEFEA14FBC9E777B0AEFCD6F0 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C* ReadOnlySpan_1_get_Item_m2D8780218AF6888A2D88FA1EFB26F8A0BBA85168 (ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t2C0A9D8C238DC2DEEFEA14FBC9E777B0AEFCD6F0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t2C0A9D8C238DC2DEEFEA14FBC9E777B0AEFCD6F0 L_2 = __this->____pointer;
		V_0 = L_2;
		ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C* L_5;
		L_5 = il2cpp_unsafe_add<ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C,int32_t>(L_3, L_4, sizeof(ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m12C3FFBF34895F22A3355AD65545234FBB1DBC1E (ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962* __this, Span_1_tFD51B8D0B2DA78C0F911056FC60AB6B732AD4F7C ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t2C0A9D8C238DC2DEEFEA14FBC9E777B0AEFCD6F0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mBAB1E51297560C637528EE41B5EB5658D2EFE5D9_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tFD51B8D0B2DA78C0F911056FC60AB6B732AD4F7C L_2 = ___0_destination;
		ByReference_1_t2C0A9D8C238DC2DEEFEA14FBC9E777B0AEFCD6F0 L_3 = L_2.____pointer;
		V_0 = L_3;
		ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C, (Il2CppByReference*)(&V_0));
		ByReference_1_t2C0A9D8C238DC2DEEFEA14FBC9E777B0AEFCD6F0 L_5 = __this->____pointer;
		V_0 = L_5;
		ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C_m25EF20C7583AB5F948F033EAAAD3726E13608167(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m88D59F0F6F41F2D44F503746E6AE26BAB2A45005 (ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962* __this, Span_1_tFD51B8D0B2DA78C0F911056FC60AB6B732AD4F7C ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t2C0A9D8C238DC2DEEFEA14FBC9E777B0AEFCD6F0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mBAB1E51297560C637528EE41B5EB5658D2EFE5D9_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tFD51B8D0B2DA78C0F911056FC60AB6B732AD4F7C L_2 = ___0_destination;
		ByReference_1_t2C0A9D8C238DC2DEEFEA14FBC9E777B0AEFCD6F0 L_3 = L_2.____pointer;
		V_1 = L_3;
		ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C, (Il2CppByReference*)(&V_1));
		ByReference_1_t2C0A9D8C238DC2DEEFEA14FBC9E777B0AEFCD6F0 L_5 = __this->____pointer;
		V_1 = L_5;
		ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C_m25EF20C7583AB5F948F033EAAAD3726E13608167(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m03592E5474FB9DC85413161436F5AABBF47A89B8 (ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t2C0A9D8C238DC2DEEFEA14FBC9E777B0AEFCD6F0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962 ReadOnlySpan_1_Slice_m7846DBD0464FDEB89067CC6610BAA49D2CE33CF3 (ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t2C0A9D8C238DC2DEEFEA14FBC9E777B0AEFCD6F0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t2C0A9D8C238DC2DEEFEA14FBC9E777B0AEFCD6F0 L_2 = __this->____pointer;
		V_0 = L_2;
		ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C* L_5;
		L_5 = il2cpp_unsafe_add<ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C,int32_t>(L_3, L_4, sizeof(ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m137BDE40C94EA6785C970709ABF68088E145D866_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962 ReadOnlySpan_1_Slice_m3DA9F65F222100E7D2AADE09DFE6D2FF5114504D (ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t2C0A9D8C238DC2DEEFEA14FBC9E777B0AEFCD6F0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t2C0A9D8C238DC2DEEFEA14FBC9E777B0AEFCD6F0 L_5 = __this->____pointer;
		V_0 = L_5;
		ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C* L_8;
		L_8 = il2cpp_unsafe_add<ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C,int32_t>(L_6, L_7, sizeof(ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m137BDE40C94EA6785C970709ABF68088E145D866_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConvertMeshExtrasDataU5BU5D_t1420B76450ADCE1EE0AD98D00A25825A1DA9EE38* ReadOnlySpan_1_ToArray_m006E0A1BC7969FD5892866486C384CDAA514C8AA (ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t2C0A9D8C238DC2DEEFEA14FBC9E777B0AEFCD6F0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ConvertMeshExtrasDataU5BU5D_t1420B76450ADCE1EE0AD98D00A25825A1DA9EE38* L_1;
		L_1 = Array_Empty_TisConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C_m4779104F7674EACD211A240162D4414087C431E8_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConvertMeshExtrasDataU5BU5D_t1420B76450ADCE1EE0AD98D00A25825A1DA9EE38* L_3 = (ConvertMeshExtrasDataU5BU5D_t1420B76450ADCE1EE0AD98D00A25825A1DA9EE38*)(ConvertMeshExtrasDataU5BU5D_t1420B76450ADCE1EE0AD98D00A25825A1DA9EE38*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		ConvertMeshExtrasDataU5BU5D_t1420B76450ADCE1EE0AD98D00A25825A1DA9EE38* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C* L_6;
		L_6 = il2cpp_unsafe_as_ref<ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C>(L_5);
		ByReference_1_t2C0A9D8C238DC2DEEFEA14FBC9E777B0AEFCD6F0 L_7 = __this->____pointer;
		V_0 = L_7;
		ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C_m25EF20C7583AB5F948F033EAAAD3726E13608167(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mA5AF337E9D704B5834594ACFA9D981D58F9D60D9 (ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962 ___0_left, ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962 L_0 = ___0_left;
		ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mE5D73B81C2027EABC9DF61DD832743B960E6C20B(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m804D1B7BFDC2D5BB9875789AD83D36D769B63E0E (ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m7C071752001C4849D60892C3876A353248FEE04E (ReadOnlySpan_1_tB1D1F5FAB48CD1D2138B8A65584D64A35384B962* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA69E37324A8CF5B873DD775675B156437C5DC12D (ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A* __this, ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_12;
		L_12 = il2cpp_unsafe_as_ref<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1>(L_11);
		int32_t L_13 = ___1_start;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_14;
		L_14 = il2cpp_unsafe_add<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1,int32_t>(L_12, L_13, sizeof(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1));
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m14A1B0C89315F17814260A9EC5B6BAEB97D133E5 (ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_2;
		L_2 = il2cpp_unsafe_as_ref<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1>((uint8_t*)L_1);
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* ReadOnlySpan_1_get_Item_mD9A78516014DFA302A15D239FA8202776A7E9539 (ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_2 = __this->____pointer;
		V_0 = L_2;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_5;
		L_5 = il2cpp_unsafe_add<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1,int32_t>(L_3, L_4, sizeof(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mA6C86547DDF9DE5A3EDB595EA6A0D54B795FB6CE (ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A* __this, Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m3B50FB2CF29A0E7C0C8B69E4E5A72D75883EBC4B_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48 L_2 = ___0_destination;
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_3 = L_2.____pointer;
		V_0 = L_3;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1, (Il2CppByReference*)(&V_0));
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_5 = __this->____pointer;
		V_0 = L_5;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m747B7D7DC0AA466783F69D3676EC5EE854D08D52(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m3F9D681B9D277F095715FD341EE75C2AB52C3B5D (ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A* __this, Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m3B50FB2CF29A0E7C0C8B69E4E5A72D75883EBC4B_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48 L_2 = ___0_destination;
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_3 = L_2.____pointer;
		V_1 = L_3;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1, (Il2CppByReference*)(&V_1));
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_5 = __this->____pointer;
		V_1 = L_5;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m747B7D7DC0AA466783F69D3676EC5EE854D08D52(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m578FEE09F52F46D6FFBAFC2FC35F5BBD77B4F60D (ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A ReadOnlySpan_1_Slice_m0A4934BB064715E5225642C93C710CAAFED22776 (ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_2 = __this->____pointer;
		V_0 = L_2;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_5;
		L_5 = il2cpp_unsafe_add<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1,int32_t>(L_3, L_4, sizeof(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mDB9E4DFF0687E0A5405FF4F6387379524B1B07AB_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A ReadOnlySpan_1_Slice_m67EFE7408463873AAFD43728C5FC0C2FE0599AF0 (ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_5 = __this->____pointer;
		V_0 = L_5;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_8;
		L_8 = il2cpp_unsafe_add<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1,int32_t>(L_6, L_7, sizeof(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mDB9E4DFF0687E0A5405FF4F6387379524B1B07AB_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* ReadOnlySpan_1_ToArray_mA908B43038DF7C5AD269469D4E4B1D9862F4F2E1 (ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* L_1;
		L_1 = Array_Empty_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m164EDF2519D24430C10F8BB106ADB252BF225C26_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* L_3 = (ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2*)(ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_6;
		L_6 = il2cpp_unsafe_as_ref<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1>(L_5);
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_7 = __this->____pointer;
		V_0 = L_7;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m747B7D7DC0AA466783F69D3676EC5EE854D08D52(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m2A77135ABA53526AA5CF1F43C42ABD4F9B8A106F (ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A ___0_left, ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A L_0 = ___0_left;
		ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m0615A4A62B9BB81921E873791EA6E0973505024A(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m9B4CC218C369D8AE805235830EECDF1E70D16E89 (ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m2EEE014653545F86D63A44252AE86205115E84B0 (ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mCBC2F8C3CEBB0E8F75933B7E87B5153421D89730 (ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA* __this, CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_12;
		L_12 = il2cpp_unsafe_as_ref<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8>(L_11);
		int32_t L_13 = ___1_start;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_14;
		L_14 = il2cpp_unsafe_add<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8,int32_t>(L_12, L_13, sizeof(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8));
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD4CD6C8BBED5DFEF79F3824DC60BB75383680DE4 (ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_2;
		L_2 = il2cpp_unsafe_as_ref<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8>((uint8_t*)L_1);
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* ReadOnlySpan_1_get_Item_mAC6277F34695A2848F448A2A18244857563EA132 (ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_2 = __this->____pointer;
		V_0 = L_2;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_5;
		L_5 = il2cpp_unsafe_add<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8,int32_t>(L_3, L_4, sizeof(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m222C63C7A336C2501B38A7F611D522ECE358AAC9 (ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA* __this, Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mD8B694DDD50485878B197BD97C4848FA0E770DCD_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30 L_2 = ___0_destination;
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_3 = L_2.____pointer;
		V_0 = L_3;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8, (Il2CppByReference*)(&V_0));
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_5 = __this->____pointer;
		V_0 = L_5;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m8A5B65BF262A2B1C988311D13733E08E197C8A03(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m2C323DCD5E97C48E69FE357A3F44708FF717A6EC (ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA* __this, Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mD8B694DDD50485878B197BD97C4848FA0E770DCD_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30 L_2 = ___0_destination;
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_3 = L_2.____pointer;
		V_1 = L_3;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8, (Il2CppByReference*)(&V_1));
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_5 = __this->____pointer;
		V_1 = L_5;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m8A5B65BF262A2B1C988311D13733E08E197C8A03(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mB4866E67F294F9391FCC04089D39530ED81DF25A (ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA ReadOnlySpan_1_Slice_m6DAB57C8973069754B0BCCBBC08567450597296D (ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_2 = __this->____pointer;
		V_0 = L_2;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_5;
		L_5 = il2cpp_unsafe_add<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8,int32_t>(L_3, L_4, sizeof(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m75A7463F5588DB7F45AC0CE204FFB188419EC066_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA ReadOnlySpan_1_Slice_m0521253D68232A086AA557E84BAB2AB444DB310D (ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_5 = __this->____pointer;
		V_0 = L_5;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_8;
		L_8 = il2cpp_unsafe_add<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8,int32_t>(L_6, L_7, sizeof(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m75A7463F5588DB7F45AC0CE204FFB188419EC066_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* ReadOnlySpan_1_ToArray_m96F8D688EFD1CF2C71600493BE7CC67A8A3018BE (ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* L_1;
		L_1 = Array_Empty_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m636107AFEDC2888AAD9A190C5FCB115D4483F86F_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* L_3 = (CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5*)(CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_6;
		L_6 = il2cpp_unsafe_as_ref<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8>(L_5);
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_7 = __this->____pointer;
		V_0 = L_7;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m8A5B65BF262A2B1C988311D13733E08E197C8A03(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mCD19C469FAA1ECD1F15F1BD193AA554969E25A2E (ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA ___0_left, ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA L_0 = ___0_left;
		ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m80E264A2D14E2F539A355539BA0FCA443D47DF41(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mDC00F904D02CA0104AE80CBDD9AB8AA0CFA850A5 (ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mFAF4CF4DA5577E6A03EC52FE1FFA6BE673216DEA (ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m633345025A44899B1D6B3B67DDC6E032D4E4B3B1 (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_12;
		L_12 = il2cpp_unsafe_as_ref<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0>(L_11);
		int32_t L_13 = ___1_start;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_14;
		L_14 = il2cpp_unsafe_add<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0,int32_t>(L_12, L_13, sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0));
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m5A5B3C790AD4E42DC6EDEA48B0D29E47501DC3C6 (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_2;
		L_2 = il2cpp_unsafe_as_ref<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0>((uint8_t*)L_1);
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ReadOnlySpan_1_get_Item_m6BDFC2A4D86CDB0F646B301A24BC419A669B9704 (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_2 = __this->____pointer;
		V_0 = L_2;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_5;
		L_5 = il2cpp_unsafe_add<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0,int32_t>(L_3, L_4, sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mD48E9C4252FC88CDF405723646409C61631CFDCD (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m385F87A001B432F97C5381EF1F01B485642ED27D_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 L_2 = ___0_destination;
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_3 = L_2.____pointer;
		V_0 = L_3;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_0));
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_5 = __this->____pointer;
		V_0 = L_5;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m9A4B5780CB8BC1ACD63C193EC68D5E217CDBAC80(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mAF5D52A05AB954458A23F5ACD5E897042AFA2D3B (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m385F87A001B432F97C5381EF1F01B485642ED27D_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 L_2 = ___0_destination;
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_3 = L_2.____pointer;
		V_1 = L_3;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_1));
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_5 = __this->____pointer;
		V_1 = L_5;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m9A4B5780CB8BC1ACD63C193EC68D5E217CDBAC80(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mF9E6320B55655799993BE5B2BB07BADC41E61413 (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF ReadOnlySpan_1_Slice_m61BB46FA0EDADBD25CF22190712072857D29AC46 (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_2 = __this->____pointer;
		V_0 = L_2;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_5;
		L_5 = il2cpp_unsafe_add<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0,int32_t>(L_3, L_4, sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m7515BCC9EAB305B335A968E684B597A1FC9A5F24_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF ReadOnlySpan_1_Slice_m2CEB62730124955C5F8EEFDF48A6E757EEB7BCA5 (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_5 = __this->____pointer;
		V_0 = L_5;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_8;
		L_8 = il2cpp_unsafe_add<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0,int32_t>(L_6, L_7, sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m7515BCC9EAB305B335A968E684B597A1FC9A5F24_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* ReadOnlySpan_1_ToArray_m1BBC6D488C602F6741A91874B1FE889B2ADC0CAB (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_1;
		L_1 = Array_Empty_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m46787E1D6E481E4790F1F9E63000A067C9AF33CD_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_3 = (CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61*)(CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_6;
		L_6 = il2cpp_unsafe_as_ref<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0>(L_5);
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_7 = __this->____pointer;
		V_0 = L_7;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m9A4B5780CB8BC1ACD63C193EC68D5E217CDBAC80(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m8F5E7BD359C4A2F109B65309B438C7234A617728 (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF ___0_left, ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF L_0 = ___0_left;
		ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m26E754ACC25871CADAADB0E10FEFBC9C47C4B94B(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m963C6BC056461AE1848F94FBAD5F8686C64C821D (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m2CB104DD7CC333E1E68A04D1DEC91802B8B7E257 (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m209F73E03C4F82E43A9141254DE8DC27F13617CF (ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B* __this, DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_12;
		L_12 = il2cpp_unsafe_as_ref<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5>(L_11);
		int32_t L_13 = ___1_start;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_14;
		L_14 = il2cpp_unsafe_add<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5,int32_t>(L_12, L_13, sizeof(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5));
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD98591E8F5A6E535D39AA58FCE41E4B27182E810 (ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_2;
		L_2 = il2cpp_unsafe_as_ref<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5>((uint8_t*)L_1);
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ReadOnlySpan_1_get_Item_mE7EDF836F0E328D51C4004167476A50FFC2F9A22 (ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_2 = __this->____pointer;
		V_0 = L_2;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_5;
		L_5 = il2cpp_unsafe_add<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5,int32_t>(L_3, L_4, sizeof(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m5D653490DA3BDBB9D2DDE6AFF621140F80AAF0A0 (ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B* __this, Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFF4419EF107B2F1CD3364357F9723EAC96433F03_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73 L_2 = ___0_destination;
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_3 = L_2.____pointer;
		V_0 = L_3;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5, (Il2CppByReference*)(&V_0));
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_5 = __this->____pointer;
		V_0 = L_5;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mDF1CDB2973A50B932ED2E72CC7A57E75C7FCAB54(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m245CACE211DD4EE664BC4144ABCDC0F4BF1ADA9D (ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B* __this, Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFF4419EF107B2F1CD3364357F9723EAC96433F03_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73 L_2 = ___0_destination;
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_3 = L_2.____pointer;
		V_1 = L_3;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5, (Il2CppByReference*)(&V_1));
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_5 = __this->____pointer;
		V_1 = L_5;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mDF1CDB2973A50B932ED2E72CC7A57E75C7FCAB54(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m54BCA8931688B791BF303FC265317FFAB141290A (ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B ReadOnlySpan_1_Slice_m8038527A50F3B7299802F8C1F4EF7F369E10BD4A (ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_2 = __this->____pointer;
		V_0 = L_2;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_5;
		L_5 = il2cpp_unsafe_add<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5,int32_t>(L_3, L_4, sizeof(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mB6153B16E29314D6497048CA9F509CF21C277F71_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B ReadOnlySpan_1_Slice_mEF5B48D3930A1FEF921A8A8C0E032E95E65BE565 (ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_5 = __this->____pointer;
		V_0 = L_5;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_8;
		L_8 = il2cpp_unsafe_add<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5,int32_t>(L_6, L_7, sizeof(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mB6153B16E29314D6497048CA9F509CF21C277F71_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* ReadOnlySpan_1_ToArray_m80BEE12A782B14B3A3E5ECF46321AD376CE13235 (ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* L_1;
		L_1 = Array_Empty_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_m05A4DA3A4ACD6D784909779870EE466DF7778EC7_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* L_3 = (DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB*)(DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_6;
		L_6 = il2cpp_unsafe_as_ref<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5>(L_5);
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_7 = __this->____pointer;
		V_0 = L_7;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mDF1CDB2973A50B932ED2E72CC7A57E75C7FCAB54(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m5644C567B641FCB33941438C16910390FD8C3521 (ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B ___0_left, ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B L_0 = ___0_left;
		ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mE3EC2F33B96AEACAFC2FAF883F633DF80BC23419(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m08F876928AAF55745A5F1EB5E1E1338B8531D456 (ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mEFDAA9C6A685091B275A8AE7D850F13B727034B7 (ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m2FF722F394612C0C9382C90474C88F2416F8AE2D (ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7* __this, EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_12;
		L_12 = il2cpp_unsafe_as_ref<EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4>(L_11);
		int32_t L_13 = ___1_start;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_14;
		L_14 = il2cpp_unsafe_add<EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4,int32_t>(L_12, L_13, sizeof(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4));
		ByReference_1_tA7F58D709342B3D9D7560427019EB2E4432E1EDA L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mCF7E7ABBD5E04272C99D8741B8E86FC8AB8B529F (ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_2;
		L_2 = il2cpp_unsafe_as_ref<EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4>((uint8_t*)L_1);
		ByReference_1_tA7F58D709342B3D9D7560427019EB2E4432E1EDA L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ReadOnlySpan_1_get_Item_m42DB9EE448D34AB4AE40E87D586F57A9132879E3 (ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tA7F58D709342B3D9D7560427019EB2E4432E1EDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tA7F58D709342B3D9D7560427019EB2E4432E1EDA L_2 = __this->____pointer;
		V_0 = L_2;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_5;
		L_5 = il2cpp_unsafe_add<EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4,int32_t>(L_3, L_4, sizeof(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mE6EC0D3CEBB9C6B47EEF8DF277CE1221324F9B40 (ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7* __this, Span_1_t43234050271CE7DE614C13A0021A344861FB5593 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tA7F58D709342B3D9D7560427019EB2E4432E1EDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m43418E7D1C7802E4F31E08DAE3AD5C88BAACB75F_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t43234050271CE7DE614C13A0021A344861FB5593 L_2 = ___0_destination;
		ByReference_1_tA7F58D709342B3D9D7560427019EB2E4432E1EDA L_3 = L_2.____pointer;
		V_0 = L_3;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4, (Il2CppByReference*)(&V_0));
		ByReference_1_tA7F58D709342B3D9D7560427019EB2E4432E1EDA L_5 = __this->____pointer;
		V_0 = L_5;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m0343B8FCB3868B60552322D0BFD9C87585A924B1(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mCCA73F5E55936F36E10543E38C80859BA59B89CD (ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7* __this, Span_1_t43234050271CE7DE614C13A0021A344861FB5593 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tA7F58D709342B3D9D7560427019EB2E4432E1EDA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m43418E7D1C7802E4F31E08DAE3AD5C88BAACB75F_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t43234050271CE7DE614C13A0021A344861FB5593 L_2 = ___0_destination;
		ByReference_1_tA7F58D709342B3D9D7560427019EB2E4432E1EDA L_3 = L_2.____pointer;
		V_1 = L_3;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4, (Il2CppByReference*)(&V_1));
		ByReference_1_tA7F58D709342B3D9D7560427019EB2E4432E1EDA L_5 = __this->____pointer;
		V_1 = L_5;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m0343B8FCB3868B60552322D0BFD9C87585A924B1(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m412E02D15DE4E1BF997A59700BD5B46513E3E3A1 (ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tA7F58D709342B3D9D7560427019EB2E4432E1EDA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7 ReadOnlySpan_1_Slice_mD199EE1CFA9B18A60C8655AF7AB2147D9637EF62 (ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tA7F58D709342B3D9D7560427019EB2E4432E1EDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tA7F58D709342B3D9D7560427019EB2E4432E1EDA L_2 = __this->____pointer;
		V_0 = L_2;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_5;
		L_5 = il2cpp_unsafe_add<EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4,int32_t>(L_3, L_4, sizeof(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mF80BB7536BFA47CBB0B535E725155286821D1B34_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7 ReadOnlySpan_1_Slice_m5989BEC5722C494B930E33DE8B0E6F33EE37F315 (ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tA7F58D709342B3D9D7560427019EB2E4432E1EDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tA7F58D709342B3D9D7560427019EB2E4432E1EDA L_5 = __this->____pointer;
		V_0 = L_5;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_8;
		L_8 = il2cpp_unsafe_add<EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4,int32_t>(L_6, L_7, sizeof(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mF80BB7536BFA47CBB0B535E725155286821D1B34_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49* ReadOnlySpan_1_ToArray_m485A8243005E55EC8B50969DED3BB39B7B0AAA58 (ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tA7F58D709342B3D9D7560427019EB2E4432E1EDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49* L_1;
		L_1 = Array_Empty_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m5BB1B3F942E717EB0EEA932DE146F79E347604BA_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49* L_3 = (EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49*)(EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_6;
		L_6 = il2cpp_unsafe_as_ref<EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4>(L_5);
		ByReference_1_tA7F58D709342B3D9D7560427019EB2E4432E1EDA L_7 = __this->____pointer;
		V_0 = L_7;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m0343B8FCB3868B60552322D0BFD9C87585A924B1(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m35EF104C7AC1D26A3119F3C09418E038C230FEED (ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7 ___0_left, ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7 L_0 = ___0_left;
		ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m049B1C57C88411BB8B33BBA73450C898DD25013F(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m3A207D208958A65EFC450E4E2690105FAE6D7221 (ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m02EA2775837B0A3916D64D65560FD2794901A63D (ReadOnlySpan_1_t56EB56BD24E849B1A28025A5D541442A2AB282E7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD4098D65E6BBC2BA630A548C16B84B48EDD8A3BF (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744* __this, EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_12;
		L_12 = il2cpp_unsafe_as_ref<EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B>(L_11);
		int32_t L_13 = ___1_start;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_14;
		L_14 = il2cpp_unsafe_add<EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B,int32_t>(L_12, L_13, sizeof(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B));
		ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mCEE03EA1C21BB24DC73A46B465EE1D04E3B7D22B (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_2;
		L_2 = il2cpp_unsafe_as_ref<EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B>((uint8_t*)L_1);
		ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* ReadOnlySpan_1_get_Item_m7A125B067FB443CD8FDC8566371E0447F3C6138F (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 L_2 = __this->____pointer;
		V_0 = L_2;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_5;
		L_5 = il2cpp_unsafe_add<EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B,int32_t>(L_3, L_4, sizeof(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m7C4233C71F8E179C8722EE5CDD5454860E423291 (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744* __this, Span_1_t6834048668549DB2E233F0E7E8E71F1E3AFDE712 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m7DA42A78AA51399F6E2624EC951C4C5675A83DF4_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t6834048668549DB2E233F0E7E8E71F1E3AFDE712 L_2 = ___0_destination;
		ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 L_3 = L_2.____pointer;
		V_0 = L_3;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B, (Il2CppByReference*)(&V_0));
		ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 L_5 = __this->____pointer;
		V_0 = L_5;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mDFAF68DAF7C667016B41A5C085293991850D1D8C(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m8F8A70A092F5A159FB14261A13A7C5FBB5787F82 (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744* __this, Span_1_t6834048668549DB2E233F0E7E8E71F1E3AFDE712 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m7DA42A78AA51399F6E2624EC951C4C5675A83DF4_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t6834048668549DB2E233F0E7E8E71F1E3AFDE712 L_2 = ___0_destination;
		ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 L_3 = L_2.____pointer;
		V_1 = L_3;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B, (Il2CppByReference*)(&V_1));
		ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 L_5 = __this->____pointer;
		V_1 = L_5;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mDFAF68DAF7C667016B41A5C085293991850D1D8C(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m6A8FE05FEFB7E4D9F39AD377F7D38CE0683DE7B2 (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744 ReadOnlySpan_1_Slice_mE6F7FEF5269F67616751BEBF8BAFF8C1F5857BDC (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 L_2 = __this->____pointer;
		V_0 = L_2;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_5;
		L_5 = il2cpp_unsafe_add<EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B,int32_t>(L_3, L_4, sizeof(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m47891B0EBECA0C6CBF5505295F2B0E603027A014_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744 ReadOnlySpan_1_Slice_m3F56144D4C2C592B43D78C7B42F73A48A9E5177C (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 L_5 = __this->____pointer;
		V_0 = L_5;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_8;
		L_8 = il2cpp_unsafe_add<EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B,int32_t>(L_6, L_7, sizeof(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m47891B0EBECA0C6CBF5505295F2B0E603027A014_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* ReadOnlySpan_1_ToArray_mAEEC9EB01051A837B254B70729B5B1B1F336EDB8 (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* L_1;
		L_1 = Array_Empty_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m87CA399E64D82A02BCE81DF2F8F52AD65AC9BC25_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* L_3 = (EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1*)(EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_6;
		L_6 = il2cpp_unsafe_as_ref<EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B>(L_5);
		ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 L_7 = __this->____pointer;
		V_0 = L_7;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mDFAF68DAF7C667016B41A5C085293991850D1D8C(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m7CAE4183685BDA8C8842624970354F4D5BE1995F (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744 ___0_left, ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744 L_0 = ___0_left;
		ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m039886C6A427B52C591AA65AEA91EED22AB2F907(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mA28D1F03418262EBD1FB9594CA7FB7FD70610212 (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m1E0EF80A7EE77059FD9DAA68BD8D6790279AE80E (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB0FC236D9E3748441AD25DDC3B692EA51BA6233A (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_12;
		L_12 = il2cpp_unsafe_as_ref<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8>(L_11);
		int32_t L_13 = ___1_start;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_14;
		L_14 = il2cpp_unsafe_add<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8,int32_t>(L_12, L_13, sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8));
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0852AA20C81ECA081FB83A9EDDB3F1E66794F2BC (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_2;
		L_2 = il2cpp_unsafe_as_ref<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8>((uint8_t*)L_1);
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ReadOnlySpan_1_get_Item_m6FF93DA90032CD75D75A2B9413FC9C7C989EEC19 (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_2 = __this->____pointer;
		V_0 = L_2;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_5;
		L_5 = il2cpp_unsafe_add<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8,int32_t>(L_3, L_4, sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m950DB44591C9EDF481214225C635C41C9D6C4822 (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mF40B0389DD242EC35D44F25C7490012314A18568_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A L_2 = ___0_destination;
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_3 = L_2.____pointer;
		V_0 = L_3;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_0));
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_5 = __this->____pointer;
		V_0 = L_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8D3BF3FF1317BAF44B55A14301469F3AB0E60900(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mE28997B1566C7D16DA39612A5B96C77D8729F19F (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mF40B0389DD242EC35D44F25C7490012314A18568_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A L_2 = ___0_destination;
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_3 = L_2.____pointer;
		V_1 = L_3;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_1));
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_5 = __this->____pointer;
		V_1 = L_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8D3BF3FF1317BAF44B55A14301469F3AB0E60900(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m39E431536CAFB0586A83817A0D8934F342A77F48 (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 ReadOnlySpan_1_Slice_mF70146AF37D44B84C4A0A11375621CC608C0B05E (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_2 = __this->____pointer;
		V_0 = L_2;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_5;
		L_5 = il2cpp_unsafe_add<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8,int32_t>(L_3, L_4, sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m1F035A6038B22EE2B7A2E6000536EFB888AC4043_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 ReadOnlySpan_1_Slice_m99E30EBEBE3124057493D4338CB1EB24AE74C5C8 (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_5 = __this->____pointer;
		V_0 = L_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_8;
		L_8 = il2cpp_unsafe_add<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8,int32_t>(L_6, L_7, sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m1F035A6038B22EE2B7A2E6000536EFB888AC4043_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* ReadOnlySpan_1_ToArray_mEEDDCFF19B7FF3D3231361BBE06198D8612EA390 (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_1;
		L_1 = Array_Empty_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8EF4F258FBF5AEC804ED891772BFFC84A01DB5D9_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_3 = (EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9*)(EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_6;
		L_6 = il2cpp_unsafe_as_ref<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8>(L_5);
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_7 = __this->____pointer;
		V_0 = L_7;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8D3BF3FF1317BAF44B55A14301469F3AB0E60900(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m6B0288B6C51C7CE7E8D21200E8A4365DA7B3A5BE (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 ___0_left, ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 L_0 = ___0_left;
		ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m0064C72F0B13F04420687FB7276738A0B0DFFB3A(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m2773D8208EA7C89CB595446E96CE633046F24AEB (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m302AC96825FFAAED523A298F89F52C7973BF4303 (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m861A004ADC4E206F950124A879DB0F0551831A07 (ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27* __this, FilterParameterU5BU5D_t0EF6EE29F03D6988D16E72B9209B753EE379FF58* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		FilterParameterU5BU5D_t0EF6EE29F03D6988D16E72B9209B753EE379FF58* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		FilterParameterU5BU5D_t0EF6EE29F03D6988D16E72B9209B753EE379FF58* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		FilterParameterU5BU5D_t0EF6EE29F03D6988D16E72B9209B753EE379FF58* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		FilterParameterU5BU5D_t0EF6EE29F03D6988D16E72B9209B753EE379FF58* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060* L_12;
		L_12 = il2cpp_unsafe_as_ref<FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060>(L_11);
		int32_t L_13 = ___1_start;
		FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060* L_14;
		L_14 = il2cpp_unsafe_add<FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060,int32_t>(L_12, L_13, sizeof(FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060));
		ByReference_1_tCBFED671C53B2B6095EBEF9264D493D000CFD8BB L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mF496B198D389067B7F239EF7716257B3228E4467 (ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060* L_2;
		L_2 = il2cpp_unsafe_as_ref<FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060>((uint8_t*)L_1);
		ByReference_1_tCBFED671C53B2B6095EBEF9264D493D000CFD8BB L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060* ReadOnlySpan_1_get_Item_mBA9C1F7B7B9AB4539E9CC87CF4AD1711E5F8A98A (ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tCBFED671C53B2B6095EBEF9264D493D000CFD8BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tCBFED671C53B2B6095EBEF9264D493D000CFD8BB L_2 = __this->____pointer;
		V_0 = L_2;
		FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060* L_5;
		L_5 = il2cpp_unsafe_add<FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060,int32_t>(L_3, L_4, sizeof(FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mD75A6DE532250846E959AB86A0CCFD13DB49EB5F (ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27* __this, Span_1_t420A830887305E0E02A744003AACBACED16172EB ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tCBFED671C53B2B6095EBEF9264D493D000CFD8BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m89645090890B982B6625634865741039212A2D7D_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t420A830887305E0E02A744003AACBACED16172EB L_2 = ___0_destination;
		ByReference_1_tCBFED671C53B2B6095EBEF9264D493D000CFD8BB L_3 = L_2.____pointer;
		V_0 = L_3;
		FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060, (Il2CppByReference*)(&V_0));
		ByReference_1_tCBFED671C53B2B6095EBEF9264D493D000CFD8BB L_5 = __this->____pointer;
		V_0 = L_5;
		FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisFilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060_mDD7300E8E4A6CFCCD3B437359FAAA469263822D0(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mC0FCD6A49D97B1CA7977E753C61E4C42E25533CA (ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27* __this, Span_1_t420A830887305E0E02A744003AACBACED16172EB ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tCBFED671C53B2B6095EBEF9264D493D000CFD8BB V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m89645090890B982B6625634865741039212A2D7D_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t420A830887305E0E02A744003AACBACED16172EB L_2 = ___0_destination;
		ByReference_1_tCBFED671C53B2B6095EBEF9264D493D000CFD8BB L_3 = L_2.____pointer;
		V_1 = L_3;
		FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060, (Il2CppByReference*)(&V_1));
		ByReference_1_tCBFED671C53B2B6095EBEF9264D493D000CFD8BB L_5 = __this->____pointer;
		V_1 = L_5;
		FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisFilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060_mDD7300E8E4A6CFCCD3B437359FAAA469263822D0(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m7E3FCD13544821C35B8A0AFAE0A27D70F69AE5F5 (ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tCBFED671C53B2B6095EBEF9264D493D000CFD8BB V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27 ReadOnlySpan_1_Slice_m12C38A9EDC24DFEEDF4489D7381EB0C2EE759B3A (ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tCBFED671C53B2B6095EBEF9264D493D000CFD8BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tCBFED671C53B2B6095EBEF9264D493D000CFD8BB L_2 = __this->____pointer;
		V_0 = L_2;
		FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060* L_5;
		L_5 = il2cpp_unsafe_add<FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060,int32_t>(L_3, L_4, sizeof(FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m25FED3B4C89777BD3B6B73F981D9CF573F5C3435_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27 ReadOnlySpan_1_Slice_m1288D0DB0AFF5016B60F7D6BDB99E633185007D4 (ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tCBFED671C53B2B6095EBEF9264D493D000CFD8BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tCBFED671C53B2B6095EBEF9264D493D000CFD8BB L_5 = __this->____pointer;
		V_0 = L_5;
		FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060* L_8;
		L_8 = il2cpp_unsafe_add<FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060,int32_t>(L_6, L_7, sizeof(FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m25FED3B4C89777BD3B6B73F981D9CF573F5C3435_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterParameterU5BU5D_t0EF6EE29F03D6988D16E72B9209B753EE379FF58* ReadOnlySpan_1_ToArray_mEB0D2B4FAFDD5692939C9E1F8CD7A0BDE224A6B2 (ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tCBFED671C53B2B6095EBEF9264D493D000CFD8BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		FilterParameterU5BU5D_t0EF6EE29F03D6988D16E72B9209B753EE379FF58* L_1;
		L_1 = Array_Empty_TisFilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060_mA4E39A2097C6E2511B93A1BF0C9221165B65938C_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		FilterParameterU5BU5D_t0EF6EE29F03D6988D16E72B9209B753EE379FF58* L_3 = (FilterParameterU5BU5D_t0EF6EE29F03D6988D16E72B9209B753EE379FF58*)(FilterParameterU5BU5D_t0EF6EE29F03D6988D16E72B9209B753EE379FF58*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		FilterParameterU5BU5D_t0EF6EE29F03D6988D16E72B9209B753EE379FF58* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060* L_6;
		L_6 = il2cpp_unsafe_as_ref<FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060>(L_5);
		ByReference_1_tCBFED671C53B2B6095EBEF9264D493D000CFD8BB L_7 = __this->____pointer;
		V_0 = L_7;
		FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisFilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060_mDD7300E8E4A6CFCCD3B437359FAAA469263822D0(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mB1CC0C17E261B1D43AAB86A96023F2A92ABCDADB (ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27 ___0_left, ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27 L_0 = ___0_left;
		ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mFCC221F4B2884F75CC518EB825129A4DEE06CE76(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mD948D784B1BDA890E13B4FF06594CFB443347BA2 (ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m5834E9AA2796A5F41B37C8984A34510F97CE8EA0 (ReadOnlySpan_1_tDEA15065D44CF10909D8352C30DA4AEDE24E6A27* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m4C511E2F136A548ECFBCA294BA8FD85BD355D99D (ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A* __this, FlattenedSelectorU5BU5D_tCFD484131041FE6AEF088704B99CA1C6DC732B27* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		FlattenedSelectorU5BU5D_tCFD484131041FE6AEF088704B99CA1C6DC732B27* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		FlattenedSelectorU5BU5D_tCFD484131041FE6AEF088704B99CA1C6DC732B27* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		FlattenedSelectorU5BU5D_tCFD484131041FE6AEF088704B99CA1C6DC732B27* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		FlattenedSelectorU5BU5D_tCFD484131041FE6AEF088704B99CA1C6DC732B27* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9* L_12;
		L_12 = il2cpp_unsafe_as_ref<FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9>(L_11);
		int32_t L_13 = ___1_start;
		FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9* L_14;
		L_14 = il2cpp_unsafe_add<FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9,int32_t>(L_12, L_13, sizeof(FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9));
		ByReference_1_tA39086CECC388213B09BE44EA41243514E812960 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1C8AC4EE46F78E5DF857EB1D8AF48D8C0631230A (ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9* L_2;
		L_2 = il2cpp_unsafe_as_ref<FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9>((uint8_t*)L_1);
		ByReference_1_tA39086CECC388213B09BE44EA41243514E812960 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9* ReadOnlySpan_1_get_Item_m1962D06EEBD19BCF0642E8BEE47A9FFEA7396891 (ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tA39086CECC388213B09BE44EA41243514E812960 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tA39086CECC388213B09BE44EA41243514E812960 L_2 = __this->____pointer;
		V_0 = L_2;
		FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9* L_5;
		L_5 = il2cpp_unsafe_add<FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9,int32_t>(L_3, L_4, sizeof(FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m46C011590C615EE1995C1FD8BCFA812A9EC74747 (ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A* __this, Span_1_tD4A141E2CAE7DFB331921ECC10AB8884452E2784 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tA39086CECC388213B09BE44EA41243514E812960 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m3A8F09C0012040ACB55950D35820310E9F94B6E6_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tD4A141E2CAE7DFB331921ECC10AB8884452E2784 L_2 = ___0_destination;
		ByReference_1_tA39086CECC388213B09BE44EA41243514E812960 L_3 = L_2.____pointer;
		V_0 = L_3;
		FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9, (Il2CppByReference*)(&V_0));
		ByReference_1_tA39086CECC388213B09BE44EA41243514E812960 L_5 = __this->____pointer;
		V_0 = L_5;
		FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisFlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9_m6C3DAA8091937F2A2CBA773FD3BAA3DCD1C9B2EF(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m8234EBF1F8DF0994005B3DBFB32B055AE2E248FC (ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A* __this, Span_1_tD4A141E2CAE7DFB331921ECC10AB8884452E2784 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tA39086CECC388213B09BE44EA41243514E812960 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m3A8F09C0012040ACB55950D35820310E9F94B6E6_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tD4A141E2CAE7DFB331921ECC10AB8884452E2784 L_2 = ___0_destination;
		ByReference_1_tA39086CECC388213B09BE44EA41243514E812960 L_3 = L_2.____pointer;
		V_1 = L_3;
		FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9, (Il2CppByReference*)(&V_1));
		ByReference_1_tA39086CECC388213B09BE44EA41243514E812960 L_5 = __this->____pointer;
		V_1 = L_5;
		FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisFlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9_m6C3DAA8091937F2A2CBA773FD3BAA3DCD1C9B2EF(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m4AFB35884B095AA96A1C155C6502E62B59655B41 (ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tA39086CECC388213B09BE44EA41243514E812960 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A ReadOnlySpan_1_Slice_mCFBC3E42C951155CD5E45BA0B7541E0D2E9D83A7 (ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tA39086CECC388213B09BE44EA41243514E812960 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tA39086CECC388213B09BE44EA41243514E812960 L_2 = __this->____pointer;
		V_0 = L_2;
		FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9* L_5;
		L_5 = il2cpp_unsafe_add<FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9,int32_t>(L_3, L_4, sizeof(FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mBBF4ED998EFF74C1D72698CA0007CD8300A88835_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A ReadOnlySpan_1_Slice_m5D2590C10646897DD26604BAF3D589DBEC85B33C (ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tA39086CECC388213B09BE44EA41243514E812960 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tA39086CECC388213B09BE44EA41243514E812960 L_5 = __this->____pointer;
		V_0 = L_5;
		FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9* L_8;
		L_8 = il2cpp_unsafe_add<FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9,int32_t>(L_6, L_7, sizeof(FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mBBF4ED998EFF74C1D72698CA0007CD8300A88835_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlattenedSelectorU5BU5D_tCFD484131041FE6AEF088704B99CA1C6DC732B27* ReadOnlySpan_1_ToArray_mDFDBB2EF9FEBD670B86E618BEC9537E74E8A76A4 (ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tA39086CECC388213B09BE44EA41243514E812960 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		FlattenedSelectorU5BU5D_tCFD484131041FE6AEF088704B99CA1C6DC732B27* L_1;
		L_1 = Array_Empty_TisFlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9_m7E0303803800EFD09E46C64192C01A6D011D4260_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		FlattenedSelectorU5BU5D_tCFD484131041FE6AEF088704B99CA1C6DC732B27* L_3 = (FlattenedSelectorU5BU5D_tCFD484131041FE6AEF088704B99CA1C6DC732B27*)(FlattenedSelectorU5BU5D_tCFD484131041FE6AEF088704B99CA1C6DC732B27*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		FlattenedSelectorU5BU5D_tCFD484131041FE6AEF088704B99CA1C6DC732B27* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9* L_6;
		L_6 = il2cpp_unsafe_as_ref<FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9>(L_5);
		ByReference_1_tA39086CECC388213B09BE44EA41243514E812960 L_7 = __this->____pointer;
		V_0 = L_7;
		FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(FlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisFlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9_m6C3DAA8091937F2A2CBA773FD3BAA3DCD1C9B2EF(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m3A775C9A3EF150BED6A98801F48B8814D26FDEB3 (ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A ___0_left, ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A L_0 = ___0_left;
		ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m377EF66B9E4E4BD87483BC46AF730DD83D4917D1(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m64CD0FBD582742DCAA58498AF9AEE78A8A4EB1E3 (ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m76CBA0D4B9697DA47003F7E57EA5DB0FC3E5DA76 (ReadOnlySpan_1_tFAD7BABA71EFEFA7202D4FBD768E4D891E34851A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mE9C7349911188719FE72173855A83927B6668ECF (ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D* __this, FlattenedSelectorPartU5BU5D_t6A3A49EF6948716EE80F0909EB9C7D5526F19643* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		FlattenedSelectorPartU5BU5D_t6A3A49EF6948716EE80F0909EB9C7D5526F19643* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		FlattenedSelectorPartU5BU5D_t6A3A49EF6948716EE80F0909EB9C7D5526F19643* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		FlattenedSelectorPartU5BU5D_t6A3A49EF6948716EE80F0909EB9C7D5526F19643* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		FlattenedSelectorPartU5BU5D_t6A3A49EF6948716EE80F0909EB9C7D5526F19643* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986* L_12;
		L_12 = il2cpp_unsafe_as_ref<FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986>(L_11);
		int32_t L_13 = ___1_start;
		FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986* L_14;
		L_14 = il2cpp_unsafe_add<FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986,int32_t>(L_12, L_13, sizeof(FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986));
		ByReference_1_t0CF44D19E5248AED5E1176DD36BA980A15ED1036 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mEA2F30DD68B20840FE78AA2B0AEA1063123B2DCD (ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986* L_2;
		L_2 = il2cpp_unsafe_as_ref<FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986>((uint8_t*)L_1);
		ByReference_1_t0CF44D19E5248AED5E1176DD36BA980A15ED1036 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986* ReadOnlySpan_1_get_Item_m028394A5CD70B65EC6880CBB955D60389C8359E1 (ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t0CF44D19E5248AED5E1176DD36BA980A15ED1036 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t0CF44D19E5248AED5E1176DD36BA980A15ED1036 L_2 = __this->____pointer;
		V_0 = L_2;
		FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986* L_5;
		L_5 = il2cpp_unsafe_add<FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986,int32_t>(L_3, L_4, sizeof(FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mAB6909969542CD8A7AB76A2CF065ADE75E46BCE6 (ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D* __this, Span_1_tF25812E0445523D140232909284012C24E110428 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t0CF44D19E5248AED5E1176DD36BA980A15ED1036 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8CC502CE0D66420E8B9B92D8F233B020CF67E932_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tF25812E0445523D140232909284012C24E110428 L_2 = ___0_destination;
		ByReference_1_t0CF44D19E5248AED5E1176DD36BA980A15ED1036 L_3 = L_2.____pointer;
		V_0 = L_3;
		FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986, (Il2CppByReference*)(&V_0));
		ByReference_1_t0CF44D19E5248AED5E1176DD36BA980A15ED1036 L_5 = __this->____pointer;
		V_0 = L_5;
		FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisFlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986_m19C1CA978BDC4B53F03AF962E7E6296C9E5A5A33(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m794B8EAE8C0059EE70B7F7F7BEBD91EE20430743 (ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D* __this, Span_1_tF25812E0445523D140232909284012C24E110428 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t0CF44D19E5248AED5E1176DD36BA980A15ED1036 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8CC502CE0D66420E8B9B92D8F233B020CF67E932_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tF25812E0445523D140232909284012C24E110428 L_2 = ___0_destination;
		ByReference_1_t0CF44D19E5248AED5E1176DD36BA980A15ED1036 L_3 = L_2.____pointer;
		V_1 = L_3;
		FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986, (Il2CppByReference*)(&V_1));
		ByReference_1_t0CF44D19E5248AED5E1176DD36BA980A15ED1036 L_5 = __this->____pointer;
		V_1 = L_5;
		FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisFlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986_m19C1CA978BDC4B53F03AF962E7E6296C9E5A5A33(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m48FA3677332A10CF3FECEBA72A0FAA2D391CB2FB (ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t0CF44D19E5248AED5E1176DD36BA980A15ED1036 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D ReadOnlySpan_1_Slice_m28858EF9216FB83BE8EE6797C9E30D55B9B8E2F4 (ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t0CF44D19E5248AED5E1176DD36BA980A15ED1036 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t0CF44D19E5248AED5E1176DD36BA980A15ED1036 L_2 = __this->____pointer;
		V_0 = L_2;
		FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986* L_5;
		L_5 = il2cpp_unsafe_add<FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986,int32_t>(L_3, L_4, sizeof(FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mAD01EEA7AC8462087E2A66DC8852371D56D2B4DD_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D ReadOnlySpan_1_Slice_mFD956FF8C6FEF4BB32473AD0FF26A421DAAA38AF (ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t0CF44D19E5248AED5E1176DD36BA980A15ED1036 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t0CF44D19E5248AED5E1176DD36BA980A15ED1036 L_5 = __this->____pointer;
		V_0 = L_5;
		FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986* L_8;
		L_8 = il2cpp_unsafe_add<FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986,int32_t>(L_6, L_7, sizeof(FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mAD01EEA7AC8462087E2A66DC8852371D56D2B4DD_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlattenedSelectorPartU5BU5D_t6A3A49EF6948716EE80F0909EB9C7D5526F19643* ReadOnlySpan_1_ToArray_mF76C8CB545A98027197C664BAF9006B109BEEC06 (ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t0CF44D19E5248AED5E1176DD36BA980A15ED1036 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		FlattenedSelectorPartU5BU5D_t6A3A49EF6948716EE80F0909EB9C7D5526F19643* L_1;
		L_1 = Array_Empty_TisFlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986_m907AAB5CF7AEF4C510C711BBF98ABA5EA468D2B1_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		FlattenedSelectorPartU5BU5D_t6A3A49EF6948716EE80F0909EB9C7D5526F19643* L_3 = (FlattenedSelectorPartU5BU5D_t6A3A49EF6948716EE80F0909EB9C7D5526F19643*)(FlattenedSelectorPartU5BU5D_t6A3A49EF6948716EE80F0909EB9C7D5526F19643*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		FlattenedSelectorPartU5BU5D_t6A3A49EF6948716EE80F0909EB9C7D5526F19643* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986* L_6;
		L_6 = il2cpp_unsafe_as_ref<FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986>(L_5);
		ByReference_1_t0CF44D19E5248AED5E1176DD36BA980A15ED1036 L_7 = __this->____pointer;
		V_0 = L_7;
		FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(FlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisFlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986_m19C1CA978BDC4B53F03AF962E7E6296C9E5A5A33(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m0710F52B9C3451D9E9F6F0357F2008D64AC23669 (ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D ___0_left, ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D L_0 = ___0_left;
		ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mEC6D213E2DE3F5E82725CD7FFB7EE813023463C0(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mCFAC5E57DBB983007E678029E278CDFBAFCF4E7F (ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m019C909AF701476FC6A263A2C7B7F9D2AA2F8466 (ReadOnlySpan_1_t07EF4373EB65B21BC4119917FB0DC0A16BBD338D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1CC8B26430416B686554A6482D492EAEFEEF51F3 (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60* __this, GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_12;
		L_12 = il2cpp_unsafe_as_ref<GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32>(L_11);
		int32_t L_13 = ___1_start;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_14;
		L_14 = il2cpp_unsafe_add<GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32,int32_t>(L_12, L_13, sizeof(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32));
		ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mBBD9B663DF23946ABDB0362F55E5460AF62636EE (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_2;
		L_2 = il2cpp_unsafe_as_ref<GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32>((uint8_t*)L_1);
		ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* ReadOnlySpan_1_get_Item_mE2698C4D6F000B32A207D2CF0944F5F3CF0AD921 (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 L_2 = __this->____pointer;
		V_0 = L_2;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_5;
		L_5 = il2cpp_unsafe_add<GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32,int32_t>(L_3, L_4, sizeof(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mF0492FF80613669BE399A99FD0FB7C03C0B76E8C (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60* __this, Span_1_tBFB0B8ED6E219789174070F50BFF3D1D12DDADA4 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mE30066A0C4D7876DED68538384FA5CC160C69D64_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tBFB0B8ED6E219789174070F50BFF3D1D12DDADA4 L_2 = ___0_destination;
		ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 L_3 = L_2.____pointer;
		V_0 = L_3;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32, (Il2CppByReference*)(&V_0));
		ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 L_5 = __this->____pointer;
		V_0 = L_5;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m83F98C10F75BBF5CBB456D86857C192E9B2D06B6(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m92A744C49631D9647E75ABABD41FD59EB3C1E621 (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60* __this, Span_1_tBFB0B8ED6E219789174070F50BFF3D1D12DDADA4 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mE30066A0C4D7876DED68538384FA5CC160C69D64_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tBFB0B8ED6E219789174070F50BFF3D1D12DDADA4 L_2 = ___0_destination;
		ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 L_3 = L_2.____pointer;
		V_1 = L_3;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32, (Il2CppByReference*)(&V_1));
		ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 L_5 = __this->____pointer;
		V_1 = L_5;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m83F98C10F75BBF5CBB456D86857C192E9B2D06B6(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mBE9318B2249AD978B9F06C7107CB99FBB27F16FF (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60 ReadOnlySpan_1_Slice_m19B781349C743374B253C9C6D6B9CF0729157619 (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 L_2 = __this->____pointer;
		V_0 = L_2;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_5;
		L_5 = il2cpp_unsafe_add<GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32,int32_t>(L_3, L_4, sizeof(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m10A374622B0CBE7DF98D6204B69DB5AB8EBEDC48_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60 ReadOnlySpan_1_Slice_m765EAD28F9EA0424C91BE5AFF53D864B23DEF250 (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 L_5 = __this->____pointer;
		V_0 = L_5;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_8;
		L_8 = il2cpp_unsafe_add<GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32,int32_t>(L_6, L_7, sizeof(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m10A374622B0CBE7DF98D6204B69DB5AB8EBEDC48_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* ReadOnlySpan_1_ToArray_mCA51B6748B301CAF804FAE141AB0EB24AD7301B9 (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* L_1;
		L_1 = Array_Empty_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m0C324743704C230D82B1D3F4A8A72DAECCD01F62_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* L_3 = (GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE*)(GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_6;
		L_6 = il2cpp_unsafe_as_ref<GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32>(L_5);
		ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 L_7 = __this->____pointer;
		V_0 = L_7;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m83F98C10F75BBF5CBB456D86857C192E9B2D06B6(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mAF5514CA4488B4EC7414F3278D56A9FCA234FE2C (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60 ___0_left, ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60 L_0 = ___0_left;
		ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m1D1955D11B345171E9FF68FAD8B91958FB6F0653(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mF1CCAC7D6B3F02FED4609FDF35F79281F912CEED (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mEE92EAC535359994053B53C5675D8C885B32FD3D (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m86E3970C69674627ED6C25967D678931122287E1 (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95* __this, GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_12;
		L_12 = il2cpp_unsafe_as_ref<GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B>(L_11);
		int32_t L_13 = ___1_start;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_14;
		L_14 = il2cpp_unsafe_add<GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B,int32_t>(L_12, L_13, sizeof(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B));
		ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m911ECF7FE65D54DCAFE515EF9794FCB8DDC8288A (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_2;
		L_2 = il2cpp_unsafe_as_ref<GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B>((uint8_t*)L_1);
		ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* ReadOnlySpan_1_get_Item_m2C358E0E26ED8051C20E4ABBE02DA63B5EAE1D0B (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 L_2 = __this->____pointer;
		V_0 = L_2;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_5;
		L_5 = il2cpp_unsafe_add<GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B,int32_t>(L_3, L_4, sizeof(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mB7327A5A9F38CAE934A524D89984932FE8789697 (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95* __this, Span_1_t811A307E8A2376175E0D75B7D539482FEAFD8A2E ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m183BDBAC2D1A9253029D7DF02565C77C96404029_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t811A307E8A2376175E0D75B7D539482FEAFD8A2E L_2 = ___0_destination;
		ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 L_3 = L_2.____pointer;
		V_0 = L_3;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B, (Il2CppByReference*)(&V_0));
		ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 L_5 = __this->____pointer;
		V_0 = L_5;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mD7A052D9C9023478CCFECFE57747903B49AA2E3F(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mD534FCE53725A25145D3213369D47D4015144102 (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95* __this, Span_1_t811A307E8A2376175E0D75B7D539482FEAFD8A2E ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m183BDBAC2D1A9253029D7DF02565C77C96404029_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t811A307E8A2376175E0D75B7D539482FEAFD8A2E L_2 = ___0_destination;
		ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 L_3 = L_2.____pointer;
		V_1 = L_3;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B, (Il2CppByReference*)(&V_1));
		ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 L_5 = __this->____pointer;
		V_1 = L_5;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mD7A052D9C9023478CCFECFE57747903B49AA2E3F(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m34E980693697251EFC24C659C1D5705117063674 (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95 ReadOnlySpan_1_Slice_mDD03BAFA5A929F1F2AD0D8A344DF50D4E25474E9 (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 L_2 = __this->____pointer;
		V_0 = L_2;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_5;
		L_5 = il2cpp_unsafe_add<GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B,int32_t>(L_3, L_4, sizeof(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mAEA18BE2EAFC93735C1D95BE4DB087870A3E109E_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95 ReadOnlySpan_1_Slice_m0CFB04ECE6D8905D4E3D08379519CED6A453D66A (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 L_5 = __this->____pointer;
		V_0 = L_5;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_8;
		L_8 = il2cpp_unsafe_add<GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B,int32_t>(L_6, L_7, sizeof(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mAEA18BE2EAFC93735C1D95BE4DB087870A3E109E_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* ReadOnlySpan_1_ToArray_mF5A1D406528E65CC75B480F1FB9D3DF5CF6B2705 (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* L_1;
		L_1 = Array_Empty_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mE8D045B3FF593AAD4C1EC5FD9B669AAC4C2A5BDE_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* L_3 = (GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C*)(GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_6;
		L_6 = il2cpp_unsafe_as_ref<GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B>(L_5);
		ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 L_7 = __this->____pointer;
		V_0 = L_7;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mD7A052D9C9023478CCFECFE57747903B49AA2E3F(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m54107A93D64C541CA13EF0CEDDEBB6094C771BC6 (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95 ___0_left, ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95 L_0 = ___0_left;
		ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m16A530CCBB18179A661F8BA900DB1B2C7350CA97(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m9F11B139CAB17457E2E79A811238E14DB8FDABD4 (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mAED86602E94F80F9002307F0A38D1F6ECFC88F27 (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m92F3D958F294BC2A5E2725C52B2C850BF2541BC8 (ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB* __this, GfxCopyBufferRangeU5BU5D_t0C98D54584A2EE1E36B6159C1A0F9644CF80A53C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		GfxCopyBufferRangeU5BU5D_t0C98D54584A2EE1E36B6159C1A0F9644CF80A53C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		GfxCopyBufferRangeU5BU5D_t0C98D54584A2EE1E36B6159C1A0F9644CF80A53C* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		GfxCopyBufferRangeU5BU5D_t0C98D54584A2EE1E36B6159C1A0F9644CF80A53C* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		GfxCopyBufferRangeU5BU5D_t0C98D54584A2EE1E36B6159C1A0F9644CF80A53C* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180* L_12;
		L_12 = il2cpp_unsafe_as_ref<GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180>(L_11);
		int32_t L_13 = ___1_start;
		GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180* L_14;
		L_14 = il2cpp_unsafe_add<GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180,int32_t>(L_12, L_13, sizeof(GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180));
		ByReference_1_t20C57AC0C58BA602C5935D4968734182BCDCCF6E L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m4A062ABC8C9ED3F5FE274F4FF17B841E1BA085C9 (ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180* L_2;
		L_2 = il2cpp_unsafe_as_ref<GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180>((uint8_t*)L_1);
		ByReference_1_t20C57AC0C58BA602C5935D4968734182BCDCCF6E L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180* ReadOnlySpan_1_get_Item_m2651AE8F7396541C5B2B7E7B377E0E3EB51BF72E (ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t20C57AC0C58BA602C5935D4968734182BCDCCF6E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t20C57AC0C58BA602C5935D4968734182BCDCCF6E L_2 = __this->____pointer;
		V_0 = L_2;
		GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180* L_5;
		L_5 = il2cpp_unsafe_add<GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180,int32_t>(L_3, L_4, sizeof(GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m208532AB661AC111FB4064C9F637B3237FA8D9F9 (ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB* __this, Span_1_t8DC512B157818570466D5394923815D2AC18CA1C ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t20C57AC0C58BA602C5935D4968734182BCDCCF6E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m6DFB31C4120D132E81C1F42FD13D1DAC83EAA701_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t8DC512B157818570466D5394923815D2AC18CA1C L_2 = ___0_destination;
		ByReference_1_t20C57AC0C58BA602C5935D4968734182BCDCCF6E L_3 = L_2.____pointer;
		V_0 = L_3;
		GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180, (Il2CppByReference*)(&V_0));
		ByReference_1_t20C57AC0C58BA602C5935D4968734182BCDCCF6E L_5 = __this->____pointer;
		V_0 = L_5;
		GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisGfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180_m6CBB7E78AF634CD6349A2BEC8CDE421652E08461(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m3B19E04CAD8A2E6A8BECC80F9ADC4EAE06574FAE (ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB* __this, Span_1_t8DC512B157818570466D5394923815D2AC18CA1C ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t20C57AC0C58BA602C5935D4968734182BCDCCF6E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m6DFB31C4120D132E81C1F42FD13D1DAC83EAA701_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t8DC512B157818570466D5394923815D2AC18CA1C L_2 = ___0_destination;
		ByReference_1_t20C57AC0C58BA602C5935D4968734182BCDCCF6E L_3 = L_2.____pointer;
		V_1 = L_3;
		GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180, (Il2CppByReference*)(&V_1));
		ByReference_1_t20C57AC0C58BA602C5935D4968734182BCDCCF6E L_5 = __this->____pointer;
		V_1 = L_5;
		GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisGfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180_m6CBB7E78AF634CD6349A2BEC8CDE421652E08461(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m3B08BEF51924E4ED0509872D6F287FA2C4697271 (ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t20C57AC0C58BA602C5935D4968734182BCDCCF6E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB ReadOnlySpan_1_Slice_mEAB77AF5B7E0A5686AF4CE505C58F6005DED7984 (ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t20C57AC0C58BA602C5935D4968734182BCDCCF6E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t20C57AC0C58BA602C5935D4968734182BCDCCF6E L_2 = __this->____pointer;
		V_0 = L_2;
		GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180* L_5;
		L_5 = il2cpp_unsafe_add<GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180,int32_t>(L_3, L_4, sizeof(GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m83DDFABAADCFA4506E357BBC052976DCA94FDED6_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB ReadOnlySpan_1_Slice_mE75BB916D060D82F7506D652A46C46FFFEB425DD (ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t20C57AC0C58BA602C5935D4968734182BCDCCF6E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t20C57AC0C58BA602C5935D4968734182BCDCCF6E L_5 = __this->____pointer;
		V_0 = L_5;
		GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180* L_8;
		L_8 = il2cpp_unsafe_add<GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180,int32_t>(L_6, L_7, sizeof(GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m83DDFABAADCFA4506E357BBC052976DCA94FDED6_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GfxCopyBufferRangeU5BU5D_t0C98D54584A2EE1E36B6159C1A0F9644CF80A53C* ReadOnlySpan_1_ToArray_m1ACE4B0765A7F0978F36703C45C8925594ED4E8F (ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t20C57AC0C58BA602C5935D4968734182BCDCCF6E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		GfxCopyBufferRangeU5BU5D_t0C98D54584A2EE1E36B6159C1A0F9644CF80A53C* L_1;
		L_1 = Array_Empty_TisGfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180_m61FB20510C0D4FF3DC1960D813C0DA00FD7B7A26_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		GfxCopyBufferRangeU5BU5D_t0C98D54584A2EE1E36B6159C1A0F9644CF80A53C* L_3 = (GfxCopyBufferRangeU5BU5D_t0C98D54584A2EE1E36B6159C1A0F9644CF80A53C*)(GfxCopyBufferRangeU5BU5D_t0C98D54584A2EE1E36B6159C1A0F9644CF80A53C*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		GfxCopyBufferRangeU5BU5D_t0C98D54584A2EE1E36B6159C1A0F9644CF80A53C* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180* L_6;
		L_6 = il2cpp_unsafe_as_ref<GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180>(L_5);
		ByReference_1_t20C57AC0C58BA602C5935D4968734182BCDCCF6E L_7 = __this->____pointer;
		V_0 = L_7;
		GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(GfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisGfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180_m6CBB7E78AF634CD6349A2BEC8CDE421652E08461(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m8A1B5936F7B65F2AD1C0B75EE68106A3A5DFF835 (ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB ___0_left, ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB L_0 = ___0_left;
		ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m873A42BAF7EDDA8CCB88C3964C5E888E86619CB2(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m484BD1E63E17CF674A70DD7175412A4DA84142FB (ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m2B2C037957CF37B4432D6D9D61A0EEB80738F8F1 (ReadOnlySpan_1_tE3396FEC40F8DAF8FBD5912242EA023172A266EB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mBC0DA2DCDBAC61B548F193BC9C132AEE102E7599 (ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C* __this, GfxUpdateBufferRangeU5BU5D_tE41D12E7B85611267BA408D468B0F0422B7D1F30* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		GfxUpdateBufferRangeU5BU5D_tE41D12E7B85611267BA408D468B0F0422B7D1F30* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		GfxUpdateBufferRangeU5BU5D_tE41D12E7B85611267BA408D468B0F0422B7D1F30* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		GfxUpdateBufferRangeU5BU5D_tE41D12E7B85611267BA408D468B0F0422B7D1F30* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		GfxUpdateBufferRangeU5BU5D_tE41D12E7B85611267BA408D468B0F0422B7D1F30* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* L_12;
		L_12 = il2cpp_unsafe_as_ref<GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C>(L_11);
		int32_t L_13 = ___1_start;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* L_14;
		L_14 = il2cpp_unsafe_add<GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C,int32_t>(L_12, L_13, sizeof(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C));
		ByReference_1_tE9792401E28CE6CB45136FFF6CFB63E2B0BFEB93 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m226BA051C1E77E46833DCB53CDE403D4187342D1 (ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* L_2;
		L_2 = il2cpp_unsafe_as_ref<GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C>((uint8_t*)L_1);
		ByReference_1_tE9792401E28CE6CB45136FFF6CFB63E2B0BFEB93 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* ReadOnlySpan_1_get_Item_mACECB78367EA34DF3F7D72D21E69CF182D3B9C62 (ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tE9792401E28CE6CB45136FFF6CFB63E2B0BFEB93 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tE9792401E28CE6CB45136FFF6CFB63E2B0BFEB93 L_2 = __this->____pointer;
		V_0 = L_2;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* L_5;
		L_5 = il2cpp_unsafe_add<GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C,int32_t>(L_3, L_4, sizeof(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mE3B2F8BB15ADB2483A7587D1127C843F7EB213A3 (ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C* __this, Span_1_tB93B3BC3E7EA509CCF751F8460FFA592FF1D1A68 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tE9792401E28CE6CB45136FFF6CFB63E2B0BFEB93 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m4AFBDAB740A9ECD13948F54329A3D84FD198CB73_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tB93B3BC3E7EA509CCF751F8460FFA592FF1D1A68 L_2 = ___0_destination;
		ByReference_1_tE9792401E28CE6CB45136FFF6CFB63E2B0BFEB93 L_3 = L_2.____pointer;
		V_0 = L_3;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (Il2CppByReference*)(&V_0));
		ByReference_1_tE9792401E28CE6CB45136FFF6CFB63E2B0BFEB93 L_5 = __this->____pointer;
		V_0 = L_5;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m2CA00C03921B3C30B95A8129FDEA92912124ED5E(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m86E45E12D850C55A16877E8A1DD44EA11C8433ED (ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C* __this, Span_1_tB93B3BC3E7EA509CCF751F8460FFA592FF1D1A68 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tE9792401E28CE6CB45136FFF6CFB63E2B0BFEB93 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m4AFBDAB740A9ECD13948F54329A3D84FD198CB73_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tB93B3BC3E7EA509CCF751F8460FFA592FF1D1A68 L_2 = ___0_destination;
		ByReference_1_tE9792401E28CE6CB45136FFF6CFB63E2B0BFEB93 L_3 = L_2.____pointer;
		V_1 = L_3;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (Il2CppByReference*)(&V_1));
		ByReference_1_tE9792401E28CE6CB45136FFF6CFB63E2B0BFEB93 L_5 = __this->____pointer;
		V_1 = L_5;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m2CA00C03921B3C30B95A8129FDEA92912124ED5E(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m762BAD4206F8858410EF958E2283580F909772D8 (ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tE9792401E28CE6CB45136FFF6CFB63E2B0BFEB93 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C ReadOnlySpan_1_Slice_mB970F2BD11B2E05F8A8916CE8A6F9CD801096194 (ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tE9792401E28CE6CB45136FFF6CFB63E2B0BFEB93 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tE9792401E28CE6CB45136FFF6CFB63E2B0BFEB93 L_2 = __this->____pointer;
		V_0 = L_2;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* L_5;
		L_5 = il2cpp_unsafe_add<GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C,int32_t>(L_3, L_4, sizeof(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m8560DF2D26A1CC196BDE7BB7DFC896FB3D65EA16_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C ReadOnlySpan_1_Slice_m04DD73AD4943205228DE766B63A6D1E0616E1815 (ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tE9792401E28CE6CB45136FFF6CFB63E2B0BFEB93 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tE9792401E28CE6CB45136FFF6CFB63E2B0BFEB93 L_5 = __this->____pointer;
		V_0 = L_5;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* L_8;
		L_8 = il2cpp_unsafe_add<GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C,int32_t>(L_6, L_7, sizeof(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m8560DF2D26A1CC196BDE7BB7DFC896FB3D65EA16_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GfxUpdateBufferRangeU5BU5D_tE41D12E7B85611267BA408D468B0F0422B7D1F30* ReadOnlySpan_1_ToArray_m5F7AF9E330D085F57C954C00242AA6C43F66EA3A (ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tE9792401E28CE6CB45136FFF6CFB63E2B0BFEB93 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		GfxUpdateBufferRangeU5BU5D_tE41D12E7B85611267BA408D468B0F0422B7D1F30* L_1;
		L_1 = Array_Empty_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC6C376B567AC6FA4773E73349EE73E984E47852B_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		GfxUpdateBufferRangeU5BU5D_tE41D12E7B85611267BA408D468B0F0422B7D1F30* L_3 = (GfxUpdateBufferRangeU5BU5D_tE41D12E7B85611267BA408D468B0F0422B7D1F30*)(GfxUpdateBufferRangeU5BU5D_tE41D12E7B85611267BA408D468B0F0422B7D1F30*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		GfxUpdateBufferRangeU5BU5D_tE41D12E7B85611267BA408D468B0F0422B7D1F30* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* L_6;
		L_6 = il2cpp_unsafe_as_ref<GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C>(L_5);
		ByReference_1_tE9792401E28CE6CB45136FFF6CFB63E2B0BFEB93 L_7 = __this->____pointer;
		V_0 = L_7;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m2CA00C03921B3C30B95A8129FDEA92912124ED5E(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mE1CB64C44C1AA098EFA96983811D0B3433F8B395 (ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C ___0_left, ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C L_0 = ___0_left;
		ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m9ABAC96FFAFAFB3BF00FEE7B40FBAE6B9725F1FE(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m13C9D0B2C25A88BBF5ABCE9DE4ED10DFE5679603 (ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mCA587C64F7109A5FEAED10FDEA8AFAD6DB2E114E (ReadOnlySpan_1_tBE8F7CF96CF1493E2EA4ED19616DF91D5FF56E7C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m3C3AE8B46E89391871E22219200279DB47F03CA8 (ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032* __this, GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_12;
		L_12 = il2cpp_unsafe_as_ref<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E>(L_11);
		int32_t L_13 = ___1_start;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_14;
		L_14 = il2cpp_unsafe_add<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E,int32_t>(L_12, L_13, sizeof(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E));
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mCCB4450D747C7DD158676F0EFE717BB0F2CEF0C1 (ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_2;
		L_2 = il2cpp_unsafe_as_ref<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E>((uint8_t*)L_1);
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ReadOnlySpan_1_get_Item_m8CCF506CC2EFE638FF55E04BB06346E4E6118BE8 (ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_2 = __this->____pointer;
		V_0 = L_2;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_5;
		L_5 = il2cpp_unsafe_add<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E,int32_t>(L_3, L_4, sizeof(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mC32E72FFEA86A8555E41B48A344CE2A5109AE988 (ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032* __this, Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m46110E6E80C812419F09D0E502B0DB9C02CC2032_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB L_2 = ___0_destination;
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_3 = L_2.____pointer;
		V_0 = L_3;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, (Il2CppByReference*)(&V_0));
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_5 = __this->____pointer;
		V_0 = L_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m83ADCB7461E31FE528831F5B88B8022C10ADE134(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mC5997C1E7B7AA54F71A523C6562B26F6D9D41DA2 (ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032* __this, Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m46110E6E80C812419F09D0E502B0DB9C02CC2032_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB L_2 = ___0_destination;
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_3 = L_2.____pointer;
		V_1 = L_3;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, (Il2CppByReference*)(&V_1));
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_5 = __this->____pointer;
		V_1 = L_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m83ADCB7461E31FE528831F5B88B8022C10ADE134(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mCE7DF891454B163BE03887BA5C2500E574FE3311 (ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032 ReadOnlySpan_1_Slice_mB84AE8299B9723A9B9D4533F39A76FD66C0671BF (ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_2 = __this->____pointer;
		V_0 = L_2;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_5;
		L_5 = il2cpp_unsafe_add<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E,int32_t>(L_3, L_4, sizeof(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m1DC7A6D7908C64B835E06B25D082B370AE4D8868_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032 ReadOnlySpan_1_Slice_m61877C2202DB752B3FC96D6F120C58A217A29904 (ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_5 = __this->____pointer;
		V_0 = L_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_8;
		L_8 = il2cpp_unsafe_add<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E,int32_t>(L_6, L_7, sizeof(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m1DC7A6D7908C64B835E06B25D082B370AE4D8868_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ReadOnlySpan_1_ToArray_m8C9C1D39441DF2423E85D7CCB80CFD3B1D765F76 (ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_1;
		L_1 = Array_Empty_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m8F21DBCF706805C9334C0B519513BA4F39EA3A95_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_3 = (GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*)(GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_6;
		L_6 = il2cpp_unsafe_as_ref<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E>(L_5);
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_7 = __this->____pointer;
		V_0 = L_7;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m83ADCB7461E31FE528831F5B88B8022C10ADE134(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mA6AB384A0143E850C8BA7DA0A0F4F6EED4264312 (ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032 ___0_left, ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032 L_0 = ___0_left;
		ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m6D1729104C813DE71C169D49D1CACBBE2F132DF9(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m31CC41FB8B9A6C72A88CD867108FCE5F944DF129 (ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mD60B6EA74ED444739A1096535C75832C492B955B (ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA2451ED181354B219900807415F5DA3966A4334D (ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97* __this, HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_12;
		L_12 = il2cpp_unsafe_as_ref<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704>(L_11);
		int32_t L_13 = ___1_start;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_14;
		L_14 = il2cpp_unsafe_add<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704,int32_t>(L_12, L_13, sizeof(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704));
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mDE53E20AE4EDD08ADF56AE1C5026493AC8E14E4D (ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_2;
		L_2 = il2cpp_unsafe_as_ref<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704>((uint8_t*)L_1);
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ReadOnlySpan_1_get_Item_m946314362C055B33DD884368F998968CB6D325F7 (ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_2 = __this->____pointer;
		V_0 = L_2;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_5;
		L_5 = il2cpp_unsafe_add<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704,int32_t>(L_3, L_4, sizeof(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m3013F8615CC811C9CFC026CF5AA02A832EB18F45 (ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97* __this, Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mACFA990EBDB62FB610B90BE0AA456F1F0C5F0C9D_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C L_2 = ___0_destination;
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_3 = L_2.____pointer;
		V_0 = L_3;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704, (Il2CppByReference*)(&V_0));
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_5 = __this->____pointer;
		V_0 = L_5;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m68888F3441F2A44FD565D9EC942658422E97507F(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m5FF543DC6D0C278BD649F4376EA1158511DA467A (ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97* __this, Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mACFA990EBDB62FB610B90BE0AA456F1F0C5F0C9D_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C L_2 = ___0_destination;
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_3 = L_2.____pointer;
		V_1 = L_3;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704, (Il2CppByReference*)(&V_1));
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_5 = __this->____pointer;
		V_1 = L_5;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m68888F3441F2A44FD565D9EC942658422E97507F(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m8148A3D4AEB14223345BE2929A69C566315CEE44 (ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97 ReadOnlySpan_1_Slice_mFB170CE97D562ADB95267179939B512993042994 (ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_2 = __this->____pointer;
		V_0 = L_2;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_5;
		L_5 = il2cpp_unsafe_add<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704,int32_t>(L_3, L_4, sizeof(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mAA67B98A40E34097F4E59A93314926C5952A71EE_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97 ReadOnlySpan_1_Slice_mA63BC9C57C14D99EB16F28544963556905982263 (ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_5 = __this->____pointer;
		V_0 = L_5;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_8;
		L_8 = il2cpp_unsafe_add<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704,int32_t>(L_6, L_7, sizeof(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mAA67B98A40E34097F4E59A93314926C5952A71EE_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* ReadOnlySpan_1_ToArray_mD1C72E95F1BA9C128129798B39CEFD34DC2E4824 (ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_1;
		L_1 = Array_Empty_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m706F26FDE3D55E478AE8D88D0CA5AE597D17F184_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_3 = (HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2*)(HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_6;
		L_6 = il2cpp_unsafe_as_ref<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704>(L_5);
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_7 = __this->____pointer;
		V_0 = L_7;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m68888F3441F2A44FD565D9EC942658422E97507F(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m0E9A0342279DA0D76EC66D307869AA275D72AE06 (ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97 ___0_left, ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97 L_0 = ___0_left;
		ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m8954969CE1123723F22DFFD968579AAE9CBF9822(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mD5D258B9367F363C210FEEA126B609087013E0CE (ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mA0B70BC28CEB45D8D214A9D4FD4A88A049BAE833 (ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFE87471940147B278D12A2355E11C7D980AC1B0C (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		int16_t* L_12;
		L_12 = il2cpp_unsafe_as_ref<int16_t>(L_11);
		int32_t L_13 = ___1_start;
		int16_t* L_14;
		L_14 = il2cpp_unsafe_add<int16_t,int32_t>(L_12, L_13, sizeof(int16_t));
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mBB906A8DC40FCE2EA6D57AAB7858EF86646730E3 (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		int16_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<int16_t>((uint8_t*)L_1);
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t* ReadOnlySpan_1_get_Item_m44C6A4B4B788A3F23717EB74EDB36CE208A123A2 (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_2 = __this->____pointer;
		V_0 = L_2;
		int16_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		int16_t* L_5;
		L_5 = il2cpp_unsafe_add<int16_t,int32_t>(L_3, L_4, sizeof(int16_t));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m4A6E02EC83CE0119C10C893AE40955EBC3918530 (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, Span_1_tC1B695440A1567664C2665D76D5614739FDF453D ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m4739DD3D444025ADF00780C8FA6A518C9EF8763C_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tC1B695440A1567664C2665D76D5614739FDF453D L_2 = ___0_destination;
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_3 = L_2.____pointer;
		V_0 = L_3;
		int16_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_5 = __this->____pointer;
		V_0 = L_5;
		int16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m29ECCE2E57C6E7FEB9E50A7F7C41878E79F45B31(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mABBB33E20CA93E4BBC4CE3849F0EB330572948FA (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, Span_1_tC1B695440A1567664C2665D76D5614739FDF453D ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m4739DD3D444025ADF00780C8FA6A518C9EF8763C_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tC1B695440A1567664C2665D76D5614739FDF453D L_2 = ___0_destination;
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_3 = L_2.____pointer;
		V_1 = L_3;
		int16_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_5 = __this->____pointer;
		V_1 = L_5;
		int16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m29ECCE2E57C6E7FEB9E50A7F7C41878E79F45B31(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mBA61FF323DDCF6B08C05245475AD6EB636EC6B42 (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71 ReadOnlySpan_1_Slice_m8612055BCD5729838EAE23DE09D75FE099EABAC1 (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_2 = __this->____pointer;
		V_0 = L_2;
		int16_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		int16_t* L_5;
		L_5 = il2cpp_unsafe_add<int16_t,int32_t>(L_3, L_4, sizeof(int16_t));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m90A46D9F599ED28AA435B1FA5CA198862515FC9E_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71 ReadOnlySpan_1_Slice_mAE70B2654485544B33B78492139D7FC41FE63A2F (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_5 = __this->____pointer;
		V_0 = L_5;
		int16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		int16_t* L_8;
		L_8 = il2cpp_unsafe_add<int16_t,int32_t>(L_6, L_7, sizeof(int16_t));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m90A46D9F599ED28AA435B1FA5CA198862515FC9E_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ReadOnlySpan_1_ToArray_m84EAC09AB460EF0C197907F71F1092CDB3C4F618 (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1;
		L_1 = Array_Empty_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m761A383758DAB252A3DBE0ACBA4259EBDF64D107_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		int16_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<int16_t>(L_5);
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_7 = __this->____pointer;
		V_0 = L_7;
		int16_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m29ECCE2E57C6E7FEB9E50A7F7C41878E79F45B31(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m6942AF9D5D1FBE96F7EB456C8DB91DD615C5DFA8 (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71 ___0_left, ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71 L_0 = ___0_left;
		ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mF7C1F8009FA19D7D2A9EAF0E1032CE804482B636(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mA91EE2625B323F9F80BCC7CE1FDFF070E75BCA17 (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m703901AD4E8EF20C6648CA3159A0441FC0D46A7E (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m75533883DBEB84184F1D12F3B3B7E355C73B8E6A (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		int32_t* L_12;
		L_12 = il2cpp_unsafe_as_ref<int32_t>(L_11);
		int32_t L_13 = ___1_start;
		int32_t* L_14;
		L_14 = il2cpp_unsafe_add<int32_t,int32_t>(L_12, L_13, sizeof(int32_t));
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m002824E5A4D3C902519D80E02AE5E0953C4612D4 (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		int32_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<int32_t>((uint8_t*)L_1);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* ReadOnlySpan_1_get_Item_mCBC5F0FABD8DDD286D8C4A8A4642667D57F03FDC (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_2 = __this->____pointer;
		V_0 = L_2;
		int32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		int32_t* L_5;
		L_5 = il2cpp_unsafe_add<int32_t,int32_t>(L_3, L_4, sizeof(int32_t));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m6BFC735A52A9BD567CDB9BF88E6C14CCBACF7C31 (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_2 = ___0_destination;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_3 = L_2.____pointer;
		V_0 = L_3;
		int32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_0 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m35C8CC70EDA895664220562932C2A81DD93CA6F8 (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_2 = ___0_destination;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_3 = L_2.____pointer;
		V_1 = L_3;
		int32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_1));
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_1 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mF5627E75DD87A05D82D8C33FA7FA5F063C33DAB2 (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 ReadOnlySpan_1_Slice_m443360A96312A8548DCAAEED412F39FDDC82B987 (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_2 = __this->____pointer;
		V_0 = L_2;
		int32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		int32_t* L_5;
		L_5 = il2cpp_unsafe_add<int32_t,int32_t>(L_3, L_4, sizeof(int32_t));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 ReadOnlySpan_1_Slice_m3B1FBAC8160374A2C197C9735069B0A620A62A23 (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_0 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		int32_t* L_8;
		L_8 = il2cpp_unsafe_add<int32_t,int32_t>(L_6, L_7, sizeof(int32_t));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ReadOnlySpan_1_ToArray_m750D7BEFA43F3FEAC24A67EA3D9FC30725B68962 (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		int32_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<int32_t>(L_5);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_7 = __this->____pointer;
		V_0 = L_7;
		int32_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m064681710F602DDAE536DC95E9A988189A736D5B (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 ___0_left, ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 L_0 = ___0_left;
		ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mC16335A11418A40D4CD3FE8572157D5C84C35F55(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m7E853E9381AC068A39F5E774C8BCDFE597B99E76 (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m05C07E0A62BA692216B91BA053CA22025545740B (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mF8F22F26B146C5C990D32278CFB7E765FDDBC441 (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		intptr_t* L_12;
		L_12 = il2cpp_unsafe_as_ref<intptr_t>(L_11);
		int32_t L_13 = ___1_start;
		intptr_t* L_14;
		L_14 = il2cpp_unsafe_add<intptr_t,int32_t>(L_12, L_13, sizeof(intptr_t));
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mBD96856012B652A630AFD761601AEB771863D0B1 (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		intptr_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<intptr_t>((uint8_t*)L_1);
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* ReadOnlySpan_1_get_Item_mEC10C2317624D8CA09EDF2C9E659AB57932BB9DA (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_2 = __this->____pointer;
		V_0 = L_2;
		intptr_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		intptr_t* L_5;
		L_5 = il2cpp_unsafe_add<intptr_t,int32_t>(L_3, L_4, sizeof(intptr_t));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mB801D5F5515FFEF4546460DBACA99CCD2A75FEB9 (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 L_2 = ___0_destination;
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_3 = L_2.____pointer;
		V_0 = L_3;
		intptr_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_5 = __this->____pointer;
		V_0 = L_5;
		intptr_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m6813DD86685DAE335D3BD50C3CDA693F9A9F4733 (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 L_2 = ___0_destination;
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_3 = L_2.____pointer;
		V_1 = L_3;
		intptr_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_5 = __this->____pointer;
		V_1 = L_5;
		intptr_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m0A703FE2A54B910FB8EEF6F8AF4EC74EB9CDF621 (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC ReadOnlySpan_1_Slice_mED80CA60DF5897CF915B1128A33D89E928FCA5AC (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_2 = __this->____pointer;
		V_0 = L_2;
		intptr_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		intptr_t* L_5;
		L_5 = il2cpp_unsafe_add<intptr_t,int32_t>(L_3, L_4, sizeof(intptr_t));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mD019D0961769EF3E1F4E73B5E8AB46E03F706D88_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC ReadOnlySpan_1_Slice_m6D22D871F5F22BA2311F321A5FD87B42C0EEB3AA (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_5 = __this->____pointer;
		V_0 = L_5;
		intptr_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		intptr_t* L_8;
		L_8 = il2cpp_unsafe_add<intptr_t,int32_t>(L_6, L_7, sizeof(intptr_t));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mD019D0961769EF3E1F4E73B5E8AB46E03F706D88_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ReadOnlySpan_1_ToArray_mA14DCD9A120C33C3224D99F7E3590B3E5989A7ED (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_1;
		L_1 = Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_3 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_4 = L_3;
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		intptr_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<intptr_t>(L_5);
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_7 = __this->____pointer;
		V_0 = L_7;
		intptr_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mD292F54787F10BBDB71BBC44F1F6AA7B6F270F17 (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC ___0_left, ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC L_0 = ___0_left;
		ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mC446715887B374236565A1534836C4266766FE55(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mF7C7BBFCC2EF39F67718490233F703EC7289C845 (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m4D688355A0763268E136860EE331E2CB666A2C47 (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mF0C8DA1DA703B904663C8A97313FAA5D06CBB8AA_inline (Predicate_1_tDF40C5B214B8C1CD42C03A302327D001EDCFE1A0* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m4E65B2A24A1D224A284A6E2ECCA25CD11AFDE9F3_inline (Predicate_1_tECA06EB82DA6AEBC4F101B945A192111822901DD* __this, float ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m22832669961C128D8C09CB0A3CCE145415A88EED_inline (Predicate_1_t8BFFAEFC5F80E3A5CD534EFA1FCE8E02111F2938* __this, Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_gshared_inline (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_get_Count_m62C68097BC568BB0615B56865FDD0C504C545261_fshared_inline (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m4F023DF8E8468E87CB5569D387D77C7D8EB411AA_inline (Predicate_1_t307A0D6E571F6E29070EB62217398E9D4D45C556* __this, HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m697CA3A3C779F42ADA3F92BA3EE92B14B21A84DE_inline (Predicate_1_tDA45FFEC703500A529E702D9733C1C2095D663FC* __this, ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m3D04DB85F71978F48F2AC57D40AE436776C837F8_inline (Predicate_1_tCC6C1019817F23EFFAC06C8D0EDD8803C71D54E4* __this, DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m05FFB4723D44E5790A3F5FC7923C79882D0B0003_inline (Predicate_1_t81E65ECFCC613C16F7408ECA5D3D94536697174D* __this, DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* Array_Empty_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m4433599FD227186796BAB47DC5BED2AF106ED67E_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_0 = ((EmptyArray_1_t0542F0EB5C43D54C8F4ADCAB1E94F18AEA151867_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* Array_Empty_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_m5293579F263F9A3750FDFA1AA45718B28873BFBB_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_0 = ((EmptyArray_1_t910BE047C1A6E9E334831BFBF9773D3C3852ED95_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* Array_Empty_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m652D1F78F0DEF31A60A1D09589A89DE06F12C3E4_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_0 = ((EmptyArray_1_tA6E339CF983886C190886835190061C2E3B679F2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* Array_Empty_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mB6CFBB5D8AF33F0BAE72154209AB29B8D52FBCDA_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_0 = ((EmptyArray_1_t42D5099F7FCE2834141926DB372392B8C75ADBEC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ((EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Array_Empty_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5B415C4745E47108DD9258EBCCB422EFD6B8A0EB_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = ((EmptyArray_1_tC72AE83DCB4E240E4B2AC2595448148BB03F9498_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* Array_Empty_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m2AE4E8C460D733DF5362B246ED865C5CE0C4AA60_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_0 = ((EmptyArray_1_tF01C5B6CDD56CDA122E6B85402777F31EE92A685_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConvertMeshExtrasDataU5BU5D_t1420B76450ADCE1EE0AD98D00A25825A1DA9EE38* Array_Empty_TisConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C_m4779104F7674EACD211A240162D4414087C431E8_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		ConvertMeshExtrasDataU5BU5D_t1420B76450ADCE1EE0AD98D00A25825A1DA9EE38* L_0 = ((EmptyArray_1_tCE52674ADF71EC22E199D7DF299141790948751A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* Array_Empty_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m164EDF2519D24430C10F8BB106ADB252BF225C26_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* L_0 = ((EmptyArray_1_tB029523A05EA2FFE1EB90490D66A384F7A0D4574_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* Array_Empty_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m636107AFEDC2888AAD9A190C5FCB115D4483F86F_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* L_0 = ((EmptyArray_1_t0605DD263F295CE065C4B24BC0263FB5067617EC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* Array_Empty_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m46787E1D6E481E4790F1F9E63000A067C9AF33CD_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_0 = ((EmptyArray_1_t27401338DAB1F4C8F9B8E695AB18ABBBF6573E17_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* Array_Empty_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_m05A4DA3A4ACD6D784909779870EE466DF7778EC7_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* L_0 = ((EmptyArray_1_t640F34C5C1351444FCE089711FFEF74161372D64_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49* Array_Empty_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m5BB1B3F942E717EB0EEA932DE146F79E347604BA_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49* L_0 = ((EmptyArray_1_t7B0255D5BEE03D8E592C7F4DB26CEE268619FD74_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* Array_Empty_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m87CA399E64D82A02BCE81DF2F8F52AD65AC9BC25_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* L_0 = ((EmptyArray_1_t662659478531CA2736931D12958F36C14566158B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* Array_Empty_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8EF4F258FBF5AEC804ED891772BFFC84A01DB5D9_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_0 = ((EmptyArray_1_t9D02D6D1FF8E81441083A08AA0F8970E511F0900_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FilterParameterU5BU5D_t0EF6EE29F03D6988D16E72B9209B753EE379FF58* Array_Empty_TisFilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060_mA4E39A2097C6E2511B93A1BF0C9221165B65938C_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		FilterParameterU5BU5D_t0EF6EE29F03D6988D16E72B9209B753EE379FF58* L_0 = ((EmptyArray_1_t2AA231E0C904F8398D206EDF41018BEF22BD2325_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FlattenedSelectorU5BU5D_tCFD484131041FE6AEF088704B99CA1C6DC732B27* Array_Empty_TisFlattenedSelector_tB2AFFD9D91833D68734821D583367B18D35A0AC9_m7E0303803800EFD09E46C64192C01A6D011D4260_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		FlattenedSelectorU5BU5D_tCFD484131041FE6AEF088704B99CA1C6DC732B27* L_0 = ((EmptyArray_1_t2D4836FD2685619474AF41CBDA7A6813DB13F5CA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FlattenedSelectorPartU5BU5D_t6A3A49EF6948716EE80F0909EB9C7D5526F19643* Array_Empty_TisFlattenedSelectorPart_tD9EBC73D6704A9B622C3FF7F0DEB81EF0E115986_m907AAB5CF7AEF4C510C711BBF98ABA5EA468D2B1_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		FlattenedSelectorPartU5BU5D_t6A3A49EF6948716EE80F0909EB9C7D5526F19643* L_0 = ((EmptyArray_1_t00CB7A66F677EBAF03269ABB2C35F4597F8AFA77_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* Array_Empty_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m0C324743704C230D82B1D3F4A8A72DAECCD01F62_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* L_0 = ((EmptyArray_1_t3264D01575877F752602C31CBF848A455D557C15_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* Array_Empty_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mE8D045B3FF593AAD4C1EC5FD9B669AAC4C2A5BDE_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* L_0 = ((EmptyArray_1_tED25994B188B6892932012A3712E4921DCF8DC7F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GfxCopyBufferRangeU5BU5D_t0C98D54584A2EE1E36B6159C1A0F9644CF80A53C* Array_Empty_TisGfxCopyBufferRange_tACBC4A79F7ED6F9ABC3C9311A5DBCF0A6B2EB180_m61FB20510C0D4FF3DC1960D813C0DA00FD7B7A26_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		GfxCopyBufferRangeU5BU5D_t0C98D54584A2EE1E36B6159C1A0F9644CF80A53C* L_0 = ((EmptyArray_1_t17EE7504AE6D24875248A3EF47B2C95F7EF62984_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GfxUpdateBufferRangeU5BU5D_tE41D12E7B85611267BA408D468B0F0422B7D1F30* Array_Empty_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC6C376B567AC6FA4773E73349EE73E984E47852B_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		GfxUpdateBufferRangeU5BU5D_tE41D12E7B85611267BA408D468B0F0422B7D1F30* L_0 = ((EmptyArray_1_tFF976FF929BF18504D078013AD3BE659BC52BBEF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* Array_Empty_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m8F21DBCF706805C9334C0B519513BA4F39EA3A95_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_0 = ((EmptyArray_1_t66497C3DB84E7A464A5EB5259FF8E3CE44C961D2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* Array_Empty_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m706F26FDE3D55E478AE8D88D0CA5AE597D17F184_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_0 = ((EmptyArray_1_tEE36C124EB5EC64529EC1C4323F97E3809663182_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* Array_Empty_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m761A383758DAB252A3DBE0ACBA4259EBDF64D107_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ((EmptyArray_1_t4EE5BABC44C01484425092F57C431BC60B239E5F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = ((EmptyArray_1_t2830E284F9E70287360502CE6203C9A09CFC27A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
