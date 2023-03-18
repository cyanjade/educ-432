#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.UIElements.BaseVisualElementPanel>
struct Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<UnityEngine.Camera>
struct Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA;
// System.Action`1<UnityEngine.UIElements.IPanel>
struct Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6;
// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
// System.Action`1<UnityEngine.Material>
struct Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA;
// System.Action`1<UnityEngine.UIElements.MeshGenerationContext>
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<Google.Protobuf.CodedOutputStream,System.Object>
struct Action_2_t81604DEC618BCD5D00C3A3BF42C358FD1B100A89;
// System.Action`2<UnityEngine.UIElements.VisualElement,System.Object>
struct Action_2_t481D6C6BCDB085CB7BE1AA1DBD81F4DC0C04D1F2;
// System.Action`2<UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.Experimental.StyleValues>
struct Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.Experimental.ARDK.SharedAR.ConnectionEventArgs>
struct ArdkEventHandler_1_tEFA55720905E5458917B550B162C1725B52288B4;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.Experimental.ARDK.SharedAR.DataReceivedArgs>
struct ArdkEventHandler_1_tEDE66E9F5714FCBF82D4AC597FEF386DBA1EF24D;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.Experimental.ARDK.SharedAR.KeyValuePairArgs>
struct ArdkEventHandler_1_t1A8995148A4694885E652C79764AC3C6291402F6;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.Experimental.ARDK.SharedAR.PeerIDArgs>
struct ArdkEventHandler_1_t25401482781B63744607A257BFA7CA4DDABE3710;
// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry>
struct BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
// System.Comparison`1<System.Object>
struct Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645;
// System.Comparison`1<Niantic.ARDK.Extensions.Gameboard.PathFindingNode>
struct Comparison_1_t090057606C711FF20043797D76436B6D761417C0;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_IMessageExecutor>
struct ConcurrentDictionary_2_t4EF236AD47825591EA2EB47826446120183E4F64;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
// System.Collections.Generic.Dictionary`2<System.Guid,System.Object>
struct Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71;
// System.Collections.Generic.Dictionary`2<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId,System.Object>
struct Dictionary_2_t470F91884BED7B79ACC5D3F01DD62CF9985651D9;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>
struct Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>
struct Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>
struct Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.VisualElement>
struct Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData>
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
// System.Linq.Expressions.Expression`1<System.Func`1<System.Object>>
struct Expression_1_t40A989195949EC188A0EB6743616540AD0F56F66;
// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7;
// Google.Protobuf.FieldCodec`1<System.Object>
struct FieldCodec_1_t1003B5591A5EC28391ECA063B1C679E562379ABB;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<Google.Protobuf.CodedInputStream,System.Object>
struct Func_2_tB391E5054C575497314EB8684DB7DB47A13F4E93;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
// System.Func`2<System.Single,System.Single>
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2;
// System.Func`2<UnityEngine.UIElements.VisualElement,System.Object>
struct Func_2_t9AAA83BE20528E7FBB1DCCFF8E9640E7061D5BE3;
// System.Func`2<UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.Experimental.StyleValues>
struct Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227;
// System.Func`3<System.String,System.Boolean,System.Boolean>
struct Func_3_t62BC9D925DCAC8F5784BA97C793F4E593496CDA7;
// System.Func`3<System.String,System.Int32,System.Int32>
struct Func_3_t0620ECF6AB73866242850ABCE518B069D201DA79;
// System.Func`3<System.String,System.Int32Enum,System.Int32Enum>
struct Func_3_t538A8E697534A282316BC2DF71DE83E68360C8B9;
// System.Func`3<System.String,System.Int64,System.Int64>
struct Func_3_tD3C5141B184A528ABF7649D429906DA08C68E4A7;
// System.Func`3<System.String,System.Object,System.Object>
struct Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0;
// System.Func`3<System.String,System.Single,System.Single>
struct Func_3_t5328A430FC4208B44C52E4E89DC5F686DE6A6A1B;
// System.Func`4<System.Object,System.Object,System.Single,System.Object>
struct Func_4_t20528E18B451AECBBF66363BFFF0BE47D521318F;
// System.Func`4<UnityEngine.UIElements.Experimental.StyleValues,UnityEngine.UIElements.Experimental.StyleValues,System.Single,UnityEngine.UIElements.Experimental.StyleValues>
struct Func_4_t93A2D1B3300415C1167923C629725F6A8758E6B5;
// System.Func`5<System.Int32,System.Int32,System.Int32,System.Int32,System.Int32>
struct Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D;
// System.Collections.Generic.IComparer`1<UnityEngine.UIElements.VisualTreeAsset/UsingEntry>
struct IComparer_1_tFAD3AE9FE3CE1FB3CBB781C55DC57C986D71521E;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>
struct IEnumerable_1_t49C2F44B68A54E1D7F267F9CC6AEAE8497D42901;
// System.Collections.Generic.IEqualityComparer`1<System.Guid>
struct IEqualityComparer_1_t0706C8CEAD5235F761D9A8DB3AC57BA61E96F1C9;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>
struct IEqualityComparer_1_t4537FF5E9634FC142F7BF26B48CA727CCA436047;
// System.Collections.Generic.IEqualityComparer`1<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId>
struct IEqualityComparer_1_tFD5AECD0AE9253C9BD1BE79AB35D8690052950C1;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.Linq.Expressions.ParameterExpression>
struct IEqualityComparer_1_t3950A1C72D0704C9A5D08F255CB6BE1525EDC4A9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
// System.Collections.Generic.IList`1<Niantic.ARDK.Extensions.Gameboard.PathFindingNode>
struct IList_1_tE6AC31DB933F3F2D165E12C5C6D47F7C5A611AB2;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,System.Object>
struct KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32Enum,System.Object>
struct KeyCollection_t8F71B0D0C29251BFADDD78283D2D169C17F85D96;
// System.Collections.Generic.Dictionary`2/KeyCollection<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId,System.Object>
struct KeyCollection_t9246826738FBD2A85ABA519A794016E76F97B886;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32Enum>
struct KeyCollection_t420440E1F5C4DCD1E4BDAF9CCC78FCE9E9B1CB39;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Object>
struct KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>>
struct List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260;
// System.Collections.Generic.List`1<Niantic.Experimental.ARDK.SharedAR.IPeerID>
struct List_1_t9D63ED4A2830036764C9D936C3E591BE1DB1089E;
// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry>
struct List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
// System.Collections.Generic.List`1<UnityEngine.UIElements.TemplateAsset/AttributeOverride>
struct List_1_t70EE7982F45810D4B024CF720D910E67974A3094;
// System.Collections.Generic.List`1<Niantic.ARDK.VirtualStudio.Remote._RemoteConnection/BufferedMessage>
struct List_1_tAAA962234D19B25C7AAADFD40155FDD46429D73C;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.Experimental.ValueAnimation`1<System.Object>>
struct ObjectPool_1_t8AC25F7642B86DC900C1E5BB4FF5DDB43900D6F4;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.Experimental.ValueAnimation`1<UnityEngine.UIElements.Experimental.StyleValues>>
struct ObjectPool_1_t048E004E7532AED8FD10569876C6065B7527D2AE;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.InheritedData>
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.LayoutData>
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.RareData>
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransformData>
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransitionData>
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.VisualData>
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Type,Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_IMessageExecutor>
struct Tables_tEB5CFE96BA18637DC8002F1AF8141D32434C270C;
// System.Threading.Tasks.TaskFactory`1<Niantic.ARDK.Utilities._HttpResponse`1<System.Object>>
struct TaskFactory_1_tFC3E7CFA2D78AC8C096B9067C402A5BE0DA7F5A1;
// System.Threading.Tasks.Task`1<Niantic.ARDK.Utilities._HttpResponse`1<System.Object>>
struct Task_1_t6C20CF982304467ABBA3A6DA7E39E029EC26B0F2;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// UnityEngine.UIElements.Experimental.ValueAnimation`1<System.Object>
struct ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B;
// UnityEngine.UIElements.Experimental.ValueAnimation`1<UnityEngine.UIElements.Experimental.StyleValues>
struct ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,System.Object>
struct ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32Enum,System.Object>
struct ValueCollection_tB299C06E8B49BF406A8E6B012CEB2F5086FD124D;
// System.Collections.Generic.Dictionary`2/ValueCollection<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId,System.Object>
struct ValueCollection_tB7462A5A8125857652B7ED74C688BBC0488F0C9E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32Enum>
struct ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Object>
struct ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914;
// Niantic.ARDK.Utilities._HttpResponse`1<System.Object>
struct _HttpResponse_1_tD4F1C48196C37FE05B4929149947491A3317EF11;
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,System.Object>[]
struct EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Object>[]
struct EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32Enum,System.Object>[]
struct EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252;
// System.Collections.Generic.Dictionary`2/Entry<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId,System.Object>[]
struct EntryU5BU5D_t4974EFA44D233253C5979EA72DA855F5252CAD50;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Int32>[]
struct EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Int32Enum>[]
struct EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Object>[]
struct EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>[]
struct HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4;
// System.Collections.Generic.KeyValuePair`2<System.Type,Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_IMessageExecutor>[]
struct KeyValuePair_2U5BU5D_t258E2EB021D2B0CE69A982FA024772EABF3D25A2;
// System.Collections.Generic.HashSet`1/Slot<System.Linq.Expressions.ParameterExpression>[]
struct SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// UnityEngine.UIElements.ComputedTransitionProperty[]
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// Niantic.Experimental.ARDK.SharedAR.IPeerID[]
struct IPeerIDU5BU5D_tA5A1D3D18B6F97250E1CAC17620F78E796BB60EF;
// UnityEngine.UIElements.IVisualTreeUpdater[]
struct IVisualTreeUpdaterU5BU5D_t9E9D948BC4F327DA519FEB2BCEC12FB7FD7C59E8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Niantic.ARDK.LocationService.LatLng[]
struct LatLngU5BU5D_t1A5EF9302D67F28AC57B48FECA0F28324371B8FC;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIElements.StyleValueHandle[]
struct StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// Niantic.ARDK.VPSCoverage.GeoserviceMessages._CoverageAreasResponse/Loop[]
struct LoopU5BU5D_t0E03B2E87E89F2245E6BE2554FD8E71A072715DD;
// System.Decimal/DecCalc/PowerOvfl[]
struct PowerOvflU5BU5D_t8BB6F43AF19F1F7C7558815B4684875BC320735B;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// Google.Protobuf.CodedInputStream
struct CodedInputStream_t195F201266AFB2818D425D0ABA3D50ADDC821DBF;
// Google.Protobuf.CodedOutputStream
struct CodedOutputStream_t2BE94AFB9366804E9C8249347DBE4E6E2DDDB79B;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.UIElements.ContextualMenuManager
struct ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B;
// System.Linq.Expressions.Interpreter.DebugInfo
struct DebugInfo_t03C716886CE7E99C1662D1C236CCC2CC6F18A167;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UIElements.ElementUnderPointer
struct ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
// UnityEngine.UIElements.Focusable
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.TextCore.Text.FontAsset
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UIElements.HierarchyEvent
struct HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// UnityEngine.UIElements.ICursorManager
struct ICursorManager_t78B026DED2559C62810B21C54C5F882457073A8B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer
struct IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E;
// Niantic.Experimental.ARDK.SharedAR.IPeerID
struct IPeerID_t63DE8FB645F0B8CDB493FDE6E2AB0D4FC0A2F89D;
// UnityEngine.UIElements.ITreeViewItem
struct ITreeViewItem_t0C5908872EA2842688BFFB2055D5096EC1EA9EFC;
// UnityEngine.UIElements.IUxmlAttributes
struct IUxmlAttributes_t9B6679F04874117C59014DE49C35B1841F9A1DDE;
// UnityEngine.UIElements.IVisualTreeUpdater
struct IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06;
// UnityEngine.UIElements.InlineStyleAccess
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
// System.Linq.Expressions.Interpreter.Instruction
struct Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998;
// System.Linq.Expressions.Interpreter.InterpretedFrame
struct InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// UnityEngine.UIElements.UIR.MeshHandle
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// UnityEngine.UIElements.UIR.Page
struct Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.UIElements.UIR.RenderChainCommand
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.UIElements.RepaintData
struct RepaintData_t90534752135661579EC254884F550545D001B5EA;
// Niantic.Experimental.ARDK.SharedAR.RoomParams
struct RoomParams_t6905C1812EE5F340534C6DECB739C27486789D2F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.UIElements.StyleComplexSelector
struct StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD;
// UnityEngine.UIElements.StyleSheet
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
// UnityEngine.UIElements.StyleValueCollection
struct StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377;
// UnityEngine.UIElements.StyleVariableContext
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
// Niantic.ARDK.Extensions.Gameboard.Surface
struct Surface_tF5BE8BF6B212A1C5231A8136C1BA50695C297638;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// System.Type
struct Type_t;
// UnityEngine.UIElements.UIR.UIRenderDevice
struct UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.UIElements.UxmlAttributeDescription
struct UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2;
// UnityEngine.UIElements.UxmlTypeRestriction
struct UxmlTypeRestriction_t2C4CE1ED76502CDF80010880E058AF0582910A92;
// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
// UnityEngine.UIElements.VisualTreeAsset
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
// UnityEngine.UIElements.VisualTreeUpdater
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
// UnityEngine.Yoga.YogaConfig
struct YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345;
// UnityEngine.Yoga.YogaNode
struct YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA;
// Niantic.ARDK.VirtualStudio.Remote._IRemoteConnectionCompat
struct _IRemoteConnectionCompat_t65D558E786EAA89C84B0A57D6B644E1ACE90B2B5;
// Niantic.Experimental.ARDK.SharedAR._NativeDatastore
struct _NativeDatastore_tA13E5C51916620354121C200FA46C8DF57A87E97;
// Niantic.Experimental.ARDK.SharedAR._NativeNetworking
struct _NativeNetworking_tF1F4B6112FBD0D75846E5AB96F631CCFD50A51CB;
// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F;
// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// UnityEngine.UIElements.VisualElement/CustomStyleAccess
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1;
// UnityEngine.UIElements.VisualElement/TypeData
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;
// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray
struct UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449;
// Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_Disposer
struct _Disposer_t5D62714D66FD07C37A61906F52B5E291D754E121;
// Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_IMessageExecutor
struct _IMessageExecutor_tEE5A8578F10E1BDBEC0ECE7A7577A7F210AF1941;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CodedOutputStream_t2BE94AFB9366804E9C8249347DBE4E6E2DDDB79B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlobalSerializer_tA0B8180285C4AA31D7BAF12BD33BE62D1E607D4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WrapperCodecs_tEB1746636C1C0D1054D31B76B252A4C45D62F607_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _Disposer_t5D62714D66FD07C37A61906F52B5E291D754E121_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _EasyConnection_tD9A603EF524F4A8A3399844E00E5FED338441544_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _RemoteConnection_t0B1EDF45E6139A1548096ECA71562F4BFA95BAED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral27CF6EC7C28EC2608DFD163153D5245559FF41A4;
IL2CPP_EXTERN_C String_t* _stringLiteral7210D872E945C71ACA8CEF51ACA40552C43E8605;
IL2CPP_EXTERN_C String_t* _stringLiteral9412FEFCB5C0D978C2E1E6CD252874706F1AA6C8;
IL2CPP_EXTERN_C String_t* _stringLiteral986215E47C0F29D7B07233FC282FCB47B81E2674;
IL2CPP_EXTERN_C String_t* _stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryAdd_mD940918C3F7441CB6EBEBE29CDE6959DC2768416_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryRemove_m68ECDBAB1FD61D6C04DE71E3A71DAFC1ED379238_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxmlAttributeDescription_GetValueFromBag_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m22751CE4DF8B8DDEFEBE8E79FDBB271B3B7AF62D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxmlAttributeDescription_GetValueFromBag_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mB8752E3FCFBE10C58F06DF6F6275C822C4850645_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxmlAttributeDescription_GetValueFromBag_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE6407D384CA016BA1904AE558D480299827A91F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxmlAttributeDescription_GetValueFromBag_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mD5D06E5828505FB5AC84B2EF9D0FDD2494C4ABA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxmlAttributeDescription_GetValueFromBag_TisRuntimeObject_m068CFD3292450E7E40FB2498A6ABDD4A0B7F9FDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxmlAttributeDescription_GetValueFromBag_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3B483191ED592442A1ACF14EC0700E03ECDB4F8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WrapperCodecs_GetCodec_TisRuntimeObject_m582EE6B64B2E0D6438AD9C3926A8E5C4A8882988_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _EasyConnection_Register_TisRuntimeObject_mFCC1D98578CF6E4661CCBC16E089CDF88C45FD7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _NativeDatastore_GetData_TisRuntimeObject_mFFF200B558C22E1BEC5C47BBF34F5590773DCE48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _NativeDatastore_SetData_TisRuntimeObject_m701E7CD623CE3595F2C055F483F216E2DB2DEBE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _NativeNetworking_SendData_TisRuntimeObject_m1665908951DF30B181CE6F61CB7347FB20E26C70_RuntimeMethod_var;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct LatLng_tB2DF4402F12A3F1EFEE5C4207313967A4E7CF80F;
struct Loop_t3F47160BEAE33F8AB1D4AA6D46917A0B879075A6_marshaled_com;
struct Loop_t3F47160BEAE33F8AB1D4AA6D46917A0B879075A6_marshaled_pinvoke;
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Niantic.ARDK.AR.Awareness._AwarenessBufferHelper/<>c__1`1<System.Single>
struct U3CU3Ec__1_1_t6B7E95969B66ABD2516CB9683A727C6A81C6B551  : public RuntimeObject
{
};

struct U3CU3Ec__1_1_t6B7E95969B66ABD2516CB9683A727C6A81C6B551_StaticFields
{
	// Niantic.ARDK.AR.Awareness._AwarenessBufferHelper/<>c__1`1<T> Niantic.ARDK.AR.Awareness._AwarenessBufferHelper/<>c__1`1::<>9
	U3CU3Ec__1_1_t6B7E95969B66ABD2516CB9683A727C6A81C6B551* ___U3CU3E9_0;
	// System.Func`5<System.Int32,System.Int32,System.Int32,System.Int32,System.Int32> Niantic.ARDK.AR.Awareness._AwarenessBufferHelper/<>c__1`1::<>9__1_0
	Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* ___U3CU3E9__1_0_1;
	// System.Func`5<System.Int32,System.Int32,System.Int32,System.Int32,System.Int32> Niantic.ARDK.AR.Awareness._AwarenessBufferHelper/<>c__1`1::<>9__1_1
	Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* ___U3CU3E9__1_1_2;
	// System.Func`5<System.Int32,System.Int32,System.Int32,System.Int32,System.Int32> Niantic.ARDK.AR.Awareness._AwarenessBufferHelper/<>c__1`1::<>9__1_2
	Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* ___U3CU3E9__1_2_3;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_IMessageExecutor>
struct ConcurrentDictionary_2_t4EF236AD47825591EA2EB47826446120183E4F64  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tEB5CFE96BA18637DC8002F1AF8141D32434C270C* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_t258E2EB021D2B0CE69A982FA024772EABF3D25A2* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_t4EF236AD47825591EA2EB47826446120183E4F64_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Generic.Dictionary`2<System.Guid,System.Object>
struct Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* ____entries_1;
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
	KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* ____entries_1;
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
	KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* ____entries_1;
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
	KeyCollection_t8F71B0D0C29251BFADDD78283D2D169C17F85D96* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB299C06E8B49BF406A8E6B012CEB2F5086FD124D* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId,System.Object>
struct Dictionary_2_t470F91884BED7B79ACC5D3F01DD62CF9985651D9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t4974EFA44D233253C5979EA72DA855F5252CAD50* ____entries_1;
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
	KeyCollection_t9246826738FBD2A85ABA519A794016E76F97B886* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB7462A5A8125857652B7ED74C688BBC0488F0C9E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* ____entries_1;
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
	KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>
struct Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t0220227FE7D910BF17D745D71ADA52496FAB6D01* ____entries_1;
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
	KeyCollection_t420440E1F5C4DCD1E4BDAF9CCC78FCE9E9B1CB39* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCF1B8D39FC4136882ADBC6CFCB3EB264097D7AC6* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* ____entries_1;
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
	KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92* ____entries_1;
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
	KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// Niantic.ARDK.Utilities.Collections.EmptyReadOnlyCollection`1<System.Object>
struct EmptyReadOnlyCollection_1_tFADF8197C3C7720F56E38A6FDD286158C98B72C4  : public RuntimeObject
{
};

struct EmptyReadOnlyCollection_1_tFADF8197C3C7720F56E38A6FDD286158C98B72C4_StaticFields
{
	// System.Collections.ObjectModel.ReadOnlyCollection`1<T> Niantic.ARDK.Utilities.Collections.EmptyReadOnlyCollection`1::Instance
	ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* ___Instance_0;
};

// Google.Protobuf.FieldCodec`1<System.Object>
struct FieldCodec_1_t1003B5591A5EC28391ECA063B1C679E562379ABB  : public RuntimeObject
{
	// System.Boolean Google.Protobuf.FieldCodec`1::<PackedRepeatedField>k__BackingField
	bool ___U3CPackedRepeatedFieldU3Ek__BackingField_2;
	// System.Action`2<Google.Protobuf.CodedOutputStream,T> Google.Protobuf.FieldCodec`1::<ValueWriter>k__BackingField
	Action_2_t81604DEC618BCD5D00C3A3BF42C358FD1B100A89* ___U3CValueWriterU3Ek__BackingField_3;
	// System.Func`2<T,System.Int32> Google.Protobuf.FieldCodec`1::<ValueSizeCalculator>k__BackingField
	Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___U3CValueSizeCalculatorU3Ek__BackingField_4;
	// System.Func`2<Google.Protobuf.CodedInputStream,T> Google.Protobuf.FieldCodec`1::<ValueReader>k__BackingField
	Func_2_tB391E5054C575497314EB8684DB7DB47A13F4E93* ___U3CValueReaderU3Ek__BackingField_5;
	// System.Int32 Google.Protobuf.FieldCodec`1::<FixedSize>k__BackingField
	int32_t ___U3CFixedSizeU3Ek__BackingField_6;
	// System.UInt32 Google.Protobuf.FieldCodec`1::<Tag>k__BackingField
	uint32_t ___U3CTagU3Ek__BackingField_7;
	// T Google.Protobuf.FieldCodec`1::<DefaultValue>k__BackingField
	RuntimeObject* ___U3CDefaultValueU3Ek__BackingField_8;
	// System.Int32 Google.Protobuf.FieldCodec`1::tagSize
	int32_t ___tagSize_9;
};

struct FieldCodec_1_t1003B5591A5EC28391ECA063B1C679E562379ABB_StaticFields
{
	// T Google.Protobuf.FieldCodec`1::DefaultDefault
	RuntimeObject* ___DefaultDefault_0;
	// System.Boolean Google.Protobuf.FieldCodec`1::TypeSupportsPacking
	bool ___TypeSupportsPacking_1;
};

// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<Niantic.Experimental.ARDK.SharedAR.IPeerID>
struct List_1_t9D63ED4A2830036764C9D936C3E591BE1DB1089E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IPeerIDU5BU5D_tA5A1D3D18B6F97250E1CAC17620F78E796BB60EF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9D63ED4A2830036764C9D936C3E591BE1DB1089E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IPeerIDU5BU5D_tA5A1D3D18B6F97250E1CAC17620F78E796BB60EF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ___s_emptyArray_5;
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// UnityEngine.UIElements.Experimental.ValueAnimation`1<System.Object>
struct ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B  : public RuntimeObject
{
	// System.Int64 UnityEngine.UIElements.Experimental.ValueAnimation`1::m_StartTimeMs
	int64_t ___m_StartTimeMs_0;
	// System.Int32 UnityEngine.UIElements.Experimental.ValueAnimation`1::m_DurationMs
	int32_t ___m_DurationMs_1;
	// System.Func`2<System.Single,System.Single> UnityEngine.UIElements.Experimental.ValueAnimation`1::<easingCurve>k__BackingField
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___U3CeasingCurveU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.Experimental.ValueAnimation`1::<isRunning>k__BackingField
	bool ___U3CisRunningU3Ek__BackingField_3;
	// System.Action UnityEngine.UIElements.Experimental.ValueAnimation`1::<onAnimationCompleted>k__BackingField
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3ConAnimationCompletedU3Ek__BackingField_4;
	// System.Boolean UnityEngine.UIElements.Experimental.ValueAnimation`1::<autoRecycle>k__BackingField
	bool ___U3CautoRecycleU3Ek__BackingField_5;
	// System.Boolean UnityEngine.UIElements.Experimental.ValueAnimation`1::<recycled>k__BackingField
	bool ___U3CrecycledU3Ek__BackingField_6;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.Experimental.ValueAnimation`1::<owner>k__BackingField
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CownerU3Ek__BackingField_8;
	// System.Action`2<UnityEngine.UIElements.VisualElement,T> UnityEngine.UIElements.Experimental.ValueAnimation`1::<valueUpdated>k__BackingField
	Action_2_t481D6C6BCDB085CB7BE1AA1DBD81F4DC0C04D1F2* ___U3CvalueUpdatedU3Ek__BackingField_9;
	// System.Func`2<UnityEngine.UIElements.VisualElement,T> UnityEngine.UIElements.Experimental.ValueAnimation`1::<initialValue>k__BackingField
	Func_2_t9AAA83BE20528E7FBB1DCCFF8E9640E7061D5BE3* ___U3CinitialValueU3Ek__BackingField_10;
	// System.Func`4<T,T,System.Single,T> UnityEngine.UIElements.Experimental.ValueAnimation`1::<interpolator>k__BackingField
	Func_4_t20528E18B451AECBBF66363BFFF0BE47D521318F* ___U3CinterpolatorU3Ek__BackingField_11;
	// T UnityEngine.UIElements.Experimental.ValueAnimation`1::_from
	RuntimeObject* ____from_12;
	// System.Boolean UnityEngine.UIElements.Experimental.ValueAnimation`1::fromValueSet
	bool ___fromValueSet_13;
	// T UnityEngine.UIElements.Experimental.ValueAnimation`1::<to>k__BackingField
	RuntimeObject* ___U3CtoU3Ek__BackingField_14;
};

struct ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B_StaticFields
{
	// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.Experimental.ValueAnimation`1<T>> UnityEngine.UIElements.Experimental.ValueAnimation`1::sObjectPool
	ObjectPool_1_t8AC25F7642B86DC900C1E5BB4FF5DDB43900D6F4* ___sObjectPool_7;
};

// Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_MessageExecutor`1<System.Object>
struct _MessageExecutor_1_tCF16FC04F6F09FA7C94FDD3AE103DB266C22F47F  : public RuntimeObject
{
	// System.Action`1<T> Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_MessageExecutor`1::_action
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____action_0;
};

// UnityEngine.UIElements.CallbackEventHandler
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	// UnityEngine.UIElements.EventCallbackRegistry UnityEngine.UIElements.CallbackEventHandler::m_CallbackRegistry
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry_0;
};

// Google.Protobuf.CodedInputStream
struct CodedInputStream_t195F201266AFB2818D425D0ABA3D50ADDC821DBF  : public RuntimeObject
{
	// System.Boolean Google.Protobuf.CodedInputStream::leaveOpen
	bool ___leaveOpen_0;
	// System.Byte[] Google.Protobuf.CodedInputStream::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_1;
	// System.Int32 Google.Protobuf.CodedInputStream::bufferSize
	int32_t ___bufferSize_2;
	// System.Int32 Google.Protobuf.CodedInputStream::bufferSizeAfterLimit
	int32_t ___bufferSizeAfterLimit_3;
	// System.Int32 Google.Protobuf.CodedInputStream::bufferPos
	int32_t ___bufferPos_4;
	// System.IO.Stream Google.Protobuf.CodedInputStream::input
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input_5;
	// System.UInt32 Google.Protobuf.CodedInputStream::lastTag
	uint32_t ___lastTag_6;
	// System.UInt32 Google.Protobuf.CodedInputStream::nextTag
	uint32_t ___nextTag_7;
	// System.Boolean Google.Protobuf.CodedInputStream::hasNextTag
	bool ___hasNextTag_8;
	// System.Int32 Google.Protobuf.CodedInputStream::totalBytesRetired
	int32_t ___totalBytesRetired_12;
	// System.Int32 Google.Protobuf.CodedInputStream::currentLimit
	int32_t ___currentLimit_13;
	// System.Int32 Google.Protobuf.CodedInputStream::recursionDepth
	int32_t ___recursionDepth_14;
	// System.Int32 Google.Protobuf.CodedInputStream::recursionLimit
	int32_t ___recursionLimit_15;
	// System.Int32 Google.Protobuf.CodedInputStream::sizeLimit
	int32_t ___sizeLimit_16;
};

// Google.Protobuf.CodedOutputStream
struct CodedOutputStream_t2BE94AFB9366804E9C8249347DBE4E6E2DDDB79B  : public RuntimeObject
{
	// System.Boolean Google.Protobuf.CodedOutputStream::leaveOpen
	bool ___leaveOpen_4;
	// System.Byte[] Google.Protobuf.CodedOutputStream::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_5;
	// System.Int32 Google.Protobuf.CodedOutputStream::limit
	int32_t ___limit_6;
	// System.Int32 Google.Protobuf.CodedOutputStream::position
	int32_t ___position_7;
	// System.IO.Stream Google.Protobuf.CodedOutputStream::output
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output_8;
};

struct CodedOutputStream_t2BE94AFB9366804E9C8249347DBE4E6E2DDDB79B_StaticFields
{
	// System.Text.Encoding Google.Protobuf.CodedOutputStream::Utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___Utf8Encoding_2;
	// System.Int32 Google.Protobuf.CodedOutputStream::DefaultBufferSize
	int32_t ___DefaultBufferSize_3;
};

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};

struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable_2;
};

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// System.Runtime.CompilerServices.Unsafe
struct Unsafe_t013486CBD5A88F5F394651AB34F2AC5AE97E71E4  : public RuntimeObject
{
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct UnsafeUtility_tC3E6B7D52A973A81739E8BD97D6E757BA8371D46  : public RuntimeObject
{
};

// Niantic.ARDK.Extensions.Gameboard.Utils
struct Utils_tDD3C4513BA1CF662AFB681325D1FFC89614F8272  : public RuntimeObject
{
};

// UnityEngine.UIElements.UxmlAttributeDescription
struct UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2  : public RuntimeObject
{
	// System.String UnityEngine.UIElements.UxmlAttributeDescription::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.String[] UnityEngine.UIElements.UxmlAttributeDescription::m_ObsoleteNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ObsoleteNames_1;
	// System.String UnityEngine.UIElements.UxmlAttributeDescription::<type>k__BackingField
	String_t* ___U3CtypeU3Ek__BackingField_2;
	// System.String UnityEngine.UIElements.UxmlAttributeDescription::<typeNamespace>k__BackingField
	String_t* ___U3CtypeNamespaceU3Ek__BackingField_3;
	// UnityEngine.UIElements.UxmlAttributeDescription/Use UnityEngine.UIElements.UxmlAttributeDescription::<use>k__BackingField
	int32_t ___U3CuseU3Ek__BackingField_4;
	// UnityEngine.UIElements.UxmlTypeRestriction UnityEngine.UIElements.UxmlAttributeDescription::<restriction>k__BackingField
	UxmlTypeRestriction_t2C4CE1ED76502CDF80010880E058AF0582910A92* ___U3CrestrictionU3Ek__BackingField_5;
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

// System.Numerics.Vector
struct Vector_t246EF05F1CA5F494FB8B48AB2724DFCD2C2C5A9A  : public RuntimeObject
{
};

// UnityEngine.UIElements.VisualTreeUpdater
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9  : public RuntimeObject
{
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualTreeUpdater::m_Panel
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel_0;
	// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray UnityEngine.UIElements.VisualTreeUpdater::m_UpdaterArray
	UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* ___m_UpdaterArray_1;
};

// System.Threading.Volatile
struct Volatile_tC26FEDFD254742AD25E4B908FA81293FBBF4ECB0  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.Collections._ArrayFromElement
struct _ArrayFromElement_tECBEF5A74C1920AC1C977782A4ED5E54005BCAA8  : public RuntimeObject
{
};

// Niantic.ARDK.AR.Awareness._AwarenessBufferHelper
struct _AwarenessBufferHelper_tE72D582760234F79537E89738F6FEFB197363868  : public RuntimeObject
{
};

struct _AwarenessBufferHelper_tE72D582760234F79537E89738F6FEFB197363868_ThreadStaticFields
{
	// UnityEngine.Color[] Niantic.ARDK.AR.Awareness._AwarenessBufferHelper::_bufferCache
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ____bufferCache_0;
};

// Niantic.ARDK.Utilities.Extensions._DictionaryExtensions
struct _DictionaryExtensions_t8AADC6E2FAACB9AF9B911D3D0722D57386B691E1  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities._HttpClient
struct _HttpClient_tD0A2B1FC6C8EAD75007CBD75940AFD36E38CABB9  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities._KeyValuePair
struct _KeyValuePair_t12E7DAEFA316EE501B98D14EE9B4508708A8481F  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.Extensions._ObjectSerializationExtensions
struct _ObjectSerializationExtensions_tC4AD15A6840B27BD7C65AE47574A4E57F64378F0  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.Collections._ReadOnlyCollectionExtensions
struct _ReadOnlyCollectionExtensions_t34FA1767C6897740CD693DA38EAB0C223F2B99F2  : public RuntimeObject
{
};

// Niantic.ARDK.VirtualStudio.Remote._RemoteConnection
struct _RemoteConnection_t0B1EDF45E6139A1548096ECA71562F4BFA95BAED  : public RuntimeObject
{
};

struct _RemoteConnection_t0B1EDF45E6139A1548096ECA71562F4BFA95BAED_StaticFields
{
	// System.Collections.Generic.List`1<Niantic.ARDK.VirtualStudio.Remote._RemoteConnection/BufferedMessage> Niantic.ARDK.VirtualStudio.Remote._RemoteConnection::_bufferedMessages
	List_1_tAAA962234D19B25C7AAADFD40155FDD46429D73C* ____bufferedMessages_0;
	// Niantic.ARDK.VirtualStudio.Remote._IRemoteConnectionCompat Niantic.ARDK.VirtualStudio.Remote._RemoteConnection::_remoteConnectionImpl
	RuntimeObject* ____remoteConnectionImpl_1;
	// Niantic.ARDK.VirtualStudio.Remote._RemoteConnection/ConnectionMethod Niantic.ARDK.VirtualStudio.Remote._RemoteConnection::_connectionMethod
	int32_t ____connectionMethod_3;
	// System.Action Niantic.ARDK.VirtualStudio.Remote._RemoteConnection::_tryClearBufferAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____tryClearBufferAction_4;
	// System.Action Niantic.ARDK.VirtualStudio.Remote._RemoteConnection::Deinitialized
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Deinitialized_5;
};

// Niantic.ARDK.Utilities._StaticMemberValidator
struct _StaticMemberValidator_tE1497702C1852841BBE4E05FEE6BDE86CDEFD7E7  : public RuntimeObject
{
};

// Google.Protobuf.FieldCodec/WrapperCodecs
struct WrapperCodecs_tEB1746636C1C0D1054D31B76B252A4C45D62F607  : public RuntimeObject
{
};

struct WrapperCodecs_tEB1746636C1C0D1054D31B76B252A4C45D62F607_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> Google.Protobuf.FieldCodec/WrapperCodecs::Codecs
	Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ___Codecs_0;
};

// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray
struct UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449  : public RuntimeObject
{
	// UnityEngine.UIElements.IVisualTreeUpdater[] UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::m_VisualTreeUpdaters
	IVisualTreeUpdaterU5BU5D_t9E9D948BC4F327DA519FEB2BCEC12FB7FD7C59E8* ___m_VisualTreeUpdaters_0;
};

// Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_Disposer
struct _Disposer_t5D62714D66FD07C37A61906F52B5E291D754E121  : public RuntimeObject
{
	// System.Type Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_Disposer::_type
	Type_t* ____type_0;
	// Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_IMessageExecutor Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_Disposer::_executor
	RuntimeObject* ____executor_1;
};

struct _Disposer_t5D62714D66FD07C37A61906F52B5E291D754E121_StaticFields
{
	// System.Object Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_Disposer::_executorsRemoveLock
	RuntimeObject* ____executorsRemoveLock_2;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Byte>
struct AlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint8_t ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int16>
struct AlignOfHelper_1_t46EF2DCDECD3BAA9051DE389E6771288CEB52D13 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	int16_t ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32>
struct AlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	int32_t ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Single>
struct AlignOfHelper_1_t8B2704248131E32283F29FE1808F75EF8FB18A4A 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	float ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt16>
struct AlignOfHelper_1_t82117C0F9F1FB124A9CEB4215A5BB62387D6E5D2 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint16_t ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt32>
struct AlignOfHelper_1_t1D98A9CFF0C9114AE482F0AA11708126EC3AB019 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint32_t ___data_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
struct KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int64_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
struct KeyValuePair_2_t0BF01F429B08969E998D5032D0F1C415DC166370 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	double ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>
struct KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Memory`1<System.Byte>
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	// System.Object System.Memory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.Memory`1::_index
	int32_t ____index_1;
	// System.Int32 System.Memory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.Memory`1<System.Object>
struct Memory_1_tFE195D25CCBF8766EF8DE394FB116ED523C220DA 
{
	// System.Object System.Memory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.Memory`1::_index
	int32_t ____index_1;
	// System.Int32 System.Memory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.UInt16>
struct NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.UIElements.Vertex>
struct NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeSlice`1<UnityEngine.UIElements.UIR.Transform3x4>
struct NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// Unity.Collections.NativeSlice`1<System.UInt16>
struct NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// Unity.Collections.NativeSlice`1<UnityEngine.Vector4>
struct NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// Unity.Collections.NativeSlice`1<UnityEngine.UIElements.Vertex>
struct NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// System.ReadOnlyMemory`1<System.Byte>
struct ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 
{
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.ReadOnlyMemory`1<System.Object>
struct ReadOnlyMemory_1_tD0F5C18058EEAB5F76AA982D1F430D67DFB7FCBC 
{
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData>
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData>
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData>
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData>
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData>
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData>
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref_0;
};

// System.Threading.Tasks.Task`1<Niantic.ARDK.Utilities._HttpResponse`1<System.Object>>
struct Task_1_t6C20CF982304467ABBA3A6DA7E39E029EC26B0F2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	_HttpResponse_1_tD4F1C48196C37FE05B4929149947491A3317EF11* ___m_result_38;
};

struct Task_1_t6C20CF982304467ABBA3A6DA7E39E029EC26B0F2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tFC3E7CFA2D78AC8C096B9067C402A5BE0DA7F5A1* ___s_defaultFactory_39;
};

// UnityEngine.UIElements.UIR.Alloc
struct Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE 
{
	// System.UInt32 UnityEngine.UIElements.UIR.Alloc::start
	uint32_t ___start_0;
	// System.UInt32 UnityEngine.UIElements.UIR.Alloc::size
	uint32_t ___size_1;
	// System.Object UnityEngine.UIElements.UIR.Alloc::handle
	RuntimeObject* ___handle_2;
	// System.Boolean UnityEngine.UIElements.UIR.Alloc::shortLived
	bool ___shortLived_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.Alloc
struct Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_pinvoke
{
	uint32_t ___start_0;
	uint32_t ___size_1;
	Il2CppIUnknown* ___handle_2;
	int32_t ___shortLived_3;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.Alloc
struct Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_com
{
	uint32_t ___start_0;
	uint32_t ___size_1;
	Il2CppIUnknown* ___handle_2;
	int32_t ___shortLived_3;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// UnityEngine.UIElements.UIR.BMPAlloc
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	// System.Int32 UnityEngine.UIElements.UIR.BMPAlloc::page
	int32_t ___page_1;
	// System.UInt16 UnityEngine.UIElements.UIR.BMPAlloc::pageLine
	uint16_t ___pageLine_2;
	// System.Byte UnityEngine.UIElements.UIR.BMPAlloc::bitIndex
	uint8_t ___bitIndex_3;
	// UnityEngine.UIElements.UIR.OwnedState UnityEngine.UIElements.UIR.BMPAlloc::ownedState
	uint8_t ___ownedState_4;
};

struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30_StaticFields
{
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.BMPAlloc::Invalid
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___Invalid_0;
};

// UnityEngine.Rendering.BatchVisibility
struct BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA 
{
	// System.Int32 UnityEngine.Rendering.BatchVisibility::offset
	int32_t ___offset_0;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::instancesCount
	int32_t ___instancesCount_1;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::visibleCount
	int32_t ___visibleCount_2;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// UnityEngine.UIElements.ComputedTransitionProperty
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1 
{
	// UnityEngine.UIElements.StyleSheets.StylePropertyId UnityEngine.UIElements.ComputedTransitionProperty::id
	int32_t ___id_0;
	// System.Int32 UnityEngine.UIElements.ComputedTransitionProperty::durationMs
	int32_t ___durationMs_1;
	// System.Int32 UnityEngine.UIElements.ComputedTransitionProperty::delayMs
	int32_t ___delayMs_2;
	// System.Func`2<System.Single,System.Single> UnityEngine.UIElements.ComputedTransitionProperty::easingCurve
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___easingCurve_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.ComputedTransitionProperty
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke
{
	int32_t ___id_0;
	int32_t ___durationMs_1;
	int32_t ___delayMs_2;
	Il2CppMethodPointer ___easingCurve_3;
};
// Native definition for COM marshalling of UnityEngine.UIElements.ComputedTransitionProperty
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com
{
	int32_t ___id_0;
	int32_t ___durationMs_1;
	int32_t ___delayMs_2;
	Il2CppMethodPointer ___easingCurve_3;
};

// Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs
struct ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC 
{
	// System.UInt32 Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs::<ErrorCode>k__BackingField
	uint32_t ___U3CErrorCodeU3Ek__BackingField_0;
};

// UnityEngine.UIElements.CreationContext
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.CreationContext::<target>k__BackingField
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField_1;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.CreationContext::<visualTreeAsset>k__BackingField
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.CreationContext::<slotInsertionPoints>k__BackingField
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.TemplateAsset/AttributeOverride> UnityEngine.UIElements.CreationContext::<attributeOverrides>k__BackingField
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___U3CattributeOverridesU3Ek__BackingField_4;
};

struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_StaticFields
{
	// UnityEngine.UIElements.CreationContext UnityEngine.UIElements.CreationContext::Default
	CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___Default_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.CreationContext
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField_1;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField_2;
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField_3;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___U3CattributeOverridesU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.UIElements.CreationContext
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField_1;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField_2;
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField_3;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___U3CattributeOverridesU3Ek__BackingField_4;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// Niantic.ARDK.AR.Awareness.Detection
struct Detection_t0B5803B8A7FD8800F12A52FE335E06179362CE34 
{
	// System.Single Niantic.ARDK.AR.Awareness.Detection::X
	float ___X_0;
	// System.Single Niantic.ARDK.AR.Awareness.Detection::Y
	float ___Y_1;
	// System.Single Niantic.ARDK.AR.Awareness.Detection::Width
	float ___Width_2;
	// System.Single Niantic.ARDK.AR.Awareness.Detection::Height
	float ___Height_3;
	// System.Single Niantic.ARDK.AR.Awareness.Detection::Confidence
	float ___Confidence_4;
};

// System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject* ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject* ____value_1;
};
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.UIElements.UIR.DrawBufferRange
struct DrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4 
{
	// System.Int32 UnityEngine.UIElements.UIR.DrawBufferRange::firstIndex
	int32_t ___firstIndex_0;
	// System.Int32 UnityEngine.UIElements.UIR.DrawBufferRange::indexCount
	int32_t ___indexCount_1;
	// System.Int32 UnityEngine.UIElements.UIR.DrawBufferRange::minIndexVal
	int32_t ___minIndexVal_2;
	// System.Int32 UnityEngine.UIElements.UIR.DrawBufferRange::vertsReferenced
	int32_t ___vertsReferenced_3;
};

// UnityEngine.UIElements.EasingFunction
struct EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 
{
	// UnityEngine.UIElements.EasingMode UnityEngine.UIElements.EasingFunction::m_Mode
	int32_t ___m_Mode_0;
};

// UnityEngine.UIElements.Focusable
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	// System.Boolean UnityEngine.UIElements.Focusable::<focusable>k__BackingField
	bool ___U3CfocusableU3Ek__BackingField_1;
	// System.Int32 UnityEngine.UIElements.Focusable::<tabIndex>k__BackingField
	int32_t ___U3CtabIndexU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.Focusable::m_DelegatesFocus
	bool ___m_DelegatesFocus_3;
	// System.Boolean UnityEngine.UIElements.Focusable::m_ExcludeFromFocusRing
	bool ___m_ExcludeFromFocusRing_4;
	// System.Boolean UnityEngine.UIElements.Focusable::isIMGUIContainer
	bool ___isIMGUIContainer_5;
};

// UnityEngine.TextCore.GlyphRect
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D 
{
	// System.Int32 UnityEngine.TextCore.GlyphRect::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.TextCore.GlyphRect::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.TextCore.GlyphRect::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.TextCore.GlyphRect::m_Height
	int32_t ___m_Height_3;
};

struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_StaticFields
{
	// UnityEngine.TextCore.GlyphRect UnityEngine.TextCore.GlyphRect::s_ZeroGlyphRect
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___s_ZeroGlyphRect_4;
};

// UnityEngine.TextCore.LowLevel.GlyphValueRecord
struct GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E 
{
	// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::m_XPlacement
	float ___m_XPlacement_0;
	// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::m_YPlacement
	float ___m_YPlacement_1;
	// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::m_XAdvance
	float ___m_XAdvance_2;
	// System.Single UnityEngine.TextCore.LowLevel.GlyphValueRecord::m_YAdvance
	float ___m_YAdvance_3;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// System.Linq.Expressions.Interpreter.InterpretedFrameInfo
struct InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 
{
	// System.String System.Linq.Expressions.Interpreter.InterpretedFrameInfo::_methodName
	String_t* ____methodName_0;
	// System.Linq.Expressions.Interpreter.DebugInfo System.Linq.Expressions.Interpreter.InterpretedFrameInfo::_debugInfo
	DebugInfo_t03C716886CE7E99C1662D1C236CCC2CC6F18A167* ____debugInfo_1;
};
// Native definition for P/Invoke marshalling of System.Linq.Expressions.Interpreter.InterpretedFrameInfo
struct InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshaled_pinvoke
{
	char* ____methodName_0;
	DebugInfo_t03C716886CE7E99C1662D1C236CCC2CC6F18A167* ____debugInfo_1;
};
// Native definition for COM marshalling of System.Linq.Expressions.Interpreter.InterpretedFrameInfo
struct InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshaled_com
{
	Il2CppChar* ____methodName_0;
	DebugInfo_t03C716886CE7E99C1662D1C236CCC2CC6F18A167* ____debugInfo_1;
};

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body_3;
};

// Niantic.ARDK.LocationService.LatLng
struct LatLng_tB2DF4402F12A3F1EFEE5C4207313967A4E7CF80F 
{
	// System.Double Niantic.ARDK.LocationService.LatLng::lat_degrees
	double ___lat_degrees_0;
	// System.Double Niantic.ARDK.LocationService.LatLng::lng_degrees
	double ___lng_degrees_1;
};

// UnityEngine.UIElements.Length
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	// System.Single UnityEngine.UIElements.Length::m_Value
	float ___m_Value_1;
	// UnityEngine.UIElements.Length/Unit UnityEngine.UIElements.Length::m_Unit
	int32_t ___m_Unit_2;
};

// UnityEngine.Experimental.GlobalIllumination.LinearColor
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_red
	float ___m_red_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_green
	float ___m_green_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_blue
	float ___m_blue_2;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_intensity
	float ___m_intensity_3;
};

// UnityEngine.UIElements.ManipulatorActivationFilter
struct ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 
{
	// UnityEngine.UIElements.MouseButton UnityEngine.UIElements.ManipulatorActivationFilter::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_0;
	// UnityEngine.EventModifiers UnityEngine.UIElements.ManipulatorActivationFilter::<modifiers>k__BackingField
	int32_t ___U3CmodifiersU3Ek__BackingField_1;
	// System.Int32 UnityEngine.UIElements.ManipulatorActivationFilter::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_2;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// Niantic.ARDK.Networking.HLAPI.Routing.NetworkId
struct NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 
{
	// System.UInt64 Niantic.ARDK.Networking.HLAPI.Routing.NetworkId::_id
	uint64_t ____id_0;
};

// Niantic.Experimental.ARDK.SharedAR.NetworkingStats
struct NetworkingStats_t0CAE237FD9602938277B08F0217CE1FA25111BBD 
{
	// System.Int32 Niantic.Experimental.ARDK.SharedAR.NetworkingStats::<Rtt>k__BackingField
	int32_t ___U3CRttU3Ek__BackingField_0;
	// System.Single Niantic.Experimental.ARDK.SharedAR.NetworkingStats::<PacketLoss>k__BackingField
	float ___U3CPacketLossU3Ek__BackingField_1;
};

// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
};

// UnityEngine.PropertyName
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.RectInt
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;
};

// System.Numerics.Register
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte System.Numerics.Register::byte_0
			uint8_t ___byte_0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_1_OffsetPadding[1];
			// System.Byte System.Numerics.Register::byte_1
			uint8_t ___byte_1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_2_OffsetPadding[2];
			// System.Byte System.Numerics.Register::byte_2
			uint8_t ___byte_2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_3_OffsetPadding[3];
			// System.Byte System.Numerics.Register::byte_3
			uint8_t ___byte_3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_4_OffsetPadding[4];
			// System.Byte System.Numerics.Register::byte_4
			uint8_t ___byte_4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_5_OffsetPadding[5];
			// System.Byte System.Numerics.Register::byte_5
			uint8_t ___byte_5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_6_OffsetPadding[6];
			// System.Byte System.Numerics.Register::byte_6
			uint8_t ___byte_6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_7_OffsetPadding[7];
			// System.Byte System.Numerics.Register::byte_7
			uint8_t ___byte_7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_8_OffsetPadding[8];
			// System.Byte System.Numerics.Register::byte_8
			uint8_t ___byte_8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_9_OffsetPadding[9];
			// System.Byte System.Numerics.Register::byte_9
			uint8_t ___byte_9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_10_OffsetPadding[10];
			// System.Byte System.Numerics.Register::byte_10
			uint8_t ___byte_10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_11_OffsetPadding[11];
			// System.Byte System.Numerics.Register::byte_11
			uint8_t ___byte_11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_12_OffsetPadding[12];
			// System.Byte System.Numerics.Register::byte_12
			uint8_t ___byte_12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_13_OffsetPadding[13];
			// System.Byte System.Numerics.Register::byte_13
			uint8_t ___byte_13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_14_OffsetPadding[14];
			// System.Byte System.Numerics.Register::byte_14
			uint8_t ___byte_14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_15_OffsetPadding[15];
			// System.Byte System.Numerics.Register::byte_15
			uint8_t ___byte_15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte System.Numerics.Register::sbyte_0
			int8_t ___sbyte_0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_17_OffsetPadding[1];
			// System.SByte System.Numerics.Register::sbyte_1
			int8_t ___sbyte_1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_18_OffsetPadding[2];
			// System.SByte System.Numerics.Register::sbyte_2
			int8_t ___sbyte_2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_19_OffsetPadding[3];
			// System.SByte System.Numerics.Register::sbyte_3
			int8_t ___sbyte_3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_20_OffsetPadding[4];
			// System.SByte System.Numerics.Register::sbyte_4
			int8_t ___sbyte_4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_21_OffsetPadding[5];
			// System.SByte System.Numerics.Register::sbyte_5
			int8_t ___sbyte_5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_22_OffsetPadding[6];
			// System.SByte System.Numerics.Register::sbyte_6
			int8_t ___sbyte_6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_23_OffsetPadding[7];
			// System.SByte System.Numerics.Register::sbyte_7
			int8_t ___sbyte_7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_24_OffsetPadding[8];
			// System.SByte System.Numerics.Register::sbyte_8
			int8_t ___sbyte_8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_25_OffsetPadding[9];
			// System.SByte System.Numerics.Register::sbyte_9
			int8_t ___sbyte_9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_26_OffsetPadding[10];
			// System.SByte System.Numerics.Register::sbyte_10
			int8_t ___sbyte_10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_27_OffsetPadding[11];
			// System.SByte System.Numerics.Register::sbyte_11
			int8_t ___sbyte_11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_28_OffsetPadding[12];
			// System.SByte System.Numerics.Register::sbyte_12
			int8_t ___sbyte_12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_29_OffsetPadding[13];
			// System.SByte System.Numerics.Register::sbyte_13
			int8_t ___sbyte_13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_30_OffsetPadding[14];
			// System.SByte System.Numerics.Register::sbyte_14
			int8_t ___sbyte_14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_31_OffsetPadding[15];
			// System.SByte System.Numerics.Register::sbyte_15
			int8_t ___sbyte_15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 System.Numerics.Register::uint16_0
			uint16_t ___uint16_0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_33_OffsetPadding[2];
			// System.UInt16 System.Numerics.Register::uint16_1
			uint16_t ___uint16_1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_34_OffsetPadding[4];
			// System.UInt16 System.Numerics.Register::uint16_2
			uint16_t ___uint16_2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_35_OffsetPadding[6];
			// System.UInt16 System.Numerics.Register::uint16_3
			uint16_t ___uint16_3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_36_OffsetPadding[8];
			// System.UInt16 System.Numerics.Register::uint16_4
			uint16_t ___uint16_4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_37_OffsetPadding[10];
			// System.UInt16 System.Numerics.Register::uint16_5
			uint16_t ___uint16_5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_38_OffsetPadding[12];
			// System.UInt16 System.Numerics.Register::uint16_6
			uint16_t ___uint16_6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_39_OffsetPadding[14];
			// System.UInt16 System.Numerics.Register::uint16_7
			uint16_t ___uint16_7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 System.Numerics.Register::int16_0
			int16_t ___int16_0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_41_OffsetPadding[2];
			// System.Int16 System.Numerics.Register::int16_1
			int16_t ___int16_1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_42_OffsetPadding[4];
			// System.Int16 System.Numerics.Register::int16_2
			int16_t ___int16_2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_43_OffsetPadding[6];
			// System.Int16 System.Numerics.Register::int16_3
			int16_t ___int16_3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_44_OffsetPadding[8];
			// System.Int16 System.Numerics.Register::int16_4
			int16_t ___int16_4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_45_OffsetPadding[10];
			// System.Int16 System.Numerics.Register::int16_5
			int16_t ___int16_5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_46_OffsetPadding[12];
			// System.Int16 System.Numerics.Register::int16_6
			int16_t ___int16_6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_47_OffsetPadding[14];
			// System.Int16 System.Numerics.Register::int16_7
			int16_t ___int16_7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 System.Numerics.Register::uint32_0
			uint32_t ___uint32_0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_49_OffsetPadding[4];
			// System.UInt32 System.Numerics.Register::uint32_1
			uint32_t ___uint32_1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_50_OffsetPadding[8];
			// System.UInt32 System.Numerics.Register::uint32_2
			uint32_t ___uint32_2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_51_OffsetPadding[12];
			// System.UInt32 System.Numerics.Register::uint32_3
			uint32_t ___uint32_3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Numerics.Register::int32_0
			int32_t ___int32_0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_53_OffsetPadding[4];
			// System.Int32 System.Numerics.Register::int32_1
			int32_t ___int32_1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_54_OffsetPadding[8];
			// System.Int32 System.Numerics.Register::int32_2
			int32_t ___int32_2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_55_OffsetPadding[12];
			// System.Int32 System.Numerics.Register::int32_3
			int32_t ___int32_3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 System.Numerics.Register::uint64_0
			uint64_t ___uint64_0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_57_OffsetPadding[8];
			// System.UInt64 System.Numerics.Register::uint64_1
			uint64_t ___uint64_1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 System.Numerics.Register::int64_0
			int64_t ___int64_0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_59_OffsetPadding[8];
			// System.Int64 System.Numerics.Register::int64_1
			int64_t ___int64_1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single System.Numerics.Register::single_0
			float ___single_0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_61_OffsetPadding[4];
			// System.Single System.Numerics.Register::single_1
			float ___single_1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_61_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_62_OffsetPadding[8];
			// System.Single System.Numerics.Register::single_2
			float ___single_2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_62_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_63_OffsetPadding[12];
			// System.Single System.Numerics.Register::single_3
			float ___single_3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_63_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double System.Numerics.Register::double_0
			double ___double_0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_65_OffsetPadding[8];
			// System.Double System.Numerics.Register::double_1
			double ___double_1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_65_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_65_forAlignmentOnly;
		};
	};
};

// UnityEngine.UIElements.UIR.RenderChainTextEntry
struct RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11 
{
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainTextEntry::command
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___command_0;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainTextEntry::firstVertex
	int32_t ___firstVertex_1;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainTextEntry::vertexCount
	int32_t ___vertexCount_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChainTextEntry
struct RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshaled_pinvoke
{
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___command_0;
	int32_t ___firstVertex_1;
	int32_t ___vertexCount_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChainTextEntry
struct RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshaled_com
{
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___command_0;
	int32_t ___firstVertex_1;
	int32_t ___vertexCount_2;
};

// UnityEngine.UIElements.RuleMatcher
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E 
{
	// UnityEngine.UIElements.StyleSheet UnityEngine.UIElements.RuleMatcher::sheet
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	// UnityEngine.UIElements.StyleComplexSelector UnityEngine.UIElements.RuleMatcher::complexSelector
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.RuleMatcher
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.RuleMatcher
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_1;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// UnityEngine.UIElements.StyleSheets.SelectorMatchRecord
struct SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7 
{
	// UnityEngine.UIElements.StyleSheet UnityEngine.UIElements.StyleSheets.SelectorMatchRecord::sheet
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	// System.Int32 UnityEngine.UIElements.StyleSheets.SelectorMatchRecord::styleSheetIndexInStack
	int32_t ___styleSheetIndexInStack_1;
	// UnityEngine.UIElements.StyleComplexSelector UnityEngine.UIElements.StyleSheets.SelectorMatchRecord::complexSelector
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSheets.SelectorMatchRecord
struct SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	int32_t ___styleSheetIndexInStack_1;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSheets.SelectorMatchRecord
struct SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	int32_t ___styleSheetIndexInStack_1;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_2;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// UnityEngine.UIElements.StylePropertyName
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF 
{
	// UnityEngine.UIElements.StyleSheets.StylePropertyId UnityEngine.UIElements.StylePropertyName::<id>k__BackingField
	int32_t ___U3CidU3Ek__BackingField_0;
	// System.String UnityEngine.UIElements.StylePropertyName::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StylePropertyName
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_pinvoke
{
	int32_t ___U3CidU3Ek__BackingField_0;
	char* ___U3CnameU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StylePropertyName
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_com
{
	int32_t ___U3CidU3Ek__BackingField_0;
	Il2CppChar* ___U3CnameU3Ek__BackingField_1;
};

// UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 
{
	// System.String UnityEngine.UIElements.StyleSelectorPart::m_Value
	String_t* ___m_Value_0;
	// UnityEngine.UIElements.StyleSelectorType UnityEngine.UIElements.StyleSelectorPart::m_Type
	int32_t ___m_Type_1;
	// System.Object UnityEngine.UIElements.StyleSelectorPart::tempData
	RuntimeObject* ___tempData_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_pinvoke
{
	char* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_com
{
	Il2CppChar* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};

// UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken
struct StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C 
{
	// UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenType UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken::type
	int32_t ___type_0;
	// System.String UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken::text
	String_t* ___text_1;
	// System.Int32 UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken::number
	int32_t ___number_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken
struct StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshaled_pinvoke
{
	int32_t ___type_0;
	char* ___text_1;
	int32_t ___number_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken
struct StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshaled_com
{
	int32_t ___type_0;
	Il2CppChar* ___text_1;
	int32_t ___number_2;
};

// UnityEngine.UIElements.StyleValueHandle
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D 
{
	// UnityEngine.UIElements.StyleValueType UnityEngine.UIElements.StyleValueHandle::m_ValueType
	int32_t ___m_ValueType_0;
	// System.Int32 UnityEngine.UIElements.StyleValueHandle::valueIndex
	int32_t ___valueIndex_1;
};

// UnityEngine.UIElements.StyleSheets.StyleValueManaged
struct StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 
{
	// UnityEngine.UIElements.StyleSheets.StylePropertyId UnityEngine.UIElements.StyleSheets.StyleValueManaged::id
	int32_t ___id_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleSheets.StyleValueManaged::keyword
	int32_t ___keyword_1;
	// System.Object UnityEngine.UIElements.StyleSheets.StyleValueManaged::value
	RuntimeObject* ___value_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSheets.StyleValueManaged
struct StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshaled_pinvoke
{
	int32_t ___id_0;
	int32_t ___keyword_1;
	Il2CppIUnknown* ___value_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSheets.StyleValueManaged
struct StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshaled_com
{
	int32_t ___id_0;
	int32_t ___keyword_1;
	Il2CppIUnknown* ___value_2;
};

// UnityEngine.UIElements.Experimental.StyleValues
struct StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A 
{
	// UnityEngine.UIElements.StyleValueCollection UnityEngine.UIElements.Experimental.StyleValues::m_StyleValues
	StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* ___m_StyleValues_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.Experimental.StyleValues
struct StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshaled_pinvoke
{
	StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* ___m_StyleValues_0;
};
// Native definition for COM marshalling of UnityEngine.UIElements.Experimental.StyleValues
struct StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshaled_com
{
	StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* ___m_StyleValues_0;
};

// UnityEngine.UIElements.StyleVariable
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 
{
	// System.String UnityEngine.UIElements.StyleVariable::name
	String_t* ___name_0;
	// UnityEngine.UIElements.StyleSheet UnityEngine.UIElements.StyleVariable::sheet
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_1;
	// UnityEngine.UIElements.StyleValueHandle[] UnityEngine.UIElements.StyleVariable::handles
	StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE* ___handles_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleVariable
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshaled_pinvoke
{
	char* ___name_0;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_1;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___handles_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleVariable
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshaled_com
{
	Il2CppChar* ___name_0;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_1;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___handles_2;
};

// UnityEngine.UIElements.TextureId
struct TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 
{
	// System.Int32 UnityEngine.UIElements.TextureId::m_Index
	int32_t ___m_Index_0;
};

struct TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_StaticFields
{
	// UnityEngine.UIElements.TextureId UnityEngine.UIElements.TextureId::invalid
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___invalid_1;
};

// UnityEngine.UIElements.TimeValue
struct TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E 
{
	// System.Single UnityEngine.UIElements.TimeValue::m_Value
	float ___m_Value_0;
	// UnityEngine.UIElements.TimeUnit UnityEngine.UIElements.TimeValue::m_Unit
	int32_t ___m_Unit_1;
};

// UnityEngine.UILineInfo
struct UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC 
{
	// System.Int32 UnityEngine.UILineInfo::startCharIdx
	int32_t ___startCharIdx_0;
	// System.Int32 UnityEngine.UILineInfo::height
	int32_t ___height_1;
	// System.Single UnityEngine.UILineInfo::topY
	float ___topY_2;
	// System.Single UnityEngine.UILineInfo::leading
	float ___leading_3;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
};

struct UIntPtr_t_StaticFields
{
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3Int
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;
};

struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back_10;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D 
{
	// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::status
	int32_t ___status_0;
	// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::info
	String_t* ___info_1;
};
// Native definition for P/Invoke marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_pinvoke
{
	int32_t ___status_0;
	char* ___info_1;
};
// Native definition for COM marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_com
{
	int32_t ___status_0;
	Il2CppChar* ___info_1;
};

// UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 
{
	// System.Int32 UnityEngine.BeforeRenderHelper/OrderBlock::order
	int32_t ___order_0;
	// UnityEngine.Events.UnityAction UnityEngine.BeforeRenderHelper/OrderBlock::callback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
// Native definition for COM marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};

// UnityEngine.UIElements.UIR.BitmapAllocator32/Page
struct Page_t04FE552A388BF55B12C8868E19589136957E00A5 
{
	// System.UInt16 UnityEngine.UIElements.UIR.BitmapAllocator32/Page::x
	uint16_t ___x_0;
	// System.UInt16 UnityEngine.UIElements.UIR.BitmapAllocator32/Page::y
	uint16_t ___y_1;
	// System.Int32 UnityEngine.UIElements.UIR.BitmapAllocator32/Page::freeSlots
	int32_t ___freeSlots_2;
};

// UnityEngine.Camera/RenderRequest
struct RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A 
{
	// UnityEngine.Camera/RenderRequestMode UnityEngine.Camera/RenderRequest::m_CameraRenderMode
	int32_t ___m_CameraRenderMode_0;
	// UnityEngine.RenderTexture UnityEngine.Camera/RenderRequest::m_ResultRT
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_ResultRT_1;
	// UnityEngine.Camera/RenderRequestOutputSpace UnityEngine.Camera/RenderRequest::m_OutputSpace
	int32_t ___m_OutputSpace_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Camera/RenderRequest
struct RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_marshaled_pinvoke
{
	int32_t ___m_CameraRenderMode_0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_ResultRT_1;
	int32_t ___m_OutputSpace_2;
};
// Native definition for COM marshalling of UnityEngine.Camera/RenderRequest
struct RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_marshaled_com
{
	int32_t ___m_CameraRenderMode_0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_ResultRT_1;
	int32_t ___m_OutputSpace_2;
};

// System.Decimal/DecCalc
struct DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 System.Decimal/DecCalc::uflags
			uint32_t ___uflags_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uflags_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uhi_1_OffsetPadding[4];
			// System.UInt32 System.Decimal/DecCalc::uhi
			uint32_t ___uhi_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uhi_1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uhi_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulo_2_OffsetPadding[8];
			// System.UInt32 System.Decimal/DecCalc::ulo
			uint32_t ___ulo_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulo_2_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___ulo_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___umid_3_OffsetPadding[12];
			// System.UInt32 System.Decimal/DecCalc::umid
			uint32_t ___umid_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___umid_3_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___umid_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_4_OffsetPadding[8];
			// System.UInt64 System.Decimal/DecCalc::ulomidLE
			uint64_t ___ulomidLE_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_4_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_4_forAlignmentOnly;
		};
	};
};

struct DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9_StaticFields
{
	// System.UInt32[] System.Decimal/DecCalc::s_powers10
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_powers10_5;
	// System.UInt64[] System.Decimal/DecCalc::s_ulongPowers10
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___s_ulongPowers10_6;
	// System.Double[] System.Decimal/DecCalc::s_doublePowers10
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___s_doublePowers10_7;
	// System.Decimal/DecCalc/PowerOvfl[] System.Decimal/DecCalc::PowerOvflValues
	PowerOvflU5BU5D_t8BB6F43AF19F1F7C7558815B4684875BC320735B* ___PowerOvflValues_8;
};

// UnityEngine.UIElements.FocusController/FocusedElement
struct FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.FocusController/FocusedElement::m_SubTreeRoot
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_SubTreeRoot_0;
	// UnityEngine.UIElements.Focusable UnityEngine.UIElements.FocusController/FocusedElement::m_FocusedElement
	Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0* ___m_FocusedElement_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.FocusController/FocusedElement
struct FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_SubTreeRoot_0;
	Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0* ___m_FocusedElement_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.FocusController/FocusedElement
struct FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_SubTreeRoot_0;
	Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0* ___m_FocusedElement_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.GlobalSerializer/_SerializerInfo
struct _SerializerInfo_t093E1527322CD37C49786F58CB261EEC6C7261E6 
{
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.GlobalSerializer/_SerializerInfo::_serializer
	RuntimeObject* ____serializer_0;
	// System.String Niantic.ARDK.Utilities.BinarySerialization.GlobalSerializer/_SerializerInfo::_serializationName
	String_t* ____serializationName_1;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.Utilities.BinarySerialization.GlobalSerializer/_SerializerInfo
struct _SerializerInfo_t093E1527322CD37C49786F58CB261EEC6C7261E6_marshaled_pinvoke
{
	RuntimeObject* ____serializer_0;
	char* ____serializationName_1;
};
// Native definition for COM marshalling of Niantic.ARDK.Utilities.BinarySerialization.GlobalSerializer/_SerializerInfo
struct _SerializerInfo_t093E1527322CD37C49786F58CB261EEC6C7261E6_marshaled_com
{
	RuntimeObject* ____serializer_0;
	Il2CppChar* ____serializationName_1;
};

// UnityEngine.UIElements.InternalTreeView/TreeViewItemWrapper
struct TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F 
{
	// System.Int32 UnityEngine.UIElements.InternalTreeView/TreeViewItemWrapper::depth
	int32_t ___depth_0;
	// UnityEngine.UIElements.ITreeViewItem UnityEngine.UIElements.InternalTreeView/TreeViewItemWrapper::item
	RuntimeObject* ___item_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.InternalTreeView/TreeViewItemWrapper
struct TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_marshaled_pinvoke
{
	int32_t ___depth_0;
	RuntimeObject* ___item_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.InternalTreeView/TreeViewItemWrapper
struct TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_marshaled_com
{
	int32_t ___depth_0;
	RuntimeObject* ___item_1;
};

// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_definedParameters
	Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69* ____definedParameters_0;
	// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_hoistedParameters
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ____hoistedParameters_1;
};

// Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData
struct _NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B 
{
	// System.String Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData::_key
	String_t* ____key_0;
	// System.Object Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData::_data
	RuntimeObject* ____data_1;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData
struct _NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B_marshaled_pinvoke
{
	char* ____key_0;
	Il2CppIUnknown* ____data_1;
};
// Native definition for COM marshalling of Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData
struct _NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B_marshaled_com
{
	Il2CppChar* ____key_0;
	Il2CppIUnknown* ____data_1;
};

// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_variables
	Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD* ____variables_0;
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_frame
	InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D* ____frame_1;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_shadowedVars
	Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* ____shadowedVars_2;
};

// System.Text.RegularExpressions.RegexCharClass/SingleRange
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC 
{
	// System.Char System.Text.RegularExpressions.RegexCharClass/SingleRange::First
	Il2CppChar ___First_0;
	// System.Char System.Text.RegularExpressions.RegexCharClass/SingleRange::Last
	Il2CppChar ___Last_1;
};
// Native definition for P/Invoke marshalling of System.Text.RegularExpressions.RegexCharClass/SingleRange
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_pinvoke
{
	uint8_t ___First_0;
	uint8_t ___Last_1;
};
// Native definition for COM marshalling of System.Text.RegularExpressions.RegexCharClass/SingleRange
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_com
{
	uint8_t ___First_0;
	uint8_t ___Last_1;
};

// UnityEngine.UIElements.TemplateAsset/AttributeOverride
struct AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF 
{
	// System.String UnityEngine.UIElements.TemplateAsset/AttributeOverride::m_ElementName
	String_t* ___m_ElementName_0;
	// System.String UnityEngine.UIElements.TemplateAsset/AttributeOverride::m_AttributeName
	String_t* ___m_AttributeName_1;
	// System.String UnityEngine.UIElements.TemplateAsset/AttributeOverride::m_Value
	String_t* ___m_Value_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.TemplateAsset/AttributeOverride
struct AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshaled_pinvoke
{
	char* ___m_ElementName_0;
	char* ___m_AttributeName_1;
	char* ___m_Value_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.TemplateAsset/AttributeOverride
struct AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshaled_com
{
	Il2CppChar* ___m_ElementName_0;
	Il2CppChar* ___m_AttributeName_1;
	Il2CppChar* ___m_Value_2;
};

// UnityEngine.TextCore.Text.TextSettings/FontReferenceMap
struct FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 
{
	// UnityEngine.Font UnityEngine.TextCore.Text.TextSettings/FontReferenceMap::font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_0;
	// UnityEngine.TextCore.Text.FontAsset UnityEngine.TextCore.Text.TextSettings/FontReferenceMap::fontAsset
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.TextCore.Text.TextSettings/FontReferenceMap
struct FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_0;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset_1;
};
// Native definition for COM marshalling of UnityEngine.TextCore.Text.TextSettings/FontReferenceMap
struct FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_0;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset_1;
};

// TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteFrame
struct SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 
{
	// System.Single TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteFrame::x
	float ___x_0;
	// System.Single TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteFrame::y
	float ___y_1;
	// System.Single TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteFrame::w
	float ___w_2;
	// System.Single TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteFrame::h
	float ___h_3;
};

// TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteSize
struct SpriteSize_tF99BB7603AE2E6587E6184ACAB6CD209FE6569B3 
{
	// System.Single TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteSize::w
	float ___w_0;
	// System.Single TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteSize::h
	float ___h_1;
};

// UnityEngine.UIElements.TextureRegistry/TextureInfo
struct TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B 
{
	// UnityEngine.Texture UnityEngine.UIElements.TextureRegistry/TextureInfo::texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_0;
	// System.Boolean UnityEngine.UIElements.TextureRegistry/TextureInfo::dynamic
	bool ___dynamic_1;
	// System.Int32 UnityEngine.UIElements.TextureRegistry/TextureInfo::refCount
	int32_t ___refCount_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.TextureRegistry/TextureInfo
struct TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshaled_pinvoke
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_0;
	int32_t ___dynamic_1;
	int32_t ___refCount_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.TextureRegistry/TextureInfo
struct TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshaled_com
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_0;
	int32_t ___dynamic_1;
	int32_t ___refCount_2;
};

// UnityEngine.UIElements.TreeView/TreeViewItemWrapper
struct TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE 
{
	// System.Int32 UnityEngine.UIElements.TreeView/TreeViewItemWrapper::depth
	int32_t ___depth_0;
	// UnityEngine.UIElements.ITreeViewItem UnityEngine.UIElements.TreeView/TreeViewItemWrapper::item
	RuntimeObject* ___item_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.TreeView/TreeViewItemWrapper
struct TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_marshaled_pinvoke
{
	int32_t ___depth_0;
	RuntimeObject* ___item_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.TreeView/TreeViewItemWrapper
struct TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_marshaled_com
{
	int32_t ___depth_0;
	RuntimeObject* ___item_1;
};

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 
{
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject* ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle_2;
};

// UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::m_Owner
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};

// UnityEngine.UIElements.VisualTreeAsset/SlotDefinition
struct SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 
{
	// System.String UnityEngine.UIElements.VisualTreeAsset/SlotDefinition::name
	String_t* ___name_0;
	// System.Int32 UnityEngine.UIElements.VisualTreeAsset/SlotDefinition::insertionPointId
	int32_t ___insertionPointId_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualTreeAsset/SlotDefinition
struct SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshaled_pinvoke
{
	char* ___name_0;
	int32_t ___insertionPointId_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualTreeAsset/SlotDefinition
struct SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshaled_com
{
	Il2CppChar* ___name_0;
	int32_t ___insertionPointId_1;
};

// UnityEngine.UIElements.VisualTreeAsset/SlotUsageEntry
struct SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 
{
	// System.String UnityEngine.UIElements.VisualTreeAsset/SlotUsageEntry::slotName
	String_t* ___slotName_0;
	// System.Int32 UnityEngine.UIElements.VisualTreeAsset/SlotUsageEntry::assetId
	int32_t ___assetId_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualTreeAsset/SlotUsageEntry
struct SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshaled_pinvoke
{
	char* ___slotName_0;
	int32_t ___assetId_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualTreeAsset/SlotUsageEntry
struct SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshaled_com
{
	Il2CppChar* ___slotName_0;
	int32_t ___assetId_1;
};

// UnityEngine.UIElements.VisualTreeAsset/UsingEntry
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 
{
	// System.String UnityEngine.UIElements.VisualTreeAsset/UsingEntry::alias
	String_t* ___alias_1;
	// System.String UnityEngine.UIElements.VisualTreeAsset/UsingEntry::path
	String_t* ___path_2;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.VisualTreeAsset/UsingEntry::asset
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset_3;
};

struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_StaticFields
{
	// System.Collections.Generic.IComparer`1<UnityEngine.UIElements.VisualTreeAsset/UsingEntry> UnityEngine.UIElements.VisualTreeAsset/UsingEntry::comparer
	RuntimeObject* ___comparer_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualTreeAsset/UsingEntry
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshaled_pinvoke
{
	char* ___alias_1;
	char* ___path_2;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset_3;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualTreeAsset/UsingEntry
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshaled_com
{
	Il2CppChar* ___alias_1;
	Il2CppChar* ___path_2;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset_3;
};

// System.Threading.Volatile/VolatileBoolean
struct VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041 
{
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Volatile/VolatileBoolean::Value
	bool ___Value_0;
};
// Native definition for P/Invoke marshalling of System.Threading.Volatile/VolatileBoolean
struct VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_marshaled_pinvoke
{
	int32_t ___Value_0;
};
// Native definition for COM marshalling of System.Threading.Volatile/VolatileBoolean
struct VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_marshaled_com
{
	int32_t ___Value_0;
};

// System.Threading.Volatile/VolatileInt32
struct VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693 
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Volatile/VolatileInt32::Value
	int32_t ___Value_0;
};

// System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99 
{
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Volatile/VolatileObject::Value
	RuntimeObject* ___Value_0;
};
// Native definition for P/Invoke marshalling of System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_pinvoke
{
	RuntimeObject* ___Value_0;
};
// Native definition for COM marshalling of System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_com
{
	RuntimeObject* ___Value_0;
};

// Niantic.ARDK.VPSCoverage.GeoserviceMessages._CoverageAreasResponse/Polygon
struct Polygon_tC44C69CB31E9CB9EB1C2D387D1E2BDBCAE3A9355 
{
	// Niantic.ARDK.VPSCoverage.GeoserviceMessages._CoverageAreasResponse/Loop[] Niantic.ARDK.VPSCoverage.GeoserviceMessages._CoverageAreasResponse/Polygon::loop
	LoopU5BU5D_t0E03B2E87E89F2245E6BE2554FD8E71A072715DD* ___loop_0;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.VPSCoverage.GeoserviceMessages._CoverageAreasResponse/Polygon
struct Polygon_tC44C69CB31E9CB9EB1C2D387D1E2BDBCAE3A9355_marshaled_pinvoke
{
	Loop_t3F47160BEAE33F8AB1D4AA6D46917A0B879075A6_marshaled_pinvoke* ___loop_0;
};
// Native definition for COM marshalling of Niantic.ARDK.VPSCoverage.GeoserviceMessages._CoverageAreasResponse/Polygon
struct Polygon_tC44C69CB31E9CB9EB1C2D387D1E2BDBCAE3A9355_marshaled_com
{
	Loop_t3F47160BEAE33F8AB1D4AA6D46917A0B879075A6_marshaled_com* ___loop_0;
};

// Niantic.ARDK.Utilities._GcObserver/_WeakAction
struct _WeakAction_tBBC02C4CAC557DF6A2BD33A029BD8F24C09FC2A3 
{
	// System.WeakReference Niantic.ARDK.Utilities._GcObserver/_WeakAction::_targetReference
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ____targetReference_0;
	// System.Reflection.MethodInfo Niantic.ARDK.Utilities._GcObserver/_WeakAction::_method
	MethodInfo_t* ____method_1;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.Utilities._GcObserver/_WeakAction
struct _WeakAction_tBBC02C4CAC557DF6A2BD33A029BD8F24C09FC2A3_marshaled_pinvoke
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ____targetReference_0;
	MethodInfo_t* ____method_1;
};
// Native definition for COM marshalling of Niantic.ARDK.Utilities._GcObserver/_WeakAction
struct _WeakAction_tBBC02C4CAC557DF6A2BD33A029BD8F24C09FC2A3_marshaled_com
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ____targetReference_0;
	MethodInfo_t* ____method_1;
};

// System.Linq.Expressions.Interpreter.InstructionList/DebugView/InstructionView
struct InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D 
{
	// System.Int32 System.Linq.Expressions.Interpreter.InstructionList/DebugView/InstructionView::_index
	int32_t ____index_0;
	// System.Int32 System.Linq.Expressions.Interpreter.InstructionList/DebugView/InstructionView::_stackDepth
	int32_t ____stackDepth_1;
	// System.Int32 System.Linq.Expressions.Interpreter.InstructionList/DebugView/InstructionView::_continuationsDepth
	int32_t ____continuationsDepth_2;
	// System.String System.Linq.Expressions.Interpreter.InstructionList/DebugView/InstructionView::_name
	String_t* ____name_3;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.InstructionList/DebugView/InstructionView::_instruction
	Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998* ____instruction_4;
};
// Native definition for P/Invoke marshalling of System.Linq.Expressions.Interpreter.InstructionList/DebugView/InstructionView
struct InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshaled_pinvoke
{
	int32_t ____index_0;
	int32_t ____stackDepth_1;
	int32_t ____continuationsDepth_2;
	char* ____name_3;
	Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998* ____instruction_4;
};
// Native definition for COM marshalling of System.Linq.Expressions.Interpreter.InstructionList/DebugView/InstructionView
struct InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshaled_com
{
	int32_t ____index_0;
	int32_t ____stackDepth_1;
	int32_t ____continuationsDepth_2;
	Il2CppChar* ____name_3;
	Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998* ____instruction_4;
};

// System.Number/NumberBuffer/DigitsAndNullTerminator
struct DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA 
{
	union
	{
		struct
		{
		};
		uint8_t DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA__padding[102];
	};
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.BatchVisibility>
struct AlignOfHelper_1_t06B2AF48C49769AAD65F5E3F53EA9C54BFB10F00 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Color>
struct AlignOfHelper_1_tDD05A3FC824A309846DFDD7539C19F11BB681485 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Color32>
struct AlignOfHelper_1_t26A3226821AB86486949E2EEA83A5BE120465E3D 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.UIElements.UIR.DrawBufferRange>
struct AlignOfHelper_1_t3F15C977CB75F6273144B3EB4A070152979E3542 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	DrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector3>
struct AlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector4>
struct AlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___data_1;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Niantic.ARDK.Utilities._HttpResponse`1<System.Object>>
struct AsyncTaskMethodBuilder_1_tD0BB5BAA8AD25EEF2158CF4CC106F34727B7E338 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t6C20CF982304467ABBA3A6DA7E39E029EC26B0F2* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tD0BB5BAA8AD25EEF2158CF4CC106F34727B7E338_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t6C20CF982304467ABBA3A6DA7E39E029EC26B0F2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Linq.Expressions.Expression`1<System.Func`1<System.Object>>
struct Expression_1_t40A989195949EC188A0EB6743616540AD0F56F66  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};

// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>
struct KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Matrix4x4>
struct KeyValuePair_2_t0E575E85C266A75FFE551B1B772926B8B1D9810F 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>
struct KeyValuePair_2_t7D311E49C5BFA7AD0E1B6BDE838D7428E2CEDA13 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// Niantic.ARDK.Utilities.SafeGCHandle`1<Niantic.Experimental.ARDK.SharedAR._NativeDatastore>
struct SafeGCHandle_1_tE9CA088F18D3F532550A0AD6389C28479BF3B265 
{
	// System.IntPtr Niantic.ARDK.Utilities.SafeGCHandle`1::_id
	intptr_t ____id_0;
};

// Niantic.ARDK.Utilities.SafeGCHandle`1<Niantic.Experimental.ARDK.SharedAR._NativeNetworking>
struct SafeGCHandle_1_tCB59E43A764307F868E56D6A7D301C7D3A4C2446 
{
	// System.IntPtr Niantic.ARDK.Utilities.SafeGCHandle`1::_id
	intptr_t ____id_0;
};

// UnityEngine.UIElements.Experimental.ValueAnimation`1<UnityEngine.UIElements.Experimental.StyleValues>
struct ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC  : public RuntimeObject
{
	// System.Int64 UnityEngine.UIElements.Experimental.ValueAnimation`1::m_StartTimeMs
	int64_t ___m_StartTimeMs_0;
	// System.Int32 UnityEngine.UIElements.Experimental.ValueAnimation`1::m_DurationMs
	int32_t ___m_DurationMs_1;
	// System.Func`2<System.Single,System.Single> UnityEngine.UIElements.Experimental.ValueAnimation`1::<easingCurve>k__BackingField
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___U3CeasingCurveU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.Experimental.ValueAnimation`1::<isRunning>k__BackingField
	bool ___U3CisRunningU3Ek__BackingField_3;
	// System.Action UnityEngine.UIElements.Experimental.ValueAnimation`1::<onAnimationCompleted>k__BackingField
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3ConAnimationCompletedU3Ek__BackingField_4;
	// System.Boolean UnityEngine.UIElements.Experimental.ValueAnimation`1::<autoRecycle>k__BackingField
	bool ___U3CautoRecycleU3Ek__BackingField_5;
	// System.Boolean UnityEngine.UIElements.Experimental.ValueAnimation`1::<recycled>k__BackingField
	bool ___U3CrecycledU3Ek__BackingField_6;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.Experimental.ValueAnimation`1::<owner>k__BackingField
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CownerU3Ek__BackingField_8;
	// System.Action`2<UnityEngine.UIElements.VisualElement,T> UnityEngine.UIElements.Experimental.ValueAnimation`1::<valueUpdated>k__BackingField
	Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A* ___U3CvalueUpdatedU3Ek__BackingField_9;
	// System.Func`2<UnityEngine.UIElements.VisualElement,T> UnityEngine.UIElements.Experimental.ValueAnimation`1::<initialValue>k__BackingField
	Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227* ___U3CinitialValueU3Ek__BackingField_10;
	// System.Func`4<T,T,System.Single,T> UnityEngine.UIElements.Experimental.ValueAnimation`1::<interpolator>k__BackingField
	Func_4_t93A2D1B3300415C1167923C629725F6A8758E6B5* ___U3CinterpolatorU3Ek__BackingField_11;
	// T UnityEngine.UIElements.Experimental.ValueAnimation`1::_from
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A ____from_12;
	// System.Boolean UnityEngine.UIElements.Experimental.ValueAnimation`1::fromValueSet
	bool ___fromValueSet_13;
	// T UnityEngine.UIElements.Experimental.ValueAnimation`1::<to>k__BackingField
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A ___U3CtoU3Ek__BackingField_14;
};

struct ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC_StaticFields
{
	// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.Experimental.ValueAnimation`1<T>> UnityEngine.UIElements.Experimental.ValueAnimation`1::sObjectPool
	ObjectPool_1_t048E004E7532AED8FD10569876C6065B7527D2AE* ___sObjectPool_7;
};

// System.Numerics.Vector`1<System.UInt16>
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 
{
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
};

struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields
{
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_zero
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_one
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_allOnes
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_allOnes_4;
};

// System.Numerics.Vector`1<System.UInt64>
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A 
{
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
};

struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields
{
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_zero
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_one
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_allOnes
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_allOnes_4;
};

// Niantic.ARDKExamples.RemoteAuthoring.AnchoredContent
struct AnchoredContent_t169B73944CDDA1EE005CA17B02EC80672A611820 
{
	// System.String Niantic.ARDKExamples.RemoteAuthoring.AnchoredContent::ReadableName
	String_t* ___ReadableName_0;
	// System.Int32 Niantic.ARDKExamples.RemoteAuthoring.AnchoredContent::ManifestID
	int32_t ___ManifestID_1;
	// UnityEngine.Vector3 Niantic.ARDKExamples.RemoteAuthoring.AnchoredContent::ContentScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ContentScale_2;
	// UnityEngine.GameObject Niantic.ARDKExamples.RemoteAuthoring.AnchoredContent::Content
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Content_3;
};
// Native definition for P/Invoke marshalling of Niantic.ARDKExamples.RemoteAuthoring.AnchoredContent
struct AnchoredContent_t169B73944CDDA1EE005CA17B02EC80672A611820_marshaled_pinvoke
{
	char* ___ReadableName_0;
	int32_t ___ManifestID_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ContentScale_2;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Content_3;
};
// Native definition for COM marshalling of Niantic.ARDKExamples.RemoteAuthoring.AnchoredContent
struct AnchoredContent_t169B73944CDDA1EE005CA17B02EC80672A611820_marshaled_com
{
	Il2CppChar* ___ReadableName_0;
	int32_t ___ManifestID_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ContentScale_2;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Content_3;
};

// UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData> UnityEngine.UIElements.ComputedStyle::inheritedData
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData> UnityEngine.UIElements.ComputedStyle::layoutData
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData> UnityEngine.UIElements.ComputedStyle::rareData
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData> UnityEngine.UIElements.ComputedStyle::transformData
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData> UnityEngine.UIElements.ComputedStyle::transitionData
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData> UnityEngine.UIElements.ComputedStyle::visualData
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.ComputedStyle::yogaNode
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue> UnityEngine.UIElements.ComputedStyle::customProperties
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	// System.Int64 UnityEngine.UIElements.ComputedStyle::matchingRulesHash
	int64_t ___matchingRulesHash_8;
	// System.Single UnityEngine.UIElements.ComputedStyle::dpiScaling
	float ___dpiScaling_9;
	// UnityEngine.UIElements.ComputedTransitionProperty[] UnityEngine.UIElements.ComputedStyle::computedTransitions
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions_10;
};
// Native definition for COM marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions_10;
};

// Niantic.ARDK.VPSCoverage.CoverageArea
struct CoverageArea_t9049C3A18B14DA38AEF55B57190DE7BAEE63A48C 
{
	// System.String[] Niantic.ARDK.VPSCoverage.CoverageArea::_localizationTargetIdentifiers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____localizationTargetIdentifiers_0;
	// Niantic.ARDK.LocationService.LatLng[] Niantic.ARDK.VPSCoverage.CoverageArea::_shape
	LatLngU5BU5D_t1A5EF9302D67F28AC57B48FECA0F28324371B8FC* ____shape_1;
	// Niantic.ARDK.LocationService.LatLng Niantic.ARDK.VPSCoverage.CoverageArea::<Centroid>k__BackingField
	LatLng_tB2DF4402F12A3F1EFEE5C4207313967A4E7CF80F ___U3CCentroidU3Ek__BackingField_2;
	// Niantic.ARDK.VPSCoverage.CoverageArea/Localizability Niantic.ARDK.VPSCoverage.CoverageArea::_localizabilityQuality
	int32_t ____localizabilityQuality_3;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.VPSCoverage.CoverageArea
struct CoverageArea_t9049C3A18B14DA38AEF55B57190DE7BAEE63A48C_marshaled_pinvoke
{
	char** ____localizationTargetIdentifiers_0;
	LatLng_tB2DF4402F12A3F1EFEE5C4207313967A4E7CF80F* ____shape_1;
	LatLng_tB2DF4402F12A3F1EFEE5C4207313967A4E7CF80F ___U3CCentroidU3Ek__BackingField_2;
	int32_t ____localizabilityQuality_3;
};
// Native definition for COM marshalling of Niantic.ARDK.VPSCoverage.CoverageArea
struct CoverageArea_t9049C3A18B14DA38AEF55B57190DE7BAEE63A48C_marshaled_com
{
	Il2CppChar** ____localizationTargetIdentifiers_0;
	LatLng_tB2DF4402F12A3F1EFEE5C4207313967A4E7CF80F* ____shape_1;
	LatLng_tB2DF4402F12A3F1EFEE5C4207313967A4E7CF80F ___U3CCentroidU3Ek__BackingField_2;
	int32_t ____localizabilityQuality_3;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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

// Niantic.Experimental.ARDK.SharedAR.Experience
struct Experience_tC36F343516B83528459358B6BC0892EEFEAA8CDA 
{
	// System.String Niantic.Experimental.ARDK.SharedAR.Experience::AppId
	String_t* ___AppId_0;
	// System.String Niantic.Experimental.ARDK.SharedAR.Experience::ExperienceId
	String_t* ___ExperienceId_1;
	// Niantic.ARDK.LocationService.LatLng Niantic.Experimental.ARDK.SharedAR.Experience::Location
	LatLng_tB2DF4402F12A3F1EFEE5C4207313967A4E7CF80F ___Location_2;
	// System.String Niantic.Experimental.ARDK.SharedAR.Experience::Kind
	String_t* ___Kind_3;
};
// Native definition for P/Invoke marshalling of Niantic.Experimental.ARDK.SharedAR.Experience
struct Experience_tC36F343516B83528459358B6BC0892EEFEAA8CDA_marshaled_pinvoke
{
	char* ___AppId_0;
	char* ___ExperienceId_1;
	LatLng_tB2DF4402F12A3F1EFEE5C4207313967A4E7CF80F ___Location_2;
	char* ___Kind_3;
};
// Native definition for COM marshalling of Niantic.Experimental.ARDK.SharedAR.Experience
struct Experience_tC36F343516B83528459358B6BC0892EEFEAA8CDA_marshaled_com
{
	Il2CppChar* ___AppId_0;
	Il2CppChar* ___ExperienceId_1;
	LatLng_tB2DF4402F12A3F1EFEE5C4207313967A4E7CF80F ___Location_2;
	Il2CppChar* ___Kind_3;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// UnityEngine.UIElements.UIR.GfxUpdateBufferRange
struct GfxUpdateBufferRange_tC47258BCB472B0727B4FCE21A2A53506644C1A97 
{
	// System.UInt32 UnityEngine.UIElements.UIR.GfxUpdateBufferRange::offsetFromWriteStart
	uint32_t ___offsetFromWriteStart_0;
	// System.UInt32 UnityEngine.UIElements.UIR.GfxUpdateBufferRange::size
	uint32_t ___size_1;
	// System.UIntPtr UnityEngine.UIElements.UIR.GfxUpdateBufferRange::source
	uintptr_t ___source_2;
};

// UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord
struct GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 
{
	// System.UInt32 UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord::m_GlyphIndex
	uint32_t ___m_GlyphIndex_0;
	// UnityEngine.TextCore.LowLevel.GlyphValueRecord UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord::m_GlyphValueRecord
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___m_GlyphValueRecord_1;
};

// Niantic.ARDK.Extensions.Gameboard.GridNode
struct GridNode_t632C407080B8E1124DC1D6FE17D7AF317B6B1D04 
{
	// UnityEngine.Vector2Int Niantic.ARDK.Extensions.Gameboard.GridNode::Coordinates
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___Coordinates_0;
	// System.Single Niantic.ARDK.Extensions.Gameboard.GridNode::Elevation
	float ___Elevation_1;
	// System.Single Niantic.ARDK.Extensions.Gameboard.GridNode::Deviation
	float ___Deviation_2;
	// System.Single Niantic.ARDK.Extensions.Gameboard.GridNode::DiffFromNeighbour
	float ___DiffFromNeighbour_3;
};

// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::instanceID
	int32_t ___instanceID_0;
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieID
	int32_t ___cookieID_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieScale
	float ___cookieScale_2;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_3;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_4;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.LightDataGI::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_5;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.LightDataGI::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::coneAngle
	float ___coneAngle_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::innerConeAngle
	float ___innerConeAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape0
	float ___shape0_10;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape1
	float ___shape1_11;
	// UnityEngine.Experimental.GlobalIllumination.LightType UnityEngine.Experimental.GlobalIllumination.LightDataGI::type
	uint8_t ___type_12;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightDataGI::mode
	uint8_t ___mode_13;
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightDataGI::shadow
	uint8_t ___shadow_14;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.LightDataGI::falloff
	uint8_t ___falloff_15;
};

// Niantic.ARDK.VPSCoverage.LocalizationTarget
struct LocalizationTarget_tE79D541B0B01BD41A76B028A9396F968586FED49 
{
	// System.String Niantic.ARDK.VPSCoverage.LocalizationTarget::_identifier
	String_t* ____identifier_0;
	// System.String Niantic.ARDK.VPSCoverage.LocalizationTarget::_name
	String_t* ____name_1;
	// Niantic.ARDK.LocationService.LatLng Niantic.ARDK.VPSCoverage.LocalizationTarget::_center
	LatLng_tB2DF4402F12A3F1EFEE5C4207313967A4E7CF80F ____center_2;
	// System.String Niantic.ARDK.VPSCoverage.LocalizationTarget::_imageURL
	String_t* ____imageURL_3;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.VPSCoverage.LocalizationTarget
struct LocalizationTarget_tE79D541B0B01BD41A76B028A9396F968586FED49_marshaled_pinvoke
{
	char* ____identifier_0;
	char* ____name_1;
	LatLng_tB2DF4402F12A3F1EFEE5C4207313967A4E7CF80F ____center_2;
	char* ____imageURL_3;
};
// Native definition for COM marshalling of Niantic.ARDK.VPSCoverage.LocalizationTarget
struct LocalizationTarget_tE79D541B0B01BD41A76B028A9396F968586FED49_marshaled_com
{
	Il2CppChar* ____identifier_0;
	Il2CppChar* ____name_1;
	LatLng_tB2DF4402F12A3F1EFEE5C4207313967A4E7CF80F ____center_2;
	Il2CppChar* ____imageURL_3;
};

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_14;
};

// UnityEngine.ModifiableContactPair
struct ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 
{
	// System.IntPtr UnityEngine.ModifiableContactPair::actor
	intptr_t ___actor_0;
	// System.IntPtr UnityEngine.ModifiableContactPair::otherActor
	intptr_t ___otherActor_1;
	// System.IntPtr UnityEngine.ModifiableContactPair::shape
	intptr_t ___shape_2;
	// System.IntPtr UnityEngine.ModifiableContactPair::otherShape
	intptr_t ___otherShape_3;
	// UnityEngine.Quaternion UnityEngine.ModifiableContactPair::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_4;
	// UnityEngine.Vector3 UnityEngine.ModifiableContactPair::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_5;
	// UnityEngine.Quaternion UnityEngine.ModifiableContactPair::otherRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___otherRotation_6;
	// UnityEngine.Vector3 UnityEngine.ModifiableContactPair::otherPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___otherPosition_7;
	// System.Int32 UnityEngine.ModifiableContactPair::numContacts
	int32_t ___numContacts_8;
	// System.IntPtr UnityEngine.ModifiableContactPair::contacts
	intptr_t ___contacts_9;
};

// UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 
{
	// System.Boolean UnityEngine.UIElements.PanelClearSettings::clearDepthStencil
	bool ___clearDepthStencil_0;
	// System.Boolean UnityEngine.UIElements.PanelClearSettings::clearColor
	bool ___clearColor_1;
	// UnityEngine.Color UnityEngine.UIElements.PanelClearSettings::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_pinvoke
{
	int32_t ___clearDepthStencil_0;
	int32_t ___clearColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_com
{
	int32_t ___clearDepthStencil_0;
	int32_t ___clearColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};

// Niantic.ARDK.Extensions.Gameboard.PathFindingNode
struct PathFindingNode_tFC227A083863C9D6848D8ACD481D67EE451D9DE7 
{
	// UnityEngine.Vector2Int Niantic.ARDK.Extensions.Gameboard.PathFindingNode::Coordinates
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___Coordinates_0;
	// UnityEngine.Vector2Int Niantic.ARDK.Extensions.Gameboard.PathFindingNode::ParentCoordinates
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___ParentCoordinates_1;
	// System.Single Niantic.ARDK.Extensions.Gameboard.PathFindingNode::Elevation
	float ___Elevation_2;
	// System.Boolean Niantic.ARDK.Extensions.Gameboard.PathFindingNode::HasParent
	bool ___HasParent_3;
	// System.Int32 Niantic.ARDK.Extensions.Gameboard.PathFindingNode::CostToThis
	int32_t ___CostToThis_4;
	// System.Single Niantic.ARDK.Extensions.Gameboard.PathFindingNode::CostToGoal
	float ___CostToGoal_5;
	// System.Int32 Niantic.ARDK.Extensions.Gameboard.PathFindingNode::AggregateOffSurface
	int32_t ___AggregateOffSurface_6;
	// Niantic.ARDK.Extensions.Gameboard.Surface Niantic.ARDK.Extensions.Gameboard.PathFindingNode::Surface
	Surface_tF5BE8BF6B212A1C5231A8136C1BA50695C297638* ___Surface_7;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.Extensions.Gameboard.PathFindingNode
struct PathFindingNode_tFC227A083863C9D6848D8ACD481D67EE451D9DE7_marshaled_pinvoke
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___Coordinates_0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___ParentCoordinates_1;
	float ___Elevation_2;
	int32_t ___HasParent_3;
	int32_t ___CostToThis_4;
	float ___CostToGoal_5;
	int32_t ___AggregateOffSurface_6;
	Surface_tF5BE8BF6B212A1C5231A8136C1BA50695C297638* ___Surface_7;
};
// Native definition for COM marshalling of Niantic.ARDK.Extensions.Gameboard.PathFindingNode
struct PathFindingNode_tFC227A083863C9D6848D8ACD481D67EE451D9DE7_marshaled_com
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___Coordinates_0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___ParentCoordinates_1;
	float ___Elevation_2;
	int32_t ___HasParent_3;
	int32_t ___CostToThis_4;
	float ___CostToGoal_5;
	int32_t ___AggregateOffSurface_6;
	Surface_tF5BE8BF6B212A1C5231A8136C1BA50695C297638* ___Surface_7;
};

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prev
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::next
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::groupTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::boneTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::hierarchyDepth
	int32_t ___hierarchyDepth_6;
	// UnityEngine.UIElements.UIR.RenderDataDirtyTypes UnityEngine.UIElements.UIR.RenderChainVEData::dirtiedValues
	int32_t ___dirtiedValues_7;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChainVEData::dirtyID
	uint32_t ___dirtyID_8;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isInChain
	bool ___isInChain_13;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isHierarchyHidden
	bool ___isHierarchyHidden_14;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::localFlipsWinding
	bool ___localFlipsWinding_15;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::worldFlipsWinding
	bool ___worldFlipsWinding_16;
	// UnityEngine.UIElements.UIR.Implementation.ClipMethod UnityEngine.UIElements.UIR.RenderChainVEData::clipMethod
	int32_t ___clipMethod_17;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenStencilRef
	int32_t ___childrenStencilRef_18;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenMaskDepth
	int32_t ___childrenMaskDepth_19;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::disableNudging
	bool ___disableNudging_20;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::usesLegacyText
	bool ___usesLegacyText_21;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::data
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::closingData
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.RenderChainVEData::verticesSpace
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVStart
	int32_t ___displacementUVStart_25;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVEnd
	int32_t ___displacementUVEnd_26;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::transformID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::clipRectID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::opacityID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::textCoreSettingsID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderLeftColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderTopColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderRightColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderBottomColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::tintColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	// System.Single UnityEngine.UIElements.UIR.RenderChainVEData::compositeOpacity
	float ___compositeOpacity_37;
	// UnityEngine.Color UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textEntries
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textures
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___worldFlipsWinding_16;
	int32_t ___clipMethod_17;
	int32_t ___childrenStencilRef_18;
	int32_t ___childrenMaskDepth_19;
	int32_t ___disableNudging_20;
	int32_t ___usesLegacyText_21;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	int32_t ___displacementUVStart_25;
	int32_t ___displacementUVEnd_26;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	float ___compositeOpacity_37;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___worldFlipsWinding_16;
	int32_t ___clipMethod_17;
	int32_t ___childrenStencilRef_18;
	int32_t ___childrenMaskDepth_19;
	int32_t ___disableNudging_20;
	int32_t ___usesLegacyText_21;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	int32_t ___displacementUVStart_25;
	int32_t ___displacementUVEnd_26;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	float ___compositeOpacity_37;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.UIElements.StyleSheets.StylePropertyValue
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 
{
	// UnityEngine.UIElements.StyleSheet UnityEngine.UIElements.StyleSheets.StylePropertyValue::sheet
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	// UnityEngine.UIElements.StyleValueHandle UnityEngine.UIElements.StyleSheets.StylePropertyValue::handle
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSheets.StylePropertyValue
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSheets.StylePropertyValue
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle_1;
};

// UnityEngine.UIElements.TextVertex
struct TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3 
{
	// UnityEngine.Vector3 UnityEngine.UIElements.TextVertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Color32 UnityEngine.UIElements.TextVertex::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_1;
	// UnityEngine.Vector2 UnityEngine.UIElements.TextVertex::uv0
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0_2;
};

// UnityEngine.UIElements.UIR.Transform3x4
struct Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F 
{
	// UnityEngine.Vector4 UnityEngine.UIElements.UIR.Transform3x4::v0
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0_0;
	// UnityEngine.Vector4 UnityEngine.UIElements.UIR.Transform3x4::v1
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v1_1;
	// UnityEngine.Vector4 UnityEngine.UIElements.UIR.Transform3x4::v2
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v2_2;
};

// UnityEngine.UICharInfo
struct UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD 
{
	// UnityEngine.Vector2 UnityEngine.UICharInfo::cursorPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___cursorPos_0;
	// System.Single UnityEngine.UICharInfo::charWidth
	float ___charWidth_1;
};

// UnityEngine.UIVertex
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 
{
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent_2;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_3;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv0
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv0_4;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv1
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv1_5;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv2
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv2_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv3
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv3_7;
};

struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields
{
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___simpleVert_10;
};

// UnityEngine.UIElements.Vertex
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 
{
	// UnityEngine.Vector3 UnityEngine.UIElements.Vertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_1;
	// UnityEngine.Color32 UnityEngine.UIElements.Vertex::tint
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___tint_2;
	// UnityEngine.Vector2 UnityEngine.UIElements.Vertex::uv
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_3;
	// UnityEngine.Color32 UnityEngine.UIElements.Vertex::xformClipPages
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___xformClipPages_4;
	// UnityEngine.Color32 UnityEngine.UIElements.Vertex::ids
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___ids_5;
	// UnityEngine.Color32 UnityEngine.UIElements.Vertex::flags
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___flags_6;
	// UnityEngine.Color32 UnityEngine.UIElements.Vertex::opacityColorPages
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___opacityColorPages_7;
	// UnityEngine.Vector4 UnityEngine.UIElements.Vertex::circle
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___circle_8;
	// System.Single UnityEngine.UIElements.Vertex::textureId
	float ___textureId_9;
};

struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_StaticFields
{
	// System.Single UnityEngine.UIElements.Vertex::nearZ
	float ___nearZ_0;
};

// Niantic.ARDK.Extensions.Gameboard.Waypoint
struct Waypoint_tCC5FC8059B12D71E919B23CB4CAD470BE6DC5089 
{
	// UnityEngine.Vector3 Niantic.ARDK.Extensions.Gameboard.Waypoint::WorldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___WorldPosition_0;
	// Niantic.ARDK.Extensions.Gameboard.Waypoint/MovementType Niantic.ARDK.Extensions.Gameboard.Waypoint::Type
	int32_t ___Type_1;
	// UnityEngine.Vector2Int Niantic.ARDK.Extensions.Gameboard.Waypoint::Coordinates
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___Coordinates_2;
};

// Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorResolvedArgs
struct WayspotAnchorResolvedArgs_t07549FD9B7D6968946359F9800B0A0329CD6E38D 
{
	// System.Guid Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorResolvedArgs::<ID>k__BackingField
	Guid_t ___U3CIDU3Ek__BackingField_0;
	// UnityEngine.Vector3 Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorResolvedArgs::<Position>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField_1;
	// UnityEngine.Quaternion Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorResolvedArgs::<Rotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField_2;
};

// Niantic.ARDK.AR._CppAddressAndScale
struct _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 
{
	// System.IntPtr Niantic.ARDK.AR._CppAddressAndScale::_cppAddress
	intptr_t ____cppAddress_0;
	// System.Single Niantic.ARDK.AR._CppAddressAndScale::_scale
	float ____scale_1;
};

// Niantic.ARDK.VirtualStudio.Remote._EasyConnection
struct _EasyConnection_tD9A603EF524F4A8A3399844E00E5FED338441544  : public RuntimeObject
{
};

struct _EasyConnection_tD9A603EF524F4A8A3399844E00E5FED338441544_StaticFields
{
	// System.Guid Niantic.ARDK.VirtualStudio.Remote._EasyConnection::_easyConnectionMessageId
	Guid_t ____easyConnectionMessageId_0;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_IMessageExecutor> Niantic.ARDK.VirtualStudio.Remote._EasyConnection::_executors
	ConcurrentDictionary_2_t4EF236AD47825591EA2EB47826446120183E4F64* ____executors_1;
};

// Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData
struct _NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0 
{
	// Niantic.ARDK.Networking.HLAPI.Routing.NetworkId Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData::_networkId
	NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 ____networkId_0;
	// System.Object Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData::_data
	RuntimeObject* ____data_1;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData
struct _NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0_marshaled_pinvoke
{
	NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 ____networkId_0;
	Il2CppIUnknown* ____data_1;
};
// Native definition for COM marshalling of Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData
struct _NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0_marshaled_com
{
	NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 ____networkId_0;
	Il2CppIUnknown* ____data_1;
};

// UnityEngine.UIElements.UIR.RenderChain/RenderNodeData
struct RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE 
{
	// UnityEngine.Material UnityEngine.UIElements.UIR.RenderChain/RenderNodeData::standardMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___standardMaterial_0;
	// UnityEngine.Material UnityEngine.UIElements.UIR.RenderChain/RenderNodeData::initialMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___initialMaterial_1;
	// UnityEngine.MaterialPropertyBlock UnityEngine.UIElements.UIR.RenderChain/RenderNodeData::matPropBlock
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___matPropBlock_2;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChain/RenderNodeData::firstCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_3;
	// UnityEngine.UIElements.UIR.UIRenderDevice UnityEngine.UIElements.UIR.RenderChain/RenderNodeData::device
	UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302* ___device_4;
	// UnityEngine.Texture UnityEngine.UIElements.UIR.RenderChain/RenderNodeData::vectorAtlas
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___vectorAtlas_5;
	// UnityEngine.Texture UnityEngine.UIElements.UIR.RenderChain/RenderNodeData::shaderInfoAtlas
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___shaderInfoAtlas_6;
	// System.Single UnityEngine.UIElements.UIR.RenderChain/RenderNodeData::dpiScale
	float ___dpiScale_7;
	// Unity.Collections.NativeSlice`1<UnityEngine.UIElements.UIR.Transform3x4> UnityEngine.UIElements.UIR.RenderChain/RenderNodeData::transformConstants
	NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370 ___transformConstants_8;
	// Unity.Collections.NativeSlice`1<UnityEngine.Vector4> UnityEngine.UIElements.UIR.RenderChain/RenderNodeData::clipRectConstants
	NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F ___clipRectConstants_9;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChain/RenderNodeData
struct RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshaled_pinvoke
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___standardMaterial_0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___initialMaterial_1;
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___matPropBlock_2;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_3;
	UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302* ___device_4;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___vectorAtlas_5;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___shaderInfoAtlas_6;
	float ___dpiScale_7;
	NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370 ___transformConstants_8;
	NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F ___clipRectConstants_9;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChain/RenderNodeData
struct RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshaled_com
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___standardMaterial_0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___initialMaterial_1;
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___matPropBlock_2;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_3;
	UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302* ___device_4;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___vectorAtlas_5;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___shaderInfoAtlas_6;
	float ___dpiScale_7;
	NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370 ___transformConstants_8;
	NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F ___clipRectConstants_9;
};

// UnityEngine.UIElements.UIR.TextureBlitter/BlitInfo
struct BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 
{
	// UnityEngine.Texture UnityEngine.UIElements.UIR.TextureBlitter/BlitInfo::src
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src_0;
	// UnityEngine.RectInt UnityEngine.UIElements.UIR.TextureBlitter/BlitInfo::srcRect
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___srcRect_1;
	// UnityEngine.Vector2Int UnityEngine.UIElements.UIR.TextureBlitter/BlitInfo::dstPos
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___dstPos_2;
	// System.Int32 UnityEngine.UIElements.UIR.TextureBlitter/BlitInfo::border
	int32_t ___border_3;
	// UnityEngine.Color UnityEngine.UIElements.UIR.TextureBlitter/BlitInfo::tint
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tint_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.TextureBlitter/BlitInfo
struct BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshaled_pinvoke
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src_0;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___srcRect_1;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___dstPos_2;
	int32_t ___border_3;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tint_4;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.TextureBlitter/BlitInfo
struct BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshaled_com
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src_0;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___srcRect_1;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___dstPos_2;
	int32_t ___border_3;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tint_4;
};

// TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame
struct Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD 
{
	// System.String TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame::filename
	String_t* ___filename_0;
	// TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteFrame TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame::frame
	SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 ___frame_1;
	// System.Boolean TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame::rotated
	bool ___rotated_2;
	// System.Boolean TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame::trimmed
	bool ___trimmed_3;
	// TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteFrame TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame::spriteSourceSize
	SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 ___spriteSourceSize_4;
	// TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteSize TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame::sourceSize
	SpriteSize_tF99BB7603AE2E6587E6184ACAB6CD209FE6569B3 ___sourceSize_5;
	// UnityEngine.Vector2 TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame::pivot
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot_6;
};
// Native definition for P/Invoke marshalling of TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame
struct Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD_marshaled_pinvoke
{
	char* ___filename_0;
	SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 ___frame_1;
	int32_t ___rotated_2;
	int32_t ___trimmed_3;
	SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 ___spriteSourceSize_4;
	SpriteSize_tF99BB7603AE2E6587E6184ACAB6CD209FE6569B3 ___sourceSize_5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot_6;
};
// Native definition for COM marshalling of TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame
struct Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD_marshaled_com
{
	Il2CppChar* ___filename_0;
	SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 ___frame_1;
	int32_t ___rotated_2;
	int32_t ___trimmed_3;
	SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 ___spriteSourceSize_4;
	SpriteSize_tF99BB7603AE2E6587E6184ACAB6CD209FE6569B3 ___sourceSize_5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot_6;
};

// UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/Entry
struct Entry_tB8765CA56422E2C92887314844384843688DCB9F 
{
	// Unity.Collections.NativeSlice`1<UnityEngine.UIElements.Vertex> UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/Entry::vertices
	NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___vertices_0;
	// Unity.Collections.NativeSlice`1<System.UInt16> UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/Entry::indices
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___indices_1;
	// UnityEngine.Material UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/Entry::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// UnityEngine.Texture UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/Entry::custom
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___custom_3;
	// UnityEngine.Texture UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/Entry::font
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___font_4;
	// System.Single UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/Entry::fontTexSDFScale
	float ___fontTexSDFScale_5;
	// UnityEngine.UIElements.TextureId UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/Entry::texture
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___texture_6;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/Entry::customCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___customCommand_7;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/Entry::clipRectID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_8;
	// UnityEngine.UIElements.UIR.VertexFlags UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/Entry::addFlags
	int32_t ___addFlags_9;
	// System.Boolean UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/Entry::uvIsDisplacement
	bool ___uvIsDisplacement_10;
	// System.Boolean UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/Entry::isTextEntry
	bool ___isTextEntry_11;
	// System.Boolean UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/Entry::isClipRegisterEntry
	bool ___isClipRegisterEntry_12;
	// System.Int32 UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/Entry::stencilRef
	int32_t ___stencilRef_13;
	// System.Int32 UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/Entry::maskDepth
	int32_t ___maskDepth_14;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/Entry
struct Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshaled_pinvoke
{
	NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___vertices_0;
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___indices_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___custom_3;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___font_4;
	float ___fontTexSDFScale_5;
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___texture_6;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___customCommand_7;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_8;
	int32_t ___addFlags_9;
	int32_t ___uvIsDisplacement_10;
	int32_t ___isTextEntry_11;
	int32_t ___isClipRegisterEntry_12;
	int32_t ___stencilRef_13;
	int32_t ___maskDepth_14;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/Entry
struct Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshaled_com
{
	NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___vertices_0;
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___indices_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___custom_3;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___font_4;
	float ___fontTexSDFScale_5;
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___texture_6;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___customCommand_7;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_8;
	int32_t ___addFlags_9;
	int32_t ___uvIsDisplacement_10;
	int32_t ___isTextEntry_11;
	int32_t ___isClipRegisterEntry_12;
	int32_t ___stencilRef_13;
	int32_t ___maskDepth_14;
};

// UnityEngine.UIElements.UIR.UIRenderDevice/AllocToFree
struct AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8 
{
	// UnityEngine.UIElements.UIR.Alloc UnityEngine.UIElements.UIR.UIRenderDevice/AllocToFree::alloc
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE ___alloc_0;
	// UnityEngine.UIElements.UIR.Page UnityEngine.UIElements.UIR.UIRenderDevice/AllocToFree::page
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___page_1;
	// System.Boolean UnityEngine.UIElements.UIR.UIRenderDevice/AllocToFree::vertices
	bool ___vertices_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.UIRenderDevice/AllocToFree
struct AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshaled_pinvoke
{
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_pinvoke ___alloc_0;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___page_1;
	int32_t ___vertices_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.UIRenderDevice/AllocToFree
struct AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshaled_com
{
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_com ___alloc_0;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___page_1;
	int32_t ___vertices_2;
};

// UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate
struct AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512 
{
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate::id
	uint32_t ___id_0;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate::allocTime
	uint32_t ___allocTime_1;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate::meshHandle
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___meshHandle_2;
	// UnityEngine.UIElements.UIR.Alloc UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate::permAllocVerts
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE ___permAllocVerts_3;
	// UnityEngine.UIElements.UIR.Alloc UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate::permAllocIndices
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE ___permAllocIndices_4;
	// UnityEngine.UIElements.UIR.Page UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate::permPage
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___permPage_5;
	// System.Boolean UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate::copyBackIndices
	bool ___copyBackIndices_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate
struct AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshaled_pinvoke
{
	uint32_t ___id_0;
	uint32_t ___allocTime_1;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___meshHandle_2;
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_pinvoke ___permAllocVerts_3;
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_pinvoke ___permAllocIndices_4;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___permPage_5;
	int32_t ___copyBackIndices_6;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate
struct AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshaled_com
{
	uint32_t ___id_0;
	uint32_t ___allocTime_1;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___meshHandle_2;
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_com ___permAllocVerts_3;
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_com ___permAllocIndices_4;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___permPage_5;
	int32_t ___copyBackIndices_6;
};

// Niantic.ARDK.VPSCoverage.GeoserviceMessages._CoverageAreasResponse/Shape
struct Shape_tB2452028CD53F5F11835A0888B9EA9F23BB6D881 
{
	// Niantic.ARDK.VPSCoverage.GeoserviceMessages._CoverageAreasResponse/Polygon Niantic.ARDK.VPSCoverage.GeoserviceMessages._CoverageAreasResponse/Shape::polygon
	Polygon_tC44C69CB31E9CB9EB1C2D387D1E2BDBCAE3A9355 ___polygon_0;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.VPSCoverage.GeoserviceMessages._CoverageAreasResponse/Shape
struct Shape_tB2452028CD53F5F11835A0888B9EA9F23BB6D881_marshaled_pinvoke
{
	Polygon_tC44C69CB31E9CB9EB1C2D387D1E2BDBCAE3A9355_marshaled_pinvoke ___polygon_0;
};
// Native definition for COM marshalling of Niantic.ARDK.VPSCoverage.GeoserviceMessages._CoverageAreasResponse/Shape
struct Shape_tB2452028CD53F5F11835A0888B9EA9F23BB6D881_marshaled_com
{
	Polygon_tC44C69CB31E9CB9EB1C2D387D1E2BDBCAE3A9355_marshaled_com ___polygon_0;
};

// Niantic.ARDK.VirtualStudio.Remote._RemoteConnection/BufferedMessage
struct BufferedMessage_tC023785A5DAFFBA5A1EAED47A9AD472D6CD50CDD 
{
	// System.Guid Niantic.ARDK.VirtualStudio.Remote._RemoteConnection/BufferedMessage::Tag
	Guid_t ___Tag_0;
	// Niantic.ARDK.Networking.TransportType Niantic.ARDK.VirtualStudio.Remote._RemoteConnection/BufferedMessage::TransportType
	uint8_t ___TransportType_1;
	// System.Byte[] Niantic.ARDK.VirtualStudio.Remote._RemoteConnection/BufferedMessage::Data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Data_2;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.VirtualStudio.Remote._RemoteConnection/BufferedMessage
struct BufferedMessage_tC023785A5DAFFBA5A1EAED47A9AD472D6CD50CDD_marshaled_pinvoke
{
	Guid_t ___Tag_0;
	uint8_t ___TransportType_1;
	Il2CppSafeArray/*NONE*/* ___Data_2;
};
// Native definition for COM marshalling of Niantic.ARDK.VirtualStudio.Remote._RemoteConnection/BufferedMessage
struct BufferedMessage_tC023785A5DAFFBA5A1EAED47A9AD472D6CD50CDD_marshaled_com
{
	Guid_t ___Tag_0;
	uint8_t ___TransportType_1;
	Il2CppSafeArray/*NONE*/* ___Data_2;
};

// Niantic.ARDK.Utilities._HttpClient/<SendPostAsync>d__0`2<System.Object,System.Object>
struct U3CSendPostAsyncU3Ed__0_2_tE92D07B49CD05431E959D5ED8522E604E9C38BD5 
{
	// System.Int32 Niantic.ARDK.Utilities._HttpClient/<SendPostAsync>d__0`2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Niantic.ARDK.Utilities._HttpResponse`1<TResponse>> Niantic.ARDK.Utilities._HttpClient/<SendPostAsync>d__0`2::<>t__builder
	AsyncTaskMethodBuilder_1_tD0BB5BAA8AD25EEF2158CF4CC106F34727B7E338 ___U3CU3Et__builder_1;
	// TRequest Niantic.ARDK.Utilities._HttpClient/<SendPostAsync>d__0`2::request
	RuntimeObject* ___request_2;
	// System.String Niantic.ARDK.Utilities._HttpClient/<SendPostAsync>d__0`2::uri
	String_t* ___uri_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Niantic.ARDK.Utilities._HttpClient/<SendPostAsync>d__0`2::headers
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___headers_4;
	// UnityEngine.Networking.UnityWebRequest Niantic.ARDK.Utilities._HttpClient/<SendPostAsync>d__0`2::<webRequest>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3E5__2_5;
	// System.Object Niantic.ARDK.Utilities._HttpClient/<SendPostAsync>d__0`2::<>u__1
	RuntimeObject* ___U3CU3Eu__1_6;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.UIElements.UIR.GfxUpdateBufferRange>
struct AlignOfHelper_1_tD52B3A8A6905ECEC0B9C3B4D1828784E75D7FE88 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	GfxUpdateBufferRange_tC47258BCB472B0727B4FCE21A2A53506644C1A97 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct AlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.ModifiableContactPair>
struct AlignOfHelper_1_tD67A48EC63F59A3B0822645B10F6057BB0B1A6FB 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Plane>
struct AlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.UIElements.TextVertex>
struct AlignOfHelper_1_tD213CBFA28C6ED84BFB52825C5EDC3D52ADE5B18 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.UIElements.UIR.Transform3x4>
struct AlignOfHelper_1_t6867F50FD3853DD4CA4DD96AD88FE1A614E678D2 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.UIElements.Vertex>
struct AlignOfHelper_1_t7A2C4AA30B2C9EC8415A83A5A9B280DBF11AB9AF 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 ___data_1;
};

// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303  : public RuntimeObject
{
	// System.Action`1<UnityEngine.UIElements.BaseVisualElementPanel> UnityEngine.UIElements.BaseVisualElementPanel::panelDisposed
	Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53* ___panelDisposed_0;
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_Scale
	float ___m_Scale_1;
	// UnityEngine.Yoga.YogaConfig UnityEngine.UIElements.BaseVisualElementPanel::yogaConfig
	YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___yogaConfig_2;
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_PixelsPerPoint
	float ___m_PixelsPerPoint_3;
	// UnityEngine.UIElements.PanelClearSettings UnityEngine.UIElements.BaseVisualElementPanel::<clearSettings>k__BackingField
	PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 ___U3CclearSettingsU3Ek__BackingField_4;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<duringLayoutPhase>k__BackingField
	bool ___U3CduringLayoutPhaseU3Ek__BackingField_5;
	// UnityEngine.UIElements.RepaintData UnityEngine.UIElements.BaseVisualElementPanel::<repaintData>k__BackingField
	RepaintData_t90534752135661579EC254884F550545D001B5EA* ___U3CrepaintDataU3Ek__BackingField_6;
	// UnityEngine.UIElements.ICursorManager UnityEngine.UIElements.BaseVisualElementPanel::<cursorManager>k__BackingField
	RuntimeObject* ___U3CcursorManagerU3Ek__BackingField_7;
	// UnityEngine.UIElements.ContextualMenuManager UnityEngine.UIElements.BaseVisualElementPanel::<contextualMenuManager>k__BackingField
	ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B* ___U3CcontextualMenuManagerU3Ek__BackingField_8;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_9;
	// UnityEngine.UIElements.ElementUnderPointer UnityEngine.UIElements.BaseVisualElementPanel::m_TopElementUnderPointers
	ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904* ___m_TopElementUnderPointers_10;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::standardShaderChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___standardShaderChanged_11;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::standardWorldSpaceShaderChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___standardWorldSpaceShaderChanged_12;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::atlasChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___atlasChanged_13;
	// System.Action`1<UnityEngine.Material> UnityEngine.UIElements.BaseVisualElementPanel::updateMaterial
	Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA* ___updateMaterial_14;
	// UnityEngine.UIElements.HierarchyEvent UnityEngine.UIElements.BaseVisualElementPanel::hierarchyChanged
	HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705* ___hierarchyChanged_15;
	// System.Action`1<UnityEngine.UIElements.IPanel> UnityEngine.UIElements.BaseVisualElementPanel::beforeUpdate
	Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6* ___beforeUpdate_16;
};

// UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord
struct GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E 
{
	// UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::m_FirstAdjustmentRecord
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_FirstAdjustmentRecord_0;
	// UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::m_SecondAdjustmentRecord
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_SecondAdjustmentRecord_1;
	// UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord::m_FeatureLookupFlags
	int32_t ___m_FeatureLookupFlags_2;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.UIElements.StyleSheets.StyleValue
struct StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// UnityEngine.UIElements.StyleSheets.StylePropertyId UnityEngine.UIElements.StyleSheets.StyleValue::id
			int32_t ___id_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___id_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyword_1_OffsetPadding[4];
			// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleSheets.StyleValue::keyword
			int32_t ___keyword_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyword_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___keyword_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___number_2_OffsetPadding[8];
			// System.Single UnityEngine.UIElements.StyleSheets.StyleValue::number
			float ___number_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___number_2_OffsetPadding_forAlignmentOnly[8];
			float ___number_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___length_3_OffsetPadding[8];
			// UnityEngine.UIElements.Length UnityEngine.UIElements.StyleSheets.StyleValue::length
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___length_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___length_3_OffsetPadding_forAlignmentOnly[8];
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___length_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___color_4_OffsetPadding[8];
			// UnityEngine.Color UnityEngine.UIElements.StyleSheets.StyleValue::color
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___color_4_OffsetPadding_forAlignmentOnly[8];
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___resource_5_OffsetPadding[8];
			// System.Runtime.InteropServices.GCHandle UnityEngine.UIElements.StyleSheets.StyleValue::resource
			GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___resource_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___resource_5_OffsetPadding_forAlignmentOnly[8];
			GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___resource_5_forAlignmentOnly;
		};
	};
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.UIElements.UIR.Utility
struct Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD  : public RuntimeObject
{
};

struct Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields
{
	// System.Action`1<System.Boolean> UnityEngine.UIElements.UIR.Utility::GraphicsResourcesRecreate
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___GraphicsResourcesRecreate_0;
	// System.Action UnityEngine.UIElements.UIR.Utility::EngineUpdate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___EngineUpdate_1;
	// System.Action UnityEngine.UIElements.UIR.Utility::FlushPendingResources
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___FlushPendingResources_2;
	// System.Action`1<UnityEngine.Camera> UnityEngine.UIElements.UIR.Utility::RegisterIntermediateRenderers
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* ___RegisterIntermediateRenderers_3;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeAdd
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeAdd_4;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeExecute
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeExecute_5;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeCleanup
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeCleanup_6;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.Utility::s_MarkerRaiseEngineUpdate
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerRaiseEngineUpdate_7;
};

// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.runningAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField_6;
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.completedAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField_7;
	// System.String UnityEngine.UIElements.VisualElement::m_Name
	String_t* ___m_Name_12;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::m_ClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList_13;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>> UnityEngine.UIElements.VisualElement::m_PropertyBag
	List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260* ___m_PropertyBag_14;
	// UnityEngine.UIElements.VisualElementFlags UnityEngine.UIElements.VisualElement::m_Flags
	int32_t ___m_Flags_15;
	// System.String UnityEngine.UIElements.VisualElement::m_ViewDataKey
	String_t* ___m_ViewDataKey_16;
	// UnityEngine.UIElements.RenderHints UnityEngine.UIElements.VisualElement::m_RenderHints
	int32_t ___m_RenderHints_17;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastLayout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout_18;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastPseudoPadding
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding_19;
	// UnityEngine.UIElements.UIR.RenderChainVEData UnityEngine.UIElements.VisualElement::renderChainData
	RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 ___renderChainData_20;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_Layout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Layout_21;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_BoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_BoundingBox_22;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldBoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldBoundingBox_23;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformCache_24;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformInverseCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformInverseCache_25;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClip
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClip_26;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClipMinusGroup
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClipMinusGroup_27;
	// System.Boolean UnityEngine.UIElements.VisualElement::m_WorldClipIsInfinite
	bool ___m_WorldClipIsInfinite_28;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::triggerPseudoMask
	int32_t ___triggerPseudoMask_30;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::dependencyPseudoMask
	int32_t ___dependencyPseudoMask_31;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::m_PseudoStates
	int32_t ___m_PseudoStates_32;
	// System.Int32 UnityEngine.UIElements.VisualElement::<containedPointerIds>k__BackingField
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField_33;
	// UnityEngine.UIElements.PickingMode UnityEngine.UIElements.VisualElement::<pickingMode>k__BackingField
	int32_t ___U3CpickingModeU3Ek__BackingField_34;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::<yogaNode>k__BackingField
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___U3CyogaNodeU3Ek__BackingField_35;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::m_Style
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___m_Style_36;
	// UnityEngine.UIElements.StyleVariableContext UnityEngine.UIElements.VisualElement::variableContext
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext_37;
	// System.Int32 UnityEngine.UIElements.VisualElement::inheritedStylesHash
	int32_t ___inheritedStylesHash_38;
	// System.UInt32 UnityEngine.UIElements.VisualElement::controlid
	uint32_t ___controlid_39;
	// System.Int32 UnityEngine.UIElements.VisualElement::imguiContainerDescendantCount
	int32_t ___imguiContainerDescendantCount_40;
	// System.Boolean UnityEngine.UIElements.VisualElement::<enabledSelf>k__BackingField
	bool ___U3CenabledSelfU3Ek__BackingField_41;
	// System.Action`1<UnityEngine.UIElements.MeshGenerationContext> UnityEngine.UIElements.VisualElement::<generateVisualContent>k__BackingField
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField_42;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualElement::k_GenerateVisualContentMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker_43;
	// UnityEngine.UIElements.VisualElement/RenderTargetMode UnityEngine.UIElements.VisualElement::m_SubRenderTargetMode
	int32_t ___m_SubRenderTargetMode_44;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::m_defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_defaultMaterial_46;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate> UnityEngine.UIElements.VisualElement::m_RunningAnimations
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations_47;
	// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::<hierarchy>k__BackingField
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField_49;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isRootVisualContainer>k__BackingField
	bool ___U3CisRootVisualContainerU3Ek__BackingField_50;
	// System.Boolean UnityEngine.UIElements.VisualElement::<cacheAsBitmap>k__BackingField
	bool ___U3CcacheAsBitmapU3Ek__BackingField_51;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_PhysicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent_52;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_LogicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent_53;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::m_Children
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children_55;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::<elementPanel>k__BackingField
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField_56;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.VisualElement::m_VisualTreeAssetSource
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource_57;
	// UnityEngine.UIElements.InlineStyleAccess UnityEngine.UIElements.VisualElement::inlineStyleAccess
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess_59;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.VisualElement::styleSheetList
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList_60;
	// UnityEngine.UIElements.VisualElement/TypeData UnityEngine.UIElements.VisualElement::m_TypeData
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData_64;
};

struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	// System.UInt32 UnityEngine.UIElements.VisualElement::s_NextId
	uint32_t ___s_NextId_8;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::s_EmptyClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___s_EmptyClassList_9;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::userDataPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey_10;
	// System.String UnityEngine.UIElements.VisualElement::disabledUssClassName
	String_t* ___disabledUssClassName_11;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::s_InfiniteRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___s_InfiniteRect_29;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::s_runtimeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_runtimeMaterial_45;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::s_EmptyList
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList_54;
	// UnityEngine.UIElements.VisualElement/CustomStyleAccess UnityEngine.UIElements.VisualElement::s_CustomStyleAccess
	CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1* ___s_CustomStyleAccess_58;
	// System.Text.RegularExpressions.Regex UnityEngine.UIElements.VisualElement::s_InternalStyleSheetPath
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath_61;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::tooltipPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey_62;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData> UnityEngine.UIElements.VisualElement::s_TypeData
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData_63;
};

// Niantic.Experimental.ARDK.SharedAR._NativeDatastore
struct _NativeDatastore_tA13E5C51916620354121C200FA46C8DF57A87E97  : public RuntimeObject
{
	// System.Boolean Niantic.Experimental.ARDK.SharedAR._NativeDatastore::_isDestroyed
	bool ____isDestroyed_0;
	// System.Text.StringBuilder Niantic.Experimental.ARDK.SharedAR._NativeDatastore::cachedStringBuilder
	StringBuilder_t* ___cachedStringBuilder_1;
	// System.Char[] Niantic.Experimental.ARDK.SharedAR._NativeDatastore::nullTerminatedChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___nullTerminatedChar_3;
	// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.Experimental.ARDK.SharedAR.KeyValuePairArgs> Niantic.Experimental.ARDK.SharedAR._NativeDatastore::KeyValueAdded
	ArdkEventHandler_1_t1A8995148A4694885E652C79764AC3C6291402F6* ___KeyValueAdded_4;
	// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.Experimental.ARDK.SharedAR.KeyValuePairArgs> Niantic.Experimental.ARDK.SharedAR._NativeDatastore::KeyValueUpdated
	ArdkEventHandler_1_t1A8995148A4694885E652C79764AC3C6291402F6* ___KeyValueUpdated_5;
	// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.Experimental.ARDK.SharedAR.KeyValuePairArgs> Niantic.Experimental.ARDK.SharedAR._NativeDatastore::KeyValueDeleted
	ArdkEventHandler_1_t1A8995148A4694885E652C79764AC3C6291402F6* ___KeyValueDeleted_6;
	// System.Boolean Niantic.Experimental.ARDK.SharedAR._NativeDatastore::_didSubscribeToNativeCallbacks
	bool ____didSubscribeToNativeCallbacks_7;
	// System.IntPtr Niantic.Experimental.ARDK.SharedAR._NativeDatastore::_nativeHandle
	intptr_t ____nativeHandle_8;
	// System.IntPtr Niantic.Experimental.ARDK.SharedAR._NativeDatastore::_cachedHandleIntPtr
	intptr_t ____cachedHandleIntPtr_9;
	// Niantic.ARDK.Utilities.SafeGCHandle`1<Niantic.Experimental.ARDK.SharedAR._NativeDatastore> Niantic.Experimental.ARDK.SharedAR._NativeDatastore::_cachedHandle
	SafeGCHandle_1_tE9CA088F18D3F532550A0AD6389C28479BF3B265 ____cachedHandle_10;
};

// Niantic.Experimental.ARDK.SharedAR._NativeNetworking
struct _NativeNetworking_tF1F4B6112FBD0D75846E5AB96F631CCFD50A51CB  : public RuntimeObject
{
	// System.Boolean Niantic.Experimental.ARDK.SharedAR._NativeNetworking::_isDestroyed
	bool ____isDestroyed_0;
	// System.Boolean Niantic.Experimental.ARDK.SharedAR._NativeNetworking::_isServer
	bool ____isServer_1;
	// System.Boolean Niantic.Experimental.ARDK.SharedAR._NativeNetworking::_didSubscribeToNativeEvents
	bool ____didSubscribeToNativeEvents_2;
	// System.Collections.Generic.List`1<Niantic.Experimental.ARDK.SharedAR.IPeerID> Niantic.Experimental.ARDK.SharedAR._NativeNetworking::_peerIDs
	List_1_t9D63ED4A2830036764C9D936C3E591BE1DB1089E* ____peerIDs_3;
	// Niantic.Experimental.ARDK.SharedAR.IPeerID Niantic.Experimental.ARDK.SharedAR._NativeNetworking::_selfPeerId
	RuntimeObject* ____selfPeerId_4;
	// System.String Niantic.Experimental.ARDK.SharedAR._NativeNetworking::<SessionId>k__BackingField
	String_t* ___U3CSessionIdU3Ek__BackingField_6;
	// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.Experimental.ARDK.SharedAR.ConnectionEventArgs> Niantic.Experimental.ARDK.SharedAR._NativeNetworking::ConnectionEvent
	ArdkEventHandler_1_tEFA55720905E5458917B550B162C1725B52288B4* ___ConnectionEvent_7;
	// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.Experimental.ARDK.SharedAR.PeerIDArgs> Niantic.Experimental.ARDK.SharedAR._NativeNetworking::PeerAdded
	ArdkEventHandler_1_t25401482781B63744607A257BFA7CA4DDABE3710* ___PeerAdded_8;
	// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.Experimental.ARDK.SharedAR.PeerIDArgs> Niantic.Experimental.ARDK.SharedAR._NativeNetworking::PeerRemoved
	ArdkEventHandler_1_t25401482781B63744607A257BFA7CA4DDABE3710* ___PeerRemoved_9;
	// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.Experimental.ARDK.SharedAR.DataReceivedArgs> Niantic.Experimental.ARDK.SharedAR._NativeNetworking::DataReceived
	ArdkEventHandler_1_tEDE66E9F5714FCBF82D4AC597FEF386DBA1EF24D* ___DataReceived_10;
	// Niantic.Experimental.ARDK.SharedAR.ConnectionState Niantic.Experimental.ARDK.SharedAR._NativeNetworking::<ConnectionState>k__BackingField
	uint8_t ___U3CConnectionStateU3Ek__BackingField_11;
	// Niantic.Experimental.ARDK.SharedAR.IPeerID Niantic.Experimental.ARDK.SharedAR._NativeNetworking::<ServerPeerId>k__BackingField
	RuntimeObject* ___U3CServerPeerIdU3Ek__BackingField_12;
	// Niantic.Experimental.ARDK.SharedAR.NetworkingStats Niantic.Experimental.ARDK.SharedAR._NativeNetworking::<NetworkingStats>k__BackingField
	NetworkingStats_t0CAE237FD9602938277B08F0217CE1FA25111BBD ___U3CNetworkingStatsU3Ek__BackingField_13;
	// Niantic.Experimental.ARDK.SharedAR.RoomParams Niantic.Experimental.ARDK.SharedAR._NativeNetworking::<RoomParams>k__BackingField
	RoomParams_t6905C1812EE5F340534C6DECB739C27486789D2F* ___U3CRoomParamsU3Ek__BackingField_14;
	// System.IntPtr Niantic.Experimental.ARDK.SharedAR._NativeNetworking::_nativeHandle
	intptr_t ____nativeHandle_15;
	// System.IntPtr Niantic.Experimental.ARDK.SharedAR._NativeNetworking::_cachedHandleIntPtr
	intptr_t ____cachedHandleIntPtr_16;
	// Niantic.ARDK.Utilities.SafeGCHandle`1<Niantic.Experimental.ARDK.SharedAR._NativeNetworking> Niantic.Experimental.ARDK.SharedAR._NativeNetworking::_cachedHandle
	SafeGCHandle_1_tCB59E43A764307F868E56D6A7D301C7D3A4C2446 ____cachedHandle_17;
};

// Niantic.ARDK.VPSCoverage.GeoserviceMessages._CoverageAreasResponse/VpsCoverageArea
struct VpsCoverageArea_t5A693A0A8A5278B21913814006A678050F4E27AE 
{
	// Niantic.ARDK.VPSCoverage.GeoserviceMessages._CoverageAreasResponse/Shape Niantic.ARDK.VPSCoverage.GeoserviceMessages._CoverageAreasResponse/VpsCoverageArea::shape
	Shape_tB2452028CD53F5F11835A0888B9EA9F23BB6D881 ___shape_0;
	// System.String[] Niantic.ARDK.VPSCoverage.GeoserviceMessages._CoverageAreasResponse/VpsCoverageArea::vps_localization_target_id
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___vps_localization_target_id_1;
	// System.String Niantic.ARDK.VPSCoverage.GeoserviceMessages._CoverageAreasResponse/VpsCoverageArea::localizability
	String_t* ___localizability_2;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.VPSCoverage.GeoserviceMessages._CoverageAreasResponse/VpsCoverageArea
struct VpsCoverageArea_t5A693A0A8A5278B21913814006A678050F4E27AE_marshaled_pinvoke
{
	Shape_tB2452028CD53F5F11835A0888B9EA9F23BB6D881_marshaled_pinvoke ___shape_0;
	char** ___vps_localization_target_id_1;
	char* ___localizability_2;
};
// Native definition for COM marshalling of Niantic.ARDK.VPSCoverage.GeoserviceMessages._CoverageAreasResponse/VpsCoverageArea
struct VpsCoverageArea_t5A693A0A8A5278B21913814006A678050F4E27AE_marshaled_com
{
	Shape_tB2452028CD53F5F11835A0888B9EA9F23BB6D881_marshaled_com ___shape_0;
	Il2CppChar** ___vps_localization_target_id_1;
	Il2CppChar* ___localizability_2;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.UIElements.VisualElement,System.Object>
struct Action_2_t481D6C6BCDB085CB7BE1AA1DBD81F4DC0C04D1F2  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.Experimental.StyleValues>
struct Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A  : public MulticastDelegate_t
{
};

// System.Comparison`1<System.Object>
struct Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645  : public MulticastDelegate_t
{
};

// System.Comparison`1<Niantic.ARDK.Extensions.Gameboard.PathFindingNode>
struct Comparison_1_t090057606C711FF20043797D76436B6D761417C0  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.VisualElement,System.Object>
struct Func_2_t9AAA83BE20528E7FBB1DCCFF8E9640E7061D5BE3  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.Experimental.StyleValues>
struct Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227  : public MulticastDelegate_t
{
};

// System.Func`3<System.String,System.Boolean,System.Boolean>
struct Func_3_t62BC9D925DCAC8F5784BA97C793F4E593496CDA7  : public MulticastDelegate_t
{
};

// System.Func`3<System.String,System.Int32,System.Int32>
struct Func_3_t0620ECF6AB73866242850ABCE518B069D201DA79  : public MulticastDelegate_t
{
};

// System.Func`3<System.String,System.Int32Enum,System.Int32Enum>
struct Func_3_t538A8E697534A282316BC2DF71DE83E68360C8B9  : public MulticastDelegate_t
{
};

// System.Func`3<System.String,System.Int64,System.Int64>
struct Func_3_tD3C5141B184A528ABF7649D429906DA08C68E4A7  : public MulticastDelegate_t
{
};

// System.Func`3<System.String,System.Object,System.Object>
struct Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0  : public MulticastDelegate_t
{
};

// System.Func`3<System.String,System.Single,System.Single>
struct Func_3_t5328A430FC4208B44C52E4E89DC5F686DE6A6A1B  : public MulticastDelegate_t
{
};

// System.Func`5<System.Int32,System.Int32,System.Int32,System.Int32,System.Int32>
struct Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* m_Items[1];

	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Int32 Unity.Collections.NativeSlice`1<UnityEngine.UIElements.UIR.Transform3x4>::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Length_mC069C9254C3F61C678293E03E3E7C51F245F52E9_gshared (NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.NativeSlice`1<UnityEngine.UIElements.UIR.Transform3x4>::get_Stride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Stride_mE29B800705645CDD49B576BB3B9B328811F27C90_gshared_inline (NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.NativeSlice`1<UnityEngine.Vector4>::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Length_mED822A5A5476BEBA72E429C395644A7B41F78F50_gshared (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.NativeSlice`1<UnityEngine.Vector4>::get_Stride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Stride_m2BC6AD2264EE2D02A38D29E30D382DEA9B5A9E29_gshared_inline (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`5<System.Int32,System.Int32,System.Int32,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_5__ctor_mAA5A177E97C0DB1BE13E0B3598563F063A9713A9_gshared (Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Single>::.ctor(Unity.Collections.NativeArray`1<T>,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m9DA5ADF8AD1A82C7E4443EB8E76999D4127F6ED3_gshared (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___array0, int32_t ___allocator1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Single>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m4D540A81E1062EEC2C4B0697A34A4EEFB9BC9004_gshared (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// TResult System.Func`5<System.Int32,System.Int32,System.Int32,System.Int32,System.Int32>::Invoke(T1,T2,T3,T4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_5_Invoke_mE8C84338774AD9744AAFC509CDEAEF30AA8A4912_gshared_inline (Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* __this, int32_t ___arg10, int32_t ___arg21, int32_t ___arg32, int32_t ___arg43, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryAdd_mA7D07DAB0E4F228BEDBEBA3BEA124A7C839B0DFC_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::TryRemove(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemove_m24DC33BB549CD9414E0782A591303A484D2BA255_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Niantic.ARDK.Utilities._HttpClient/<SendPostAsync>d__0`2<System.Object,System.Object>>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSendPostAsyncU3Ed__0_2_tE92D07B49CD05431E959D5ED8522E604E9C38BD5_m6319C38642776C9A88AE939E370B633781F9D50A_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CSendPostAsyncU3Ed__0_2_tE92D07B49CD05431E959D5ED8522E604E9C38BD5* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;

// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE (void* ___value0, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.NativeSlice`1<UnityEngine.UIElements.UIR.Transform3x4>::get_Length()
inline int32_t NativeSlice_1_get_Length_mC069C9254C3F61C678293E03E3E7C51F245F52E9 (NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370*, const RuntimeMethod*))NativeSlice_1_get_Length_mC069C9254C3F61C678293E03E3E7C51F245F52E9_gshared)(__this, method);
}
// System.Int32 Unity.Collections.NativeSlice`1<UnityEngine.UIElements.UIR.Transform3x4>::get_Stride()
inline int32_t NativeSlice_1_get_Stride_mE29B800705645CDD49B576BB3B9B328811F27C90_inline (NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370*, const RuntimeMethod*))NativeSlice_1_get_Stride_mE29B800705645CDD49B576BB3B9B328811F27C90_gshared_inline)(__this, method);
}
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Utility::SetVectorArray(UnityEngine.MaterialPropertyBlock,System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetVectorArray_m6C8F08342C9D3D33A183B29536DA13B07E2763FA (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___props0, int32_t ___name1, intptr_t ___vector4s2, int32_t ___count3, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.NativeSlice`1<UnityEngine.Vector4>::get_Length()
inline int32_t NativeSlice_1_get_Length_mED822A5A5476BEBA72E429C395644A7B41F78F50 (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F*, const RuntimeMethod*))NativeSlice_1_get_Length_mED822A5A5476BEBA72E429C395644A7B41F78F50_gshared)(__this, method);
}
// System.Int32 Unity.Collections.NativeSlice`1<UnityEngine.Vector4>::get_Stride()
inline int32_t NativeSlice_1_get_Stride_m2BC6AD2264EE2D02A38D29E30D382DEA9B5A9E29_inline (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F*, const RuntimeMethod*))NativeSlice_1_get_Stride_m2BC6AD2264EE2D02A38D29E30D382DEA9B5A9E29_gshared_inline)(__this, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.UxmlAttributeDescription::TryGetValueFromBagAsString(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___bag0, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___cc1, String_t** ___value2, const RuntimeMethod* method) ;
// UnityEngine.UIElements.IVisualTreeUpdater UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::get_Item(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* __this, int32_t ___phase0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::set_Item(UnityEngine.UIElements.VisualTreeUpdatePhase,UnityEngine.UIElements.IVisualTreeUpdater)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11 (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* __this, int32_t ___phase0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// UnityEngine.ScreenOrientation UnityEngine.Screen::get_orientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_orientation_m7B47A2719DDE296357BB3199AB3BECC49F9F4A6D (const RuntimeMethod* method) ;
// System.Void System.Func`5<System.Int32,System.Int32,System.Int32,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_5__ctor_mAA5A177E97C0DB1BE13E0B3598563F063A9713A9 (Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_5__ctor_mAA5A177E97C0DB1BE13E0B3598563F063A9713A9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Single>::.ctor(Unity.Collections.NativeArray`1<T>,Unity.Collections.Allocator)
inline void NativeArray_1__ctor_m9DA5ADF8AD1A82C7E4443EB8E76999D4127F6ED3 (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___array0, int32_t ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m9DA5ADF8AD1A82C7E4443EB8E76999D4127F6ED3_gshared)(__this, ___array0, ___allocator1, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Single>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m4D540A81E1062EEC2C4B0697A34A4EEFB9BC9004 (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m4D540A81E1062EEC2C4B0697A34A4EEFB9BC9004_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// TResult System.Func`5<System.Int32,System.Int32,System.Int32,System.Int32,System.Int32>::Invoke(T1,T2,T3,T4)
inline int32_t Func_5_Invoke_mE8C84338774AD9744AAFC509CDEAEF30AA8A4912_inline (Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* __this, int32_t ___arg10, int32_t ___arg21, int32_t ___arg32, int32_t ___arg43, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Func_5_Invoke_mE8C84338774AD9744AAFC509CDEAEF30AA8A4912_gshared_inline)(__this, ___arg10, ___arg21, ___arg32, ___arg43, method);
}
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline (float ___f0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsSealed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsSealed_m6B652265DCEF64250FD2A173C50BD889467A58E4 (Type_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_IMessageExecutor>::TryAdd(TKey,TValue)
inline bool ConcurrentDictionary_2_TryAdd_mD940918C3F7441CB6EBEBE29CDE6959DC2768416 (ConcurrentDictionary_2_t4EF236AD47825591EA2EB47826446120183E4F64* __this, Type_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t4EF236AD47825591EA2EB47826446120183E4F64*, Type_t*, RuntimeObject*, const RuntimeMethod*))ConcurrentDictionary_2_TryAdd_mA7D07DAB0E4F228BEDBEBA3BEA124A7C839B0DFC_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_Disposer::.ctor(System.Type,Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_IMessageExecutor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Disposer__ctor_m23DB711160A9FBBC3EA51FC393510B23F650823F (_Disposer_t5D62714D66FD07C37A61906F52B5E291D754E121* __this, Type_t* ___type0, RuntimeObject* ___executor1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_IMessageExecutor>::TryRemove(TKey,TValue&)
inline bool ConcurrentDictionary_2_TryRemove_m68ECDBAB1FD61D6C04DE71E3A71DAFC1ED379238 (ConcurrentDictionary_2_t4EF236AD47825591EA2EB47826446120183E4F64* __this, Type_t* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t4EF236AD47825591EA2EB47826446120183E4F64*, Type_t*, RuntimeObject**, const RuntimeMethod*))ConcurrentDictionary_2_TryRemove_m24DC33BB549CD9414E0782A591303A484D2BA255_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Niantic.ARDK.Utilities._HttpResponse`1<System.Object>>::Start<Niantic.ARDK.Utilities._HttpClient/<SendPostAsync>d__0`2<System.Object,System.Object>>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSendPostAsyncU3Ed__0_2_tE92D07B49CD05431E959D5ED8522E604E9C38BD5_mD1090C9FC9906B81449431F8D38BE27D67ED81F3 (AsyncTaskMethodBuilder_1_tD0BB5BAA8AD25EEF2158CF4CC106F34727B7E338* __this, U3CSendPostAsyncU3Ed__0_2_tE92D07B49CD05431E959D5ED8522E604E9C38BD5* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD0BB5BAA8AD25EEF2158CF4CC106F34727B7E338*, U3CSendPostAsyncU3Ed__0_2_tE92D07B49CD05431E959D5ED8522E604E9C38BD5*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSendPostAsyncU3Ed__0_2_tE92D07B49CD05431E959D5ED8522E604E9C38BD5_m6319C38642776C9A88AE939E370B633781F9D50A_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Niantic.ARDK.Utilities._HttpResponse`1<System.Object>>::get_Task()
inline Task_1_t6C20CF982304467ABBA3A6DA7E39E029EC26B0F2* AsyncTaskMethodBuilder_1_get_Task_m3382EFF3F7B731781531DF08FCA21C335B2943FD (AsyncTaskMethodBuilder_1_tD0BB5BAA8AD25EEF2158CF4CC106F34727B7E338* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t6C20CF982304467ABBA3A6DA7E39E029EC26B0F2* (*) (AsyncTaskMethodBuilder_1_tD0BB5BAA8AD25EEF2158CF4CC106F34727B7E338*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950 (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Object Niantic.ARDK.Utilities.BinarySerialization.GlobalSerializer::Deserialize(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GlobalSerializer_Deserialize_m1471E8290F8200F6BD501A37BC791779AB3FBE29 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Byte[] Niantic.ARDK.Utilities.Extensions._ObjectSerializationExtensions::SerializeToArray(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _ObjectSerializationExtensions_SerializeToArray_m5EFE17C6F5DACE1E9C4B1215A2ADF7F08870C39C (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.VirtualStudio.Remote._RemoteConnection::Send(System.Guid,System.Byte[],Niantic.ARDK.Networking.TransportType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _RemoteConnection_Send_m3A295393D2C1BC602A91E3E530C631024E761000 (Guid_t ___id0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, uint8_t ___transportType2, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.CodedOutputStream::ComputeLengthSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeLengthSize_m4548F1F4D29A2125918AB8006BF4CC16099DD895 (int32_t ___length0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Object>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128 (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, Type_t* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*, Type_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A (RuntimeObject* ___arg00, RuntimeObject* ___arg11, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.CodedInputStream::ReadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedInputStream_ReadLength_mAC5F0B0F4F2D718718E51613E553DF39994CCFC8 (CodedInputStream_t195F201266AFB2818D425D0ABA3D50ADDC821DBF* __this, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.CodedInputStream::PushLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedInputStream_PushLimit_m03CA3333CBC8089C8A389DE65B78993B37BFD125 (CodedInputStream_t195F201266AFB2818D425D0ABA3D50ADDC821DBF* __this, int32_t ___byteLimit0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.CodedInputStream::SkipLastField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_SkipLastField_mBCB756ECC8DA88C8A7AA2CB60A9A37E8E38B8A3D (CodedInputStream_t195F201266AFB2818D425D0ABA3D50ADDC821DBF* __this, const RuntimeMethod* method) ;
// System.UInt32 Google.Protobuf.CodedInputStream::ReadTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CodedInputStream_ReadTag_m96A1370BCC95CA1ED35A29FF1288D930D8F8E03E (CodedInputStream_t195F201266AFB2818D425D0ABA3D50ADDC821DBF* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.CodedInputStream::CheckReadEndOfStreamTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_CheckReadEndOfStreamTag_m0447754C6A8ACB9B9DAE2EF209C4FB64F7FC1891 (CodedInputStream_t195F201266AFB2818D425D0ABA3D50ADDC821DBF* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.CodedInputStream::PopLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_PopLimit_m50BB2150FAE9FBC159AC53CEA8A2A4E7A591E8D9 (CodedInputStream_t195F201266AFB2818D425D0ABA3D50ADDC821DBF* __this, int32_t ___oldLimit0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.CodedOutputStream::WriteLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteLength_m5067AF162AF8D8DEDC8DF45070B9FF7473631B48 (CodedOutputStream_t2BE94AFB9366804E9C8249347DBE4E6E2DDDB79B* __this, int32_t ___length0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Linq.Expressions.ParameterExpression>()
inline ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_inline (const RuntimeMethod* method)
{
	return ((  ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::.ctor(System.Int32)
inline void List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline void List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PushParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___parameters0, const RuntimeMethod* method) ;
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PopParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___parameters0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::.ctor()
inline void HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline bool HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69 (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Push(T)
inline void Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___item0, method);
}
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Pop()
inline HashSet_1_t068F5201D923072F46716204841D21328FE6218D* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5 (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, const RuntimeMethod* method)
{
	return ((  HashSet_1_t068F5201D923072F46716204841D21328FE6218D* (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.SByte>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t* Unsafe_Add_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mDF514FBA7C4E9F4E8A84822A556BAB1556166F0D_gshared (int8_t* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		int8_t* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(int8_t);
		return ((int8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.SceneManagement.Scene>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356* Unsafe_Add_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m4312F374535E00E6628C8FA1D91107FE86811894_gshared (Scene_tA1DC762B79745EB5140F054C884855B922318356* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356);
		return ((Scene_tA1DC762B79745EB5140F054C884855B922318356*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UIElements.StyleSheets.SelectorMatchRecord>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7* Unsafe_Add_TisSelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_mF45A4B5E105EEB1A98ACD8E273C8C7B217D7567B_gshared (SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7);
		return ((SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UIElements.StylePropertyName>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* Unsafe_Add_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mDC2D3F6D4DF0C3599412C671BAFBEC08DA9E19B7_gshared (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF);
		return ((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UIElements.StyleSheets.StylePropertyValue>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2* Unsafe_Add_TisStylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_m87EA1D5AB34F5F0522ADE518D82DC433ED16F74E_gshared (StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2);
		return ((StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UIElements.StyleSelectorPart>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470* Unsafe_Add_TisStyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_m3944B6A45184D78CCA551D12DD8C3A899F5E2CDB_gshared (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470);
		return ((StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C* Unsafe_Add_TisStyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_m5D8C0A9B5D5D10A6E01DCE9D3BDBD5B3CEC7A6B3_gshared (StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C);
		return ((StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UIElements.StyleSheets.StyleValue>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5* Unsafe_Add_TisStyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5_m728D0AE9B3BCA8EEDD3FAC90E7ADD3E7F70D16FC_gshared (StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5);
		return ((StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UIElements.StyleSheets.StyleValueManaged>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4* Unsafe_Add_TisStyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_mE9F74795671DD3A22CD773FBB04CC69BD81172DD_gshared (StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4);
		return ((StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UIElements.StyleVariable>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269* Unsafe_Add_TisStyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_mC838E1EFAC8820C7DD2C59B032BA0BF6EACA95C2_gshared (StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269);
		return ((StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UIElements.TimeValue>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* Unsafe_Add_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m32F70400B0183F854D64934AB936B42BCC2B5E63_gshared (TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E);
		return ((TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UICharInfo>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* Unsafe_Add_TisUICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD_m2CEEAF3F4221614F77F2C38146C8F77B950DB9F5_gshared (UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD);
		return ((UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UILineInfo>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* Unsafe_Add_TisUILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC_mB5A201EC28FB2CDA5BC76F28E8FF603276F84147_gshared (UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC);
		return ((UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UIVertex>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* Unsafe_Add_TisUIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_mEA5DFB4CEA6277A7E7A09EE282ACADF9743D91A2_gshared (UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207);
		return ((UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.UInt16>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Unsafe_Add_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m00CE1BE86A53F50F349EB84A50606B3BB34E313C_gshared (uint16_t* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(uint16_t);
		return ((uint16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.UInt32>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_Add_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB2AD0A571FB86215CAE7851C4FAC86D655C88711_gshared (uint32_t* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(uint32_t);
		return ((uint32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.Vector3>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* Unsafe_Add_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFBAB3261AB580BDD55AEC7FFCB40D2ACE51B282E_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		return ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.Vector3Int>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* Unsafe_Add_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m4AA9E1B6F06F5C8D59FCE8FFF7281FB343A86053_gshared (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376);
		return ((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.Vector4>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* Unsafe_Add_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2100ABDE323FBB57B7DE849153C8D615A6802E7A_gshared (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		return ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<Niantic.ARDK.Extensions.Gameboard.Waypoint>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Waypoint_tCC5FC8059B12D71E919B23CB4CAD470BE6DC5089* Unsafe_Add_TisWaypoint_tCC5FC8059B12D71E919B23CB4CAD470BE6DC5089_m08A47D7941FD6E667484E3ED22B41DC7D04FDEAE_gshared (Waypoint_tCC5FC8059B12D71E919B23CB4CAD470BE6DC5089* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		Waypoint_tCC5FC8059B12D71E919B23CB4CAD470BE6DC5089* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(Waypoint_tCC5FC8059B12D71E919B23CB4CAD470BE6DC5089);
		return ((Waypoint_tCC5FC8059B12D71E919B23CB4CAD470BE6DC5089*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorResolvedArgs>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WayspotAnchorResolvedArgs_t07549FD9B7D6968946359F9800B0A0329CD6E38D* Unsafe_Add_TisWayspotAnchorResolvedArgs_t07549FD9B7D6968946359F9800B0A0329CD6E38D_m8F5706B9A094FE9A87DAB23819E12B3C9043EED6_gshared (WayspotAnchorResolvedArgs_t07549FD9B7D6968946359F9800B0A0329CD6E38D* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		WayspotAnchorResolvedArgs_t07549FD9B7D6968946359F9800B0A0329CD6E38D* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(WayspotAnchorResolvedArgs_t07549FD9B7D6968946359F9800B0A0329CD6E38D);
		return ((WayspotAnchorResolvedArgs_t07549FD9B7D6968946359F9800B0A0329CD6E38D*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Security.Cryptography.X509Certificates.X509ChainStatus>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* Unsafe_Add_TisX509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_m9D96CD1317D083C580C3E4AFC173F0A7B5201F1B_gshared (X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D);
		return ((X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<Niantic.ARDK.AR._CppAddressAndScale>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003* Unsafe_Add_Tis_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003_m6A364163523F851EBBD0227C986062C35E45D611_gshared (_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003);
		return ((_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.BeforeRenderHelper/OrderBlock>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* Unsafe_Add_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m5B67A7E1C9DA30062E32EF18B00466C1620858F8_gshared (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837);
		return ((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UIElements.UIR.BitmapAllocator32/Page>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Page_t04FE552A388BF55B12C8868E19589136957E00A5* Unsafe_Add_TisPage_t04FE552A388BF55B12C8868E19589136957E00A5_mE581A2BB9BCB0C990A8BFB2631B6C94DF47067CE_gshared (Page_t04FE552A388BF55B12C8868E19589136957E00A5* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		Page_t04FE552A388BF55B12C8868E19589136957E00A5* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(Page_t04FE552A388BF55B12C8868E19589136957E00A5);
		return ((Page_t04FE552A388BF55B12C8868E19589136957E00A5*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.Camera/RenderRequest>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A* Unsafe_Add_TisRenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_m401FDFCC7B23F25E875AEB3C62865350BE8395F0_gshared (RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A);
		return ((RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UIElements.FocusController/FocusedElement>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF* Unsafe_Add_TisFocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_mEA7EC1B836ADE2B947494288C2B2A1CCADDD0B98_gshared (FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF);
		return ((FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<Niantic.ARDK.Utilities.BinarySerialization.GlobalSerializer/_SerializerInfo>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _SerializerInfo_t093E1527322CD37C49786F58CB261EEC6C7261E6* Unsafe_Add_Tis_SerializerInfo_t093E1527322CD37C49786F58CB261EEC6C7261E6_m6C9E6BCB624D8FA9A4E87A529514C09FF1A65A22_gshared (_SerializerInfo_t093E1527322CD37C49786F58CB261EEC6C7261E6* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		_SerializerInfo_t093E1527322CD37C49786F58CB261EEC6C7261E6* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(_SerializerInfo_t093E1527322CD37C49786F58CB261EEC6C7261E6);
		return ((_SerializerInfo_t093E1527322CD37C49786F58CB261EEC6C7261E6*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0* Unsafe_Add_Tis_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0_m3888D2F6A892F205F0D4105E5503B2F18CD5F53F_gshared (_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0);
		return ((_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UIElements.InternalTreeView/TreeViewItemWrapper>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F* Unsafe_Add_TisTreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_mA6C8A7FB7F48BC5189366E6C86D6F216BF31F00B_gshared (TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F);
		return ((TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B* Unsafe_Add_Tis_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B_mD0C22579C57703029E7122A30FE6D3709D373C01_gshared (_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B);
		return ((_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Text.RegularExpressions.RegexCharClass/SingleRange>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* Unsafe_Add_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m4CA11B5641223BC37DC22640D242264DF4E10559_gshared (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC);
		return ((SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UIElements.UIR.RenderChain/RenderNodeData>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE* Unsafe_Add_TisRenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_m4DEEA436986DDBCD24702EEEE76167E4AB706353_gshared (RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE);
		return ((RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UIElements.TemplateAsset/AttributeOverride>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF* Unsafe_Add_TisAttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_m3D083BA4C663FE6BB38EE7C034835CDA727218B1_gshared (AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF);
		return ((AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.TextCore.Text.TextSettings/FontReferenceMap>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831* Unsafe_Add_TisFontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_m99FA3C63E1558D3E60FEBEB63235E526C4677785_gshared (FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831);
		return ((FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UIElements.UIR.TextureBlitter/BlitInfo>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357* Unsafe_Add_TisBlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_mCF3B8511510B6D55B122BDFE018ED3ECDD686FA1_gshared (BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357);
		return ((BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD* Unsafe_Add_TisFrame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD_m39990A1BCA97B77E59E3EBA9367D5F2C23BD813F_gshared (Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD);
		return ((Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UIElements.TextureRegistry/TextureInfo>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B* Unsafe_Add_TisTextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_m66D0958D7AA3BB3C91F934AA57F9122D29AF409A_gshared (TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B);
		return ((TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UIElements.TreeView/TreeViewItemWrapper>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE* Unsafe_Add_TisTreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_m6BFBFB17A934633EC4568F0DC7A1E4E8763845CE_gshared (TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE);
		return ((TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/Entry>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_tB8765CA56422E2C92887314844384843688DCB9F* Unsafe_Add_TisEntry_tB8765CA56422E2C92887314844384843688DCB9F_m64D8A0741D975ECB2101AFA3E28722B2F8BAE0D0_gshared (Entry_tB8765CA56422E2C92887314844384843688DCB9F* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		Entry_tB8765CA56422E2C92887314844384843688DCB9F* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(Entry_tB8765CA56422E2C92887314844384843688DCB9F);
		return ((Entry_tB8765CA56422E2C92887314844384843688DCB9F*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UIElements.UIR.UIRenderDevice/AllocToFree>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8* Unsafe_Add_TisAllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_mE581737F2B824AD7C3AFBA43BB8459CD7851B86E_gshared (AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8);
		return ((AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512* Unsafe_Add_TisAllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_mC6E9471E160A9538A66F0D290F789B64A2D75E1D_gshared (AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512);
		return ((AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UnitySynchronizationContext/WorkRequest>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* Unsafe_Add_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mA2E1BDBB285D35D70A55B578441DC5E9A2F341BF_gshared (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44);
		return ((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UIElements.VisualTreeAsset/SlotDefinition>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8* Unsafe_Add_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_mACD85EF72AF76DCEE2BC8F00C60D1B7D1AE72E79_gshared (SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8);
		return ((SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UIElements.VisualTreeAsset/SlotUsageEntry>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76* Unsafe_Add_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_mCF5C33AC197E65EB228090C21693F897664972DF_gshared (SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76);
		return ((SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UIElements.VisualTreeAsset/UsingEntry>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484* Unsafe_Add_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_m9422DBB8EA67AAE62DF4457DA314A2538E8C45FD_gshared (UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484);
		return ((UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<Niantic.ARDK.VPSCoverage.GeoserviceMessages._CoverageAreasResponse/VpsCoverageArea>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VpsCoverageArea_t5A693A0A8A5278B21913814006A678050F4E27AE* Unsafe_Add_TisVpsCoverageArea_t5A693A0A8A5278B21913814006A678050F4E27AE_m2082532613D9F6D042C03FE148D349B7BCCF4034_gshared (VpsCoverageArea_t5A693A0A8A5278B21913814006A678050F4E27AE* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		VpsCoverageArea_t5A693A0A8A5278B21913814006A678050F4E27AE* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(VpsCoverageArea_t5A693A0A8A5278B21913814006A678050F4E27AE);
		return ((VpsCoverageArea_t5A693A0A8A5278B21913814006A678050F4E27AE*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<Niantic.ARDK.Utilities._GcObserver/_WeakAction>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _WeakAction_tBBC02C4CAC557DF6A2BD33A029BD8F24C09FC2A3* Unsafe_Add_Tis_WeakAction_tBBC02C4CAC557DF6A2BD33A029BD8F24C09FC2A3_m739D1CB6F7E56D006E344DC6BDCFB3A92AEA4DC6_gshared (_WeakAction_tBBC02C4CAC557DF6A2BD33A029BD8F24C09FC2A3* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		_WeakAction_tBBC02C4CAC557DF6A2BD33A029BD8F24C09FC2A3* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(_WeakAction_tBBC02C4CAC557DF6A2BD33A029BD8F24C09FC2A3);
		return ((_WeakAction_tBBC02C4CAC557DF6A2BD33A029BD8F24C09FC2A3*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<Niantic.ARDK.VirtualStudio.Remote._RemoteConnection/BufferedMessage>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedMessage_tC023785A5DAFFBA5A1EAED47A9AD472D6CD50CDD* Unsafe_Add_TisBufferedMessage_tC023785A5DAFFBA5A1EAED47A9AD472D6CD50CDD_m2636F0E3659C76B2293F6CAF910E54D1FDDA5964_gshared (BufferedMessage_tC023785A5DAFFBA5A1EAED47A9AD472D6CD50CDD* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		BufferedMessage_tC023785A5DAFFBA5A1EAED47A9AD472D6CD50CDD* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(BufferedMessage_tC023785A5DAFFBA5A1EAED47A9AD472D6CD50CDD);
		return ((BufferedMessage_tC023785A5DAFFBA5A1EAED47A9AD472D6CD50CDD*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Linq.Expressions.Interpreter.InstructionList/DebugView/InstructionView>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D* Unsafe_Add_TisInstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_m719C90A21A315D29A965227AEE0FEE62F80ED5B0_gshared (InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D);
		return ((InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Byte>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AddByteOffset_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA41D4DA1B6351213CB981A99F9505A45CF32389F_gshared (uint8_t* ___source0, intptr_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		intptr_t L_1 = ___byteOffset1;
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Byte>(T&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AddByteOffset_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m977F986E96198374865467E0C8BCA8C996DC6709_gshared (uint8_t* ___source0, uint64_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		uint64_t L_1 = ___byteOffset1;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE((void*)((uintptr_t)L_1), NULL);
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_0, L_2);
		return L_3;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Char>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_AddByteOffset_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m81D68EA2B5C71342FBBCC70D4755AD2F89DCF1B5_gshared (Il2CppChar* ___source0, intptr_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___source0;
		intptr_t L_1 = ___byteOffset1;
		return ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Char>(T&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_AddByteOffset_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m626F9FC697AE48D88E07BDE4F575F5A2C52257FA_gshared (Il2CppChar* ___source0, uint64_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___source0;
		uint64_t L_1 = ___byteOffset1;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE((void*)((uintptr_t)L_1), NULL);
		Il2CppChar* L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<Il2CppChar,intptr_t>(L_0, L_2);
		return L_3;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Int32>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_AddByteOffset_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCE68D7FC154B9654C2EFADAD0081901D0AEA4015_gshared (int32_t* ___source0, intptr_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___source0;
		intptr_t L_1 = ___byteOffset1;
		return ((int32_t*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Int32>(T&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_AddByteOffset_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m99597CD32AEF8CFE18F00D8922B775637A05384D_gshared (int32_t* ___source0, uint64_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___source0;
		uint64_t L_1 = ___byteOffset1;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE((void*)((uintptr_t)L_1), NULL);
		int32_t* L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<int32_t,intptr_t>(L_0, L_2);
		return L_3;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Object>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_AddByteOffset_TisRuntimeObject_mE80524BC43C88F7426858D0F2D76EA278347344C_gshared (RuntimeObject** ___source0, intptr_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		intptr_t L_1 = ___byteOffset1;
		return ((RuntimeObject**)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Object>(T&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_AddByteOffset_TisRuntimeObject_m865838483903046806DAADBFFC930C2F6ACA83C3_gshared (RuntimeObject** ___source0, uint64_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		uint64_t L_1 = ___byteOffset1;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE((void*)((uintptr_t)L_1), NULL);
		RuntimeObject** L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<RuntimeObject*,intptr_t>(L_0, L_2);
		return L_3;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.UInt16>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Unsafe_AddByteOffset_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m94DBA864880259D19D75CCF313B5D405204265F3_gshared (uint16_t* ___source0, intptr_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___source0;
		intptr_t L_1 = ___byteOffset1;
		return ((uint16_t*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.UInt16>(T&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Unsafe_AddByteOffset_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m782C7DA18B6EC01FB05D83E1E59F5DC886215DAF_gshared (uint16_t* ___source0, uint64_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___source0;
		uint64_t L_1 = ___byteOffset1;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE((void*)((uintptr_t)L_1), NULL);
		uint16_t* L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<uint16_t,intptr_t>(L_0, L_2);
		return L_3;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.UInt32>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_AddByteOffset_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m010DDD095D73E394275E68DAA5190EB84C7D6EF9_gshared (uint32_t* ___source0, intptr_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___source0;
		intptr_t L_1 = ___byteOffset1;
		return ((uint32_t*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.UInt32>(T&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_AddByteOffset_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9B6A23F1A8C9182F7839DAA65EE0D1DE78DB5964_gshared (uint32_t* ___source0, uint64_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___source0;
		uint64_t L_1 = ___byteOffset1;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE((void*)((uintptr_t)L_1), NULL);
		uint32_t* L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<uint32_t,intptr_t>(L_0, L_2);
		return L_3;
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame<System.Byte>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D8903DC056729188D576E7F6D297CC65D43BB83_gshared (uint8_t* ___left0, uint8_t* ___right1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___left0;
		uint8_t* L_1 = ___right1;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame<System.Char>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB3F359D1CA4DAB5E960916F940617B5555E293BA_gshared (Il2CppChar* ___left0, Il2CppChar* ___right1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___left0;
		Il2CppChar* L_1 = ___right1;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame<System.Object>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisRuntimeObject_mB9C0F2D2E871C420C229B3EB06DE154607B02268_gshared (RuntimeObject** ___left0, RuntimeObject** ___right1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___left0;
		RuntimeObject** L_1 = ___right1;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
// T System.Runtime.CompilerServices.Unsafe::As<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Unsafe_As_TisRuntimeObject_m4BCC0ED093BFD47D807324EA964B9020D6203B95_gshared (RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___o0;
		return L_0;
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Memory`1<System.Byte>,System.ReadOnlyMemory`1<System.Byte>>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* Unsafe_As_TisMemory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036_TisReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399_m28DAF2E4CF40AF9326166C9671568CA459373123_gshared (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* ___source0, const RuntimeMethod* method) 
{
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_0 = ___source0;
		return (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Memory`1<System.Object>,System.ReadOnlyMemory`1<System.Object>>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_tD0F5C18058EEAB5F76AA982D1F430D67DFB7FCBC* Unsafe_As_TisMemory_1_tFE195D25CCBF8766EF8DE394FB116ED523C220DA_TisReadOnlyMemory_1_tD0F5C18058EEAB5F76AA982D1F430D67DFB7FCBC_mCC2B4341528913E721727C5523D721AB5477F66B_gshared (Memory_1_tFE195D25CCBF8766EF8DE394FB116ED523C220DA* ___source0, const RuntimeMethod* method) 
{
	{
		Memory_1_tFE195D25CCBF8766EF8DE394FB116ED523C220DA* L_0 = ___source0;
		return (ReadOnlyMemory_1_tD0F5C18058EEAB5F76AA982D1F430D67DFB7FCBC*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.ReadOnlyMemory`1<System.Byte>,System.Memory`1<System.Byte>>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* Unsafe_As_TisReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399_TisMemory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036_mDCCF4D376F6D56BA8035B7690ADDE9E6DF089718_gshared (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* ___source0, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_0 = ___source0;
		return (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.ReadOnlyMemory`1<System.Object>,System.Memory`1<System.Object>>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_tFE195D25CCBF8766EF8DE394FB116ED523C220DA* Unsafe_As_TisReadOnlyMemory_1_tD0F5C18058EEAB5F76AA982D1F430D67DFB7FCBC_TisMemory_1_tFE195D25CCBF8766EF8DE394FB116ED523C220DA_m5BA25A45D57AE4DAEE699DCFB61291D9E96D01EE_gshared (ReadOnlyMemory_1_tD0F5C18058EEAB5F76AA982D1F430D67DFB7FCBC* ___source0, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemory_1_tD0F5C18058EEAB5F76AA982D1F430D67DFB7FCBC* L_0 = ___source0;
		return (Memory_1_tFE195D25CCBF8766EF8DE394FB116ED523C220DA*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Boolean,System.Threading.Volatile/VolatileBoolean>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041* Unsafe_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisVolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_mCD0C2BF0CCC3B904DF803BF3F9EF11103BCD4F7B_gshared (bool* ___source0, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___source0;
		return (VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisKeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936_mD014F87105EDE878345B9DB26FA3CA7E90589375_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisKeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3_mE9DE1D96C264686D1E0F71E1024C2426B3462B50_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisKeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F_m9D08923B345B40566527A939B83AF344C84D6C97_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t0BF01F429B08969E998D5032D0F1C415DC166370* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisKeyValuePair_2_t0BF01F429B08969E998D5032D0F1C415DC166370_m91F1DA5AF124C9DD9601F1DA26546F5DA6C6C3CF_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (KeyValuePair_2_t0BF01F429B08969E998D5032D0F1C415DC166370*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisKeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E_m0B21EA9D4561B99EFE75EE0E79A6A0A4C33D9652_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Matrix4x4>>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t0E575E85C266A75FFE551B1B772926B8B1D9810F* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisKeyValuePair_2_t0E575E85C266A75FFE551B1B772926B8B1D9810F_m45284B524A2A869E6C2359B34FBFD84919233568_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (KeyValuePair_2_t0E575E85C266A75FFE551B1B772926B8B1D9810F*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m08113867F936D9F710961459C7C65DC26FAF5B1F_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t7D311E49C5BFA7AD0E1B6BDE838D7428E2CEDA13* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisKeyValuePair_2_t7D311E49C5BFA7AD0E1B6BDE838D7428E2CEDA13_m0869B5383C77BD28985DE3A5A5EEFEC4D33CB5FF_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (KeyValuePair_2_t7D311E49C5BFA7AD0E1B6BDE838D7428E2CEDA13*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,Unity.Collections.NativeArray`1<System.UInt16>>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisNativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934_m2D596EF9512A1C69462F301AFEC5ABADFB5A18C3_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,Unity.Collections.NativeArray`1<UnityEngine.UIElements.Vertex>>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisNativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81_mCD406E5FFAF164AE4888EE2AA14A5BA957A9E4BF_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,Niantic.ARDKExamples.RemoteAuthoring.AnchoredContent>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnchoredContent_t169B73944CDDA1EE005CA17B02EC80672A611820* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisAnchoredContent_t169B73944CDDA1EE005CA17B02EC80672A611820_m4323BD6CC8CD363CD7DA39366DA2E480CAEBA259_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (AnchoredContent_t169B73944CDDA1EE005CA17B02EC80672A611820*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Boolean>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5255D808D144D3B8B8CEB258238D6DCBB8DCE2AA_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (bool*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Byte>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBBBF94FAEFE6ACF9937A9D5CB0AD67CFDBBC5FFE_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Char>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m675417BFAB48B7F7055A5D921C105C175ACCDF2E_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.Color32>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mB6E1D2495BD9521359190756D0F7E93E0CEC3BA1_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.ComputedTransitionProperty>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_m2DA6041FA81C99F8A8596274BF59C261BDCE85C7_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC_mC06D87FE83F5E6B303EBAF4BEF7975536C8EDA6E_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,Niantic.ARDK.VPSCoverage.CoverageArea>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoverageArea_t9049C3A18B14DA38AEF55B57190DE7BAEE63A48C* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisCoverageArea_t9049C3A18B14DA38AEF55B57190DE7BAEE63A48C_m81E32D69D41DB47EC2E3F71EEED409E5B08AC3F3_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (CoverageArea_t9049C3A18B14DA38AEF55B57190DE7BAEE63A48C*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,Niantic.ARDK.AR.Awareness.Detection>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Detection_t0B5803B8A7FD8800F12A52FE335E06179362CE34* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisDetection_t0B5803B8A7FD8800F12A52FE335E06179362CE34_mC50194FC93604F47A5E3C92038E4EDBC3BCD9F8A_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (Detection_t0B5803B8A7FD8800F12A52FE335E06179362CE34*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Collections.DictionaryEntry>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisDictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_m97C0A9F40F4ECE31121FD9087035B693C10A1953_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.EasingFunction>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m91E9F05E444EE96A19BD82547C2A513E5D6DA509_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,Niantic.Experimental.ARDK.SharedAR.Experience>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Experience_tC36F343516B83528459358B6BC0892EEFEAA8CDA* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisExperience_tC36F343516B83528459358B6BC0892EEFEAA8CDA_m121BC0751F75140233DBEB13BAC79163428C9CE5_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (Experience_tC36F343516B83528459358B6BC0892EEFEAA8CDA*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Runtime.InteropServices.GCHandle>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_m083650B09C378766C61A42E28B1C01A015B93D08_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m75B9D84D28B8B4F567381557F5D6BAC6C5C97B20_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.TextCore.GlyphRect>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_m01AC5D18D5330B3EBE2E396F98ED9E4822D0908B_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,Niantic.ARDK.Extensions.Gameboard.GridNode>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GridNode_t632C407080B8E1124DC1D6FE17D7AF317B6B1D04* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisGridNode_t632C407080B8E1124DC1D6FE17D7AF317B6B1D04_m1C0E9508131EAC99F3ACADEB644C226C01069089_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (GridNode_t632C407080B8E1124DC1D6FE17D7AF317B6B1D04*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Guid>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisGuid_t_mD490594AEC53175DF2E567E0FEF74134137BC632_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (Guid_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Int16>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE8832539C9AACA1C5E2E1D937844260FBB2358B9_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (int16_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Int32>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m81F9F17E7C2AAE3840B2CCBF247A17F898184B1B_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (int32_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Int32Enum>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mD4883EE1EE8A818F3BDB87AA0E8129351234C029_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (int32_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Int64>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mAF7D0EB169EB1E685A55A4817EA5A573207CD603_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (int64_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.IntPtr>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisIntPtr_t_m68D6F8F1587DBD6E68BF787778230EDD9D1AEBA0_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (intptr_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Linq.Expressions.Interpreter.InterpretedFrameInfo>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_m1B455FD70B02485526F6E73370B60B29C2C84E8C_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,Niantic.ARDK.VPSCoverage.LocalizationTarget>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalizationTarget_tE79D541B0B01BD41A76B028A9396F968586FED49* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisLocalizationTarget_tE79D541B0B01BD41A76B028A9396F968586FED49_m3A5656395E9D03710885FFCCD7E62A005768D9DF_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (LocalizationTarget_tE79D541B0B01BD41A76B028A9396F968586FED49*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.ManipulatorActivationFilter>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81_mE20696047A5434C9287ADB6466647742BE9832D8_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,Niantic.ARDK.Networking.HLAPI.Routing.NetworkId>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisNetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3_m2B84B3D6AC951EC27E59240F6AC146B08E8E7FE8_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Object>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_m062C2E1C18C2BEFAB12E9ABFEF799CB33804BE4F_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (RuntimeObject**)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,Niantic.ARDK.Extensions.Gameboard.PathFindingNode>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PathFindingNode_tFC227A083863C9D6848D8ACD481D67EE451D9DE7* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisPathFindingNode_tFC227A083863C9D6848D8ACD481D67EE451D9DE7_mE88978B395A16DFAA55FEF9AE10C90D3DB54568F_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (PathFindingNode_tFC227A083863C9D6848D8ACD481D67EE451D9DE7*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.EventSystems.RaycastResult>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_mACE7BA9CDED442766C8D197BCC61802503A46438_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.UIR.RenderChainTextEntry>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_m853478F8540CA859DEDDA17B993D2FCA01321DE9_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.RuleMatcher>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_mF6797AE06F2393F57DECD631C7F5AC4EA4AE97BE_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.SceneManagement.Scene>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m437B5ABADA4057C3A56409A81B365791050C1948_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (Scene_tA1DC762B79745EB5140F054C884855B922318356*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.StyleSheets.SelectorMatchRecord>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_m05FBAB0560DB903FAC00F99681A03EFBBFC4BC86_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Single>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m758C4404FE9FF35DF96ADF3EFB83CFA409651B67_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (float*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.StylePropertyName>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m2180A4295EEFD3D041BF2CF76D47B4B006CA6D5E_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.StyleSheets.StylePropertyValue>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisStylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_m543A0356788BF0785544E0B66DBE5657A14BA3FA_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.StyleSelectorPart>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisStyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_m5576C7EEC59B2CEA6F2D9086F26804C8944F2F1D_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisStyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_mE65B2C076B239D906FA58D603B2A276248EEABCD_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.StyleSheets.StyleValue>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisStyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5_mB24B2ED0B38B23DC1F9003CC9ED8611E1AD38AF3_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.StyleSheets.StyleValueManaged>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisStyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_mAFA7BE26035BA3E4858E3EA2ECB745C253C5D4A1_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.StyleVariable>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisStyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_mD5D85969486FE66A7086BC45A362DB5EB6464A1D_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.TimeValue>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mFC30ED2E38918AFA5F7BD1AC89CA2786BA2FDD63_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UICharInfo>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD_mC2C67D4881DD70E231FD361981FA2AC4C062885C_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UILineInfo>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC_mFE80BC26790A9A78D6D6EE9105FA6A2F84E8318C_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIVertex>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_m83641DEF048851969B41965A94A25D846941D684_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.UInt16>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8289AC99DB8CCCE8C1D12C3592109A087F75FF31_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (uint16_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.UInt32>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mCE01536D41313BB14C2373248FD472794C97DB40_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (uint32_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.Vector3>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC2086349ECB9CA3D0295A7D7F8011839C5E4EB6A_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.Vector3Int>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m3C45E1B99D2D3F4DB2FB485F8D78B6069C864C99_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.Vector4>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m84794FBB2F8E3AFFA4785C01DA879C62FB7D9932_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,Niantic.ARDK.Extensions.Gameboard.Waypoint>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Waypoint_tCC5FC8059B12D71E919B23CB4CAD470BE6DC5089* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisWaypoint_tCC5FC8059B12D71E919B23CB4CAD470BE6DC5089_mB0C1FD5528172FA15500C1FC775772EEB267DBB3_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (Waypoint_tCC5FC8059B12D71E919B23CB4CAD470BE6DC5089*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorResolvedArgs>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WayspotAnchorResolvedArgs_t07549FD9B7D6968946359F9800B0A0329CD6E38D* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisWayspotAnchorResolvedArgs_t07549FD9B7D6968946359F9800B0A0329CD6E38D_m12410E0C2466C8D7B4E66502102ABCFB3F85B6F9_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (WayspotAnchorResolvedArgs_t07549FD9B7D6968946359F9800B0A0329CD6E38D*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Security.Cryptography.X509Certificates.X509ChainStatus>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisX509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_m9AA3427002BD4F2E579B47B778EEDCA796C91361_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,Niantic.ARDK.AR._CppAddressAndScale>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_Tis_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003_mF6E5EA13335C4B1F004F6350B1235EB37A5E8F44_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.BeforeRenderHelper/OrderBlock>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mEB78B631669E0065089B3AFFC3C56FAF5C9AE762_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.UIR.BitmapAllocator32/Page>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Page_t04FE552A388BF55B12C8868E19589136957E00A5* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisPage_t04FE552A388BF55B12C8868E19589136957E00A5_m00BA967D1B1300D0C45903D2DDC5C8F4EA077D43_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (Page_t04FE552A388BF55B12C8868E19589136957E00A5*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.Camera/RenderRequest>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_m24B9358C202F0C2A5E1B782AB1B90F0402E7BB5A_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.FocusController/FocusedElement>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisFocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_m5A147BFC4BE96572FD1F6651857A819C9EC62DD1_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,Niantic.ARDK.Utilities.BinarySerialization.GlobalSerializer/_SerializerInfo>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _SerializerInfo_t093E1527322CD37C49786F58CB261EEC6C7261E6* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_Tis_SerializerInfo_t093E1527322CD37C49786F58CB261EEC6C7261E6_m3D32D7263A3FE24B9D269E9A63CD3667F0E3482D_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (_SerializerInfo_t093E1527322CD37C49786F58CB261EEC6C7261E6*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_Tis_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0_mC178A393CD513D76FC94AF2EC4A0A8BE03104701_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.InternalTreeView/TreeViewItemWrapper>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisTreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_mC93BE0F01640CE2C9605E44F0C492EC7475A40C2_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_Tis_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B_mC6C2A9958DC7043766EBFC360C98A4289FB92E0C_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Text.RegularExpressions.RegexCharClass/SingleRange>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m6ECB26CC6F64598A1A015884BE97B23F9A3FEE10_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.UIR.RenderChain/RenderNodeData>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_m81AE203CADFD226356CDCF9DA09EA7152EC7B700_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.TemplateAsset/AttributeOverride>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisAttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_mC229C3AA2927C3B4FB43901A8C8D78405F9AA9A6_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.TextCore.Text.TextSettings/FontReferenceMap>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisFontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_m4CB89B6B3831BD8ED35F336399C214A9C4C75339_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.UIR.TextureBlitter/BlitInfo>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisBlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_m7A4637AF6C371E9430B3DEAE0B7D9BC5E9AA7506_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisFrame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD_m86BECE37819F86F80196C77985BCF5EC2E5779F5_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.TextureRegistry/TextureInfo>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisTextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_m5AA3F5E2FEDFB7110E930AED2D06F37CD5C72664_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.TreeView/TreeViewItemWrapper>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisTreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_m3F1C1A26CD502538037DEF227CD0D6ADF73C25C7_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/Entry>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_tB8765CA56422E2C92887314844384843688DCB9F* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisEntry_tB8765CA56422E2C92887314844384843688DCB9F_m98E9E112D5B2B18D93BEDBFBADCF476F51E61162_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (Entry_tB8765CA56422E2C92887314844384843688DCB9F*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.UIR.UIRenderDevice/AllocToFree>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisAllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_m2112CF58024905311FFF66635C1F56249CB949DD_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisAllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_mD98E658E8BBF68CA0EFB6451E77B739579C5DEF1_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UnitySynchronizationContext/WorkRequest>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mD37A62DD0E9EBABD36703268B4DF2DE7AD3FF2B1_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.VisualTreeAsset/SlotDefinition>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_m53E7026A89294A874B1E625347DB492FF5A5A7DE_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.VisualTreeAsset/SlotUsageEntry>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_mBD23D3572159F9CA46578C85E0698C3D09AF984A_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UIElements.VisualTreeAsset/UsingEntry>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_m359A86EA7381993B782F0F14F184698956413A40_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,Niantic.ARDK.VPSCoverage.GeoserviceMessages._CoverageAreasResponse/VpsCoverageArea>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VpsCoverageArea_t5A693A0A8A5278B21913814006A678050F4E27AE* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisVpsCoverageArea_t5A693A0A8A5278B21913814006A678050F4E27AE_mF3B510ABF56D28368A5E3A75832CC9DB58FF8EA7_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (VpsCoverageArea_t5A693A0A8A5278B21913814006A678050F4E27AE*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,Niantic.ARDK.Utilities._GcObserver/_WeakAction>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _WeakAction_tBBC02C4CAC557DF6A2BD33A029BD8F24C09FC2A3* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_Tis_WeakAction_tBBC02C4CAC557DF6A2BD33A029BD8F24C09FC2A3_m6AC2CE0C13F89F8FA7AB1C8E19E832152CFCF6A3_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (_WeakAction_tBBC02C4CAC557DF6A2BD33A029BD8F24C09FC2A3*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,Niantic.ARDK.VirtualStudio.Remote._RemoteConnection/BufferedMessage>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedMessage_tC023785A5DAFFBA5A1EAED47A9AD472D6CD50CDD* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisBufferedMessage_tC023785A5DAFFBA5A1EAED47A9AD472D6CD50CDD_mEA8C3A1D38B5591C4DCC31333177E1C03277E7B5_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (BufferedMessage_tC023785A5DAFFBA5A1EAED47A9AD472D6CD50CDD*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Linq.Expressions.Interpreter.InstructionList/DebugView/InstructionView>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_m9F25E828029358B6EC286575D7276F4DFBC34FED_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Char,System.Byte>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5CDBD1972E096D4D176783BA7D2F55EC593659B4_gshared (Il2CppChar* ___source0, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Char,System.Char>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA862CB8DDBD498DBF1D9BFDB6CA1164FB1ABEC77_gshared (Il2CppChar* ___source0, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Char,System.IntPtr>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisIntPtr_t_m56FBE72308801C8102F5BACF2FB5D627CD797881_gshared (Il2CppChar* ___source0, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___source0;
		return (intptr_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Char,System.Object>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisRuntimeObject_m61B2BDAA53838DCA08A69F50AE69C94A05B6E447_gshared (Il2CppChar* ___source0, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___source0;
		return (RuntimeObject**)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Decimal,System.Decimal/DecCalc>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9* Unsafe_As_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_TisDecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9_m655BE5526023C16AC00CD6B803DE2B0DFD794324_gshared (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* ___source0, const RuntimeMethod* method) 
{
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_0 = ___source0;
		return (DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Int32,System.Byte>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4805CE1591A68B97CB60221B779D7F28DD6E75F_gshared (int32_t* ___source0, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Int32,System.Char>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3802F4924AEA902550EDEA7FDF3A6DBD83FDB4C6_gshared (int32_t* ___source0, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Int32,System.IntPtr>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_mBB4534AB60C5924F665D2A157DA805643B2C2457_gshared (int32_t* ___source0, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___source0;
		return (intptr_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Int32,System.UInt32>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD3C14204343AF6B57CA5A16AE342902E55A1960F_gshared (int32_t* ___source0, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___source0;
		return (uint32_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Int32,System.Threading.Volatile/VolatileInt32>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisVolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693_m81EF59BFA0C85B83677FF80B4FF40771741D866E_gshared (int32_t* ___source0, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___source0;
		return (VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Int64,System.UInt64>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Unsafe_As_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m088D7E6857BD4BBF5448E54572955E67820D3DD0_gshared (int64_t* ___source0, const RuntimeMethod* method) 
{
	{
		int64_t* L_0 = ___source0;
		return (uint64_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Object,System.Byte>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisRuntimeObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m01FE0BE10311CE6384A6264314453C262AFE3376_gshared (RuntimeObject** ___source0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Object,System.Char>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisRuntimeObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6F78DF114C69E12A3BD99748B63A4190CBE1844A_gshared (RuntimeObject** ___source0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Object,System.IntPtr>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_As_TisRuntimeObject_TisIntPtr_t_mFD164B43CE06D400CAA5FB024E751600994481CD_gshared (RuntimeObject** ___source0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		return (intptr_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Object,System.Object>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_As_TisRuntimeObject_TisRuntimeObject_m3E159F5FC9570A15B7E1F3FC0B60F2355DDB359A_gshared (RuntimeObject** ___source0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		return (RuntimeObject**)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Object,System.Threading.Volatile/VolatileObject>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* Unsafe_As_TisRuntimeObject_TisVolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_m3CF3EC45B1C0C599DAC55CC82268B1667987F41A_gshared (RuntimeObject** ___source0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		return (VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.UInt16,System.Byte>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m57A5214D254F55E06E1FA7982C48809FC38E3FD4_gshared (uint16_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.UInt16,System.Char>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA4854CB1F87781C7D1E8EAD9B5C11AE9103046D7_gshared (uint16_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.UInt16,System.IntPtr>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisIntPtr_t_m09337AF4A79E045655333D3C39CD122A34EBCE70_gshared (uint16_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___source0;
		return (intptr_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.UInt32,System.Byte>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4D4DA3640694446A5C811B6406B9D9DA4399A9BB_gshared (uint32_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.UInt32,System.Char>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA3C1546104AEEB68DC37C9DE2E7CDCD6A5857DB0_gshared (uint32_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.UInt32,System.IntPtr>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisIntPtr_t_m55DA6EC949EBF0E82F40E31E62194D4ECAD372B4_gshared (uint32_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___source0;
		return (intptr_t*)(L_0);
	}
}
// System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer<System.Byte>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mFE9564E02F6277437F35368989885DC6A5EA35A5_gshared (uint8_t* ___value0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___value0;
		return (void*)(((uintptr_t)L_0));
	}
}
// System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer<System.Char>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m0AD32B0F3AC49717A13A2BBC1D4F22870963EAD6_gshared (Il2CppChar* ___value0, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___value0;
		return (void*)(((uintptr_t)L_0));
	}
}
// System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisRuntimeObject_mAB8648A0D038AA0BC8E9791B0F07B7417214FD17_gshared (RuntimeObject** ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___value0;
		return (void*)(((uintptr_t)L_0));
	}
}
// System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer<System.Number/NumberBuffer/DigitsAndNullTerminator>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisDigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA_m50C725B5F441884D5668CB229CAB83C2D1EA2F5C_gshared (DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA* ___value0, const RuntimeMethod* method) 
{
	{
		DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA* L_0 = ___value0;
		return (void*)(((uintptr_t)L_0));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<System.Byte>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AsRef_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDFABC34A7725F1807FFAF508A3F39C2ED7B7E30D_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return L_0;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<System.Byte>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AsRef_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB69F8A5C8AC34D28CE255D958651E7308790D7E4_gshared (void* ___source0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<System.Char>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_AsRef_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mEA9985C837E6BACDBA2D64A4425439584AA7ED57_gshared (void* ___source0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_AsRef_TisRuntimeObject_mEA31169F4A69CE64F46DB0525B359FB372B13784_gshared (RuntimeObject** ___source0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		return L_0;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<System.Object>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_AsRef_TisRuntimeObject_m816F6707FFA35CD3D93392AE9E18DC1F25170D04_gshared (void* ___source0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		return (RuntimeObject**)(L_0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisKeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936_m272DD931F63B2AFC6FDBD535E19D8856577F1E6F_gshared (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* ___left0, KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* ___right1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* L_0 = ___left0;
		KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisKeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3_m15FC2AF93FED85799A1D17F490CC2535FC965BB4_gshared (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* ___left0, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* ___right1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* L_0 = ___left0;
		KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisKeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F_m90ECE9804846B3167B02FC8A0B1F9E6140BF7305_gshared (KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F* ___left0, KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F* ___right1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F* L_0 = ___left0;
		KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisKeyValuePair_2_t0BF01F429B08969E998D5032D0F1C415DC166370_mF479DE9D56C9D563DCAAD0FE21428D4D33807279_gshared (KeyValuePair_2_t0BF01F429B08969E998D5032D0F1C415DC166370* ___left0, KeyValuePair_2_t0BF01F429B08969E998D5032D0F1C415DC166370* ___right1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t0BF01F429B08969E998D5032D0F1C415DC166370* L_0 = ___left0;
		KeyValuePair_2_t0BF01F429B08969E998D5032D0F1C415DC166370* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisKeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E_m54B1133832C0E47EADD891B3F7F78BB103A84427_gshared (KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E* ___left0, KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E* ___right1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E* L_0 = ___left0;
		KeyValuePair_2_t35AA315F507A224F8B43D106DA0814C9811D8A7E* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Matrix4x4>>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisKeyValuePair_2_t0E575E85C266A75FFE551B1B772926B8B1D9810F_mC4BF7852AC804953154671FB4B4B89E885FB3182_gshared (KeyValuePair_2_t0E575E85C266A75FFE551B1B772926B8B1D9810F* ___left0, KeyValuePair_2_t0E575E85C266A75FFE551B1B772926B8B1D9810F* ___right1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t0E575E85C266A75FFE551B1B772926B8B1D9810F* L_0 = ___left0;
		KeyValuePair_2_t0E575E85C266A75FFE551B1B772926B8B1D9810F* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m11C3D4170740285686F8F1A83CACB380D2B52F4B_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___left0, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___right1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_0 = ___left0;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisKeyValuePair_2_t7D311E49C5BFA7AD0E1B6BDE838D7428E2CEDA13_m170D1440BCE98862343C9F5B559EA6F894DA5F9A_gshared (KeyValuePair_2_t7D311E49C5BFA7AD0E1B6BDE838D7428E2CEDA13* ___left0, KeyValuePair_2_t7D311E49C5BFA7AD0E1B6BDE838D7428E2CEDA13* ___right1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t7D311E49C5BFA7AD0E1B6BDE838D7428E2CEDA13* L_0 = ___left0;
		KeyValuePair_2_t7D311E49C5BFA7AD0E1B6BDE838D7428E2CEDA13* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Unity.Collections.NativeArray`1<System.UInt16>>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisNativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934_m31F98D8FF93369A593BA82FF237AE4216C4F6D20_gshared (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934* ___left0, NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934* ___right1, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934* L_0 = ___left0;
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Unity.Collections.NativeArray`1<UnityEngine.UIElements.Vertex>>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisNativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81_m996655CB0EFC531DE2A2DF2C3A702631088C7E27_gshared (NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81* ___left0, NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81* ___right1, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81* L_0 = ___left0;
		NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Niantic.ARDKExamples.RemoteAuthoring.AnchoredContent>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisAnchoredContent_t169B73944CDDA1EE005CA17B02EC80672A611820_m29FF377131F70F08F0823EF2C8076984836CFF9E_gshared (AnchoredContent_t169B73944CDDA1EE005CA17B02EC80672A611820* ___left0, AnchoredContent_t169B73944CDDA1EE005CA17B02EC80672A611820* ___right1, const RuntimeMethod* method) 
{
	{
		AnchoredContent_t169B73944CDDA1EE005CA17B02EC80672A611820* L_0 = ___left0;
		AnchoredContent_t169B73944CDDA1EE005CA17B02EC80672A611820* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Boolean>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC02DAB7E44466131B69DD9302B624DA5CE50BE72_gshared (bool* ___left0, bool* ___right1, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___left0;
		bool* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Byte>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4E02D641D0F8180CCBBD2B7EF9E8DB4E6767B387_gshared (uint8_t* ___left0, uint8_t* ___right1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___left0;
		uint8_t* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Char>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m502F9AAFDDFD6C605D8287FA4A064C31EA7C313B_gshared (Il2CppChar* ___left0, Il2CppChar* ___right1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___left0;
		Il2CppChar* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.Color32>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mFC087A02F3B1C65343DE4D84E8D9E8BEE1576C07_gshared (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___left0, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___right1, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_0 = ___left0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.ComputedTransitionProperty>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_m343A7014A732FE1C1D7B23E7BD0FD0BC98107EC2_gshared (ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1* ___left0, ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1* ___right1, const RuntimeMethod* method) 
{
	{
		ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1* L_0 = ___left0;
		ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC_m6FBEB14DFDDF3E0639DF98EC3A8D7551A30D2B9A_gshared (ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC* ___left0, ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC* ___right1, const RuntimeMethod* method) 
{
	{
		ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC* L_0 = ___left0;
		ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Niantic.ARDK.VPSCoverage.CoverageArea>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisCoverageArea_t9049C3A18B14DA38AEF55B57190DE7BAEE63A48C_mDD9FB7EC4ED93CCCEAC062E9B0D8907865BB4BDB_gshared (CoverageArea_t9049C3A18B14DA38AEF55B57190DE7BAEE63A48C* ___left0, CoverageArea_t9049C3A18B14DA38AEF55B57190DE7BAEE63A48C* ___right1, const RuntimeMethod* method) 
{
	{
		CoverageArea_t9049C3A18B14DA38AEF55B57190DE7BAEE63A48C* L_0 = ___left0;
		CoverageArea_t9049C3A18B14DA38AEF55B57190DE7BAEE63A48C* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Niantic.ARDK.AR.Awareness.Detection>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisDetection_t0B5803B8A7FD8800F12A52FE335E06179362CE34_mFCE8579C5193A083A5BC5908529E40019EBB7757_gshared (Detection_t0B5803B8A7FD8800F12A52FE335E06179362CE34* ___left0, Detection_t0B5803B8A7FD8800F12A52FE335E06179362CE34* ___right1, const RuntimeMethod* method) 
{
	{
		Detection_t0B5803B8A7FD8800F12A52FE335E06179362CE34* L_0 = ___left0;
		Detection_t0B5803B8A7FD8800F12A52FE335E06179362CE34* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Collections.DictionaryEntry>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisDictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_m5E10D7D94BFEABD9411ABE9CF9B3D00C2276943A_gshared (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* ___left0, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* ___right1, const RuntimeMethod* method) 
{
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* L_0 = ___left0;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.EasingFunction>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m12DC025A6061CE20BF224B6A849FB0CBCDD0AA32_gshared (EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___left0, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___right1, const RuntimeMethod* method) 
{
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_0 = ___left0;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Niantic.Experimental.ARDK.SharedAR.Experience>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisExperience_tC36F343516B83528459358B6BC0892EEFEAA8CDA_mF87BE23F826F887CF2A5252AB50A0C8FA11BACB6_gshared (Experience_tC36F343516B83528459358B6BC0892EEFEAA8CDA* ___left0, Experience_tC36F343516B83528459358B6BC0892EEFEAA8CDA* ___right1, const RuntimeMethod* method) 
{
	{
		Experience_tC36F343516B83528459358B6BC0892EEFEAA8CDA* L_0 = ___left0;
		Experience_tC36F343516B83528459358B6BC0892EEFEAA8CDA* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Runtime.InteropServices.GCHandle>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mCCFCFF68EA04592E208EFBC2A6E4BE2C260130F7_gshared (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* ___left0, GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* ___right1, const RuntimeMethod* method) 
{
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = ___left0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m6D23FED8E45C2EFC489FF53567AFB9565FCBD8EB_gshared (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___left0, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___right1, const RuntimeMethod* method) 
{
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_0 = ___left0;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.TextCore.GlyphRect>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_m3B1620F7228EA5913CB9E70958A30B5F9A020482_gshared (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* ___left0, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* ___right1, const RuntimeMethod* method) 
{
	{
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_0 = ___left0;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Niantic.ARDK.Extensions.Gameboard.GridNode>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisGridNode_t632C407080B8E1124DC1D6FE17D7AF317B6B1D04_m496953A38C55D3747E40CE508D33052811D70560_gshared (GridNode_t632C407080B8E1124DC1D6FE17D7AF317B6B1D04* ___left0, GridNode_t632C407080B8E1124DC1D6FE17D7AF317B6B1D04* ___right1, const RuntimeMethod* method) 
{
	{
		GridNode_t632C407080B8E1124DC1D6FE17D7AF317B6B1D04* L_0 = ___left0;
		GridNode_t632C407080B8E1124DC1D6FE17D7AF317B6B1D04* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Guid>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisGuid_t_m30974CCDD992E3468B7CC6B46C31921BF8247504_gshared (Guid_t* ___left0, Guid_t* ___right1, const RuntimeMethod* method) 
{
	{
		Guid_t* L_0 = ___left0;
		Guid_t* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Int32>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8D6733A9842E92B88E3DABC7E7AEF45A56330821_gshared (int32_t* ___left0, int32_t* ___right1, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___left0;
		int32_t* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Int32Enum>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m66968048706BDC5B8CC07A5AA1C6970835373A09_gshared (int32_t* ___left0, int32_t* ___right1, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___left0;
		int32_t* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.IntPtr>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisIntPtr_t_m91002B9659E4978D56D1BEC81347844ED0E40F87_gshared (intptr_t* ___left0, intptr_t* ___right1, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___left0;
		intptr_t* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Linq.Expressions.Interpreter.InterpretedFrameInfo>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisInterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_mA1088F8B986CEEBA4C8670C8406911E21CFC7FE0_gshared (InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321* ___left0, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321* ___right1, const RuntimeMethod* method) 
{
	{
		InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321* L_0 = ___left0;
		InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Niantic.ARDK.VPSCoverage.LocalizationTarget>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisLocalizationTarget_tE79D541B0B01BD41A76B028A9396F968586FED49_m716123D22E79E23DF5ED26BCFA64BC712E3DA98B_gshared (LocalizationTarget_tE79D541B0B01BD41A76B028A9396F968586FED49* ___left0, LocalizationTarget_tE79D541B0B01BD41A76B028A9396F968586FED49* ___right1, const RuntimeMethod* method) 
{
	{
		LocalizationTarget_tE79D541B0B01BD41A76B028A9396F968586FED49* L_0 = ___left0;
		LocalizationTarget_tE79D541B0B01BD41A76B028A9396F968586FED49* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.ManipulatorActivationFilter>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81_mE863CAABC63F145750E0E2094C4DB4DC4BEC17C7_gshared (ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81* ___left0, ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81* ___right1, const RuntimeMethod* method) 
{
	{
		ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81* L_0 = ___left0;
		ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisNetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3_m275443EECF8AD0AFE48D5619292202B4B4A5D354_gshared (NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3* ___left0, NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3* ___right1, const RuntimeMethod* method) 
{
	{
		NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3* L_0 = ___left0;
		NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Object>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisRuntimeObject_m7F604C05F9E8FDA6F973BD7640B3CFB63B89EBC1_gshared (RuntimeObject** ___left0, RuntimeObject** ___right1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___left0;
		RuntimeObject** L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Niantic.ARDK.Extensions.Gameboard.PathFindingNode>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisPathFindingNode_tFC227A083863C9D6848D8ACD481D67EE451D9DE7_m041FEEC392CC4D20AFD98D1622B19B29BE9C4A49_gshared (PathFindingNode_tFC227A083863C9D6848D8ACD481D67EE451D9DE7* ___left0, PathFindingNode_tFC227A083863C9D6848D8ACD481D67EE451D9DE7* ___right1, const RuntimeMethod* method) 
{
	{
		PathFindingNode_tFC227A083863C9D6848D8ACD481D67EE451D9DE7* L_0 = ___left0;
		PathFindingNode_tFC227A083863C9D6848D8ACD481D67EE451D9DE7* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.EventSystems.RaycastResult>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisRaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_m6475BEED23B701AE5B485386CF39ED0CCD44EB69_gshared (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* ___left0, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* ___right1, const RuntimeMethod* method) 
{
	{
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* L_0 = ___left0;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.UIR.RenderChainTextEntry>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisRenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_m0A32ACA34842C0A4F8E88A926FDCEF7732A922E8_gshared (RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11* ___left0, RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11* ___right1, const RuntimeMethod* method) 
{
	{
		RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11* L_0 = ___left0;
		RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.RuleMatcher>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisRuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_m949C32E6F3F9C4D75325E3F670AB40052CC48755_gshared (RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E* ___left0, RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E* ___right1, const RuntimeMethod* method) 
{
	{
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E* L_0 = ___left0;
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.SceneManagement.Scene>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m42D373F42BF153B88C6A2E3011D263146E3E099D_gshared (Scene_tA1DC762B79745EB5140F054C884855B922318356* ___left0, Scene_tA1DC762B79745EB5140F054C884855B922318356* ___right1, const RuntimeMethod* method) 
{
	{
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_0 = ___left0;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.StyleSheets.SelectorMatchRecord>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisSelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_m3D61EC01BC4C38D8A125D0D373C55A5D6A90AD66_gshared (SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7* ___left0, SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7* ___right1, const RuntimeMethod* method) 
{
	{
		SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7* L_0 = ___left0;
		SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.StylePropertyName>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mAC6A652984E22A639B6CBBE47895DE85D486C383_gshared (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___left0, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___right1, const RuntimeMethod* method) 
{
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_0 = ___left0;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.StyleSheets.StylePropertyValue>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisStylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_m435A8A27ABB2230FC80765D1895B2A83DD7F4DEF_gshared (StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2* ___left0, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2* ___right1, const RuntimeMethod* method) 
{
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2* L_0 = ___left0;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.StyleSelectorPart>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisStyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_mCF3EFB661BC3D619C113832F1F0F1D2636F8B628_gshared (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470* ___left0, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470* ___right1, const RuntimeMethod* method) 
{
	{
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470* L_0 = ___left0;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisStyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_m3F45BD980810B5A333893DC54C0E7655642CEE72_gshared (StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C* ___left0, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C* ___right1, const RuntimeMethod* method) 
{
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C* L_0 = ___left0;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.StyleSheets.StyleValue>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisStyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5_m36BF461911D04778975C0AC25D9E7A0D4934E1A0_gshared (StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5* ___left0, StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5* ___right1, const RuntimeMethod* method) 
{
	{
		StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5* L_0 = ___left0;
		StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.StyleSheets.StyleValueManaged>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisStyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_m7BCF69CCA5F97327C7DC2428DAEA9A31F025C06A_gshared (StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4* ___left0, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4* ___right1, const RuntimeMethod* method) 
{
	{
		StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4* L_0 = ___left0;
		StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.StyleVariable>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisStyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_m2B3B27FF2EE786FB8E3A1108EBDA8A45380EF4D3_gshared (StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269* ___left0, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269* ___right1, const RuntimeMethod* method) 
{
	{
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269* L_0 = ___left0;
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.TimeValue>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mD3AE5611CA1D62F6AF43F1FD344EE4282F0B01DC_gshared (TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___left0, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___right1, const RuntimeMethod* method) 
{
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_0 = ___left0;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UICharInfo>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisUICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD_m89FE910113E3D1BFD969C38C6C93A2A3A868BFE1_gshared (UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* ___left0, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* ___right1, const RuntimeMethod* method) 
{
	{
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* L_0 = ___left0;
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UILineInfo>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisUILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC_m600D46F0834BF9D37BA75222E9C8D99C870B8EB8_gshared (UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* ___left0, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* ___right1, const RuntimeMethod* method) 
{
	{
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* L_0 = ___left0;
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIVertex>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisUIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_mF6BEAE3A599E972181E03D5FFC3AD9CBCC33A158_gshared (UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* ___left0, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* ___right1, const RuntimeMethod* method) 
{
	{
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_0 = ___left0;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.UInt32>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mABC4005334CB97DC64C7890A0F3385F00CCE86D1_gshared (uint32_t* ___left0, uint32_t* ___right1, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___left0;
		uint32_t* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.Vector3>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m37DAB5D2C0D08923E413CE0D8599DAA4BB2DD54C_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___left0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___right1, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___left0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.Vector3Int>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m8012009353C322C0292ED91BF7FD4BAE0BC0CDFC_gshared (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___left0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___right1, const RuntimeMethod* method) 
{
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_0 = ___left0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.Vector4>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m0EBF4F8C97EAA03D7601F9D7FE9B2CD63F006986_gshared (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___left0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___right1, const RuntimeMethod* method) 
{
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_0 = ___left0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Niantic.ARDK.Extensions.Gameboard.Waypoint>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisWaypoint_tCC5FC8059B12D71E919B23CB4CAD470BE6DC5089_mB12F66EDFB5E4D8D6DD9FB18EFD573052B1F45A1_gshared (Waypoint_tCC5FC8059B12D71E919B23CB4CAD470BE6DC5089* ___left0, Waypoint_tCC5FC8059B12D71E919B23CB4CAD470BE6DC5089* ___right1, const RuntimeMethod* method) 
{
	{
		Waypoint_tCC5FC8059B12D71E919B23CB4CAD470BE6DC5089* L_0 = ___left0;
		Waypoint_tCC5FC8059B12D71E919B23CB4CAD470BE6DC5089* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Niantic.ARDK.AR.WayspotAnchors.WayspotAnchorResolvedArgs>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisWayspotAnchorResolvedArgs_t07549FD9B7D6968946359F9800B0A0329CD6E38D_m320CC3D21CE750753112D0A880D58EECF94403F0_gshared (WayspotAnchorResolvedArgs_t07549FD9B7D6968946359F9800B0A0329CD6E38D* ___left0, WayspotAnchorResolvedArgs_t07549FD9B7D6968946359F9800B0A0329CD6E38D* ___right1, const RuntimeMethod* method) 
{
	{
		WayspotAnchorResolvedArgs_t07549FD9B7D6968946359F9800B0A0329CD6E38D* L_0 = ___left0;
		WayspotAnchorResolvedArgs_t07549FD9B7D6968946359F9800B0A0329CD6E38D* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Security.Cryptography.X509Certificates.X509ChainStatus>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisX509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_mFC31D2F89EC6E395F2D3DDE67C55FBDDD492B069_gshared (X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* ___left0, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* ___right1, const RuntimeMethod* method) 
{
	{
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* L_0 = ___left0;
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Niantic.ARDK.AR._CppAddressAndScale>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_Tis_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003_m1D8E87D24F891EF7DDB27D63495E1494E9442C9D_gshared (_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003* ___left0, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003* ___right1, const RuntimeMethod* method) 
{
	{
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003* L_0 = ___left0;
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.BeforeRenderHelper/OrderBlock>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m85010A41B4DE43F32D5B5090F42B1A68BA587B36_gshared (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* ___left0, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* ___right1, const RuntimeMethod* method) 
{
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_0 = ___left0;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.UIR.BitmapAllocator32/Page>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisPage_t04FE552A388BF55B12C8868E19589136957E00A5_mED4C934658E599649C532BE6E3E8C1D668667D98_gshared (Page_t04FE552A388BF55B12C8868E19589136957E00A5* ___left0, Page_t04FE552A388BF55B12C8868E19589136957E00A5* ___right1, const RuntimeMethod* method) 
{
	{
		Page_t04FE552A388BF55B12C8868E19589136957E00A5* L_0 = ___left0;
		Page_t04FE552A388BF55B12C8868E19589136957E00A5* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.Camera/RenderRequest>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisRenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_m72169E1441E871B449CDC3578593F4F5C9A3DFB0_gshared (RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A* ___left0, RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A* ___right1, const RuntimeMethod* method) 
{
	{
		RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A* L_0 = ___left0;
		RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.FocusController/FocusedElement>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisFocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_m1B60202721184F322A71948959696C4CBCE2DAE5_gshared (FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF* ___left0, FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF* ___right1, const RuntimeMethod* method) 
{
	{
		FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF* L_0 = ___left0;
		FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Niantic.ARDK.Utilities.BinarySerialization.GlobalSerializer/_SerializerInfo>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_Tis_SerializerInfo_t093E1527322CD37C49786F58CB261EEC6C7261E6_m3E6319C9E4B6F633FA0190BE43DFFA84D692317E_gshared (_SerializerInfo_t093E1527322CD37C49786F58CB261EEC6C7261E6* ___left0, _SerializerInfo_t093E1527322CD37C49786F58CB261EEC6C7261E6* ___right1, const RuntimeMethod* method) 
{
	{
		_SerializerInfo_t093E1527322CD37C49786F58CB261EEC6C7261E6* L_0 = ___left0;
		_SerializerInfo_t093E1527322CD37C49786F58CB261EEC6C7261E6* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_Tis_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0_m6CE61FD256970D39B1EBC008FDF254F380B3F766_gshared (_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0* ___left0, _NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0* ___right1, const RuntimeMethod* method) 
{
	{
		_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0* L_0 = ___left0;
		_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.InternalTreeView/TreeViewItemWrapper>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisTreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_mB6FE5BA6BEF2FC657B14F6153B086B312103BEC6_gshared (TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F* ___left0, TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F* ___right1, const RuntimeMethod* method) 
{
	{
		TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F* L_0 = ___left0;
		TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_Tis_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B_mDBFFA04A07325B517C0D835924A386FF0C884680_gshared (_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B* ___left0, _NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B* ___right1, const RuntimeMethod* method) 
{
	{
		_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B* L_0 = ___left0;
		_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Text.RegularExpressions.RegexCharClass/SingleRange>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_mA49800B47A0E4E88CD5339DA32235F0C002428B0_gshared (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* ___left0, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* ___right1, const RuntimeMethod* method) 
{
	{
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* L_0 = ___left0;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.UIR.RenderChain/RenderNodeData>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisRenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_mAC3A5EE61665F3DFDE8B6BE0AAF10C423706F211_gshared (RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE* ___left0, RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE* ___right1, const RuntimeMethod* method) 
{
	{
		RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE* L_0 = ___left0;
		RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.TemplateAsset/AttributeOverride>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisAttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_m8B77CD210CBA70BC8A5A44F2A2CFAD97D2710D28_gshared (AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF* ___left0, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF* ___right1, const RuntimeMethod* method) 
{
	{
		AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF* L_0 = ___left0;
		AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.TextCore.Text.TextSettings/FontReferenceMap>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisFontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_m79C471E31C8144B52A0E5CF9D18DCE8D4CACD2DD_gshared (FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831* ___left0, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831* ___right1, const RuntimeMethod* method) 
{
	{
		FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831* L_0 = ___left0;
		FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.UIR.TextureBlitter/BlitInfo>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisBlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_mB0C629E8EDE547FA5155E7FBF58B2A572294D482_gshared (BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357* ___left0, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357* ___right1, const RuntimeMethod* method) 
{
	{
		BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357* L_0 = ___left0;
		BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisFrame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD_m6631DF1C4A35167517C9308F6BFA41CD63D2D3F6_gshared (Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD* ___left0, Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD* ___right1, const RuntimeMethod* method) 
{
	{
		Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD* L_0 = ___left0;
		Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.TextureRegistry/TextureInfo>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisTextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_m1DEC3D29B9FF60965B96400D2ACD1E0430DA76CE_gshared (TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B* ___left0, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B* ___right1, const RuntimeMethod* method) 
{
	{
		TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B* L_0 = ___left0;
		TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.TreeView/TreeViewItemWrapper>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisTreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_mCD9845FB0F62DCEE236E7B7A4BC7E14BD8CDAAA7_gshared (TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE* ___left0, TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE* ___right1, const RuntimeMethod* method) 
{
	{
		TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE* L_0 = ___left0;
		TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/Entry>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisEntry_tB8765CA56422E2C92887314844384843688DCB9F_m9070207A00425FCDA5075D59D183C3EC97A31901_gshared (Entry_tB8765CA56422E2C92887314844384843688DCB9F* ___left0, Entry_tB8765CA56422E2C92887314844384843688DCB9F* ___right1, const RuntimeMethod* method) 
{
	{
		Entry_tB8765CA56422E2C92887314844384843688DCB9F* L_0 = ___left0;
		Entry_tB8765CA56422E2C92887314844384843688DCB9F* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.UIR.UIRenderDevice/AllocToFree>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisAllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_m53C552D4E0A0281C962BC96228ACB64D135CD886_gshared (AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8* ___left0, AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8* ___right1, const RuntimeMethod* method) 
{
	{
		AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8* L_0 = ___left0;
		AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisAllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_m16576A623B017469576470A46F121DD87D9F24F8_gshared (AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512* ___left0, AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512* ___right1, const RuntimeMethod* method) 
{
	{
		AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512* L_0 = ___left0;
		AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UnitySynchronizationContext/WorkRequest>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mEC6CE53A8B998893796D4A6AD37469074A262D4A_gshared (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* ___left0, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* ___right1, const RuntimeMethod* method) 
{
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_0 = ___left0;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.VisualTreeAsset/SlotDefinition>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_m2640CB73C2CC9CACDAAD43C55B56BEFB8A3055AD_gshared (SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8* ___left0, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8* ___right1, const RuntimeMethod* method) 
{
	{
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8* L_0 = ___left0;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.VisualTreeAsset/SlotUsageEntry>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_mA0AB76BE22DE14406619577351B06194C9AD4B1A_gshared (SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76* ___left0, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76* ___right1, const RuntimeMethod* method) 
{
	{
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76* L_0 = ___left0;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UIElements.VisualTreeAsset/UsingEntry>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_m5BD5158A468E5904BCCA825E26FAC6B04E7A88DB_gshared (UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484* ___left0, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484* ___right1, const RuntimeMethod* method) 
{
	{
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484* L_0 = ___left0;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Niantic.ARDK.VPSCoverage.GeoserviceMessages._CoverageAreasResponse/VpsCoverageArea>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisVpsCoverageArea_t5A693A0A8A5278B21913814006A678050F4E27AE_mD84A609EEA4AA39445FDE7DAD611B219C86CFC16_gshared (VpsCoverageArea_t5A693A0A8A5278B21913814006A678050F4E27AE* ___left0, VpsCoverageArea_t5A693A0A8A5278B21913814006A678050F4E27AE* ___right1, const RuntimeMethod* method) 
{
	{
		VpsCoverageArea_t5A693A0A8A5278B21913814006A678050F4E27AE* L_0 = ___left0;
		VpsCoverageArea_t5A693A0A8A5278B21913814006A678050F4E27AE* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Niantic.ARDK.Utilities._GcObserver/_WeakAction>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_Tis_WeakAction_tBBC02C4CAC557DF6A2BD33A029BD8F24C09FC2A3_mEABCA9B71AF4BE50CA428AFB8E5D049BEEC08E08_gshared (_WeakAction_tBBC02C4CAC557DF6A2BD33A029BD8F24C09FC2A3* ___left0, _WeakAction_tBBC02C4CAC557DF6A2BD33A029BD8F24C09FC2A3* ___right1, const RuntimeMethod* method) 
{
	{
		_WeakAction_tBBC02C4CAC557DF6A2BD33A029BD8F24C09FC2A3* L_0 = ___left0;
		_WeakAction_tBBC02C4CAC557DF6A2BD33A029BD8F24C09FC2A3* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Niantic.ARDK.VirtualStudio.Remote._RemoteConnection/BufferedMessage>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisBufferedMessage_tC023785A5DAFFBA5A1EAED47A9AD472D6CD50CDD_mE300D3045C2AE75FEAF7E90158ADEC9ABB0B3723_gshared (BufferedMessage_tC023785A5DAFFBA5A1EAED47A9AD472D6CD50CDD* ___left0, BufferedMessage_tC023785A5DAFFBA5A1EAED47A9AD472D6CD50CDD* ___right1, const RuntimeMethod* method) 
{
	{
		BufferedMessage_tC023785A5DAFFBA5A1EAED47A9AD472D6CD50CDD* L_0 = ___left0;
		BufferedMessage_tC023785A5DAFFBA5A1EAED47A9AD472D6CD50CDD* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Linq.Expressions.Interpreter.InstructionList/DebugView/InstructionView>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisInstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_mEAB91423AA15AAF10A8570B6546F4DB89FD822A6_gshared (InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D* ___left0, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D* ___right1, const RuntimeMethod* method) 
{
	{
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D* L_0 = ___left0;
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// T System.Runtime.CompilerServices.Unsafe::Read<System.Numerics.Vector`1<System.UInt16>>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Unsafe_Read_TisVector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_mE7FD30B8ED7259EC7CF1DD9978909EA43BFA52E9_gshared (void* ___source0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = (*(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::Read<System.Object>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Unsafe_Read_TisRuntimeObject_mE4C9D6B542D202B075488A0B484D583E63B175EF_gshared (void* ___source0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<System.Numerics.Vector`1<System.UInt16>>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Unsafe_ReadUnaligned_TisVector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_m19B8BC6045269AC7201FDEEE8BBBC7E0B8EBEA72_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = (*(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<System.Int32>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_ReadUnaligned_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m385DFBBD0FD3CF8B72069D142B8AAA375DB6FC54_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		int32_t L_1 = (*(int32_t*)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<System.Int64>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Unsafe_ReadUnaligned_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mE1F293E3926D2994B755924FDBBE85AE72C38F07_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		int64_t L_1 = (*(int64_t*)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<System.Object>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Unsafe_ReadUnaligned_TisRuntimeObject_mCA74A4B8D120C37E493CBECDC3CD7310B0403435_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<System.UInt16>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Unsafe_ReadUnaligned_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE444B74BEB5C615DAB1AEFB35D4159A4A7B5723C_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		uint16_t L_1 = (*(uint16_t*)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<System.UInt32>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Unsafe_ReadUnaligned_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m525EE4C96BF37CA9D8ADDC9969A115C4ED48F009_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		uint32_t L_1 = (*(uint32_t*)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<System.UIntPtr>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t Unsafe_ReadUnaligned_TisUIntPtr_t_m954A0043ABD89608CAD7C7CEF794530C1952981B_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		uintptr_t L_1 = (*(uintptr_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.Numerics.Vector`1<System.UInt16>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisVector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_mF7F8CE507D0D65CE769DD205191AC25A8057EAAC_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489);
		return (int32_t)L_0;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEAF4DFAD570F6A0F25E17C34E9AAA9131B96AC9C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.Char>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m234AEF941FF3D72B5570DBE807B3AFEB3343906A_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Il2CppChar);
		return (int32_t)L_0;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m29CFE4DF51CADD200D23D7093D4C4AE7BE8747BD_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisRuntimeObject_mA22951023930DCF5FB04D26D4F61AFC71F5C364E_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(RuntimeObject*);
		return (int32_t)L_0;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.UInt16>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m33F5A3F372CCE962897122AC2428EF23303140A7_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint16_t);
		return (int32_t)L_0;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0E93389411F91A993ED18D746F4FD1AE8FF2780B_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint32_t);
		return (int32_t)L_0;
	}
}
// System.Void System.Runtime.CompilerServices.Unsafe::WriteUnaligned<System.Object>(System.Byte&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_WriteUnaligned_TisRuntimeObject_mEDA97602DC0EB8DC2665E08DAF87B32B5DC37396_gshared (uint8_t* ___destination0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___destination0;
		RuntimeObject* L_1 = ___value1;
		*(RuntimeObject**)L_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)L_1);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.Unsafe::WriteUnaligned<System.UInt32>(System.Byte&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_WriteUnaligned_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m7B733AB630A479ABA40D0073873EE68B3E6496EB_gshared (uint8_t* ___destination0, uint32_t ___value1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___destination0;
		uint32_t L_1 = ___value1;
		*(uint32_t*)L_0 = L_1;
		return;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Rendering.BatchVisibility>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_m07CC5D724FB51097BD1C26AF28FC5168FE713CFC_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF03E614161BF995D77845FFA04D22A72E8732A89_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Color>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m5867683CC34E6B1B99FAC622E00D4130EB17684E_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Color32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m8B17D8D6F4DC1BAFEE28AD46E84F0AC6FB668030_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.UIElements.UIR.DrawBufferRange>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisDrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4_m215AAE884BAC74B43A7E5D079D210CA1CCB61623_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.UIElements.UIR.GfxUpdateBufferRange>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisGfxUpdateBufferRange_tC47258BCB472B0727B4FCE21A2A53506644C1A97_m025F45CD26DD2B180F68B916D4D50BE3CE92A6AC_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Int16>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m95AFE2FBF2E3B5F5934EF9DE59DC4F93BFB04D91_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAC90D2724553DBDDB2A54AEC2892E8FC47A67031_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Experimental.GlobalIllumination.LightDataGI>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mDD9F31966971943321FED873DFE368772832FDBC_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.ModifiableContactPair>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m6F9345EB658596C7C348B419F5D1AA275AD7D727_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Plane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mAE1CDD7C47AFF17EE65CE931B12ABAAC7EB95B7B_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3C6F9E1EDFDCC183AC6659621F76493999BCEE3D_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.UIElements.TextVertex>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_m1168AF81092523FB280C60369857EF523ED98AF1_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.UIElements.UIR.Transform3x4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisTransform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F_m830A211579408D52BA331D3E35DA889363CB313F_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.UInt16>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mC29212C619B3A7E60488E17A827AD1C101B75822_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m3F87481E31B4983F8D648729546A1D65957B0D83_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1AE6CA5952753D5D01563544445DEF58A9175B08_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Vector4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m19DAF130AA28E3DDE2FCBB507846EB9718383329_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.UIElements.Vertex>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mE6A898CD608ED8377F478E96B64D7E4C5ABF15D1_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility::EnumEquals<System.Int32Enum>(T,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeUtility_EnumEquals_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m47586ED10DC892FAAC599C0DC5A3E8CF3EBCA31A_gshared (int32_t ___lhs0, int32_t ___rhs1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___lhs0;
		int32_t L_1 = ___rhs1;
		return (bool)((((int64_t)((int64_t)L_0)) == ((int64_t)((int64_t)L_1)))? 1 : 0);
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::EnumToInt<System.Int32Enum>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_EnumToInt_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m7FC8FD5E40D6A1FAA8F6E3BBD8237C3D8877A6E6_gshared (int32_t ___enumValue0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		((  void (*) (int32_t*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___enumValue0), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_0 = V_0;
		V_1 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_1 = V_1;
		return L_1;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::InternalEnumToInt<System.Int32Enum>(T&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalEnumToInt_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m221CD8D61148E4A9CE89F54D9C15538EAAC0073A_gshared (int32_t* ___enumValue0, int32_t* ___intValue1, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___intValue1;
		int32_t* L_1 = ___enumValue0;
		int32_t L_2 = *((int32_t*)L_1);
		*((int32_t*)L_0) = (int32_t)L_2;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::InternalEnumToInt<System.Object>(T&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalEnumToInt_TisRuntimeObject_mEF15526464EE65366356E21094F2C1EDB07C68F9_gshared (RuntimeObject** ___enumValue0, int32_t* ___intValue1, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___intValue1;
		RuntimeObject** L_1 = ___enumValue0;
		int32_t L_2 = *((int32_t*)L_1);
		*((int32_t*)L_0) = (int32_t)L_2;
		return;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA UnsafeUtility_ReadArrayElement_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_mD1B12BC135C7549B65C863F3F39D1A3A050E236E_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA);
		BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA L_3 = (*(BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Byte>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m62EF4DB483402313C34FBC027E1B1C6244BCB099_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Color>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UnsafeUtility_ReadArrayElement_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mDC26C51F9AC768B4131DB6E17E6F8B1BB35DA2A3_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = (*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Color32>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B UnsafeUtility_ReadArrayElement_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mDF7C1B760DD64FE2816BC34336FEFFB95348A063_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_3 = (*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.UIElements.UIR.DrawBufferRange>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4 UnsafeUtility_ReadArrayElement_TisDrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4_mDB924F358D7DB3EF03D603E110F56A04C7224445_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(DrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4);
		DrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4 L_3 = (*(DrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.UIElements.UIR.GfxUpdateBufferRange>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GfxUpdateBufferRange_tC47258BCB472B0727B4FCE21A2A53506644C1A97 UnsafeUtility_ReadArrayElement_TisGfxUpdateBufferRange_tC47258BCB472B0727B4FCE21A2A53506644C1A97_m267840F6133028A01BCBFB1F6C54F7411C1A5901_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(GfxUpdateBufferRange_tC47258BCB472B0727B4FCE21A2A53506644C1A97);
		GfxUpdateBufferRange_tC47258BCB472B0727B4FCE21A2A53506644C1A97 L_3 = (*(GfxUpdateBufferRange_tC47258BCB472B0727B4FCE21A2A53506644C1A97*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Int16>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t UnsafeUtility_ReadArrayElement_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m7336EEF327EB65ED8F5730409CA28C2F1D52F496_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int16_t);
		int16_t L_3 = (*(int16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Int32>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC519E0F8059BBB99CB137FDA901BC6C0761A40A_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 UnsafeUtility_ReadArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mA3A295126D79E3C78AE62430341208E962A9FD17_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_3 = (*(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.ModifiableContactPair>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 UnsafeUtility_ReadArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mB7D854609AF2F2527E776AA2A68959A06F818ED9_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_3 = (*(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Object>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeUtility_ReadArrayElement_TisRuntimeObject_m3934FD1CF24F2FA559FF1E1B68977A7BDE16ADF8_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject*);
		RuntimeObject* L_3 = (*(RuntimeObject**)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Plane>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C UnsafeUtility_ReadArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC24229ADE94CB475E66818897BF1FD1618C547CA_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_3 = (*(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Single>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnsafeUtility_ReadArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m620A354B1C65964526A473BFA18DB2670E74C44C_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(float);
		float L_3 = (*(float*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.UIElements.TextVertex>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3 UnsafeUtility_ReadArrayElement_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_mF4AEFBD4A2D37C7AEE65B42C4BA1664FE143A7A6_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3);
		TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3 L_3 = (*(TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.UIElements.UIR.Transform3x4>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F UnsafeUtility_ReadArrayElement_TisTransform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F_m13666808DCDAF77AF9A6049D56559DB3299E1467_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F);
		Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F L_3 = (*(Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.UInt16>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mECAA1FA8E0ADE1FAC171FED4C0C34F602D490FAF_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = (*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.UInt32>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UnsafeUtility_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m707FE47E25CCF8779EACF56BD89D59827139D8F8_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint32_t);
		uint32_t L_3 = (*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Vector3>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnsafeUtility_ReadArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m512748E94A4B0323F86A5DDF93073DA2729847EB_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Vector4>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B78BA932DFCFC6F730CDD84DCBD8C431C0235D9_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.UIElements.Vertex>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 UnsafeUtility_ReadArrayElement_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m797B4A73798C16D0ADC717E02D81677936A9729F_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_3 = (*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<UnityEngine.UIElements.UIR.DrawBufferRange>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4 UnsafeUtility_ReadArrayElementWithStride_TisDrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4_mD37227A0516A42D0C3216EEE777222CA612D474F_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		DrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4 L_3 = (*(DrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<UnityEngine.UIElements.UIR.GfxUpdateBufferRange>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GfxUpdateBufferRange_tC47258BCB472B0727B4FCE21A2A53506644C1A97 UnsafeUtility_ReadArrayElementWithStride_TisGfxUpdateBufferRange_tC47258BCB472B0727B4FCE21A2A53506644C1A97_mF9EF728A14AA91707191753D405A2AE17094355D_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		GfxUpdateBufferRange_tC47258BCB472B0727B4FCE21A2A53506644C1A97 L_3 = (*(GfxUpdateBufferRange_tC47258BCB472B0727B4FCE21A2A53506644C1A97*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.Object>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeUtility_ReadArrayElementWithStride_TisRuntimeObject_mD8B01EC113910AB764688B9F81AD0C898A2C8908_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		RuntimeObject* L_3 = (*(RuntimeObject**)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<UnityEngine.UIElements.UIR.Transform3x4>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F UnsafeUtility_ReadArrayElementWithStride_TisTransform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F_m725198ADB8F0E6D32FA2F372EEE39BCE319CAD43_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F L_3 = (*(Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.UInt16>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UnsafeUtility_ReadArrayElementWithStride_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m5C0F4DF1ECF6ADCFCFCFF935728CE8E088360DF3_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint16_t L_3 = (*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<UnityEngine.Vector4>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtility_ReadArrayElementWithStride_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mF7F2E0658EEDE1281394A07408CFF382F751D696_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<UnityEngine.UIElements.Vertex>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 UnsafeUtility_ReadArrayElementWithStride_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m68DCD72EC1A2AEDB60DE163A20FCA764F95CCBCB_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_3 = (*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.BatchVisibility>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t06B2AF48C49769AAD65F5E3F53EA9C54BFB10F00_m798060D503E2DC4F2622E157417CCD5D6D68AB63_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t06B2AF48C49769AAD65F5E3F53EA9C54BFB10F00);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Byte>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2_m1BB2068B4AF7E9272F5D17E175EC6F20E851CDB9_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Color>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDD05A3FC824A309846DFDD7539C19F11BB681485_m47999D9797BEC5CD8420C0BC7167D76676DDA1D5_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tDD05A3FC824A309846DFDD7539C19F11BB681485);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Color32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t26A3226821AB86486949E2EEA83A5BE120465E3D_m071C0EF72DD39E1C0D60D778848F2E5ADDDB1299_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t26A3226821AB86486949E2EEA83A5BE120465E3D);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.UIElements.UIR.DrawBufferRange>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t3F15C977CB75F6273144B3EB4A070152979E3542_m4820FBE202DF36BA42E2902D4050190D2E27EBAF_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t3F15C977CB75F6273144B3EB4A070152979E3542);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.UIElements.UIR.GfxUpdateBufferRange>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD52B3A8A6905ECEC0B9C3B4D1828784E75D7FE88_mD04B0E3220BDBA74C420BE71390F092CB260C735_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tD52B3A8A6905ECEC0B9C3B4D1828784E75D7FE88);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int16>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t46EF2DCDECD3BAA9051DE389E6771288CEB52D13_m090D3B585AA468949F6B4BC97409B8BFB62FCB26_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t46EF2DCDECD3BAA9051DE389E6771288CEB52D13);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3_m0CECBD6EB03094967518FB804572141A860AB730_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18_m192EEC588293DB3AA11A93E7B0179B5BEEE64139_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.ModifiableContactPair>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD67A48EC63F59A3B0822645B10F6057BB0B1A6FB_m3A1405E2A4345B3451B054746F52852B3E2B1138_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tD67A48EC63F59A3B0822645B10F6057BB0B1A6FB);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Plane>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328_mF937C2C12D474F7AE7CFB6AC652CC690A28DFDC0_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Single>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8B2704248131E32283F29FE1808F75EF8FB18A4A_m9BE58B2BBF9DA298D00D05144206DCE4AC10A281_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t8B2704248131E32283F29FE1808F75EF8FB18A4A);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.UIElements.TextVertex>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD213CBFA28C6ED84BFB52825C5EDC3D52ADE5B18_m9692592649D61902F7F810F63B58F11E3D5BA4F7_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tD213CBFA28C6ED84BFB52825C5EDC3D52ADE5B18);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.UIElements.UIR.Transform3x4>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6867F50FD3853DD4CA4DD96AD88FE1A614E678D2_mAFAED8BA8276D52FAA0A257E0307C10AB3B94252_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6867F50FD3853DD4CA4DD96AD88FE1A614E678D2);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt16>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t82117C0F9F1FB124A9CEB4215A5BB62387D6E5D2_m41E8DDFDA28E48F303CF30D12AA5EFBD966CEB3F_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t82117C0F9F1FB124A9CEB4215A5BB62387D6E5D2);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1D98A9CFF0C9114AE482F0AA11708126EC3AB019_mB186A250F9ABBD6EA602942CF1B0370A6D3464AB_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t1D98A9CFF0C9114AE482F0AA11708126EC3AB019);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector3>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269_m6783E1BAA6A1DE172D9499EBEE2EBC7E37F66FBC_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector4>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2_m400B5017B785526C64A53B92FD747CF00911D846_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.UIElements.Vertex>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t7A2C4AA30B2C9EC8415A83A5A9B280DBF11AB9AF_mE3249013083EE8416FBE752CBA6392BAAB76B0F1_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t7A2C4AA30B2C9EC8415A83A5A9B280DBF11AB9AF);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.BatchVisibility>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_m0C2D5AEA2098B5AA4CD35E98F4534C6CAFB7FAF4_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5439440481B764D17A028D20239A1223C256B2EC_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Color>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m368B07FF7DA8576002862EC3A4BE7FDCCA5B660A_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Color32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5281DD33141D340D84276B8F49EBD43E6D656E47_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.UIElements.UIR.DrawBufferRange>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisDrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4_m823422A9041E022CC73656F03B20C464D8664663_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(DrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.UIElements.UIR.GfxUpdateBufferRange>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisGfxUpdateBufferRange_tC47258BCB472B0727B4FCE21A2A53506644C1A97_mA641A5D74C608735D83A9D39CE103B8D5E76B179_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(GfxUpdateBufferRange_tC47258BCB472B0727B4FCE21A2A53506644C1A97);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Int16>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m61E4E059B14C90C6B4EF06ACA75C3F9F110B6EE2_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int16_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5AC9EB77585D6151D2321C1F1671E99E6505C29E_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Experimental.GlobalIllumination.LightDataGI>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m412B236A366F36076AAA5807D2CCF0966CC2C99A_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.ModifiableContactPair>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mE1C4ACDD183C7EAE81B93ADD8002852EEEF456E8_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Plane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mFC0D85A137C4D75407268FE6D616C339A35CFA26_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDC54EC07B41A28C4AD65972431997C3E3B6F6232_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.UIElements.TextVertex>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_m039A24F9D07F9513076C3F4D0A4F3DB8F14E720F_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.UIElements.UIR.Transform3x4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTransform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F_mB4B188E6F7178686EDE48F52550903F5C8631602_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.UInt16>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAF63E97D2056B84CDCB6966AD5A4C67B91117D0A_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint16_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8505B3082C7CFA137313C82767C840AE02D5B8B1_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFE0E1D1A88265D93505FF8E0085682FEC8A76760_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Vector4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4FF28C686A0979A117552001662758B3B640956C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.UIElements.Vertex>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mB2D55F04C69E061E61E22051029DC802E5B79ADB_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		return (int32_t)L_0;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_m5870A4ABF63FAAF17B94871B8574D5F76FF88653_gshared (void* ___destination0, int32_t ___index1, BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA);
		BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA L_3 = ___value2;
		*(BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Byte>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m83A5B89E51882C47758A100BB36F8EDF3CCE5AEC_gshared (void* ___destination0, int32_t ___index1, uint8_t ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___value2;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Color>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7AF321BAF3926C49F00C0D9D91B7E8FCA88A5039_gshared (void* ___destination0, int32_t ___index1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___value2;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Color32>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m63D3D4D5843EE58FCE9BE95940AF8417E36FD805_gshared (void* ___destination0, int32_t ___index1, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_3 = ___value2;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.UIElements.UIR.DrawBufferRange>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisDrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4_mABEB5621368C9B3825632B329FF886E0E1B67132_gshared (void* ___destination0, int32_t ___index1, DrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(DrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4);
		DrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4 L_3 = ___value2;
		*(DrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.UIElements.UIR.GfxUpdateBufferRange>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisGfxUpdateBufferRange_tC47258BCB472B0727B4FCE21A2A53506644C1A97_mF2A6A54C0460B3364A9E78051B09707585233816_gshared (void* ___destination0, int32_t ___index1, GfxUpdateBufferRange_tC47258BCB472B0727B4FCE21A2A53506644C1A97 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(GfxUpdateBufferRange_tC47258BCB472B0727B4FCE21A2A53506644C1A97);
		GfxUpdateBufferRange_tC47258BCB472B0727B4FCE21A2A53506644C1A97 L_3 = ___value2;
		*(GfxUpdateBufferRange_tC47258BCB472B0727B4FCE21A2A53506644C1A97*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Int16>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC1F5BC15E9D89CD9FCE464C9543A1C6617E2AFE2_gshared (void* ___destination0, int32_t ___index1, int16_t ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int16_t);
		int16_t L_3 = ___value2;
		*(int16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Int32>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22615F03667154E3694602654C53574FE60392F0_gshared (void* ___destination0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = ___value2;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m7EB32F2E11CA2A9695D57784B491E35AAC1852DC_gshared (void* ___destination0, int32_t ___index1, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_3 = ___value2;
		*(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.ModifiableContactPair>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mA5D150AE9D8517CE2B2A1D30AC04791346C80F3E_gshared (void* ___destination0, int32_t ___index1, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_3 = ___value2;
		*(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Object>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisRuntimeObject_mA073C31C52093C52E7EB7237E67D392CE60C1F54_gshared (void* ___destination0, int32_t ___index1, RuntimeObject* ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject*);
		RuntimeObject* L_3 = ___value2;
		*(RuntimeObject**)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), (void*)L_3);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Plane>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m153D282970D4A00F77734E7C974CC052E4BC9889_gshared (void* ___destination0, int32_t ___index1, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_3 = ___value2;
		*(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Single>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCC82D066EA98DE5D307EBCDB576FD5EE6DFCEEC9_gshared (void* ___destination0, int32_t ___index1, float ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(float);
		float L_3 = ___value2;
		*(float*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.UIElements.TextVertex>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_mE483B1BA5BFD1927125A6CE739DCC600CA8D20B4_gshared (void* ___destination0, int32_t ___index1, TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3);
		TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3 L_3 = ___value2;
		*(TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.UIElements.UIR.Transform3x4>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTransform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F_m004FD5D76BC4612A674AC05AC0E6711FDE9E4A32_gshared (void* ___destination0, int32_t ___index1, Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F);
		Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F L_3 = ___value2;
		*(Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.UInt16>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m4A749B0D3DF862541754B5A86EF3042CA55ED482_gshared (void* ___destination0, int32_t ___index1, uint16_t ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = ___value2;
		*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.UInt32>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m02913AF78BF712C3451EEDEA39872D859DE4247B_gshared (void* ___destination0, int32_t ___index1, uint32_t ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint32_t);
		uint32_t L_3 = ___value2;
		*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Vector3>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2725F25F703F388E8F7E0E6102968A89419D2472_gshared (void* ___destination0, int32_t ___index1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___value2;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Vector4>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mBB0C6AAC5624AA408D248E660CC73180A37FB7C9_gshared (void* ___destination0, int32_t ___index1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___value2;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.UIElements.Vertex>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m67DCD86AAA57B9F85E92147A41519345EFF7A9E9_gshared (void* ___destination0, int32_t ___index1, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_3 = ___value2;
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<UnityEngine.UIElements.UIR.DrawBufferRange>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisDrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4_m57A6D4DA9E89F4BE2AE62B20539F5B01E2F192B7_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, DrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4 ___value3, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		DrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4 L_3 = ___value3;
		*(DrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<UnityEngine.UIElements.UIR.GfxUpdateBufferRange>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisGfxUpdateBufferRange_tC47258BCB472B0727B4FCE21A2A53506644C1A97_m874AAF984C29FAE26D0BC5D1D454B0ED3D1671BE_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, GfxUpdateBufferRange_tC47258BCB472B0727B4FCE21A2A53506644C1A97 ___value3, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		GfxUpdateBufferRange_tC47258BCB472B0727B4FCE21A2A53506644C1A97 L_3 = ___value3;
		*(GfxUpdateBufferRange_tC47258BCB472B0727B4FCE21A2A53506644C1A97*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<System.Object>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisRuntimeObject_m9819A6D6AAB517F827CF85FB4DBA94FD99356E03_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, RuntimeObject* ___value3, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		RuntimeObject* L_3 = ___value3;
		*(RuntimeObject**)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))), (void*)L_3);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<UnityEngine.UIElements.UIR.Transform3x4>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisTransform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F_m939F8C0DDD24A1BF75F3A16D965BF85F8ECD71FB_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F ___value3, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F L_3 = ___value3;
		*(Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<System.UInt16>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mB2E58173A605B68E5FFE120A53D3D7ADD725EF65_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, uint16_t ___value3, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint16_t L_3 = ___value3;
		*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<UnityEngine.Vector4>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m8F8173BE4670FCEB2DF75193E14CD02C22537A4D_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value3, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___value3;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<UnityEngine.UIElements.Vertex>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m85504862E9E760C7030D5F880DF7AA5F447DA9A4_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 ___value3, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_3 = ___value3;
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::SetVectorArray<UnityEngine.UIElements.UIR.Transform3x4>(UnityEngine.MaterialPropertyBlock,System.Int32,Unity.Collections.NativeSlice`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetVectorArray_TisTransform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F_m67EE8F8BE9677CD0DE886FCB4EAE7DD82CBFD561_gshared (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___props0, int32_t ___name1, NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370 ___vector4s2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = NativeSlice_1_get_Length_mC069C9254C3F61C678293E03E3E7C51F245F52E9((&___vector4s2), il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = NativeSlice_1_get_Stride_mE29B800705645CDD49B576BB3B9B328811F27C90_inline((&___vector4s2), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_0, L_1))/((int32_t)16)));
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_2 = ___props0;
		int32_t L_3 = ___name1;
		NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370 L_4 = ___vector4s2;
		void* L_5;
		L_5 = ((  void* (*) (NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_6), L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Utility_SetVectorArray_m6C8F08342C9D3D33A183B29536DA13B07E2763FA(L_2, L_3, L_6, L_7, NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::SetVectorArray<UnityEngine.Vector4>(UnityEngine.MaterialPropertyBlock,System.Int32,Unity.Collections.NativeSlice`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetVectorArray_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B7249321B3E0FA74B668FDAB3DCB055ABE7E750_gshared (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___props0, int32_t ___name1, NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F ___vector4s2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = NativeSlice_1_get_Length_mED822A5A5476BEBA72E429C395644A7B41F78F50((&___vector4s2), il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = NativeSlice_1_get_Stride_m2BC6AD2264EE2D02A38D29E30D382DEA9B5A9E29_inline((&___vector4s2), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_0, L_1))/((int32_t)16)));
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_2 = ___props0;
		int32_t L_3 = ___name1;
		NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F L_4 = ___vector4s2;
		void* L_5;
		L_5 = ((  void* (*) (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_6), L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Utility_SetVectorArray_m6C8F08342C9D3D33A183B29536DA13B07E2763FA(L_2, L_3, L_6, L_7, NULL);
		return;
	}
}
// System.Void Niantic.ARDK.Extensions.Gameboard.Utils::InsertIntoSortedList<System.Object>(System.Collections.Generic.IList`1<T>,T,System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_InsertIntoSortedList_TisRuntimeObject_mBD4937FA5424594F4970C278F2D7B7F5AC252787_gshared (RuntimeObject* ___list0, RuntimeObject* ___value1, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___comparison2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// var startIndex = 0;
		V_0 = 0;
		// var endIndex = list.Count;
		RuntimeObject* L_0 = ___list0;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, il2cpp_rgctx_data(method->rgctx_data, 0), (RuntimeObject*)L_0);
		V_1 = L_1;
		goto IL_0043;
	}

IL_000b:
	{
		// var windowSize = endIndex - startIndex;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		// var middleIndex = startIndex + (windowSize / 2);
		int32_t L_4 = V_0;
		int32_t L_5 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)(L_5/2))));
		// var middleValue = list[middleIndex];
		RuntimeObject* L_6 = ___list0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, il2cpp_rgctx_data(method->rgctx_data, 2), L_6, L_7);
		V_4 = L_8;
		// var compareToResult = comparison(middleValue, value);
		Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* L_9 = ___comparison2;
		RuntimeObject* L_10 = V_4;
		RuntimeObject* L_11 = ___value1;
		NullCheck(L_9);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 5));
		V_5 = L_12;
		// if (compareToResult == 0)
		int32_t L_13 = V_5;
		if (L_13)
		{
			goto IL_0036;
		}
	}
	{
		// list.Insert(middleIndex, value);
		RuntimeObject* L_14 = ___list0;
		int32_t L_15 = V_3;
		RuntimeObject* L_16 = ___value1;
		NullCheck(L_14);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(3 /* System.Void System.Collections.Generic.IList`1<System.Object>::Insert(System.Int32,T) */, il2cpp_rgctx_data(method->rgctx_data, 2), L_14, L_15, L_16);
		// return;
		return;
	}

IL_0036:
	{
		// if (compareToResult < 0)
		int32_t L_17 = V_5;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		// startIndex = middleIndex + 1;
		int32_t L_18 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_0043;
	}

IL_0041:
	{
		// endIndex = middleIndex;
		int32_t L_19 = V_3;
		V_1 = L_19;
	}

IL_0043:
	{
		// while (endIndex > startIndex)
		int32_t L_20 = V_1;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) > ((int32_t)L_21)))
		{
			goto IL_000b;
		}
	}
	{
		// list.Insert(startIndex, value);
		RuntimeObject* L_22 = ___list0;
		int32_t L_23 = V_0;
		RuntimeObject* L_24 = ___value1;
		NullCheck(L_22);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(3 /* System.Void System.Collections.Generic.IList`1<System.Object>::Insert(System.Int32,T) */, il2cpp_rgctx_data(method->rgctx_data, 2), L_22, L_23, L_24);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Extensions.Gameboard.Utils::InsertIntoSortedList<Niantic.ARDK.Extensions.Gameboard.PathFindingNode>(System.Collections.Generic.IList`1<T>,T,System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_InsertIntoSortedList_TisPathFindingNode_tFC227A083863C9D6848D8ACD481D67EE451D9DE7_mA6782416204E2BEE3EA1914C081C30B7223FDF22_gshared (RuntimeObject* ___list0, PathFindingNode_tFC227A083863C9D6848D8ACD481D67EE451D9DE7 ___value1, Comparison_1_t090057606C711FF20043797D76436B6D761417C0* ___comparison2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	PathFindingNode_tFC227A083863C9D6848D8ACD481D67EE451D9DE7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	{
		// var startIndex = 0;
		V_0 = 0;
		// var endIndex = list.Count;
		RuntimeObject* L_0 = ___list0;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Niantic.ARDK.Extensions.Gameboard.PathFindingNode>::get_Count() */, il2cpp_rgctx_data(method->rgctx_data, 0), (RuntimeObject*)L_0);
		V_1 = L_1;
		goto IL_0043;
	}

IL_000b:
	{
		// var windowSize = endIndex - startIndex;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		// var middleIndex = startIndex + (windowSize / 2);
		int32_t L_4 = V_0;
		int32_t L_5 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)(L_5/2))));
		// var middleValue = list[middleIndex];
		RuntimeObject* L_6 = ___list0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		PathFindingNode_tFC227A083863C9D6848D8ACD481D67EE451D9DE7 L_8;
		L_8 = InterfaceFuncInvoker1< PathFindingNode_tFC227A083863C9D6848D8ACD481D67EE451D9DE7, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Niantic.ARDK.Extensions.Gameboard.PathFindingNode>::get_Item(System.Int32) */, il2cpp_rgctx_data(method->rgctx_data, 2), L_6, L_7);
		V_4 = L_8;
		// var compareToResult = comparison(middleValue, value);
		Comparison_1_t090057606C711FF20043797D76436B6D761417C0* L_9 = ___comparison2;
		PathFindingNode_tFC227A083863C9D6848D8ACD481D67EE451D9DE7 L_10 = V_4;
		PathFindingNode_tFC227A083863C9D6848D8ACD481D67EE451D9DE7 L_11 = ___value1;
		NullCheck(L_9);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Comparison_1_t090057606C711FF20043797D76436B6D761417C0*, PathFindingNode_tFC227A083863C9D6848D8ACD481D67EE451D9DE7, PathFindingNode_tFC227A083863C9D6848D8ACD481D67EE451D9DE7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 5));
		V_5 = L_12;
		// if (compareToResult == 0)
		int32_t L_13 = V_5;
		if (L_13)
		{
			goto IL_0036;
		}
	}
	{
		// list.Insert(middleIndex, value);
		RuntimeObject* L_14 = ___list0;
		int32_t L_15 = V_3;
		PathFindingNode_tFC227A083863C9D6848D8ACD481D67EE451D9DE7 L_16 = ___value1;
		NullCheck(L_14);
		InterfaceActionInvoker2< int32_t, PathFindingNode_tFC227A083863C9D6848D8ACD481D67EE451D9DE7 >::Invoke(3 /* System.Void System.Collections.Generic.IList`1<Niantic.ARDK.Extensions.Gameboard.PathFindingNode>::Insert(System.Int32,T) */, il2cpp_rgctx_data(method->rgctx_data, 2), L_14, L_15, L_16);
		// return;
		return;
	}

IL_0036:
	{
		// if (compareToResult < 0)
		int32_t L_17 = V_5;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		// startIndex = middleIndex + 1;
		int32_t L_18 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_0043;
	}

IL_0041:
	{
		// endIndex = middleIndex;
		int32_t L_19 = V_3;
		V_1 = L_19;
	}

IL_0043:
	{
		// while (endIndex > startIndex)
		int32_t L_20 = V_1;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) > ((int32_t)L_21)))
		{
			goto IL_000b;
		}
	}
	{
		// list.Insert(startIndex, value);
		RuntimeObject* L_22 = ___list0;
		int32_t L_23 = V_0;
		PathFindingNode_tFC227A083863C9D6848D8ACD481D67EE451D9DE7 L_24 = ___value1;
		NullCheck(L_22);
		InterfaceActionInvoker2< int32_t, PathFindingNode_tFC227A083863C9D6848D8ACD481D67EE451D9DE7 >::Invoke(3 /* System.Void System.Collections.Generic.IList`1<Niantic.ARDK.Extensions.Gameboard.PathFindingNode>::Insert(System.Int32,T) */, il2cpp_rgctx_data(method->rgctx_data, 2), L_22, L_23, L_24);
		// }
		return;
	}
}
// T UnityEngine.UIElements.UxmlAttributeDescription::GetValueFromBag<System.Boolean>(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.Func`3<System.String,T,T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxmlAttributeDescription_GetValueFromBag_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m22751CE4DF8B8DDEFEBE8E79FDBB271B3B7AF62D_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___bag0, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___cc1, Func_3_t62BC9D925DCAC8F5784BA97C793F4E593496CDA7* ___converterFunc2, bool ___defaultValue3, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		Func_3_t62BC9D925DCAC8F5784BA97C793F4E593496CDA7* L_0 = ___converterFunc2;
		V_1 = (bool)((((RuntimeObject*)(Func_3_t62BC9D925DCAC8F5784BA97C793F4E593496CDA7*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UxmlAttributeDescription_GetValueFromBag_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m22751CE4DF8B8DDEFEBE8E79FDBB271B3B7AF62D_RuntimeMethod_var)));
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___bag0;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_4 = ___cc1;
		bool L_5;
		L_5 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_3, L_4, (&V_0), NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		Func_3_t62BC9D925DCAC8F5784BA97C793F4E593496CDA7* L_7 = ___converterFunc2;
		String_t* L_8 = V_0;
		bool L_9 = ___defaultValue3;
		NullCheck(L_7);
		bool L_10;
		L_10 = ((  bool (*) (Func_3_t62BC9D925DCAC8F5784BA97C793F4E593496CDA7*, String_t*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_3 = L_10;
		goto IL_0035;
	}

IL_0030:
	{
		bool L_11 = ___defaultValue3;
		V_3 = L_11;
		goto IL_0035;
	}

IL_0035:
	{
		bool L_12 = V_3;
		return L_12;
	}
}
// T UnityEngine.UIElements.UxmlAttributeDescription::GetValueFromBag<System.Int32>(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.Func`3<System.String,T,T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UxmlAttributeDescription_GetValueFromBag_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE6407D384CA016BA1904AE558D480299827A91F0_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___bag0, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___cc1, Func_3_t0620ECF6AB73866242850ABCE518B069D201DA79* ___converterFunc2, int32_t ___defaultValue3, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		Func_3_t0620ECF6AB73866242850ABCE518B069D201DA79* L_0 = ___converterFunc2;
		V_1 = (bool)((((RuntimeObject*)(Func_3_t0620ECF6AB73866242850ABCE518B069D201DA79*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UxmlAttributeDescription_GetValueFromBag_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE6407D384CA016BA1904AE558D480299827A91F0_RuntimeMethod_var)));
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___bag0;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_4 = ___cc1;
		bool L_5;
		L_5 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_3, L_4, (&V_0), NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		Func_3_t0620ECF6AB73866242850ABCE518B069D201DA79* L_7 = ___converterFunc2;
		String_t* L_8 = V_0;
		int32_t L_9 = ___defaultValue3;
		NullCheck(L_7);
		int32_t L_10;
		L_10 = ((  int32_t (*) (Func_3_t0620ECF6AB73866242850ABCE518B069D201DA79*, String_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_3 = L_10;
		goto IL_0035;
	}

IL_0030:
	{
		int32_t L_11 = ___defaultValue3;
		V_3 = L_11;
		goto IL_0035;
	}

IL_0035:
	{
		int32_t L_12 = V_3;
		return L_12;
	}
}
// T UnityEngine.UIElements.UxmlAttributeDescription::GetValueFromBag<System.Int32Enum>(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.Func`3<System.String,T,T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UxmlAttributeDescription_GetValueFromBag_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mB8752E3FCFBE10C58F06DF6F6275C822C4850645_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___bag0, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___cc1, Func_3_t538A8E697534A282316BC2DF71DE83E68360C8B9* ___converterFunc2, int32_t ___defaultValue3, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		Func_3_t538A8E697534A282316BC2DF71DE83E68360C8B9* L_0 = ___converterFunc2;
		V_1 = (bool)((((RuntimeObject*)(Func_3_t538A8E697534A282316BC2DF71DE83E68360C8B9*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UxmlAttributeDescription_GetValueFromBag_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mB8752E3FCFBE10C58F06DF6F6275C822C4850645_RuntimeMethod_var)));
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___bag0;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_4 = ___cc1;
		bool L_5;
		L_5 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_3, L_4, (&V_0), NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		Func_3_t538A8E697534A282316BC2DF71DE83E68360C8B9* L_7 = ___converterFunc2;
		String_t* L_8 = V_0;
		int32_t L_9 = ___defaultValue3;
		NullCheck(L_7);
		int32_t L_10;
		L_10 = ((  int32_t (*) (Func_3_t538A8E697534A282316BC2DF71DE83E68360C8B9*, String_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_3 = L_10;
		goto IL_0035;
	}

IL_0030:
	{
		int32_t L_11 = ___defaultValue3;
		V_3 = L_11;
		goto IL_0035;
	}

IL_0035:
	{
		int32_t L_12 = V_3;
		return L_12;
	}
}
// T UnityEngine.UIElements.UxmlAttributeDescription::GetValueFromBag<System.Int64>(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.Func`3<System.String,T,T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UxmlAttributeDescription_GetValueFromBag_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mD5D06E5828505FB5AC84B2EF9D0FDD2494C4ABA4_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___bag0, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___cc1, Func_3_tD3C5141B184A528ABF7649D429906DA08C68E4A7* ___converterFunc2, int64_t ___defaultValue3, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int64_t V_3 = 0;
	{
		Func_3_tD3C5141B184A528ABF7649D429906DA08C68E4A7* L_0 = ___converterFunc2;
		V_1 = (bool)((((RuntimeObject*)(Func_3_tD3C5141B184A528ABF7649D429906DA08C68E4A7*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UxmlAttributeDescription_GetValueFromBag_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mD5D06E5828505FB5AC84B2EF9D0FDD2494C4ABA4_RuntimeMethod_var)));
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___bag0;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_4 = ___cc1;
		bool L_5;
		L_5 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_3, L_4, (&V_0), NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		Func_3_tD3C5141B184A528ABF7649D429906DA08C68E4A7* L_7 = ___converterFunc2;
		String_t* L_8 = V_0;
		int64_t L_9 = ___defaultValue3;
		NullCheck(L_7);
		int64_t L_10;
		L_10 = ((  int64_t (*) (Func_3_tD3C5141B184A528ABF7649D429906DA08C68E4A7*, String_t*, int64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_3 = L_10;
		goto IL_0035;
	}

IL_0030:
	{
		int64_t L_11 = ___defaultValue3;
		V_3 = L_11;
		goto IL_0035;
	}

IL_0035:
	{
		int64_t L_12 = V_3;
		return L_12;
	}
}
// T UnityEngine.UIElements.UxmlAttributeDescription::GetValueFromBag<System.Object>(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.Func`3<System.String,T,T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UxmlAttributeDescription_GetValueFromBag_TisRuntimeObject_m068CFD3292450E7E40FB2498A6ABDD4A0B7F9FDC_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___bag0, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___cc1, Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0* ___converterFunc2, RuntimeObject* ___defaultValue3, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	{
		Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0* L_0 = ___converterFunc2;
		V_1 = (bool)((((RuntimeObject*)(Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UxmlAttributeDescription_GetValueFromBag_TisRuntimeObject_m068CFD3292450E7E40FB2498A6ABDD4A0B7F9FDC_RuntimeMethod_var)));
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___bag0;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_4 = ___cc1;
		bool L_5;
		L_5 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_3, L_4, (&V_0), NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0* L_7 = ___converterFunc2;
		String_t* L_8 = V_0;
		RuntimeObject* L_9 = ___defaultValue3;
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = ((  RuntimeObject* (*) (Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0*, String_t*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_3 = L_10;
		goto IL_0035;
	}

IL_0030:
	{
		RuntimeObject* L_11 = ___defaultValue3;
		V_3 = L_11;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject* L_12 = V_3;
		return L_12;
	}
}
// T UnityEngine.UIElements.UxmlAttributeDescription::GetValueFromBag<System.Single>(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.Func`3<System.String,T,T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UxmlAttributeDescription_GetValueFromBag_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3B483191ED592442A1ACF14EC0700E03ECDB4F8D_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___bag0, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___cc1, Func_3_t5328A430FC4208B44C52E4E89DC5F686DE6A6A1B* ___converterFunc2, float ___defaultValue3, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		Func_3_t5328A430FC4208B44C52E4E89DC5F686DE6A6A1B* L_0 = ___converterFunc2;
		V_1 = (bool)((((RuntimeObject*)(Func_3_t5328A430FC4208B44C52E4E89DC5F686DE6A6A1B*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UxmlAttributeDescription_GetValueFromBag_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3B483191ED592442A1ACF14EC0700E03ECDB4F8D_RuntimeMethod_var)));
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___bag0;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_4 = ___cc1;
		bool L_5;
		L_5 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_3, L_4, (&V_0), NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		Func_3_t5328A430FC4208B44C52E4E89DC5F686DE6A6A1B* L_7 = ___converterFunc2;
		String_t* L_8 = V_0;
		float L_9 = ___defaultValue3;
		NullCheck(L_7);
		float L_10;
		L_10 = ((  float (*) (Func_3_t5328A430FC4208B44C52E4E89DC5F686DE6A6A1B*, String_t*, float, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_3 = L_10;
		goto IL_0035;
	}

IL_0030:
	{
		float L_11 = ___defaultValue3;
		V_3 = L_11;
		goto IL_0035;
	}

IL_0035:
	{
		float L_12 = V_3;
		return L_12;
	}
}
// System.Boolean UnityEngine.UIElements.UxmlAttributeDescription::TryGetValueFromBag<System.Boolean>(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.Func`3<System.String,T,T>,T,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxmlAttributeDescription_TryGetValueFromBag_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8D501F46447CC1568AA5403F1AC2691D744A0E17_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___bag0, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___cc1, Func_3_t62BC9D925DCAC8F5784BA97C793F4E593496CDA7* ___converterFunc2, bool ___defaultValue3, bool* ___value4, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = ___bag0;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_1 = ___cc1;
		bool L_2;
		L_2 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_0, L_1, (&V_0), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		Func_3_t62BC9D925DCAC8F5784BA97C793F4E593496CDA7* L_4 = ___converterFunc2;
		V_2 = (bool)((!(((RuntimeObject*)(Func_3_t62BC9D925DCAC8F5784BA97C793F4E593496CDA7*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		bool* L_6 = ___value4;
		Func_3_t62BC9D925DCAC8F5784BA97C793F4E593496CDA7* L_7 = ___converterFunc2;
		String_t* L_8 = V_0;
		bool L_9 = ___defaultValue3;
		NullCheck(L_7);
		bool L_10;
		L_10 = ((  bool (*) (Func_3_t62BC9D925DCAC8F5784BA97C793F4E593496CDA7*, String_t*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(bool*)L_6 = L_10;
		goto IL_0037;
	}

IL_002c:
	{
		bool* L_11 = ___value4;
		bool L_12 = ___defaultValue3;
		*(bool*)L_11 = L_12;
	}

IL_0037:
	{
		V_3 = (bool)1;
		goto IL_003f;
	}

IL_003b:
	{
		V_3 = (bool)0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_13 = V_3;
		return L_13;
	}
}
// System.Boolean UnityEngine.UIElements.UxmlAttributeDescription::TryGetValueFromBag<System.Int32>(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.Func`3<System.String,T,T>,T,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxmlAttributeDescription_TryGetValueFromBag_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2A29552F5ABFE82902CCE5FB193BAF71C65C8AD5_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___bag0, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___cc1, Func_3_t0620ECF6AB73866242850ABCE518B069D201DA79* ___converterFunc2, int32_t ___defaultValue3, int32_t* ___value4, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = ___bag0;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_1 = ___cc1;
		bool L_2;
		L_2 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_0, L_1, (&V_0), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		Func_3_t0620ECF6AB73866242850ABCE518B069D201DA79* L_4 = ___converterFunc2;
		V_2 = (bool)((!(((RuntimeObject*)(Func_3_t0620ECF6AB73866242850ABCE518B069D201DA79*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		int32_t* L_6 = ___value4;
		Func_3_t0620ECF6AB73866242850ABCE518B069D201DA79* L_7 = ___converterFunc2;
		String_t* L_8 = V_0;
		int32_t L_9 = ___defaultValue3;
		NullCheck(L_7);
		int32_t L_10;
		L_10 = ((  int32_t (*) (Func_3_t0620ECF6AB73866242850ABCE518B069D201DA79*, String_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(int32_t*)L_6 = L_10;
		goto IL_0037;
	}

IL_002c:
	{
		int32_t* L_11 = ___value4;
		int32_t L_12 = ___defaultValue3;
		*(int32_t*)L_11 = L_12;
	}

IL_0037:
	{
		V_3 = (bool)1;
		goto IL_003f;
	}

IL_003b:
	{
		V_3 = (bool)0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_13 = V_3;
		return L_13;
	}
}
// System.Boolean UnityEngine.UIElements.UxmlAttributeDescription::TryGetValueFromBag<System.Int32Enum>(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.Func`3<System.String,T,T>,T,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxmlAttributeDescription_TryGetValueFromBag_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBF6B69FD22082486E0E8C3E72FF29FAE946751E8_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___bag0, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___cc1, Func_3_t538A8E697534A282316BC2DF71DE83E68360C8B9* ___converterFunc2, int32_t ___defaultValue3, int32_t* ___value4, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = ___bag0;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_1 = ___cc1;
		bool L_2;
		L_2 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_0, L_1, (&V_0), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		Func_3_t538A8E697534A282316BC2DF71DE83E68360C8B9* L_4 = ___converterFunc2;
		V_2 = (bool)((!(((RuntimeObject*)(Func_3_t538A8E697534A282316BC2DF71DE83E68360C8B9*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		int32_t* L_6 = ___value4;
		Func_3_t538A8E697534A282316BC2DF71DE83E68360C8B9* L_7 = ___converterFunc2;
		String_t* L_8 = V_0;
		int32_t L_9 = ___defaultValue3;
		NullCheck(L_7);
		int32_t L_10;
		L_10 = ((  int32_t (*) (Func_3_t538A8E697534A282316BC2DF71DE83E68360C8B9*, String_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(int32_t*)L_6 = L_10;
		goto IL_0037;
	}

IL_002c:
	{
		int32_t* L_11 = ___value4;
		int32_t L_12 = ___defaultValue3;
		*(int32_t*)L_11 = L_12;
	}

IL_0037:
	{
		V_3 = (bool)1;
		goto IL_003f;
	}

IL_003b:
	{
		V_3 = (bool)0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_13 = V_3;
		return L_13;
	}
}
// System.Boolean UnityEngine.UIElements.UxmlAttributeDescription::TryGetValueFromBag<System.Object>(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.Func`3<System.String,T,T>,T,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxmlAttributeDescription_TryGetValueFromBag_TisRuntimeObject_mBD67FCD642F352CE1837AA2BEB414BA72028C743_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___bag0, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___cc1, Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0* ___converterFunc2, RuntimeObject* ___defaultValue3, RuntimeObject** ___value4, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = ___bag0;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_1 = ___cc1;
		bool L_2;
		L_2 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_0, L_1, (&V_0), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0* L_4 = ___converterFunc2;
		V_2 = (bool)((!(((RuntimeObject*)(Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject** L_6 = ___value4;
		Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0* L_7 = ___converterFunc2;
		String_t* L_8 = V_0;
		RuntimeObject* L_9 = ___defaultValue3;
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = ((  RuntimeObject* (*) (Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0*, String_t*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(RuntimeObject**)L_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)L_10);
		goto IL_0037;
	}

IL_002c:
	{
		RuntimeObject** L_11 = ___value4;
		RuntimeObject* L_12 = ___defaultValue3;
		*(RuntimeObject**)L_11 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_11, (void*)L_12);
	}

IL_0037:
	{
		V_3 = (bool)1;
		goto IL_003f;
	}

IL_003b:
	{
		V_3 = (bool)0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_13 = V_3;
		return L_13;
	}
}
// System.Numerics.Vector`1<System.UInt64> System.Numerics.Vector::AsVectorUInt64<System.UInt16>(System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_AsVectorUInt64_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mB1290EF33E80A390B04A3A61E2ED8039C7C1D527_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___value0, const RuntimeMethod* method) 
{
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		L_1 = ((  Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// System.Numerics.Vector`1<T> System.Numerics.Vector::Equals<System.UInt16>(System.Numerics.Vector`1<T>,System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_Equals_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDF58FEA5BFA35E22ED8C525BA9EE0B508F567406_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___left0, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___right1, const RuntimeMethod* method) 
{
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___left0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = ___right1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_2;
		L_2 = ((  Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// UnityEngine.UIElements.Experimental.ValueAnimation`1<T> UnityEngine.UIElements.VisualElement::StartAnimation<System.Object>(UnityEngine.UIElements.Experimental.ValueAnimation`1<T>,System.Func`2<UnityEngine.UIElements.VisualElement,T>,T,System.Int32,System.Action`2<UnityEngine.UIElements.VisualElement,T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B* VisualElement_StartAnimation_TisRuntimeObject_mFBD42C4DE9E16FE6E43F9B7717A2ECC761B98902_gshared (ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B* ___anim0, Func_2_t9AAA83BE20528E7FBB1DCCFF8E9640E7061D5BE3* ___fromValueGetter1, RuntimeObject* ___to2, int32_t ___durationMs3, Action_2_t481D6C6BCDB085CB7BE1AA1DBD81F4DC0C04D1F2* ___onValueChanged4, const RuntimeMethod* method) 
{
	ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B* V_0 = NULL;
	{
		ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B* L_0 = ___anim0;
		Func_2_t9AAA83BE20528E7FBB1DCCFF8E9640E7061D5BE3* L_1 = ___fromValueGetter1;
		NullCheck(L_0);
		((  void (*) (ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B*, Func_2_t9AAA83BE20528E7FBB1DCCFF8E9640E7061D5BE3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B* L_2 = ___anim0;
		RuntimeObject* L_3 = ___to2;
		NullCheck(L_2);
		((  void (*) (ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B* L_4 = ___anim0;
		int32_t L_5 = ___durationMs3;
		NullCheck(L_4);
		((  void (*) (ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B* L_6 = ___anim0;
		Action_2_t481D6C6BCDB085CB7BE1AA1DBD81F4DC0C04D1F2* L_7 = ___onValueChanged4;
		NullCheck(L_6);
		((  void (*) (ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B*, Action_2_t481D6C6BCDB085CB7BE1AA1DBD81F4DC0C04D1F2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 4));
		ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B* L_8 = ___anim0;
		NullCheck(L_8);
		((  void (*) (ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_8, il2cpp_rgctx_method(method->rgctx_data, 5));
		ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B* L_9 = ___anim0;
		V_0 = L_9;
		goto IL_002d;
	}

IL_002d:
	{
		ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B* L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.UIElements.Experimental.ValueAnimation`1<T> UnityEngine.UIElements.VisualElement::StartAnimation<UnityEngine.UIElements.Experimental.StyleValues>(UnityEngine.UIElements.Experimental.ValueAnimation`1<T>,System.Func`2<UnityEngine.UIElements.VisualElement,T>,T,System.Int32,System.Action`2<UnityEngine.UIElements.VisualElement,T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* VisualElement_StartAnimation_TisStyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_mADB9C50790E47B4253CE04BC5B8F7A83CCAF68ED_gshared (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* ___anim0, Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227* ___fromValueGetter1, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A ___to2, int32_t ___durationMs3, Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A* ___onValueChanged4, const RuntimeMethod* method) 
{
	ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* V_0 = NULL;
	{
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_0 = ___anim0;
		Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227* L_1 = ___fromValueGetter1;
		NullCheck(L_0);
		((  void (*) (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC*, Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_2 = ___anim0;
		StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A L_3 = ___to2;
		NullCheck(L_2);
		((  void (*) (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC*, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_4 = ___anim0;
		int32_t L_5 = ___durationMs3;
		NullCheck(L_4);
		((  void (*) (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_6 = ___anim0;
		Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A* L_7 = ___onValueChanged4;
		NullCheck(L_6);
		((  void (*) (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC*, Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 4));
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_8 = ___anim0;
		NullCheck(L_8);
		((  void (*) (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_8, il2cpp_rgctx_method(method->rgctx_data, 5));
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_9 = ___anim0;
		V_0 = L_9;
		goto IL_002d;
	}

IL_002d:
	{
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_10 = V_0;
		return L_10;
	}
}
// System.Void UnityEngine.UIElements.VisualTreeUpdater::SetUpdater<System.Object>(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualTreeUpdater_SetUpdater_TisRuntimeObject_m8476DF92DC347257A6AFCA48272BE51985407784_gshared (VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9* __this, int32_t ___phase0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_0 = (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449*)__this->___m_UpdaterArray_1;
		int32_t L_1 = ___phase0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C(L_0, L_1, NULL);
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0013;
		}
	}
	{
		goto IL_0019;
	}

IL_0013:
	{
		NullCheck((RuntimeObject*)G_B2_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)G_B2_0);
	}

IL_0019:
	{
		RuntimeObject* L_4;
		L_4 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = L_4;
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_5 = (BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303*)__this->___m_Panel_0;
		NullCheck((RuntimeObject*)(V_1));
		InterfaceActionInvoker1< BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* >::Invoke(0 /* System.Void UnityEngine.UIElements.IVisualTreeUpdater::set_panel(UnityEngine.UIElements.BaseVisualElementPanel) */, IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06_il2cpp_TypeInfo_var, (RuntimeObject*)(V_1), L_5);
		RuntimeObject* L_6 = V_1;
		V_0 = L_6;
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_7 = (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449*)__this->___m_UpdaterArray_1;
		int32_t L_8 = ___phase0;
		RuntimeObject* L_9 = V_0;
		NullCheck(L_7);
		UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11(L_7, L_8, (RuntimeObject*)L_9, NULL);
		return;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Volatile_Read_TisRuntimeObject_m1BB143C73CA3A7A5B880A663FEE10E149F0F274F_gshared (RuntimeObject** ___location0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___location0;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = (RuntimeObject*)L_1->___Value_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_3;
		L_3 = il2cpp_unsafe_as<RuntimeObject*>(L_2);
		return L_3;
	}
}
// System.Void System.Threading.Volatile::Write<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_mB9B6B04771AC33604CEAD0611ADB13B54869254B_gshared (RuntimeObject** ___location0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___location0;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = ___value1;
		il2cpp_codegen_memory_barrier();
		L_1->___Value_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Value_0), (void*)L_2);
		return;
	}
}
// T[] Niantic.ARDK.Utilities.Collections._ArrayFromElement::Create<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* _ArrayFromElement_Create_TisRuntimeObject_mF4101E76AEC508E40C88AA72ED939EAB4034483C_gshared (RuntimeObject* ___element0, const RuntimeMethod* method) 
{
	{
		// return new T[] { element };
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		RuntimeObject* L_2 = ___element0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		return L_1;
	}
}
// Unity.Collections.NativeArray`1<T> Niantic.ARDK.AR.Awareness._AwarenessBufferHelper::RotateToScreenOrientation<System.Single>(Unity.Collections.NativeArray`1<T>,System.Int32,System.Int32,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF _AwarenessBufferHelper_RotateToScreenOrientation_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7716D3E542F12256BF2D20F9D11653E518E63C02_gshared (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___src0, int32_t ___srcWidth1, int32_t ___srcHeight2, int32_t* ___newWidth3, int32_t* ___newHeight4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* V_0 = NULL;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* G_B4_0 = NULL;
	Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* G_B3_0 = NULL;
	Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* G_B7_0 = NULL;
	Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* G_B6_0 = NULL;
	Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* G_B10_0 = NULL;
	Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* G_B9_0 = NULL;
	{
		// newWidth = srcWidth;
		int32_t* L_0 = ___newWidth3;
		int32_t L_1 = ___srcWidth1;
		*((int32_t*)L_0) = (int32_t)L_1;
		// newHeight = srcHeight;
		int32_t* L_2 = ___newHeight4;
		int32_t L_3 = ___srcHeight2;
		*((int32_t*)L_2) = (int32_t)L_3;
		// switch (Screen.orientation)
		int32_t L_4;
		L_4 = Screen_get_orientation_m7B47A2719DDE296357BB3199AB3BECC49F9F4A6D(NULL);
		V_2 = L_4;
		int32_t L_5 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, 1)))
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_004c;
			}
			case 2:
			{
				goto IL_0075;
			}
		}
	}
	{
		goto IL_0097;
	}

IL_0023:
	{
		// dstIdxFn = (w, _, x, y) => x * w + (w - 1 - y);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* L_6 = ((U3CU3Ec__1_1_t6B7E95969B66ABD2516CB9683A727C6A81C6B551_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9__1_0_1;
		Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* L_7 = L_6;
		G_B3_0 = L_7;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		U3CU3Ec__1_1_t6B7E95969B66ABD2516CB9683A727C6A81C6B551* L_8 = ((U3CU3Ec__1_1_t6B7E95969B66ABD2516CB9683A727C6A81C6B551_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9_0;
		Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* L_9 = (Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC*)il2cpp_codegen_object_new(Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_5__ctor_mAA5A177E97C0DB1BE13E0B3598563F063A9713A9(L_9, (RuntimeObject*)L_8, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 1)), NULL);
		Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* L_10 = L_9;
		((U3CU3Ec__1_1_t6B7E95969B66ABD2516CB9683A727C6A81C6B551_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9__1_0_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__1_1_t6B7E95969B66ABD2516CB9683A727C6A81C6B551_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9__1_0_1), (void*)L_10);
		G_B4_0 = L_10;
	}

IL_0042:
	{
		V_0 = G_B4_0;
		// newWidth = srcHeight;
		int32_t* L_11 = ___newWidth3;
		int32_t L_12 = ___srcHeight2;
		*((int32_t*)L_11) = (int32_t)L_12;
		// newHeight = srcWidth;
		int32_t* L_13 = ___newHeight4;
		int32_t L_14 = ___srcWidth1;
		*((int32_t*)L_13) = (int32_t)L_14;
		// break;
		goto IL_009f;
	}

IL_004c:
	{
		// dstIdxFn = (w, h, x, y) => (h - 1 - x) * w + y;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* L_15 = ((U3CU3Ec__1_1_t6B7E95969B66ABD2516CB9683A727C6A81C6B551_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9__1_1_2;
		Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* L_16 = L_15;
		G_B6_0 = L_16;
		if (L_16)
		{
			G_B7_0 = L_16;
			goto IL_006b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		U3CU3Ec__1_1_t6B7E95969B66ABD2516CB9683A727C6A81C6B551* L_17 = ((U3CU3Ec__1_1_t6B7E95969B66ABD2516CB9683A727C6A81C6B551_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9_0;
		Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* L_18 = (Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC*)il2cpp_codegen_object_new(Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Func_5__ctor_mAA5A177E97C0DB1BE13E0B3598563F063A9713A9(L_18, (RuntimeObject*)L_17, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), NULL);
		Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* L_19 = L_18;
		((U3CU3Ec__1_1_t6B7E95969B66ABD2516CB9683A727C6A81C6B551_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9__1_1_2 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__1_1_t6B7E95969B66ABD2516CB9683A727C6A81C6B551_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9__1_1_2), (void*)L_19);
		G_B7_0 = L_19;
	}

IL_006b:
	{
		V_0 = G_B7_0;
		// newWidth = srcHeight;
		int32_t* L_20 = ___newWidth3;
		int32_t L_21 = ___srcHeight2;
		*((int32_t*)L_20) = (int32_t)L_21;
		// newHeight = srcWidth;
		int32_t* L_22 = ___newHeight4;
		int32_t L_23 = ___srcWidth1;
		*((int32_t*)L_22) = (int32_t)L_23;
		// break;
		goto IL_009f;
	}

IL_0075:
	{
		// dstIdxFn = (w, h, x, y) => (h - 1 - y) * w + (w - 1 - x);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* L_24 = ((U3CU3Ec__1_1_t6B7E95969B66ABD2516CB9683A727C6A81C6B551_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9__1_2_3;
		Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* L_25 = L_24;
		G_B9_0 = L_25;
		if (L_25)
		{
			G_B10_0 = L_25;
			goto IL_0094;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		U3CU3Ec__1_1_t6B7E95969B66ABD2516CB9683A727C6A81C6B551* L_26 = ((U3CU3Ec__1_1_t6B7E95969B66ABD2516CB9683A727C6A81C6B551_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9_0;
		Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* L_27 = (Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC*)il2cpp_codegen_object_new(Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Func_5__ctor_mAA5A177E97C0DB1BE13E0B3598563F063A9713A9(L_27, (RuntimeObject*)L_26, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), NULL);
		Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* L_28 = L_27;
		((U3CU3Ec__1_1_t6B7E95969B66ABD2516CB9683A727C6A81C6B551_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9__1_2_3 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__1_1_t6B7E95969B66ABD2516CB9683A727C6A81C6B551_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___U3CU3E9__1_2_3), (void*)L_28);
		G_B10_0 = L_28;
	}

IL_0094:
	{
		V_0 = G_B10_0;
		// break;
		goto IL_009f;
	}

IL_0097:
	{
		// return new NativeArray<T>(src, Allocator.Persistent);
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_29 = ___src0;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_30;
		memset((&L_30), 0, sizeof(L_30));
		NativeArray_1__ctor_m9DA5ADF8AD1A82C7E4443EB8E76999D4127F6ED3((&L_30), L_29, (int32_t)4, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_30;
	}

IL_009f:
	{
		// var rotatedData =
		//   new NativeArray<T>
		//   (
		//     newWidth * newHeight,
		//     Allocator.Persistent,
		//     NativeArrayOptions.UninitializedMemory
		//   );
		int32_t* L_31 = ___newWidth3;
		int32_t L_32 = *((int32_t*)L_31);
		int32_t* L_33 = ___newHeight4;
		int32_t L_34 = *((int32_t*)L_33);
		NativeArray_1__ctor_m4D540A81E1062EEC2C4B0697A34A4EEFB9BC9004((&V_1), ((int32_t)il2cpp_codegen_multiply(L_32, L_34)), (int32_t)4, (int32_t)0, il2cpp_rgctx_method(method->rgctx_data, 6));
		// for (var y = 0; y < srcHeight; y++)
		V_3 = 0;
		goto IL_00f0;
	}

IL_00b2:
	{
		// for (var x = 0; x < srcWidth; x++)
		V_4 = 0;
		goto IL_00e7;
	}

IL_00b7:
	{
		// var srcIdx = y * srcWidth + x;
		int32_t L_35 = V_3;
		int32_t L_36 = ___srcWidth1;
		int32_t L_37 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_35, L_36)), L_37));
		// var dstIdx = dstIdxFn(newWidth, newHeight, x, y);
		Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* L_38 = V_0;
		int32_t* L_39 = ___newWidth3;
		int32_t L_40 = *((int32_t*)L_39);
		int32_t* L_41 = ___newHeight4;
		int32_t L_42 = *((int32_t*)L_41);
		int32_t L_43 = V_4;
		int32_t L_44 = V_3;
		NullCheck(L_38);
		int32_t L_45;
		L_45 = Func_5_Invoke_mE8C84338774AD9744AAFC509CDEAEF30AA8A4912_inline(L_38, L_40, L_42, L_43, L_44, NULL);
		V_6 = L_45;
		// rotatedData[dstIdx] = src[srcIdx];
		int32_t L_46 = V_6;
		int32_t L_47 = V_5;
		float L_48;
		L_48 = IL2CPP_NATIVEARRAY_GET_ITEM(float, ((&___src0))->___m_Buffer_0, L_47);
		IL2CPP_NATIVEARRAY_SET_ITEM(float, ((&V_1))->___m_Buffer_0, L_46, (L_48));
		// for (var x = 0; x < srcWidth; x++)
		int32_t L_49 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00e7:
	{
		// for (var x = 0; x < srcWidth; x++)
		int32_t L_50 = V_4;
		int32_t L_51 = ___srcWidth1;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_00b7;
		}
	}
	{
		// for (var y = 0; y < srcHeight; y++)
		int32_t L_52 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_00f0:
	{
		// for (var y = 0; y < srcHeight; y++)
		int32_t L_53 = V_3;
		int32_t L_54 = ___srcHeight2;
		if ((((int32_t)L_53) < ((int32_t)L_54)))
		{
			goto IL_00b2;
		}
	}
	{
		// return rotatedData;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_55 = V_1;
		return L_55;
	}
}
// Unity.Collections.NativeArray`1<T> Niantic.ARDK.AR.Awareness._AwarenessBufferHelper::_FitToViewport<System.Single>(Unity.Collections.NativeArray`1<T>,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF _AwarenessBufferHelper__FitToViewport_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5406C67D176E485736F753F5F103B56513F635F8_gshared (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___src0, int32_t ___srcWidth1, int32_t ___srcHeight2, int32_t ___viewportWidth3, int32_t ___viewportHeight4, int32_t* ___newWidth5, int32_t* ___newHeight6, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// var srcRatio = srcWidth / (float)srcHeight;
		int32_t L_0 = ___srcWidth1;
		int32_t L_1 = ___srcHeight2;
		V_0 = ((float)(((float)L_0)/((float)L_1)));
		// var trgRatio = viewportWidth / (float)viewportHeight;
		int32_t L_2 = ___viewportWidth3;
		int32_t L_3 = ___viewportHeight4;
		V_1 = ((float)(((float)L_2)/((float)L_3)));
		// int cropStartX = 0, cropStartY = 0;
		V_2 = 0;
		// int cropStartX = 0, cropStartY = 0;
		V_3 = 0;
		// newWidth = (int)srcWidth;
		int32_t* L_4 = ___newWidth5;
		int32_t L_5 = ___srcWidth1;
		*((int32_t*)L_4) = (int32_t)L_5;
		// newHeight = (int)srcHeight;
		int32_t* L_6 = ___newHeight6;
		int32_t L_7 = ___srcHeight2;
		*((int32_t*)L_6) = (int32_t)L_7;
		// if (srcRatio > trgRatio)
		float L_8 = V_0;
		float L_9 = V_1;
		if ((!(((float)L_8) > ((float)L_9))))
		{
			goto IL_0043;
		}
	}
	{
		// newWidth = Mathf.FloorToInt(srcHeight * trgRatio);
		int32_t* L_10 = ___newWidth5;
		int32_t L_11 = ___srcHeight2;
		float L_12 = V_1;
		int32_t L_13;
		L_13 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)il2cpp_codegen_multiply(((float)L_11), L_12)), NULL);
		*((int32_t*)L_10) = (int32_t)L_13;
		// if (newWidth < srcWidth)
		int32_t* L_14 = ___newWidth5;
		int32_t L_15 = *((int32_t*)L_14);
		int32_t L_16 = ___srcWidth1;
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_006b;
		}
	}
	{
		// cropStartX = Mathf.FloorToInt((srcWidth - newWidth) / 2f);
		int32_t L_17 = ___srcWidth1;
		int32_t* L_18 = ___newWidth5;
		int32_t L_19 = *((int32_t*)L_18);
		int32_t L_20;
		L_20 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)(((float)((int32_t)il2cpp_codegen_subtract(L_17, L_19)))/(2.0f))), NULL);
		V_2 = L_20;
		goto IL_006b;
	}

IL_0043:
	{
		// else if (srcRatio != trgRatio)
		float L_21 = V_0;
		float L_22 = V_1;
		if ((((float)L_21) == ((float)L_22)))
		{
			goto IL_006b;
		}
	}
	{
		// newHeight = Mathf.FloorToInt(srcWidth / trgRatio);
		int32_t* L_23 = ___newHeight6;
		int32_t L_24 = ___srcWidth1;
		float L_25 = V_1;
		int32_t L_26;
		L_26 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)(((float)L_24)/L_25)), NULL);
		*((int32_t*)L_23) = (int32_t)L_26;
		// if (newHeight < srcHeight)
		int32_t* L_27 = ___newHeight6;
		int32_t L_28 = *((int32_t*)L_27);
		int32_t L_29 = ___srcHeight2;
		if ((((int32_t)L_28) >= ((int32_t)L_29)))
		{
			goto IL_006b;
		}
	}
	{
		// cropStartY = Mathf.FloorToInt((srcHeight - newHeight) / 2f);
		int32_t L_30 = ___srcHeight2;
		int32_t* L_31 = ___newHeight6;
		int32_t L_32 = *((int32_t*)L_31);
		int32_t L_33;
		L_33 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)(((float)((int32_t)il2cpp_codegen_subtract(L_30, L_32)))/(2.0f))), NULL);
		V_3 = L_33;
	}

IL_006b:
	{
		// var newData =
		//   new NativeArray<T>
		//   (
		//     newWidth * newHeight,
		//     Allocator.Persistent,
		//     NativeArrayOptions.UninitializedMemory
		//   );
		int32_t* L_34 = ___newWidth5;
		int32_t L_35 = *((int32_t*)L_34);
		int32_t* L_36 = ___newHeight6;
		int32_t L_37 = *((int32_t*)L_36);
		NativeArray_1__ctor_m4D540A81E1062EEC2C4B0697A34A4EEFB9BC9004((&V_4), ((int32_t)il2cpp_codegen_multiply(L_35, L_37)), (int32_t)4, (int32_t)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		// for (var y = 0; y < newHeight; y++)
		V_5 = 0;
		goto IL_00c8;
	}

IL_0080:
	{
		// for (var x = 0; x < newWidth; x++)
		V_6 = 0;
		goto IL_00bb;
	}

IL_0085:
	{
		// var srcIdx = (y + cropStartY) * srcWidth + x + cropStartX;
		int32_t L_38 = V_5;
		int32_t L_39 = V_3;
		int32_t L_40 = ___srcWidth1;
		int32_t L_41 = V_6;
		int32_t L_42 = V_2;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_38, L_39)), L_40)), L_41)), L_42));
		// var dstIdx = (newHeight - 1 - y) * newWidth + x;
		int32_t* L_43 = ___newHeight6;
		int32_t L_44 = *((int32_t*)L_43);
		int32_t L_45 = V_5;
		int32_t* L_46 = ___newWidth5;
		int32_t L_47 = *((int32_t*)L_46);
		int32_t L_48 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_44, 1)), L_45)), L_47)), L_48));
		// newData[dstIdx] = src[srcIdx];
		int32_t L_49 = V_8;
		int32_t L_50 = V_7;
		float L_51;
		L_51 = IL2CPP_NATIVEARRAY_GET_ITEM(float, ((&___src0))->___m_Buffer_0, L_50);
		IL2CPP_NATIVEARRAY_SET_ITEM(float, ((&V_4))->___m_Buffer_0, L_49, (L_51));
		// for (var x = 0; x < newWidth; x++)
		int32_t L_52 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_00bb:
	{
		// for (var x = 0; x < newWidth; x++)
		int32_t L_53 = V_6;
		int32_t* L_54 = ___newWidth5;
		int32_t L_55 = *((int32_t*)L_54);
		if ((((int32_t)L_53) < ((int32_t)L_55)))
		{
			goto IL_0085;
		}
	}
	{
		// for (var y = 0; y < newHeight; y++)
		int32_t L_56 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_00c8:
	{
		// for (var y = 0; y < newHeight; y++)
		int32_t L_57 = V_5;
		int32_t* L_58 = ___newHeight6;
		int32_t L_59 = *((int32_t*)L_58);
		if ((((int32_t)L_57) < ((int32_t)L_59)))
		{
			goto IL_0080;
		}
	}
	{
		// return newData;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_60 = V_4;
		return L_60;
	}
}
// TValue Niantic.ARDK.Utilities.Extensions._DictionaryExtensions::GetOrDefault<System.Guid,System.Object>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _DictionaryExtensions_GetOrDefault_TisGuid_t_TisRuntimeObject_mC7C72279017D6A81A24B197BC9E738CD57D59197_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ___dict0, Guid_t ___key1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// dict.TryGetValue(key, out value);
		Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* L_0 = ___dict0;
		Guid_t L_1 = ___key1;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, Guid_t, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		// return value;
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// TValue Niantic.ARDK.Utilities.Extensions._DictionaryExtensions::GetOrDefault<System.Int32,System.Object>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _DictionaryExtensions_GetOrDefault_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_m888C8B59D648662923F23009885021678CA98FEA_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ___dict0, int32_t ___key1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// dict.TryGetValue(key, out value);
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_0 = ___dict0;
		int32_t L_1 = ___key1;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		// return value;
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// TValue Niantic.ARDK.Utilities.Extensions._DictionaryExtensions::GetOrDefault<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId,System.Object>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _DictionaryExtensions_GetOrDefault_TisNetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3_TisRuntimeObject_mA77FFDD93081A3938DA95120CA28F1C50D513083_gshared (Dictionary_2_t470F91884BED7B79ACC5D3F01DD62CF9985651D9* ___dict0, NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 ___key1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// dict.TryGetValue(key, out value);
		Dictionary_2_t470F91884BED7B79ACC5D3F01DD62CF9985651D9* L_0 = ___dict0;
		NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 L_1 = ___key1;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t470F91884BED7B79ACC5D3F01DD62CF9985651D9*, NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		// return value;
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// TValue Niantic.ARDK.Utilities.Extensions._DictionaryExtensions::GetOrDefault<System.Object,System.Object>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _DictionaryExtensions_GetOrDefault_TisRuntimeObject_TisRuntimeObject_m0CA2312B0BBF954158289A305C57AB856430C630_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___dict0, RuntimeObject* ___key1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// dict.TryGetValue(key, out value);
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_0 = ___dict0;
		RuntimeObject* L_1 = ___key1;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		// return value;
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// TValue Niantic.ARDK.Utilities.Extensions._DictionaryExtensions::GetOrDefault<System.Object,System.Object>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,System.Func`1<TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _DictionaryExtensions_GetOrDefault_TisRuntimeObject_TisRuntimeObject_mC63AC50A7F9325E7CD02CD669D7E828D22710998_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___dict0, RuntimeObject* ___key1, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___defaultFetcher2, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (dict.TryGetValue(key, out value))
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_0 = ___dict0;
		RuntimeObject* L_1 = ___key1;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000d;
		}
	}
	{
		// return value;
		RuntimeObject* L_3 = V_0;
		return L_3;
	}

IL_000d:
	{
		// return defaultFetcher != null ? defaultFetcher() : default(TValue);
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_4 = ___defaultFetcher2;
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_5 = V_1;
		return L_5;
	}

IL_001a:
	{
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_6 = ___defaultFetcher2;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_7;
	}
}
// TValue Niantic.ARDK.Utilities.Extensions._DictionaryExtensions::GetOrInsert<System.Int32,System.Object>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,System.Func`1<TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _DictionaryExtensions_GetOrInsert_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_m74C6014FBA59D24C1D4BE1967C7D9A7AC729B859_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ___dict0, int32_t ___key1, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___creator2, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// if (!dict.TryGetValue(key, out value))
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_0 = ___dict0;
		int32_t L_1 = ___key1;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// value = creator();
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_3 = ___creator2;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = ((  RuntimeObject* (*) (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_0 = L_4;
		// dict.Add(key, value);
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_5 = ___dict0;
		int32_t L_6 = ___key1;
		RuntimeObject* L_7 = V_0;
		NullCheck(L_5);
		((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_001a:
	{
		// return value;
		RuntimeObject* L_8 = V_0;
		return L_8;
	}
}
// TValue Niantic.ARDK.Utilities.Extensions._DictionaryExtensions::GetOrInsert<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId,System.Object>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,System.Func`1<TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _DictionaryExtensions_GetOrInsert_TisNetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3_TisRuntimeObject_m541598BC7CACEF910FE8F0A3AE0565A550DFBED8_gshared (Dictionary_2_t470F91884BED7B79ACC5D3F01DD62CF9985651D9* ___dict0, NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 ___key1, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___creator2, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// if (!dict.TryGetValue(key, out value))
		Dictionary_2_t470F91884BED7B79ACC5D3F01DD62CF9985651D9* L_0 = ___dict0;
		NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 L_1 = ___key1;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t470F91884BED7B79ACC5D3F01DD62CF9985651D9*, NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// value = creator();
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_3 = ___creator2;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = ((  RuntimeObject* (*) (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_0 = L_4;
		// dict.Add(key, value);
		Dictionary_2_t470F91884BED7B79ACC5D3F01DD62CF9985651D9* L_5 = ___dict0;
		NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 L_6 = ___key1;
		RuntimeObject* L_7 = V_0;
		NullCheck(L_5);
		((  void (*) (Dictionary_2_t470F91884BED7B79ACC5D3F01DD62CF9985651D9*, NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_001a:
	{
		// return value;
		RuntimeObject* L_8 = V_0;
		return L_8;
	}
}
// TValue Niantic.ARDK.Utilities.Extensions._DictionaryExtensions::GetOrInsert<System.Object,System.Int32Enum>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _DictionaryExtensions_GetOrInsert_TisRuntimeObject_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mCB0ECA518C63F2B49D9A046935208565EB1358AD_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* ___dict0, RuntimeObject* ___key1, int32_t ___valueToInsert2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (!dict.TryGetValue(key, out value))
		Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* L_0 = ___dict0;
		RuntimeObject* L_1 = ___key1;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, RuntimeObject*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// value = valueToInsert;
		int32_t L_3 = ___valueToInsert2;
		V_0 = L_3;
		// dict.Add(key, value);
		Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* L_4 = ___dict0;
		RuntimeObject* L_5 = ___key1;
		int32_t L_6 = V_0;
		NullCheck(L_4);
		((  void (*) (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0015:
	{
		// return value;
		int32_t L_7 = V_0;
		return L_7;
	}
}
// TValue Niantic.ARDK.Utilities.Extensions._DictionaryExtensions::GetOrInsert<System.Object,System.Object>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _DictionaryExtensions_GetOrInsert_TisRuntimeObject_TisRuntimeObject_m199271F57224171574AFE33A853962CA0F21D764_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___dict0, RuntimeObject* ___key1, RuntimeObject* ___valueToInsert2, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// if (!dict.TryGetValue(key, out value))
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_0 = ___dict0;
		RuntimeObject* L_1 = ___key1;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// value = valueToInsert;
		RuntimeObject* L_3 = ___valueToInsert2;
		V_0 = L_3;
		// dict.Add(key, value);
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_4 = ___dict0;
		RuntimeObject* L_5 = ___key1;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_4);
		((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0015:
	{
		// return value;
		RuntimeObject* L_7 = V_0;
		return L_7;
	}
}
// TValue Niantic.ARDK.Utilities.Extensions._DictionaryExtensions::GetOrInsert<System.Object,System.Object>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,System.Func`1<TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _DictionaryExtensions_GetOrInsert_TisRuntimeObject_TisRuntimeObject_mE48976ABFFB2C0238451AB739AAB0B103CE61641_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___dict0, RuntimeObject* ___key1, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___creator2, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// if (!dict.TryGetValue(key, out value))
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_0 = ___dict0;
		RuntimeObject* L_1 = ___key1;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// value = creator();
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_3 = ___creator2;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = ((  RuntimeObject* (*) (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_0 = L_4;
		// dict.Add(key, value);
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_5 = ___dict0;
		RuntimeObject* L_6 = ___key1;
		RuntimeObject* L_7 = V_0;
		NullCheck(L_5);
		((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_001a:
	{
		// return value;
		RuntimeObject* L_8 = V_0;
		return L_8;
	}
}
// TValue Niantic.ARDK.Utilities.Extensions._DictionaryExtensions::GetOrInsertNew<System.Guid,System.Object>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _DictionaryExtensions_GetOrInsertNew_TisGuid_t_TisRuntimeObject_mFA927672A6DC36568BF0A35D4573041BFCF2D2EF_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ___dict0, Guid_t ___key1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// if (!dict.TryGetValue(key, out value))
		Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* L_0 = ___dict0;
		Guid_t L_1 = ___key1;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, Guid_t, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// value = new TValue();
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		// dict.Add(key, value);
		Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* L_4 = ___dict0;
		Guid_t L_5 = ___key1;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_4);
		((  void (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, Guid_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0019:
	{
		// return value;
		RuntimeObject* L_7 = V_0;
		return L_7;
	}
}
// TValue Niantic.ARDK.Utilities.Extensions._DictionaryExtensions::GetOrInsertNew<System.Int32Enum,System.Object>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _DictionaryExtensions_GetOrInsertNew_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_TisRuntimeObject_mD7DE227BAF939DD6345AC731C22103CA2DDEAF53_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* ___dict0, int32_t ___key1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// if (!dict.TryGetValue(key, out value))
		Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* L_0 = ___dict0;
		int32_t L_1 = ___key1;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71*, int32_t, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// value = new TValue();
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		// dict.Add(key, value);
		Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* L_4 = ___dict0;
		int32_t L_5 = ___key1;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_4);
		((  void (*) (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0019:
	{
		// return value;
		RuntimeObject* L_7 = V_0;
		return L_7;
	}
}
// TValue Niantic.ARDK.Utilities.Extensions._DictionaryExtensions::GetOrInsertNew<System.Object,System.Int32>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _DictionaryExtensions_GetOrInsertNew_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2486B767B0EB2820F69C271549065F9E7A44BAE8_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ___dict0, RuntimeObject* ___key1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (!dict.TryGetValue(key, out value))
		Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* L_0 = ___dict0;
		RuntimeObject* L_1 = ___key1;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// value = new TValue();
		int32_t L_3;
		L_3 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		// dict.Add(key, value);
		Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* L_4 = ___dict0;
		RuntimeObject* L_5 = ___key1;
		int32_t L_6 = V_0;
		NullCheck(L_4);
		((  void (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0019:
	{
		// return value;
		int32_t L_7 = V_0;
		return L_7;
	}
}
// TValue Niantic.ARDK.Utilities.Extensions._DictionaryExtensions::GetOrInsertNew<System.Object,System.Object>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _DictionaryExtensions_GetOrInsertNew_TisRuntimeObject_TisRuntimeObject_m6E15648F0BDBC0CF1918E97C87BE5A3FA6CE3111_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___dict0, RuntimeObject* ___key1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// if (!dict.TryGetValue(key, out value))
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_0 = ___dict0;
		RuntimeObject* L_1 = ___key1;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// value = new TValue();
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		// dict.Add(key, value);
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_4 = ___dict0;
		RuntimeObject* L_5 = ___key1;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_4);
		((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0019:
	{
		// return value;
		RuntimeObject* L_7 = V_0;
		return L_7;
	}
}
// System.IDisposable Niantic.ARDK.VirtualStudio.Remote._EasyConnection::Register<System.Object>(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _EasyConnection_Register_TisRuntimeObject_mFCC1D98578CF6E4661CCBC16E089CDF88C45FD7B_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___messageExecutor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryAdd_mD940918C3F7441CB6EBEBE29CDE6959DC2768416_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Disposer_t5D62714D66FD07C37A61906F52B5E291D754E121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_EasyConnection_tD9A603EF524F4A8A3399844E00E5FED338441544_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	_MessageExecutor_1_tCF16FC04F6F09FA7C94FDD3AE103DB266C22F47F* V_0 = NULL;
	{
		// if (!typeof(T).IsSealed)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsSealed_m6B652265DCEF64250FD2A173C50BD889467A58E4(L_1, NULL);
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		// throw new InvalidOperationException(typeof(T).FullName + " must be a sealed type.");
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral986215E47C0F29D7B07233FC282FCB47B81E2674)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_EasyConnection_Register_TisRuntimeObject_mFCC1D98578CF6E4661CCBC16E089CDF88C45FD7B_RuntimeMethod_var)));
	}

IL_0030:
	{
		// if (messageExecutor == null)
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = ___messageExecutor0;
		if (L_8)
		{
			goto IL_003e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(messageExecutor));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27CF6EC7C28EC2608DFD163153D5245559FF41A4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_EasyConnection_Register_TisRuntimeObject_mFCC1D98578CF6E4661CCBC16E089CDF88C45FD7B_RuntimeMethod_var)));
	}

IL_003e:
	{
		// var messageExecutorHelper = new _MessageExecutor<T>(messageExecutor);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_10 = ___messageExecutor0;
		_MessageExecutor_1_tCF16FC04F6F09FA7C94FDD3AE103DB266C22F47F* L_11 = (_MessageExecutor_1_tCF16FC04F6F09FA7C94FDD3AE103DB266C22F47F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		NullCheck(L_11);
		((  void (*) (_MessageExecutor_1_tCF16FC04F6F09FA7C94FDD3AE103DB266C22F47F*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		// if (_executors.TryAdd(typeof(T), messageExecutorHelper))
		il2cpp_codegen_runtime_class_init_inline(_EasyConnection_tD9A603EF524F4A8A3399844E00E5FED338441544_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_t4EF236AD47825591EA2EB47826446120183E4F64* L_12 = ((_EasyConnection_tD9A603EF524F4A8A3399844E00E5FED338441544_StaticFields*)il2cpp_codegen_static_fields_for(_EasyConnection_tD9A603EF524F4A8A3399844E00E5FED338441544_il2cpp_TypeInfo_var))->____executors_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_13, NULL);
		_MessageExecutor_1_tCF16FC04F6F09FA7C94FDD3AE103DB266C22F47F* L_15 = V_0;
		NullCheck(L_12);
		bool L_16;
		L_16 = ConcurrentDictionary_2_TryAdd_mD940918C3F7441CB6EBEBE29CDE6959DC2768416(L_12, L_14, (RuntimeObject*)L_15, ConcurrentDictionary_2_TryAdd_mD940918C3F7441CB6EBEBE29CDE6959DC2768416_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_006d;
		}
	}
	{
		// return new _Disposer(typeof(T), messageExecutorHelper);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_17, NULL);
		_MessageExecutor_1_tCF16FC04F6F09FA7C94FDD3AE103DB266C22F47F* L_19 = V_0;
		_Disposer_t5D62714D66FD07C37A61906F52B5E291D754E121* L_20 = (_Disposer_t5D62714D66FD07C37A61906F52B5E291D754E121*)il2cpp_codegen_object_new(_Disposer_t5D62714D66FD07C37A61906F52B5E291D754E121_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		_Disposer__ctor_m23DB711160A9FBBC3EA51FC393510B23F650823F(L_20, L_18, (RuntimeObject*)L_19, NULL);
		return (RuntimeObject*)L_20;
	}

IL_006d:
	{
		// string message =
		//   "There's another message executor already registered for:" + typeof(T).FullName;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_21, NULL);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_22);
		String_t* L_24;
		L_24 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9412FEFCB5C0D978C2E1E6CD252874706F1AA6C8)), L_23, NULL);
		// throw new ArgumentException(message, nameof(messageExecutor));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_25 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_25);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_25, L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27CF6EC7C28EC2608DFD163153D5245559FF41A4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_EasyConnection_Register_TisRuntimeObject_mFCC1D98578CF6E4661CCBC16E089CDF88C45FD7B_RuntimeMethod_var)));
	}
}
// System.Boolean Niantic.ARDK.VirtualStudio.Remote._EasyConnection::Unregister<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _EasyConnection_Unregister_TisRuntimeObject_mCAB08E51372FCD489B36E67D23CE95985C4BFA2F_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryRemove_m68ECDBAB1FD61D6C04DE71E3A71DAFC1ED379238_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_EasyConnection_tD9A603EF524F4A8A3399844E00E5FED338441544_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return _executors.TryRemove(typeof(T), out _);
		il2cpp_codegen_runtime_class_init_inline(_EasyConnection_tD9A603EF524F4A8A3399844E00E5FED338441544_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_t4EF236AD47825591EA2EB47826446120183E4F64* L_0 = ((_EasyConnection_tD9A603EF524F4A8A3399844E00E5FED338441544_StaticFields*)il2cpp_codegen_static_fields_for(_EasyConnection_tD9A603EF524F4A8A3399844E00E5FED338441544_il2cpp_TypeInfo_var))->____executors_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = ConcurrentDictionary_2_TryRemove_m68ECDBAB1FD61D6C04DE71E3A71DAFC1ED379238(L_0, L_2, (&V_0), ConcurrentDictionary_2_TryRemove_m68ECDBAB1FD61D6C04DE71E3A71DAFC1ED379238_RuntimeMethod_var);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<Niantic.ARDK.Utilities._HttpResponse`1<TResponse>> Niantic.ARDK.Utilities._HttpClient::SendPostAsync<System.Object,System.Object>(System.String,TRequest,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t6C20CF982304467ABBA3A6DA7E39E029EC26B0F2* _HttpClient_SendPostAsync_TisRuntimeObject_TisRuntimeObject_mE11173A181FB9A6E0EC0446204B87D5E3D80CE22_gshared (String_t* ___uri0, RuntimeObject* ___request1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___headers2, const RuntimeMethod* method) 
{
	U3CSendPostAsyncU3Ed__0_2_tE92D07B49CD05431E959D5ED8522E604E9C38BD5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		AsyncTaskMethodBuilder_1_tD0BB5BAA8AD25EEF2158CF4CC106F34727B7E338 L_0;
		L_0 = ((  AsyncTaskMethodBuilder_1_tD0BB5BAA8AD25EEF2158CF4CC106F34727B7E338 (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		String_t* L_1 = ___uri0;
		(&V_0)->___uri_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___uri_3), (void*)L_1);
		RuntimeObject* L_2 = ___request1;
		(&V_0)->___request_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___request_2), (void*)L_2);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = ___headers2;
		(&V_0)->___headers_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___headers_4), (void*)L_3);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tD0BB5BAA8AD25EEF2158CF4CC106F34727B7E338* L_4 = (AsyncTaskMethodBuilder_1_tD0BB5BAA8AD25EEF2158CF4CC106F34727B7E338*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CSendPostAsyncU3Ed__0_2_tE92D07B49CD05431E959D5ED8522E604E9C38BD5_mD1090C9FC9906B81449431F8D38BE27D67ED81F3(L_4, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
		AsyncTaskMethodBuilder_1_tD0BB5BAA8AD25EEF2158CF4CC106F34727B7E338* L_5 = (AsyncTaskMethodBuilder_1_tD0BB5BAA8AD25EEF2158CF4CC106F34727B7E338*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t6C20CF982304467ABBA3A6DA7E39E029EC26B0F2* L_6;
		L_6 = AsyncTaskMethodBuilder_1_get_Task_m3382EFF3F7B731781531DF08FCA21C335B2943FD(L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_6;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> Niantic.ARDK.Utilities._KeyValuePair::Create<System.Object,System.Object>(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 _KeyValuePair_Create_TisRuntimeObject_TisRuntimeObject_mC1E6CCB39070F6AAB46E5C62ED5B06259882D1EF_gshared (RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		// return new KeyValuePair<TKey, TValue>(key, value);
		RuntimeObject* L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_2;
		memset((&L_2), 0, sizeof(L_2));
		KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950((&L_2), L_0, L_1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
// Niantic.Experimental.ARDK.SharedAR.Result Niantic.Experimental.ARDK.SharedAR._NativeDatastore::GetData<System.Object>(System.String,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _NativeDatastore_GetData_TisRuntimeObject_mFFF200B558C22E1BEC5C47BBF34F5590773DCE48_gshared (_NativeDatastore_tA13E5C51916620354121C200FA46C8DF57A87E97* __this, String_t* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_NativeDatastore_GetData_TisRuntimeObject_mFFF200B558C22E1BEC5C47BBF34F5590773DCE48_RuntimeMethod_var)));
	}
}
// Niantic.Experimental.ARDK.SharedAR.Result Niantic.Experimental.ARDK.SharedAR._NativeDatastore::SetData<System.Object>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _NativeDatastore_SetData_TisRuntimeObject_m701E7CD623CE3595F2C055F483F216E2DB2DEBE3_gshared (_NativeDatastore_tA13E5C51916620354121C200FA46C8DF57A87E97* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_NativeDatastore_SetData_TisRuntimeObject_m701E7CD623CE3595F2C055F483F216E2DB2DEBE3_RuntimeMethod_var)));
	}
}
// System.Void Niantic.Experimental.ARDK.SharedAR._NativeNetworking::SendData<System.Object>(System.Collections.Generic.List`1<Niantic.Experimental.ARDK.SharedAR.IPeerID>,System.UInt32,T,Niantic.Experimental.ARDK.SharedAR.ConnectionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _NativeNetworking_SendData_TisRuntimeObject_m1665908951DF30B181CE6F61CB7347FB20E26C70_gshared (_NativeNetworking_tF1F4B6112FBD0D75846E5AB96F631CCFD50A51CB* __this, List_1_t9D63ED4A2830036764C9D936C3E591BE1DB1089E* ___dest0, uint32_t ___tag1, RuntimeObject* ___data2, uint8_t ___connectionType3, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_NativeNetworking_SendData_TisRuntimeObject_m1665908951DF30B181CE6F61CB7347FB20E26C70_RuntimeMethod_var)));
	}
}
// T Niantic.ARDK.Utilities.Extensions._ObjectSerializationExtensions::DeserializeFromArray<System.Object>(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ObjectSerializationExtensions_DeserializeFromArray_TisRuntimeObject_m7E5EDEDF92901E68E37935DC5E6533645FFD06AB_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___byteArray0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalSerializer_tA0B8180285C4AA31D7BAF12BD33BE62D1E607D4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_1 = NULL;
	{
		// if (byteArray == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___byteArray0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return null;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		// using (var stream = new MemoryStream(byteArray))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___byteArray0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_3, L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0022:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_1;
					if (!L_4)
					{
						goto IL_002b;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = V_1;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_002b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var obj = (T)GlobalSerializer.Deserialize(stream);
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_6 = V_1;
			il2cpp_codegen_runtime_class_init_inline(GlobalSerializer_tA0B8180285C4AA31D7BAF12BD33BE62D1E607D4E_il2cpp_TypeInfo_var);
			RuntimeObject* L_7;
			L_7 = GlobalSerializer_Deserialize_m1471E8290F8200F6BD501A37BC791779AB3FBE29((Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_6, NULL);
			// return obj;
			V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 0)));
			goto IL_002c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002c:
	{
		// }
		RuntimeObject* L_8 = V_0;
		return L_8;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> Niantic.ARDK.Utilities.Collections._ReadOnlyCollectionExtensions::AsNonNullReadOnly<System.Object>(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* _ReadOnlyCollectionExtensions_AsNonNullReadOnly_TisRuntimeObject_mA6BFE01D6195DC5DF5FBBE86945B191711225AF3_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___source0, const RuntimeMethod* method) 
{
	{
		// if (source == null || source.Length == 0)
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___source0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___source0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_000d;
		}
	}

IL_0007:
	{
		// return EmptyReadOnlyCollection<T>.Instance;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* L_2 = ((EmptyReadOnlyCollection_1_tFADF8197C3C7720F56E38A6FDD286158C98B72C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Instance_0;
		return L_2;
	}

IL_000d:
	{
		// return new ReadOnlyCollection<T>(source);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___source0;
		ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* L_4 = (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		NullCheck(L_4);
		((  void (*) (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_4, (RuntimeObject*)L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_4;
	}
}
// System.Void Niantic.ARDK.VirtualStudio.Remote._RemoteConnection::Send<System.Object>(System.Guid,TValue,Niantic.ARDK.Networking.TransportType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _RemoteConnection_Send_TisRuntimeObject_mF069E7F671CA3FB655CFA9481DCC1FC54F442F7A_gshared (Guid_t ___id0, RuntimeObject* ___value1, uint8_t ___transportType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_RemoteConnection_t0B1EDF45E6139A1548096ECA71562F4BFA95BAED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Send(id, value.SerializeToArray(), transportType);
		Guid_t L_0 = ___id0;
		RuntimeObject* L_1 = ___value1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = _ObjectSerializationExtensions_SerializeToArray_m5EFE17C6F5DACE1E9C4B1215A2ADF7F08870C39C(L_1, NULL);
		uint8_t L_3 = ___transportType2;
		il2cpp_codegen_runtime_class_init_inline(_RemoteConnection_t0B1EDF45E6139A1548096ECA71562F4BFA95BAED_il2cpp_TypeInfo_var);
		_RemoteConnection_Send_m3A295393D2C1BC602A91E3E530C631024E761000(L_0, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._StaticMemberValidator::_FieldContainsSpecificValueWhenScopeEnds<System.Object>(System.Linq.Expressions.Expression`1<System.Func`1<T>>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _StaticMemberValidator__FieldContainsSpecificValueWhenScopeEnds_TisRuntimeObject_m364E29B7DD461A95F1B15072804F816622CBDC9F_gshared (Expression_1_t40A989195949EC188A0EB6743616540AD0F56F66* ___expression0, RuntimeObject* ___valueAtEnd1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._StaticMemberValidator::_FieldIsNullWhenScopeEnds<System.Object>(System.Linq.Expressions.Expression`1<System.Func`1<T>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _StaticMemberValidator__FieldIsNullWhenScopeEnds_TisRuntimeObject_m36EE4021BDCE0F8434CA952429D0D10E32864A4E_gshared (Expression_1_t40A989195949EC188A0EB6743616540AD0F56F66* ___expression0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Int32 Google.Protobuf.FieldCodec/WrapperCodecs::CalculateSize<System.Object>(T,Google.Protobuf.FieldCodec`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrapperCodecs_CalculateSize_TisRuntimeObject_mF0AE569AFDDCA51FC041F13C8861FCDA5B643A77_gshared (RuntimeObject* ___value0, FieldCodec_1_t1003B5591A5EC28391ECA063B1C679E562379ABB* ___codec1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_t2BE94AFB9366804E9C8249347DBE4E6E2DDDB79B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		FieldCodec_1_t1003B5591A5EC28391ECA063B1C679E562379ABB* L_0 = ___codec1;
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (FieldCodec_1_t1003B5591A5EC28391ECA063B1C679E562379ABB*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_2;
		int32_t L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CodedOutputStream_t2BE94AFB9366804E9C8249347DBE4E6E2DDDB79B_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = CodedOutputStream_ComputeLengthSize_m4548F1F4D29A2125918AB8006BF4CC16099DD895(L_3, NULL);
		int32_t L_5 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_4, L_5));
	}
}
// Google.Protobuf.FieldCodec`1<T> Google.Protobuf.FieldCodec/WrapperCodecs::GetCodec<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldCodec_1_t1003B5591A5EC28391ECA063B1C679E562379ABB* WrapperCodecs_GetCodec_TisRuntimeObject_m582EE6B64B2E0D6438AD9C3926A8E5C4A8882988_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WrapperCodecs_tEB1746636C1C0D1054D31B76B252A4C45D62F607_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(WrapperCodecs_tEB1746636C1C0D1054D31B76B252A4C45D62F607_il2cpp_TypeInfo_var);
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_0 = ((WrapperCodecs_tEB1746636C1C0D1054D31B76B252A4C45D62F607_StaticFields*)il2cpp_codegen_static_fields_for(WrapperCodecs_tEB1746636C1C0D1054D31B76B252A4C45D62F607_il2cpp_TypeInfo_var))->___Codecs_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A((RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7210D872E945C71ACA8CEF51ACA40552C43E8605)), (RuntimeObject*)L_5, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WrapperCodecs_GetCodec_TisRuntimeObject_m582EE6B64B2E0D6438AD9C3926A8E5C4A8882988_RuntimeMethod_var)));
	}

IL_0032:
	{
		RuntimeObject* L_8 = V_0;
		return ((FieldCodec_1_t1003B5591A5EC28391ECA063B1C679E562379ABB*)CastclassSealed((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// T Google.Protobuf.FieldCodec/WrapperCodecs::Read<System.Object>(Google.Protobuf.CodedInputStream,Google.Protobuf.FieldCodec`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperCodecs_Read_TisRuntimeObject_mF4D57C4F21DE056EE3970CA732CB259AED17A8AE_gshared (CodedInputStream_t195F201266AFB2818D425D0ABA3D50ADDC821DBF* ___input0, FieldCodec_1_t1003B5591A5EC28391ECA063B1C679E562379ABB* ___codec1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		CodedInputStream_t195F201266AFB2818D425D0ABA3D50ADDC821DBF* L_0 = ___input0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = CodedInputStream_ReadLength_mAC5F0B0F4F2D718718E51613E553DF39994CCFC8(L_0, NULL);
		V_0 = L_1;
		CodedInputStream_t195F201266AFB2818D425D0ABA3D50ADDC821DBF* L_2 = ___input0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = CodedInputStream_PushLimit_m03CA3333CBC8089C8A389DE65B78993B37BFD125(L_2, L_3, NULL);
		V_1 = L_4;
		FieldCodec_1_t1003B5591A5EC28391ECA063B1C679E562379ABB* L_5 = ___codec1;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = ((  RuntimeObject* (*) (FieldCodec_1_t1003B5591A5EC28391ECA063B1C679E562379ABB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_3 = L_6;
		goto IL_0031;
	}

IL_0018:
	{
		uint32_t L_7 = V_2;
		FieldCodec_1_t1003B5591A5EC28391ECA063B1C679E562379ABB* L_8 = ___codec1;
		NullCheck(L_8);
		uint32_t L_9;
		L_9 = ((  uint32_t (*) (FieldCodec_1_t1003B5591A5EC28391ECA063B1C679E562379ABB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_002b;
		}
	}
	{
		FieldCodec_1_t1003B5591A5EC28391ECA063B1C679E562379ABB* L_10 = ___codec1;
		CodedInputStream_t195F201266AFB2818D425D0ABA3D50ADDC821DBF* L_11 = ___input0;
		NullCheck(L_10);
		RuntimeObject* L_12;
		L_12 = ((  RuntimeObject* (*) (FieldCodec_1_t1003B5591A5EC28391ECA063B1C679E562379ABB*, CodedInputStream_t195F201266AFB2818D425D0ABA3D50ADDC821DBF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_3 = L_12;
		goto IL_0031;
	}

IL_002b:
	{
		CodedInputStream_t195F201266AFB2818D425D0ABA3D50ADDC821DBF* L_13 = ___input0;
		NullCheck(L_13);
		CodedInputStream_SkipLastField_mBCB756ECC8DA88C8A7AA2CB60A9A37E8E38B8A3D(L_13, NULL);
	}

IL_0031:
	{
		CodedInputStream_t195F201266AFB2818D425D0ABA3D50ADDC821DBF* L_14 = ___input0;
		NullCheck(L_14);
		uint32_t L_15;
		L_15 = CodedInputStream_ReadTag_m96A1370BCC95CA1ED35A29FF1288D930D8F8E03E(L_14, NULL);
		uint32_t L_16 = L_15;
		V_2 = L_16;
		if (L_16)
		{
			goto IL_0018;
		}
	}
	{
		CodedInputStream_t195F201266AFB2818D425D0ABA3D50ADDC821DBF* L_17 = ___input0;
		NullCheck(L_17);
		CodedInputStream_CheckReadEndOfStreamTag_m0447754C6A8ACB9B9DAE2EF209C4FB64F7FC1891(L_17, NULL);
		CodedInputStream_t195F201266AFB2818D425D0ABA3D50ADDC821DBF* L_18 = ___input0;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		CodedInputStream_PopLimit_m50BB2150FAE9FBC159AC53CEA8A2A4E7A591E8D9(L_18, L_19, NULL);
		RuntimeObject* L_20 = V_3;
		return L_20;
	}
}
// System.Void Google.Protobuf.FieldCodec/WrapperCodecs::Write<System.Object>(Google.Protobuf.CodedOutputStream,T,Google.Protobuf.FieldCodec`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperCodecs_Write_TisRuntimeObject_m855F80D92009EF90BD0E5BB892A92B8DE33F4CD0_gshared (CodedOutputStream_t2BE94AFB9366804E9C8249347DBE4E6E2DDDB79B* ___output0, RuntimeObject* ___value1, FieldCodec_1_t1003B5591A5EC28391ECA063B1C679E562379ABB* ___codec2, const RuntimeMethod* method) 
{
	{
		CodedOutputStream_t2BE94AFB9366804E9C8249347DBE4E6E2DDDB79B* L_0 = ___output0;
		FieldCodec_1_t1003B5591A5EC28391ECA063B1C679E562379ABB* L_1 = ___codec2;
		RuntimeObject* L_2 = ___value1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = ((  int32_t (*) (FieldCodec_1_t1003B5591A5EC28391ECA063B1C679E562379ABB*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_0);
		CodedOutputStream_WriteLength_m5067AF162AF8D8DEDC8DF45070B9FF7473631B48(L_0, L_3, NULL);
		FieldCodec_1_t1003B5591A5EC28391ECA063B1C679E562379ABB* L_4 = ___codec2;
		CodedOutputStream_t2BE94AFB9366804E9C8249347DBE4E6E2DDDB79B* L_5 = ___output0;
		RuntimeObject* L_6 = ___value1;
		NullCheck(L_4);
		((  void (*) (FieldCodec_1_t1003B5591A5EC28391ECA063B1C679E562379ABB*, CodedOutputStream_t2BE94AFB9366804E9C8249347DBE4E6E2DDDB79B*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::VisitLambda<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* QuoteVisitor_VisitLambda_TisRuntimeObject_m8546CE5243FDDEFA3C7483FEB44BF91BD8F91DAF_gshared (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_0;
		L_0 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_1 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_1;
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_5 = (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*)il2cpp_codegen_object_new(List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D(L_5, L_4, List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		V_2 = L_5;
		V_3 = 0;
		goto IL_002d;
	}

IL_001c:
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_6 = V_2;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_7 = ___node0;
		int32_t L_8 = V_3;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_9;
		L_9 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7, L_8);
		NullCheck(L_6);
		List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline(L_6, L_9, List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_13 = V_2;
		V_0 = (RuntimeObject*)L_13;
	}

IL_0033:
	{
		RuntimeObject* L_14 = V_0;
		QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76(__this, L_14, NULL);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15 = ___node0;
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = ((  Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* (*) (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_15, il2cpp_rgctx_method(method->rgctx_data, 0));
		RuntimeObject* L_17 = V_0;
		QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9(__this, L_17, NULL);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_18 = ___node0;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_18;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::VisitLambda<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisRuntimeObject_m367D8F5D10D80B4A1A34D42A5339BAF95A51FE5E_gshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_0 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_3 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_6 = ___node0;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_16);
		V_0 = L_17;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_18 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		NullCheck(L_20);
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_23 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_25 = ___node0;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_26 = ___node0;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		NullCheck(L_26);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_28;
		L_28 = VirtualFuncInvoker2< Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(18 /* System.Linq.Expressions.Expression`1<TDelegate> System.Linq.Expressions.Expression`1<System.Object>::Rewrite(System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[]) */, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___value0;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->____body_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Stride_mE29B800705645CDD49B576BB3B9B328811F27C90_gshared_inline (NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___m_Stride_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Stride_m2BC6AD2264EE2D02A38D29E30D382DEA9B5A9E29_gshared_inline (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___m_Stride_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_5_Invoke_mE8C84338774AD9744AAFC509CDEAEF30AA8A4912_gshared_inline (Func_5_t74C97CB282B6968A7E9A489D51F5489131EB82DC* __this, int32_t ___arg10, int32_t ___arg21, int32_t ___arg32, int32_t ___arg43, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
