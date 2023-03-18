#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Awareness.ContextAwarenessArgs`1<Niantic.ARDK.AR.Awareness.Depth.IDepthBuffer>>
struct ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Awareness.ContextAwarenessStreamUpdatedArgs`1<Niantic.ARDK.AR.Awareness.Depth.IDepthBuffer>>
struct ArdkEventHandler_1_t0B6F3775612BEB39B6D65A909569C07E8BDDA3D8;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<System.Object>
struct ArdkEventHandler_1_t3E26CBDE57CDAA3ED8121EB52A3FCEF3E53A37FA;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Rendering.RenderFeaturesChangedArgs>
struct ArdkEventHandler_1_tD59374934BF5322F39D9A7731A868B84DC2DBDA2;
// Niantic.ARDK.AR.Awareness.AwarenessBufferProcessor`1<Niantic.ARDK.AR.Awareness.Depth.IDepthBuffer>
struct AwarenessBufferProcessor_1_t190E9951E14C6CEB5980D3299F7B48567619611F;
// Niantic.ARDK.AR.Awareness.ContextAwarenessArgs`1<Niantic.ARDK.AR.Awareness.Depth.IDepthBuffer>
struct ContextAwarenessArgs_1_t58B3B5DC8745F50F26A2217B0B869FDD542EEA84;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// Message[]
struct MessageU5BU5D_tFE8C0A6DF33CB2B40201F0B2194144AD1DD4E27B;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// Niantic.ARDK.Extensions.ARDepthManager
struct ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B;
// ARDK.Extensions.Depth.ARFusedDepthRenderer
struct ARFusedDepthRenderer_t54F7C6CFC02505758B4E0360E7EED7DA749E7A63;
// Niantic.ARDK.Extensions.ARSemanticSegmentationManager
struct ARSemanticSegmentationManager_t4B998DD1B311F9585DBB87063055F226D54CF8DF;
// Niantic.ARDK.AR.Configuration.ARSessionChangesCollector
struct ARSessionChangesCollector_t249430ABE12D571F1A9CB9EE78E1CF979AE6F8C1;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Niantic.ARDK.AR.Awareness.Depth.DepthBufferProcessor
struct DepthBufferProcessor_tE1923975FF045B6B3958F081D922B873C876C163;
// Niantic.ARDKExamples.DepthExampleManager
struct DepthExampleManager_tA983D4E9AFC742EA0665BF0E5BF62778CA0D5338;
// Niantic.ARDK.AR.Depth.Effects.DepthMeshOccluder
struct DepthMeshOccluder_t0359C2120AA79AAF06CC2E462934EDEFAF75E97A;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Niantic.ARDK.AR.Awareness.Depth.IDepthBuffer
struct IDepthBuffer_tFF497B75873D318068AF9A03936893EE8412AF02;
// Niantic.ARDK.AR.Awareness.Depth.IDepthBufferProcessor
struct IDepthBufferProcessor_t8BB67409E168243E9BA7B883AF2C5597E1A32522;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// Message
struct Message_t6F0607127E5920A1C18E3FA5FDE1CDB7C3F10640;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// Niantic.ARDK.Utilities._ThreadCheckedObject
struct _ThreadCheckedObject_tB062B0CBB623B72F74B98674276DCEEE598566A6;
// measurement
struct measurement_tBABFBD94B7887511259EC83C6D3FADB3CF803A2A;
// partOne
struct partOne_t5777F0EB23ACFA85AFECCDFF6365856E784381C4;
// switchScene
struct switchScene_tBAE45A40FF588E86C545CF18D1E24FB7A5292465;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1;

IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAwarenessBufferProcessor_t2F83E2CB1300EA8DCA11BCFA09703FA7DB8BCD54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDepthBufferProcessor_t8BB67409E168243E9BA7B883AF2C5597E1A32522_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterpolationMode_tF0839B90402DAABD0E619360BAB21FDB38A24689_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OcclusionMode_t7DD8CC69E694901B48E22F113F1EB41D04167D86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformAgnosticInput_tB0003440F676D5712F8A78BBE7BA335FC593809D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1B11797863960D4DE233B30DCEF65DE6E5493DAA;
IL2CPP_EXTERN_C String_t* _stringLiteral2091262F7B0917C4BA184A21BD3F4E0700FE1785;
IL2CPP_EXTERN_C String_t* _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748;
IL2CPP_EXTERN_C String_t* _stringLiteral24C6DD9224BE12FEDE05A7D75423A9A7D8CF4C25;
IL2CPP_EXTERN_C String_t* _stringLiteral348B1D40AF32C3F48F9A55D29BC560BDAF82699B;
IL2CPP_EXTERN_C String_t* _stringLiteral3A922CADE4941E4318B21D5655B82CB158428EF7;
IL2CPP_EXTERN_C String_t* _stringLiteral3F739B3B6F9A50A558F01BC946725EA086630D43;
IL2CPP_EXTERN_C String_t* _stringLiteral447F41D7423FBA1A58110B093E2B8E27D4BB1E28;
IL2CPP_EXTERN_C String_t* _stringLiteral46E5172E84E8B1FABA8D0F95FE004C4F08DAE573;
IL2CPP_EXTERN_C String_t* _stringLiteral4FF480A10A0AC9FD4B4110588B84F22D4872DB3A;
IL2CPP_EXTERN_C String_t* _stringLiteral544A642FE86349136FA63001E0BD0CF9A5B9A7F1;
IL2CPP_EXTERN_C String_t* _stringLiteral581CA318F8B5E78153DFAB13447844D5260CEB9B;
IL2CPP_EXTERN_C String_t* _stringLiteral5997941F4F547F7F3435415BCA8D796999AD84F0;
IL2CPP_EXTERN_C String_t* _stringLiteral5D9D56ECE340DEF1E16D2DAF67E12473528DDC39;
IL2CPP_EXTERN_C String_t* _stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563;
IL2CPP_EXTERN_C String_t* _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64;
IL2CPP_EXTERN_C String_t* _stringLiteral77793DF87854A30D202EA3C188F1A4F21D4DDCBD;
IL2CPP_EXTERN_C String_t* _stringLiteral781586D553DF44B8DBC60377864D74BE4616563E;
IL2CPP_EXTERN_C String_t* _stringLiteral8304C3144F9A746AC8A090694231F7F17241DAC3;
IL2CPP_EXTERN_C String_t* _stringLiteral840A9E33E68787885A0C5B8AED1E0729364AF586;
IL2CPP_EXTERN_C String_t* _stringLiteralC76E1D7F401D4024E6A362193CE7E72167215532;
IL2CPP_EXTERN_C String_t* _stringLiteralC8D4F15E09CCE1D2332DA41F357D38BA0A627FAF;
IL2CPP_EXTERN_C String_t* _stringLiteralD7691D48674C785E388ECAABC40058CD16BC2F53;
IL2CPP_EXTERN_C String_t* _stringLiteralDB7A330309BFA84FB156E4FBA6A35A48D3B78C3A;
IL2CPP_EXTERN_C String_t* _stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84;
IL2CPP_EXTERN_C String_t* _stringLiteralF57300997ADD4615042099A09A508ACFF8C3BE07;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* DepthExampleManager_OnDepthBufferInitialized_mED8BF3A33EF7E4616C92566B19D0EE2EE149003A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DepthExampleManager_ToggleInterpolation_m77C4F004D21314D224D248456D45D2B0E73FD15C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DepthExampleManager_ToggleOcclusion_m5CB060B22BC0B78BE595D0B102CFB8E5E9681932_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* measurement_OnDepthBufferInitialized_m2152187DF667339B3BF9BB33A58C04B7E71A5D66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* partOne_OnDepthBufferInitialized_mC549D8D5096C47CE70821F978AC290170A4D1F9D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct MessageU5BU5D_tFE8C0A6DF33CB2B40201F0B2194144AD1DD4E27B;
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
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// Niantic.ARDK.AR.Awareness.ContextAwarenessArgs`1<Niantic.ARDK.AR.Awareness.Depth.IDepthBuffer>
struct ContextAwarenessArgs_1_t58B3B5DC8745F50F26A2217B0B869FDD542EEA84  : public RuntimeObject
{
	// Niantic.ARDK.AR.Awareness.AwarenessBufferProcessor`1<TBuffer> Niantic.ARDK.AR.Awareness.ContextAwarenessArgs`1::Sender
	AwarenessBufferProcessor_1_t190E9951E14C6CEB5980D3299F7B48567619611F* ___Sender_0;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
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
struct Il2CppArrayBounds;

// Message
struct Message_t6F0607127E5920A1C18E3FA5FDE1CDB7C3F10640  : public RuntimeObject
{
	// System.String Message::message
	String_t* ___message_0;
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

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.Rendering.RenderTargetIdentifier
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B 
{
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_2;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_3;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_4;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_5;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_6;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_7;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// Niantic.ARDK.Rendering.RenderTarget
struct RenderTarget_t8FD1DC9E873F4F213912D5B2596D80B03E73C1EF 
{
	// UnityEngine.Camera Niantic.ARDK.Rendering.RenderTarget::Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera_0;
	// UnityEngine.RenderTexture Niantic.ARDK.Rendering.RenderTarget::RenderTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___RenderTexture_1;
	// UnityEngine.Rendering.RenderTargetIdentifier Niantic.ARDK.Rendering.RenderTarget::Identifier
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___Identifier_2;
	// System.Boolean Niantic.ARDK.Rendering.RenderTarget::IsTargetingCamera
	bool ___IsTargetingCamera_3;
	// System.Boolean Niantic.ARDK.Rendering.RenderTarget::IsTargetingTexture
	bool ___IsTargetingTexture_4;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.Rendering.RenderTarget
struct RenderTarget_t8FD1DC9E873F4F213912D5B2596D80B03E73C1EF_marshaled_pinvoke
{
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera_0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___RenderTexture_1;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___Identifier_2;
	int32_t ___IsTargetingCamera_3;
	int32_t ___IsTargetingTexture_4;
};
// Native definition for COM marshalling of Niantic.ARDK.Rendering.RenderTarget
struct RenderTarget_t8FD1DC9E873F4F213912D5B2596D80B03E73C1EF_marshaled_com
{
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera_0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___RenderTexture_1;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___Identifier_2;
	int32_t ___IsTargetingCamera_3;
	int32_t ___IsTargetingTexture_4;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Awareness.ContextAwarenessArgs`1<Niantic.ARDK.AR.Awareness.Depth.IDepthBuffer>>
struct ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1  : public MulticastDelegate_t
{
};

// System.Nullable`1<Niantic.ARDK.Rendering.RenderTarget>
struct Nullable_1_t93334A5AE098F8DAF650EDAFA5E202EDB6A933FC 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	RenderTarget_t8FD1DC9E873F4F213912D5B2596D80B03E73C1EF ___value_1;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// Niantic.ARDKExamples.DepthExampleManager
struct DepthExampleManager_tA983D4E9AFC742EA0665BF0E5BF62778CA0D5338  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Niantic.ARDK.Extensions.ARDepthManager Niantic.ARDKExamples.DepthExampleManager::_arDepthManager
	ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* ____arDepthManager_4;
	// UnityEngine.GameObject Niantic.ARDKExamples.DepthExampleManager::_toggles
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____toggles_5;
	// UnityEngine.UI.Text Niantic.ARDKExamples.DepthExampleManager::_toggleViewButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____toggleViewButtonText_6;
	// UnityEngine.UI.Text Niantic.ARDKExamples.DepthExampleManager::_togglePointCloudButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____togglePointCloudButtonText_7;
	// UnityEngine.UI.Text Niantic.ARDKExamples.DepthExampleManager::_toggleOcclusionButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____toggleOcclusionButtonText_8;
	// UnityEngine.UI.Text Niantic.ARDKExamples.DepthExampleManager::_toggleInterpolationButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____toggleInterpolationButtonText_9;
	// UnityEngine.UI.Text Niantic.ARDKExamples.DepthExampleManager::_toggleDepthButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____toggleDepthButtonText_10;
	// UnityEngine.UI.Text Niantic.ARDKExamples.DepthExampleManager::_toggleFilterText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____toggleFilterText_11;
	// UnityEngine.GameObject Niantic.ARDKExamples.DepthExampleManager::_pointer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____pointer_12;
	// UnityEngine.GameObject Niantic.ARDKExamples.DepthExampleManager::_cube
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____cube_13;
	// System.Boolean Niantic.ARDKExamples.DepthExampleManager::_isShowingDepths
	bool ____isShowingDepths_14;
	// System.Boolean Niantic.ARDKExamples.DepthExampleManager::_isShowingPointCloud
	bool ____isShowingPointCloud_15;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Niantic.ARDK.Extensions.UnityLifecycleDriverBase
struct UnityLifecycleDriverBase_t9755F207604E4A621F83A87843F84F1DCB60BEB4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// measurement
struct measurement_tBABFBD94B7887511259EC83C6D3FADB3CF803A2A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Niantic.ARDK.Extensions.ARDepthManager measurement::_arDepthManager
	ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* ____arDepthManager_4;
	// UnityEngine.GameObject measurement::_pointer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____pointer_5;
	// System.Boolean measurement::_isShowingDepths
	bool ____isShowingDepths_6;
	// System.Boolean measurement::_isShowingPointCloud
	bool ____isShowingPointCloud_7;
	// UnityEngine.GameObject measurement::PlacementObjectPf
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PlacementObjectPf_8;
	// UnityEngine.GameObject measurement::wall
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___wall_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> measurement::_placedObjects
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____placedObjects_10;
	// UnityEngine.LineRenderer measurement::lineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___lineRenderer_11;
	// TMPro.TextMeshPro measurement::mText
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___mText_12;
	// TMPro.TextMeshPro measurement::firstSideText
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___firstSideText_13;
	// TMPro.TextMeshPro measurement::secondSideText
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___secondSideText_14;
	// TMPro.TextMeshPro measurement::thirdSideText
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___thirdSideText_15;
	// System.Boolean measurement::startPointAdded
	bool ___startPointAdded_16;
	// UnityEngine.Vector3 measurement::startPointPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPointPos_17;
	// System.Boolean measurement::secondPointAdded
	bool ___secondPointAdded_18;
	// UnityEngine.Vector3 measurement::secondPointPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___secondPointPos_19;
	// System.Boolean measurement::thirdPointAdded
	bool ___thirdPointAdded_20;
	// UnityEngine.Vector3 measurement::thirdPointPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___thirdPointPos_21;
	// System.Boolean measurement::endPointAdded
	bool ___endPointAdded_22;
	// UnityEngine.Vector3 measurement::endPointPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endPointPos_23;
	// UnityEngine.Vector3 measurement::prevPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___prevPos_24;
	// System.Boolean measurement::wallRotated
	bool ___wallRotated_25;
	// UnityEngine.Camera measurement::arCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___arCamera_26;
	// System.Single measurement::measurementFactor
	float ___measurementFactor_27;
	// UnityEngine.Vector3 measurement::offsetMeasurement
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offsetMeasurement_28;
	// System.Int32 measurement::pointNum
	int32_t ___pointNum_29;
	// TMPro.TextMeshProUGUI measurement::instructions1
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___instructions1_30;
	// TMPro.TextMeshProUGUI measurement::instructions2
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___instructions2_31;
	// TMPro.TextMeshProUGUI measurement::instructions3
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___instructions3_32;
	// TMPro.TextMeshProUGUI measurement::instructions4
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___instructions4_33;
	// UnityEngine.GameObject measurement::dialogueBox
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___dialogueBox_34;
	// TMPro.TextMeshProUGUI measurement::message
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___message_35;
	// UnityEngine.GameObject measurement::nextButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___nextButton_36;
	// System.Boolean measurement::clicker
	bool ___clicker_37;
};

// partOne
struct partOne_t5777F0EB23ACFA85AFECCDFF6365856E784381C4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Niantic.ARDK.Extensions.ARDepthManager partOne::_arDepthManager
	ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* ____arDepthManager_4;
	// UnityEngine.GameObject partOne::_pointer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____pointer_5;
	// System.Boolean partOne::_isShowingDepths
	bool ____isShowingDepths_6;
	// System.Boolean partOne::_isShowingPointCloud
	bool ____isShowingPointCloud_7;
	// UnityEngine.GameObject partOne::PlacementObjectPf
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PlacementObjectPf_8;
	// UnityEngine.GameObject partOne::sidesObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sidesObject_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> partOne::_placedObjects
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____placedObjects_10;
	// System.Boolean partOne::startPointAdded
	bool ___startPointAdded_11;
	// UnityEngine.Vector3 partOne::startPointPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPointPos_12;
	// UnityEngine.Camera partOne::arCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___arCamera_13;
	// UnityEngine.GameObject partOne::button
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___button_14;
	// UnityEngine.GameObject partOne::nextButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___nextButton_15;
	// Message[] partOne::messages
	MessageU5BU5D_tFE8C0A6DF33CB2B40201F0B2194144AD1DD4E27B* ___messages_16;
	// Message[] partOne::currentMessages
	MessageU5BU5D_tFE8C0A6DF33CB2B40201F0B2194144AD1DD4E27B* ___currentMessages_17;
	// TMPro.TextMeshProUGUI partOne::messageText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___messageText_18;
	// UnityEngine.RectTransform partOne::backgroundBox
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___backgroundBox_19;
	// System.Int32 partOne::activeMessage
	int32_t ___activeMessage_20;
	// UnityEngine.GameObject partOne::demoObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___demoObject_21;
	// UnityEngine.GameObject partOne::demoFace
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___demoFace_22;
	// UnityEngine.GameObject partOne::formula1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___formula1_23;
	// UnityEngine.GameObject partOne::formula2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___formula2_24;
	// UnityEngine.GameObject partOne::formula3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___formula3_25;
	// UnityEngine.GameObject partOne::formula4
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___formula4_26;
	// UnityEngine.GameObject partOne::formula5
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___formula5_27;
	// UnityEngine.GameObject partOne::length
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___length_28;
	// UnityEngine.GameObject partOne::width
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___width_29;
	// UnityEngine.GameObject partOne::height
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___height_30;
	// UnityEngine.GameObject partOne::equation
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___equation_31;
	// TMPro.TextMeshProUGUI partOne::total_text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___total_text_32;
	// TMPro.TMP_InputField partOne::input1
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___input1_33;
	// TMPro.TMP_InputField partOne::input2
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___input2_34;
	// TMPro.TMP_InputField partOne::input3
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___input3_35;
};

// switchScene
struct switchScene_tBAE45A40FF588E86C545CF18D1E24FB7A5292465  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// Niantic.ARDK.Extensions.UnityLifecycleDriver
struct UnityLifecycleDriver_t19A065B156F390FF32D17F4891660C8DA190B708  : public UnityLifecycleDriverBase_t9755F207604E4A621F83A87843F84F1DCB60BEB4
{
	// System.Boolean Niantic.ARDK.Extensions.UnityLifecycleDriver::_manageUsingUnityLifecycle
	bool ____manageUsingUnityLifecycle_4;
	// Niantic.ARDK.Utilities._ThreadCheckedObject Niantic.ARDK.Extensions.UnityLifecycleDriver::_threadChecker
	_ThreadCheckedObject_tB062B0CBB623B72F74B98674276DCEEE598566A6* ____threadChecker_5;
	// System.Boolean Niantic.ARDK.Extensions.UnityLifecycleDriver::_initialized
	bool ____initialized_6;
	// System.Boolean Niantic.ARDK.Extensions.UnityLifecycleDriver::_deinitialized
	bool ____deinitialized_7;
	// System.Boolean Niantic.ARDK.Extensions.UnityLifecycleDriver::_areFeaturesEnabled
	bool ____areFeaturesEnabled_8;
};

// Niantic.ARDK.Extensions.ARConfigChanger
struct ARConfigChanger_tB87A55AE634C8C484F1832B385880733606E2725  : public UnityLifecycleDriver_t19A065B156F390FF32D17F4891660C8DA190B708
{
	// Niantic.ARDK.AR.Configuration.ARSessionChangesCollector Niantic.ARDK.Extensions.ARConfigChanger::_changesCollector
	ARSessionChangesCollector_t249430ABE12D571F1A9CB9EE78E1CF979AE6F8C1* ____changesCollector_9;
	// System.Action Niantic.ARDK.Extensions.ARConfigChanger::_ConfigurationChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____ConfigurationChanged_10;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_22;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextViewport_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextComponentRectMask_24;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextViewportRectMask_25;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_CachedViewportRect_26;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_27;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextComponentRectTransform_28;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_29;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_30;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D* ___m_VerticalScrollbarEventHandler_31;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_32;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* ___m_LayoutGroup_33;
	// UnityEngine.EventSystems.IScrollHandler TMPro.TMP_InputField::m_IScrollHandlerParent
	RuntimeObject* ___m_IScrollHandlerParent_34;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_35;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_36;
	// TMPro.TMP_InputField/ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_37;
	// TMPro.TMP_InputField/InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_38;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_39;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_40;
	// TMPro.TMP_InputField/LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_41;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_42;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_43;
	// TMPro.TMP_InputField/CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_44;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_45;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_46;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_47;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnEndEdit_48;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnSubmit_49;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnSelect_50;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnDeselect_51;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnTextSelection_52;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnEndTextSelection_53;
	// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* ___m_OnValueChanged_54;
	// TMPro.TMP_InputField/TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1* ___m_OnTouchScreenKeyboardStatusChanged_55;
	// TMPro.TMP_InputField/OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530* ___m_OnValidateInput_56;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_57;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_58;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_59;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_60;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_61;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_62;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_63;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_64;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_66;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_67;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_68;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_69;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_70;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_71;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastPosition_72;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_73;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_74;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_75;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_76;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_77;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_80;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_81;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_82;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_83;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_84;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_85;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_86;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_87;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_88;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_89;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_90;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_91;
	// System.Single TMPro.TMP_InputField::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_92;
	// System.Single TMPro.TMP_InputField::m_KeyDownStartTime
	float ___m_KeyDownStartTime_93;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_94;
	// System.Boolean TMPro.TMP_InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_96;
	// System.Boolean TMPro.TMP_InputField::m_ShouldUpdateIMEWindowPosition
	bool ___m_ShouldUpdateIMEWindowPosition_97;
	// System.Int32 TMPro.TMP_InputField::m_PreviousIMEInsertionLine
	int32_t ___m_PreviousIMEInsertionLine_98;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_GlobalFontAsset_99;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_100;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_101;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_102;
	// System.Boolean TMPro.TMP_InputField::m_SelectionStillActive
	bool ___m_SelectionStillActive_103;
	// System.Boolean TMPro.TMP_InputField::m_ReleaseSelection
	bool ___m_ReleaseSelection_104;
	// UnityEngine.GameObject TMPro.TMP_InputField::m_PreviouslySelectedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PreviouslySelectedObject_105;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_106;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_107;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_108;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98* ___m_InputValidator_109;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_110;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_111;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_113;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_114;
};

struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_StaticFields
{
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// Niantic.ARDK.Rendering.ARRenderFeatureProvider
struct ARRenderFeatureProvider_t18D833C98C9AB89FEDE0668F6305B66A173B42E4  : public ARConfigChanger_tB87A55AE634C8C484F1832B385880733606E2725
{
	// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Rendering.RenderFeaturesChangedArgs> Niantic.ARDK.Rendering.ARRenderFeatureProvider::_activeFeaturesChanged
	ArdkEventHandler_1_tD59374934BF5322F39D9A7731A868B84DC2DBDA2* ____activeFeaturesChanged_11;
	// System.Collections.Generic.HashSet`1<System.String> Niantic.ARDK.Rendering.ARRenderFeatureProvider::_features
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ____features_12;
	// System.Nullable`1<Niantic.ARDK.Rendering.RenderTarget> Niantic.ARDK.Rendering.ARRenderFeatureProvider::_renderTarget
	Nullable_1_t93334A5AE098F8DAF650EDAFA5E202EDB6A933FC ____renderTarget_13;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};

// Niantic.ARDK.Extensions.ARDepthManager
struct ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B  : public ARRenderFeatureProvider_t18D833C98C9AB89FEDE0668F6305B66A173B42E4
{
	// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Awareness.ContextAwarenessArgs`1<Niantic.ARDK.AR.Awareness.Depth.IDepthBuffer>> Niantic.ARDK.Extensions.ARDepthManager::DepthBufferInitialized
	ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1* ___DepthBufferInitialized_14;
	// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Awareness.ContextAwarenessStreamUpdatedArgs`1<Niantic.ARDK.AR.Awareness.Depth.IDepthBuffer>> Niantic.ARDK.Extensions.ARDepthManager::DepthBufferUpdated
	ArdkEventHandler_1_t0B6F3775612BEB39B6D65A909569C07E8BDDA3D8* ___DepthBufferUpdated_15;
	// UnityEngine.Camera Niantic.ARDK.Extensions.ARDepthManager::_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera_16;
	// System.UInt32 Niantic.ARDK.Extensions.ARDepthManager::_keyFrameFrequency
	uint32_t ____keyFrameFrequency_17;
	// Niantic.ARDK.AR.InterpolationMode Niantic.ARDK.Extensions.ARDepthManager::_interpolation
	int32_t ____interpolation_18;
	// System.Single Niantic.ARDK.Extensions.ARDepthManager::_interpolationPreference
	float ____interpolationPreference_19;
	// Niantic.ARDK.Extensions.ARDepthManager/OcclusionMode Niantic.ARDK.Extensions.ARDepthManager::_occlusionMode
	int32_t ____occlusionMode_20;
	// UnityEngine.FilterMode Niantic.ARDK.Extensions.ARDepthManager::_textureFilterMode
	int32_t ____textureFilterMode_21;
	// System.Boolean Niantic.ARDK.Extensions.ARDepthManager::_stabilizeOcclusionsExperimental
	bool ____stabilizeOcclusionsExperimental_22;
	// Niantic.ARDK.AR.Awareness.Depth.IDepthBuffer Niantic.ARDK.Extensions.ARDepthManager::_cpuDepth
	RuntimeObject* ____cpuDepth_23;
	// UnityEngine.Matrix4x4 Niantic.ARDK.Extensions.ARDepthManager::_depthTransform
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____depthTransform_24;
	// Niantic.ARDK.AR.Awareness.Depth.DepthBufferProcessor Niantic.ARDK.Extensions.ARDepthManager::_depthBufferProcessor
	DepthBufferProcessor_tE1923975FF045B6B3958F081D922B873C876C163* ____depthBufferProcessor_25;
	// UnityEngine.Texture2D Niantic.ARDK.Extensions.ARDepthManager::_depthTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____depthTexture_26;
	// Niantic.ARDK.AR.Depth.Effects.DepthMeshOccluder Niantic.ARDK.Extensions.ARDepthManager::_meshOccluder
	DepthMeshOccluder_t0359C2120AA79AAF06CC2E462934EDEFAF75E97A* ____meshOccluder_27;
	// Niantic.ARDK.Extensions.ARSemanticSegmentationManager Niantic.ARDK.Extensions.ARDepthManager::_semanticSegmentationManager
	ARSemanticSegmentationManager_t4B998DD1B311F9585DBB87063055F226D54CF8DF* ____semanticSegmentationManager_28;
	// ARDK.Extensions.Depth.ARFusedDepthRenderer Niantic.ARDK.Extensions.ARDepthManager::_fusedDepthRenderer
	ARFusedDepthRenderer_t54F7C6CFC02505758B4E0360E7EED7DA749E7A63* ____fusedDepthRenderer_29;
	// System.Boolean Niantic.ARDK.Extensions.ARDepthManager::_useFloatingPointTextures
	bool ____useFloatingPointTextures_30;
	// System.Boolean Niantic.ARDK.Extensions.ARDepthManager::_supportsZWrite
	bool ____supportsZWrite_31;
	// System.Boolean Niantic.ARDK.Extensions.ARDepthManager::_debugVisualizationEnabled
	bool ____debugVisualizationEnabled_32;
	// System.Int32 Niantic.ARDK.Extensions.ARDepthManager::_lastFrameDepthTextureWasUpdated
	int32_t ____lastFrameDepthTextureWasUpdated_33;
	// System.Int32 Niantic.ARDK.Extensions.ARDepthManager::_depthFrameCount
	int32_t ____depthFrameCount_34;
};

// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Int32 TMPro.TextMeshPro::_SortingLayer
	int32_t ____SortingLayer_265;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_266;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_267;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_268;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_269;
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_270;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_271;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___m_renderer_272;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___m_meshFilter_273;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_274;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_275;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_276;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9* ___m_subTextObjects_277;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_278;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_279;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_280;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_281;
};

struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_282;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_301;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Message[]
struct MessageU5BU5D_tFE8C0A6DF33CB2B40201F0B2194144AD1DD4E27B  : public RuntimeArray
{
	ALIGN_FIELD (8) Message_t6F0607127E5920A1C18E3FA5FDE1CDB7C3F10640* m_Items[1];

	inline Message_t6F0607127E5920A1C18E3FA5FDE1CDB7C3F10640* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Message_t6F0607127E5920A1C18E3FA5FDE1CDB7C3F10640** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Message_t6F0607127E5920A1C18E3FA5FDE1CDB7C3F10640* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Message_t6F0607127E5920A1C18E3FA5FDE1CDB7C3F10640* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Message_t6F0607127E5920A1C18E3FA5FDE1CDB7C3F10640** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Message_t6F0607127E5920A1C18E3FA5FDE1CDB7C3F10640* value)
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


// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m7EEFB0EA974BB0BB63D3D71504ED0540E925A8F8_gshared (ArdkEventHandler_1_t3E26CBDE57CDAA3ED8121EB52A3FCEF3E53A37FA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_m794A13DC5116C506B042663606691257CF3A7325 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Awareness.ContextAwarenessArgs`1<Niantic.ARDK.AR.Awareness.Depth.IDepthBuffer>>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m19F1F9BF1482926368FBE78243964F9734079A2B (ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m7EEFB0EA974BB0BB63D3D71504ED0540E925A8F8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Niantic.ARDK.Extensions.ARDepthManager::add_DepthBufferInitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Awareness.ContextAwarenessArgs`1<Niantic.ARDK.AR.Awareness.Depth.IDepthBuffer>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARDepthManager_add_DepthBufferInitialized_m4479653F652274A4AA7E10CB38AB971CC0F7354A (ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* __this, ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void measurement::instantiateGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void measurement_instantiateGameObjects_m7041ADDA2591E280471AD1BE9F5D959685C7BD1E (measurement_tBABFBD94B7887511259EC83C6D3FADB3CF803A2A* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Extensions.ARDepthManager::remove_DepthBufferInitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Awareness.ContextAwarenessArgs`1<Niantic.ARDK.AR.Awareness.Depth.IDepthBuffer>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARDepthManager_remove_DepthBufferInitialized_m481AB40F0527B25B5D50A948E9A663E52C4330A0 (ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* __this, ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1* ___value0, const RuntimeMethod* method) ;
// System.Void measurement::setPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void measurement_setPositions_mCD661F51FF297F17332E127D80D1870616C7732F (measurement_tBABFBD94B7887511259EC83C6D3FADB3CF803A2A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// Niantic.ARDK.AR.Awareness.Depth.IDepthBufferProcessor Niantic.ARDK.Extensions.ARDepthManager::get_DepthBufferProcessor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARDepthManager_get_DepthBufferProcessor_mF05A0564834975FAF1BF001BBFE15D80225E990C (ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_m041093DBB23CB3641118310881D6B7746E3B8418 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fromDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___toDirection1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void measurement::addDistanceText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void measurement_addDistanceText_mAB99DFD81C42E878CB8D4F4D0D38419C11911050 (measurement_tBABFBD94B7887511259EC83C6D3FADB3CF803A2A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void measurement::drawLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void measurement_drawLine_m585D8A0F83520A46A4538BA7771398581DA5B0D5 (measurement_tBABFBD94B7887511259EC83C6D3FADB3CF803A2A* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Extensions.ARDepthManager::set_OcclusionTechnique(Niantic.ARDK.Extensions.ARDepthManager/OcclusionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARDepthManager_set_OcclusionTechnique_m90D08D97D88AA283A3C9D720E45A29202C7A70BA (ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Transform TMPro.TextMeshPro::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* TextMeshPro_get_transform_m750148EC362B176A0E80D6F4ABAC1062E5281E11 (TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void measurement::reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void measurement_reset_m2353DD79CFA0EAE7F6A10C32E419464C918E2B42 (measurement_tBABFBD94B7887511259EC83C6D3FADB3CF803A2A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void partOne::instantiateGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void partOne_instantiateGameObjects_m0234A1146E3D3F48E13DEA8596F0DB5E205668D0 (partOne_t5777F0EB23ACFA85AFECCDFF6365856E784381C4* __this, const RuntimeMethod* method) ;
// System.Void partOne::setPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void partOne_setPositions_m423B83B512D82411FD0E094D303D5BA0977CF353 (partOne_t5777F0EB23ACFA85AFECCDFF6365856E784381C4* __this, const RuntimeMethod* method) ;
// System.String TMPro.TMP_InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767 (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void partOne::openDialogue(Message[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void partOne_openDialogue_m3EC4C48F54252D2686B865E4F0026BBD89645C36 (partOne_t5777F0EB23ACFA85AFECCDFF6365856E784381C4* __this, MessageU5BU5D_tFE8C0A6DF33CB2B40201F0B2194144AD1DD4E27B* ___messages0, const RuntimeMethod* method) ;
// System.Void partOne::displayMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void partOne_displayMessage_mCCE7F872FD3206F22572C38EAFD2B13D7FB384EA (partOne_t5777F0EB23ACFA85AFECCDFF6365856E784381C4* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 Niantic.ARDK.Utilities.Input.Legacy.PlatformAgnosticInput::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlatformAgnosticInput_get_touchCount_m5B0BCAF4749676D6E2A709BC032C908D54A823E7 (const RuntimeMethod* method) ;
// UnityEngine.Touch Niantic.ARDK.Utilities.Input.Legacy.PlatformAgnosticInput::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 PlatformAgnosticInput_GetTouch_m6B44EA87943AA6B7AA916B13DD9EFB5209A6377F (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Niantic.ARDK.Extensions.ARDepthManager/OcclusionMode Niantic.ARDK.Extensions.ARDepthManager::get_OcclusionTechnique()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARDepthManager_get_OcclusionTechnique_m6FE3004BE2C895840609866663B8EF88785901FB_inline (ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Extensions.ARDepthManager::ToggleDebugVisualization(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARDepthManager_ToggleDebugVisualization_m1B40B1E6FC01C17B2BE16C135C359E63926F74E0 (ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* __this, bool ___isEnabled0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Niantic.ARDK.Extensions.ARDepthManager::get_PreferSmoothEdges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARDepthManager_get_PreferSmoothEdges_m9215EBD9EEFE81A332F8AB44F4F1CB744D534D81 (ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Extensions.ARDepthManager::set_PreferSmoothEdges(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARDepthManager_set_PreferSmoothEdges_m459296BC9E58F622855D49A20ED6A0FAFFB0C3B2 (ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
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
// System.Void measurement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void measurement_Start_mB2F9AFF655F4FB9BAD7E3D805AD066F08EC48A04 (measurement_tBABFBD94B7887511259EC83C6D3FADB3CF803A2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&measurement_OnDepthBufferInitialized_m2152187DF667339B3BF9BB33A58C04B7E71A5D66_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.targetFrameRate = 60;
		Application_set_targetFrameRate_m794A13DC5116C506B042663606691257CF3A7325(((int32_t)60), NULL);
		// _arDepthManager.DepthBufferInitialized += OnDepthBufferInitialized;
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_0 = __this->____arDepthManager_4;
		ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1* L_1 = (ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1*)il2cpp_codegen_object_new(ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ArdkEventHandler_1__ctor_m19F1F9BF1482926368FBE78243964F9734079A2B(L_1, __this, (intptr_t)((void*)measurement_OnDepthBufferInitialized_m2152187DF667339B3BF9BB33A58C04B7E71A5D66_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARDepthManager_add_DepthBufferInitialized_m4479653F652274A4AA7E10CB38AB971CC0F7354A(L_0, L_1, NULL);
		// instructions1.gameObject.SetActive(true);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___instructions1_30;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// instructions2.gameObject.SetActive(false);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___instructions2_31;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// instantiateGameObjects();
		measurement_instantiateGameObjects_m7041ADDA2591E280471AD1BE9F5D959685C7BD1E(__this, NULL);
		// clicker = false;
		__this->___clicker_37 = (bool)0;
		// }
		return;
	}
}
// System.Void measurement::OnDepthBufferInitialized(Niantic.ARDK.AR.Awareness.ContextAwarenessArgs`1<Niantic.ARDK.AR.Awareness.Depth.IDepthBuffer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void measurement_OnDepthBufferInitialized_m2152187DF667339B3BF9BB33A58C04B7E71A5D66 (measurement_tBABFBD94B7887511259EC83C6D3FADB3CF803A2A* __this, ContextAwarenessArgs_1_t58B3B5DC8745F50F26A2217B0B869FDD542EEA84* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&measurement_OnDepthBufferInitialized_m2152187DF667339B3BF9BB33A58C04B7E71A5D66_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _arDepthManager.DepthBufferInitialized -= OnDepthBufferInitialized;
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_0 = __this->____arDepthManager_4;
		ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1* L_1 = (ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1*)il2cpp_codegen_object_new(ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ArdkEventHandler_1__ctor_m19F1F9BF1482926368FBE78243964F9734079A2B(L_1, __this, (intptr_t)((void*)measurement_OnDepthBufferInitialized_m2152187DF667339B3BF9BB33A58C04B7E71A5D66_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARDepthManager_remove_DepthBufferInitialized_m481AB40F0527B25B5D50A948E9A663E52C4330A0(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void measurement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void measurement_Update_m41B2D76141F2F298394FE4F17B7A53CE0DACA753 (measurement_tBABFBD94B7887511259EC83C6D3FADB3CF803A2A* __this, const RuntimeMethod* method) 
{
	{
		// setPositions();
		measurement_setPositions_mCD661F51FF297F17332E127D80D1870616C7732F(__this, NULL);
		// }
		return;
	}
}
// System.Void measurement::instantiateGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void measurement_instantiateGameObjects_m7041ADDA2591E280471AD1BE9F5D959685C7BD1E (measurement_tBABFBD94B7887511259EC83C6D3FADB3CF803A2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _placedObjects.Add(Instantiate(PlacementObjectPf, Vector3.zero, Quaternion.identity));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->____placedObjects_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___PlacementObjectPf_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_1, L_2, L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_0, L_4, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// _placedObjects.Add(Instantiate(wall, Vector3.zero, Quaternion.identity));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->____placedObjects_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___wall_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_6, L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		NullCheck(L_5);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_5, L_9, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// _placedObjects.Add(Instantiate(PlacementObjectPf, Vector3.zero, Quaternion.identity));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = __this->____placedObjects_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___PlacementObjectPf_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_11, L_12, L_13, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		NullCheck(L_10);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_10, L_14, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// _placedObjects.Add(Instantiate(PlacementObjectPf, Vector3.zero, Quaternion.identity));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_15 = __this->____placedObjects_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___PlacementObjectPf_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_16, L_17, L_18, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		NullCheck(L_15);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_15, L_19, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// _placedObjects.Add(Instantiate(PlacementObjectPf, Vector3.zero, Quaternion.identity));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_20 = __this->____placedObjects_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___PlacementObjectPf_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_21, L_22, L_23, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		NullCheck(L_20);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_20, L_24, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// _placedObjects.Add(Instantiate(PlacementObjectPf, Vector3.zero, Quaternion.identity));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_25 = __this->____placedObjects_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___PlacementObjectPf_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_26, L_27, L_28, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		NullCheck(L_25);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_25, L_29, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// _placedObjects.Add(Instantiate(PlacementObjectPf, Vector3.zero, Quaternion.identity));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_30 = __this->____placedObjects_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___PlacementObjectPf_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_31, L_32, L_33, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		NullCheck(L_30);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_30, L_34, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// _placedObjects.Add(Instantiate(PlacementObjectPf, Vector3.zero, Quaternion.identity));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_35 = __this->____placedObjects_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___PlacementObjectPf_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38;
		L_38 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_36, L_37, L_38, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		NullCheck(L_35);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_35, L_39, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// _placedObjects.Add(Instantiate(PlacementObjectPf, Vector3.zero, Quaternion.identity));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_40 = __this->____placedObjects_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___PlacementObjectPf_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44;
		L_44 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_41, L_42, L_43, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		NullCheck(L_40);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_40, L_44, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// _placedObjects[0].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_45 = __this->____placedObjects_10;
		NullCheck(L_45);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_45, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_46);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_46, (bool)0, NULL);
		// _placedObjects[1].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_47 = __this->____placedObjects_10;
		NullCheck(L_47);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48;
		L_48 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_47, 1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_48);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_48, (bool)0, NULL);
		// _placedObjects[2].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_49 = __this->____placedObjects_10;
		NullCheck(L_49);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
		L_50 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_49, 2, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_50);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_50, (bool)0, NULL);
		// _placedObjects[3].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_51 = __this->____placedObjects_10;
		NullCheck(L_51);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52;
		L_52 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_51, 3, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_52);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_52, (bool)0, NULL);
		// _placedObjects[4].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_53 = __this->____placedObjects_10;
		NullCheck(L_53);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54;
		L_54 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_53, 4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_54);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_54, (bool)0, NULL);
		// _placedObjects[5].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_55 = __this->____placedObjects_10;
		NullCheck(L_55);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56;
		L_56 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_55, 5, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_56);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_56, (bool)0, NULL);
		// _placedObjects[6].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_57 = __this->____placedObjects_10;
		NullCheck(L_57);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58;
		L_58 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_57, 6, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_58);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_58, (bool)0, NULL);
		// _placedObjects[7].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_59 = __this->____placedObjects_10;
		NullCheck(L_59);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60;
		L_60 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_59, 7, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_60);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_60, (bool)0, NULL);
		// _placedObjects[8].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_61 = __this->____placedObjects_10;
		NullCheck(L_61);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62;
		L_62 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_61, 8, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_62);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_62, (bool)0, NULL);
		// mText.gameObject.SetActive(false);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_63 = __this->___mText_12;
		NullCheck(L_63);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64;
		L_64 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_63, NULL);
		NullCheck(L_64);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_64, (bool)0, NULL);
		// firstSideText.gameObject.SetActive(false);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_65 = __this->___firstSideText_13;
		NullCheck(L_65);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66;
		L_66 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_65, NULL);
		NullCheck(L_66);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_66, (bool)0, NULL);
		// secondSideText.gameObject.SetActive(false);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_67 = __this->___secondSideText_14;
		NullCheck(L_67);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68;
		L_68 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_67, NULL);
		NullCheck(L_68);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_68, (bool)0, NULL);
		// thirdSideText.gameObject.SetActive(false);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_69 = __this->___thirdSideText_15;
		NullCheck(L_69);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70;
		L_70 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_69, NULL);
		NullCheck(L_70);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_70, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void measurement::setPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void measurement_setPositions_mCD661F51FF297F17332E127D80D1870616C7732F (measurement_tBABFBD94B7887511259EC83C6D3FADB3CF803A2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthBufferProcessor_t8BB67409E168243E9BA7B883AF2C5597E1A32522_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var screenPosition = new Vector2(Screen.width / 2.0f, Screen.height / 2.0f);
		int32_t L_0;
		L_0 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_1;
		L_1 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)(((float)L_0)/(2.0f))), ((float)(((float)L_1)/(2.0f))), NULL);
		// var worldPosition = _arDepthManager.DepthBufferProcessor.GetWorldPosition(
		//     (int)screenPosition.x,
		//     (int)screenPosition.y);
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_2 = __this->____arDepthManager_4;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ARDepthManager_get_DepthBufferProcessor_mF05A0564834975FAF1BF001BBFE15D80225E990C(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		float L_7 = L_6.___y_1;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = InterfaceFuncInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t, int32_t >::Invoke(5 /* UnityEngine.Vector3 Niantic.ARDK.AR.Awareness.Depth.IDepthBufferProcessor::GetWorldPosition(System.Int32,System.Int32) */, IDepthBufferProcessor_t8BB67409E168243E9BA7B883AF2C5597E1A32522_il2cpp_TypeInfo_var, L_3, il2cpp_codegen_cast_double_to_int<int32_t>(L_5), il2cpp_codegen_cast_double_to_int<int32_t>(L_7));
		V_1 = L_8;
		// var normal = _arDepthManager.DepthBufferProcessor.GetSurfaceNormal(
		//     (int)screenPosition.x,
		//     (int)screenPosition.y);
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_9 = __this->____arDepthManager_4;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = ARDepthManager_get_DepthBufferProcessor_mF05A0564834975FAF1BF001BBFE15D80225E990C(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		float L_12 = L_11.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		float L_14 = L_13.___y_1;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = InterfaceFuncInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t, int32_t >::Invoke(6 /* UnityEngine.Vector3 Niantic.ARDK.AR.Awareness.Depth.IDepthBufferProcessor::GetSurfaceNormal(System.Int32,System.Int32) */, IDepthBufferProcessor_t8BB67409E168243E9BA7B883AF2C5597E1A32522_il2cpp_TypeInfo_var, L_10, il2cpp_codegen_cast_double_to_int<int32_t>(L_12), il2cpp_codegen_cast_double_to_int<int32_t>(L_14));
		V_2 = L_15;
		// var rotation = Quaternion.Slerp(
		//     _pointer.transform.rotation,
		//     Quaternion.FromToRotation(Vector3.up, normal),
		//     Time.deltaTime * 10.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->____pointer_5;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_FromToRotation_m041093DBB23CB3641118310881D6B7746E3B8418(L_19, L_20, NULL);
		float L_22;
		L_22 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_18, L_21, ((float)il2cpp_codegen_multiply(L_22, (10.0f))), NULL);
		// if (startPointAdded == true)
		bool L_24 = __this->___startPointAdded_16;
		if (!L_24)
		{
			goto IL_0576;
		}
	}
	{
		// if (thirdPointAdded == false && secondPointAdded == true)
		bool L_25 = __this->___thirdPointAdded_20;
		if (L_25)
		{
			goto IL_00a4;
		}
	}
	{
		bool L_26 = __this->___secondPointAdded_18;
		if (L_26)
		{
			goto IL_010b;
		}
	}

IL_00a4:
	{
		// else if (thirdPointAdded == false)
		bool L_27 = __this->___thirdPointAdded_20;
		if (L_27)
		{
			goto IL_00cf;
		}
	}
	{
		// _placedObjects[1].transform.LookAt(arCamera.transform);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_28 = __this->____placedObjects_10;
		NullCheck(L_28);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_28, 1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_31 = __this->___arCamera_26;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_31, NULL);
		NullCheck(L_30);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_30, L_32, NULL);
		goto IL_010b;
	}

IL_00cf:
	{
		// else if (thirdPointAdded == true && wallRotated == false)
		bool L_33 = __this->___thirdPointAdded_20;
		if (!L_33)
		{
			goto IL_010b;
		}
	}
	{
		bool L_34 = __this->___wallRotated_25;
		if (L_34)
		{
			goto IL_010b;
		}
	}
	{
		// wallRotated = true;
		__this->___wallRotated_25 = (bool)1;
		// _placedObjects[1].transform.Rotate(0, 90, 0);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_35 = __this->____placedObjects_10;
		NullCheck(L_35);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_35, 1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_36, NULL);
		NullCheck(L_37);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_37, (0.0f), (90.0f), (0.0f), NULL);
	}

IL_010b:
	{
		// Ray ray = arCamera.ScreenPointToRay(screenPosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_38 = __this->___arCamera_26;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_39, NULL);
		NullCheck(L_38);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_41;
		L_41 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_38, L_40, NULL);
		// if (Physics.Raycast(ray, out hitObject))
		bool L_42;
		L_42 = Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A(L_41, (&V_3), NULL);
		if (!L_42)
		{
			goto IL_0267;
		}
	}
	{
		// if (secondPointAdded == false && thirdPointAdded == false && endPointAdded == false)
		bool L_43 = __this->___secondPointAdded_18;
		if (L_43)
		{
			goto IL_018e;
		}
	}
	{
		bool L_44 = __this->___thirdPointAdded_20;
		if (L_44)
		{
			goto IL_018e;
		}
	}
	{
		bool L_45 = __this->___endPointAdded_22;
		if (L_45)
		{
			goto IL_018e;
		}
	}
	{
		// worldPosition = new Vector3(_placedObjects[0].transform.position.x, hitObject.point.y, _placedObjects[0].transform.position.z);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_46 = __this->____placedObjects_10;
		NullCheck(L_46);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47;
		L_47 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_46, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_47, NULL);
		NullCheck(L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_48, NULL);
		float L_50 = L_49.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_3), NULL);
		float L_52 = L_51.___y_3;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_53 = __this->____placedObjects_10;
		NullCheck(L_53);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54;
		L_54 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_53, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_54);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_54, NULL);
		NullCheck(L_55);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_55, NULL);
		float L_57 = L_56.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), L_50, L_52, L_57, NULL);
		goto IL_025e;
	}

IL_018e:
	{
		// else if (secondPointAdded == true && thirdPointAdded == false && endPointAdded == false)
		bool L_58 = __this->___secondPointAdded_18;
		if (!L_58)
		{
			goto IL_0203;
		}
	}
	{
		bool L_59 = __this->___thirdPointAdded_20;
		if (L_59)
		{
			goto IL_0203;
		}
	}
	{
		bool L_60 = __this->___endPointAdded_22;
		if (L_60)
		{
			goto IL_0203;
		}
	}
	{
		// _placedObjects[1].transform.LookAt(arCamera.transform);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_61 = __this->____placedObjects_10;
		NullCheck(L_61);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62;
		L_62 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_61, 1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_62);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_62, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_64 = __this->___arCamera_26;
		NullCheck(L_64);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65;
		L_65 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_64, NULL);
		NullCheck(L_63);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_63, L_65, NULL);
		// worldPosition = new Vector3(hitObject.point.x, _placedObjects[2].transform.position.y, hitObject.point.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_3), NULL);
		float L_67 = L_66.___x_2;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_68 = __this->____placedObjects_10;
		NullCheck(L_68);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69;
		L_69 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_68, 2, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_69);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_69, NULL);
		NullCheck(L_70);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_70, NULL);
		float L_72 = L_71.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_3), NULL);
		float L_74 = L_73.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), L_67, L_72, L_74, NULL);
		goto IL_025e;
	}

IL_0203:
	{
		// _placedObjects[1].transform.LookAt(arCamera.transform);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_75 = __this->____placedObjects_10;
		NullCheck(L_75);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76;
		L_76 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_75, 1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_76);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77;
		L_77 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_76, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_78 = __this->___arCamera_26;
		NullCheck(L_78);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79;
		L_79 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_78, NULL);
		NullCheck(L_77);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_77, L_79, NULL);
		// worldPosition = new Vector3(hitObject.point.x, _placedObjects[2].transform.position.y, hitObject.point.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_3), NULL);
		float L_81 = L_80.___x_2;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_82 = __this->____placedObjects_10;
		NullCheck(L_82);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_83;
		L_83 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_82, 2, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_83);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84;
		L_84 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_83, NULL);
		NullCheck(L_84);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_84, NULL);
		float L_86 = L_85.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_3), NULL);
		float L_88 = L_87.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), L_81, L_86, L_88, NULL);
	}

IL_025e:
	{
		// prevPos = worldPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = V_1;
		__this->___prevPos_24 = L_89;
		goto IL_02d9;
	}

IL_0267:
	{
		// if (thirdPointAdded && endPointAdded == false)
		bool L_90 = __this->___thirdPointAdded_20;
		if (!L_90)
		{
			goto IL_02cb;
		}
	}
	{
		bool L_91 = __this->___endPointAdded_22;
		if (L_91)
		{
			goto IL_02cb;
		}
	}
	{
		// worldPosition = new Vector3(_placedObjects[3].transform.position.x, _placedObjects[3].transform.position.y, arCamera.transform.position.z);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_92 = __this->____placedObjects_10;
		NullCheck(L_92);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_93;
		L_93 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_92, 3, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_93);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94;
		L_94 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_93, NULL);
		NullCheck(L_94);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_94, NULL);
		float L_96 = L_95.___x_2;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_97 = __this->____placedObjects_10;
		NullCheck(L_97);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_98;
		L_98 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_97, 3, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_98);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_99;
		L_99 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_98, NULL);
		NullCheck(L_99);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		L_100 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_99, NULL);
		float L_101 = L_100.___y_3;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_102 = __this->___arCamera_26;
		NullCheck(L_102);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_103;
		L_103 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_102, NULL);
		NullCheck(L_103);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_103, NULL);
		float L_105 = L_104.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), L_96, L_101, L_105, NULL);
		goto IL_02d9;
	}

IL_02cb:
	{
		// else if (prevPos != null)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = __this->___prevPos_24;
		// worldPosition = prevPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107 = __this->___prevPos_24;
		V_1 = L_107;
	}

IL_02d9:
	{
		// if (startPointAdded == true)
		bool L_108 = __this->___startPointAdded_16;
		if (!L_108)
		{
			goto IL_0556;
		}
	}
	{
		// if (endPointAdded == true)
		bool L_109 = __this->___endPointAdded_22;
		if (!L_109)
		{
			goto IL_04b5;
		}
	}
	{
		// lineRenderer.SetPosition(3, _placedObjects[4].transform.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_110 = __this->___lineRenderer_11;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_111 = __this->____placedObjects_10;
		NullCheck(L_111);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_112;
		L_112 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_111, 4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_112);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_113;
		L_113 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_112, NULL);
		NullCheck(L_113);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		L_114 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_113, NULL);
		NullCheck(L_110);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_110, 3, L_114, NULL);
		// lineRenderer.SetPosition(4, _placedObjects[5].transform.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_115 = __this->___lineRenderer_11;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_116 = __this->____placedObjects_10;
		NullCheck(L_116);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_117;
		L_117 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_116, 5, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_117);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_118;
		L_118 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_117, NULL);
		NullCheck(L_118);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_118, NULL);
		NullCheck(L_115);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_115, 4, L_119, NULL);
		// lineRenderer.SetPosition(5, _placedObjects[6].transform.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_120 = __this->___lineRenderer_11;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_121 = __this->____placedObjects_10;
		NullCheck(L_121);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_122;
		L_122 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_121, 6, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_122);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_123;
		L_123 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_122, NULL);
		NullCheck(L_123);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124;
		L_124 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_123, NULL);
		NullCheck(L_120);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_120, 5, L_124, NULL);
		// lineRenderer.SetPosition(6, _placedObjects[7].transform.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_125 = __this->___lineRenderer_11;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_126 = __this->____placedObjects_10;
		NullCheck(L_126);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_127;
		L_127 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_126, 7, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_127);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_128;
		L_128 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_127, NULL);
		NullCheck(L_128);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129;
		L_129 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_128, NULL);
		NullCheck(L_125);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_125, 6, L_129, NULL);
		// lineRenderer.SetPosition(7, _placedObjects[8].transform.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_130 = __this->___lineRenderer_11;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_131 = __this->____placedObjects_10;
		NullCheck(L_131);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_132;
		L_132 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_131, 8, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_132);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_133;
		L_133 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_132, NULL);
		NullCheck(L_133);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134;
		L_134 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_133, NULL);
		NullCheck(L_130);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_130, 7, L_134, NULL);
		// lineRenderer.SetPosition(8, _placedObjects[1].transform.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_135 = __this->___lineRenderer_11;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_136 = __this->____placedObjects_10;
		NullCheck(L_136);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_137;
		L_137 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_136, 1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_137);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_138;
		L_138 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_137, NULL);
		NullCheck(L_138);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139;
		L_139 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_138, NULL);
		NullCheck(L_135);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_135, 8, L_139, NULL);
		// lineRenderer.SetPosition(9, _placedObjects[6].transform.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_140 = __this->___lineRenderer_11;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_141 = __this->____placedObjects_10;
		NullCheck(L_141);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_142;
		L_142 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_141, 6, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_142);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_143;
		L_143 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_142, NULL);
		NullCheck(L_143);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144;
		L_144 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_143, NULL);
		NullCheck(L_140);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_140, ((int32_t)9), L_144, NULL);
		// lineRenderer.SetPosition(10, _placedObjects[5].transform.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_145 = __this->___lineRenderer_11;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_146 = __this->____placedObjects_10;
		NullCheck(L_146);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_147;
		L_147 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_146, 5, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_147);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_148;
		L_148 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_147, NULL);
		NullCheck(L_148);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149;
		L_149 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_148, NULL);
		NullCheck(L_145);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_145, ((int32_t)10), L_149, NULL);
		// lineRenderer.SetPosition(11, _placedObjects[2].transform.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_150 = __this->___lineRenderer_11;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_151 = __this->____placedObjects_10;
		NullCheck(L_151);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_152;
		L_152 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_151, 2, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_152);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_153;
		L_153 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_152, NULL);
		NullCheck(L_153);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154;
		L_154 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_153, NULL);
		NullCheck(L_150);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_150, ((int32_t)11), L_154, NULL);
		// lineRenderer.SetPosition(12, _placedObjects[3].transform.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_155 = __this->___lineRenderer_11;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_156 = __this->____placedObjects_10;
		NullCheck(L_156);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_157;
		L_157 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_156, 3, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_157);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_158;
		L_158 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_157, NULL);
		NullCheck(L_158);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_159;
		L_159 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_158, NULL);
		NullCheck(L_155);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_155, ((int32_t)12), L_159, NULL);
		// lineRenderer.SetPosition(13, _placedObjects[8].transform.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_160 = __this->___lineRenderer_11;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_161 = __this->____placedObjects_10;
		NullCheck(L_161);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_162;
		L_162 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_161, 8, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_162);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_163;
		L_163 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_162, NULL);
		NullCheck(L_163);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_164;
		L_164 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_163, NULL);
		NullCheck(L_160);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_160, ((int32_t)13), L_164, NULL);
		// lineRenderer.SetPosition(14, _placedObjects[7].transform.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_165 = __this->___lineRenderer_11;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_166 = __this->____placedObjects_10;
		NullCheck(L_166);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_167;
		L_167 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_166, 7, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_167);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_168;
		L_168 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_167, NULL);
		NullCheck(L_168);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_169;
		L_169 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_168, NULL);
		NullCheck(L_165);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_165, ((int32_t)14), L_169, NULL);
		// lineRenderer.SetPosition(15, _placedObjects[4].transform.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_170 = __this->___lineRenderer_11;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_171 = __this->____placedObjects_10;
		NullCheck(L_171);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_172;
		L_172 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_171, 4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_172);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_173;
		L_173 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_172, NULL);
		NullCheck(L_173);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_174;
		L_174 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_173, NULL);
		NullCheck(L_170);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_170, ((int32_t)15), L_174, NULL);
		goto IL_0556;
	}

IL_04b5:
	{
		// else if (thirdPointAdded == true)
		bool L_175 = __this->___thirdPointAdded_20;
		if (!L_175)
		{
			goto IL_04ee;
		}
	}
	{
		// lineRenderer.SetPosition(2, _placedObjects[3].transform.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_176 = __this->___lineRenderer_11;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_177 = __this->____placedObjects_10;
		NullCheck(L_177);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_178;
		L_178 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_177, 3, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_178);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_179;
		L_179 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_178, NULL);
		NullCheck(L_179);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_180;
		L_180 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_179, NULL);
		NullCheck(L_176);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_176, 2, L_180, NULL);
		// lineRenderer.SetPosition(3, worldPosition);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_181 = __this->___lineRenderer_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_182 = V_1;
		NullCheck(L_181);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_181, 3, L_182, NULL);
		goto IL_0556;
	}

IL_04ee:
	{
		// else if (secondPointAdded == true)
		bool L_183 = __this->___secondPointAdded_18;
		if (!L_183)
		{
			goto IL_0527;
		}
	}
	{
		// lineRenderer.SetPosition(1, _placedObjects[2].transform.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_184 = __this->___lineRenderer_11;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_185 = __this->____placedObjects_10;
		NullCheck(L_185);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_186;
		L_186 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_185, 2, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_186);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_187;
		L_187 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_186, NULL);
		NullCheck(L_187);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_188;
		L_188 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_187, NULL);
		NullCheck(L_184);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_184, 1, L_188, NULL);
		// lineRenderer.SetPosition(2, worldPosition);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_189 = __this->___lineRenderer_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_190 = V_1;
		NullCheck(L_189);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_189, 2, L_190, NULL);
		goto IL_0556;
	}

IL_0527:
	{
		// lineRenderer.SetPosition(0, _placedObjects[1].transform.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_191 = __this->___lineRenderer_11;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_192 = __this->____placedObjects_10;
		NullCheck(L_192);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_193;
		L_193 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_192, 1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_193);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_194;
		L_194 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_193, NULL);
		NullCheck(L_194);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_195;
		L_195 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_194, NULL);
		NullCheck(L_191);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_191, 0, L_195, NULL);
		// lineRenderer.SetPosition(1, worldPosition);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_196 = __this->___lineRenderer_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_197 = V_1;
		NullCheck(L_196);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_196, 1, L_197, NULL);
	}

IL_0556:
	{
		// Debug.Log(_placedObjects[1].transform.rotation);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_198 = __this->____placedObjects_10;
		NullCheck(L_198);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_199;
		L_199 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_198, 1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_199);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_200;
		L_200 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_199, NULL);
		NullCheck(L_200);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_201;
		L_201 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_200, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_202 = L_201;
		RuntimeObject* L_203 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_202);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_203, NULL);
	}

IL_0576:
	{
		// if (endPointAdded == false)
		bool L_204 = __this->___endPointAdded_22;
		if (L_204)
		{
			goto IL_05aa;
		}
	}
	{
		// _pointer.transform.position = worldPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_205 = __this->____pointer_5;
		NullCheck(L_205);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_206;
		L_206 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_205, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_207 = V_1;
		NullCheck(L_206);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_206, L_207, NULL);
		// _pointer.transform.LookAt(arCamera.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_208 = __this->____pointer_5;
		NullCheck(L_208);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_209;
		L_209 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_208, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_210 = __this->___arCamera_26;
		NullCheck(L_210);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_211;
		L_211 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_210, NULL);
		NullCheck(L_209);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_209, L_211, NULL);
	}

IL_05aa:
	{
		// }
		return;
	}
}
// System.Void measurement::addPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void measurement_addPoint_m51BF18588735F70CB74ACF22B13260027CAD4722 (measurement_tBABFBD94B7887511259EC83C6D3FADB3CF803A2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (startPointAdded == true)
		bool L_0 = __this->___startPointAdded_16;
		if (!L_0)
		{
			goto IL_03de;
		}
	}
	{
		// if (thirdPointAdded == true)
		bool L_1 = __this->___thirdPointAdded_20;
		if (!L_1)
		{
			goto IL_02cc;
		}
	}
	{
		// instructions4.gameObject.SetActive(false);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___instructions4_33;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// pointNum++;
		int32_t L_4 = __this->___pointNum_29;
		__this->___pointNum_29 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// _placedObjects[4].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->____placedObjects_10;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_5, 4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// endPointPos = _pointer.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->____pointer_5;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		__this->___endPointPos_23 = L_9;
		// _placedObjects[4].transform.position = endPointPos;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = __this->____placedObjects_10;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_10, 4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___endPointPos_23;
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_13, NULL);
		// endPointAdded = true;
		__this->___endPointAdded_22 = (bool)1;
		// addDistanceText();
		measurement_addDistanceText_mAB99DFD81C42E878CB8D4F4D0D38419C11911050(__this, NULL);
		// _placedObjects[5].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = __this->____placedObjects_10;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_14, 5, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)1, NULL);
		// _placedObjects[6].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_16 = __this->____placedObjects_10;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_16, 6, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
		// _placedObjects[7].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_18 = __this->____placedObjects_10;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_18, 7, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)1, NULL);
		// _placedObjects[8].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_20 = __this->____placedObjects_10;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_20, 8, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)1, NULL);
		// _placedObjects[5].transform.position = new Vector3(_placedObjects[2].transform.position.x, _placedObjects[4].transform.position.y, _placedObjects[4].transform.position.z);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_22 = __this->____placedObjects_10;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_22, 5, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_25 = __this->____placedObjects_10;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_25, 2, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29 = L_28.___x_2;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_30 = __this->____placedObjects_10;
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_30, 4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		float L_34 = L_33.___y_3;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_35 = __this->____placedObjects_10;
		NullCheck(L_35);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_35, 4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_36, NULL);
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		float L_39 = L_38.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_40), L_29, L_34, L_39, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_24, L_40, NULL);
		// _placedObjects[6].transform.position = new Vector3(_placedObjects[1].transform.position.x, _placedObjects[1].transform.position.y, _placedObjects[5].transform.position.z);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_41 = __this->____placedObjects_10;
		NullCheck(L_41);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42;
		L_42 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_41, 6, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_42, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_44 = __this->____placedObjects_10;
		NullCheck(L_44);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45;
		L_45 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_44, 1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_45, NULL);
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_46, NULL);
		float L_48 = L_47.___x_2;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_49 = __this->____placedObjects_10;
		NullCheck(L_49);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
		L_50 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_49, 1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_50);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_50, NULL);
		NullCheck(L_51);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_51, NULL);
		float L_53 = L_52.___y_3;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_54 = __this->____placedObjects_10;
		NullCheck(L_54);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55;
		L_55 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_54, 5, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_55);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_55, NULL);
		NullCheck(L_56);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_56, NULL);
		float L_58 = L_57.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_59), L_48, L_53, L_58, /*hidden argument*/NULL);
		NullCheck(L_43);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_43, L_59, NULL);
		// _placedObjects[7].transform.position = new Vector3(_placedObjects[4].transform.position.x, _placedObjects[6].transform.position.y, _placedObjects[6].transform.position.z);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_60 = __this->____placedObjects_10;
		NullCheck(L_60);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61;
		L_61 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_60, 7, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_61);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_61, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_63 = __this->____placedObjects_10;
		NullCheck(L_63);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64;
		L_64 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_63, 4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_64);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65;
		L_65 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_64, NULL);
		NullCheck(L_65);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_65, NULL);
		float L_67 = L_66.___x_2;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_68 = __this->____placedObjects_10;
		NullCheck(L_68);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69;
		L_69 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_68, 6, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_69);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_69, NULL);
		NullCheck(L_70);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_70, NULL);
		float L_72 = L_71.___y_3;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_73 = __this->____placedObjects_10;
		NullCheck(L_73);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74;
		L_74 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_73, 6, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_74);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75;
		L_75 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_74, NULL);
		NullCheck(L_75);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_75, NULL);
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), L_67, L_72, L_77, /*hidden argument*/NULL);
		NullCheck(L_62);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_62, L_78, NULL);
		// _placedObjects[8].transform.position = new Vector3(_placedObjects[3].transform.position.x, _placedObjects[1].transform.position.y, _placedObjects[1].transform.position.z);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_79 = __this->____placedObjects_10;
		NullCheck(L_79);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80;
		L_80 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_79, 8, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_80);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81;
		L_81 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_80, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_82 = __this->____placedObjects_10;
		NullCheck(L_82);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_83;
		L_83 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_82, 3, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_83);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84;
		L_84 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_83, NULL);
		NullCheck(L_84);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_84, NULL);
		float L_86 = L_85.___x_2;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_87 = __this->____placedObjects_10;
		NullCheck(L_87);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_88;
		L_88 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_87, 1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_88);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_89;
		L_89 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_88, NULL);
		NullCheck(L_89);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_89, NULL);
		float L_91 = L_90.___y_3;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_92 = __this->____placedObjects_10;
		NullCheck(L_92);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_93;
		L_93 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_92, 1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_93);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94;
		L_94 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_93, NULL);
		NullCheck(L_94);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_94, NULL);
		float L_96 = L_95.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		memset((&L_97), 0, sizeof(L_97));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_97), L_86, L_91, L_96, /*hidden argument*/NULL);
		NullCheck(L_81);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_81, L_97, NULL);
		// pointNum = 8;
		__this->___pointNum_29 = 8;
		// lineRenderer.positionCount = 16;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_98 = __this->___lineRenderer_11;
		NullCheck(L_98);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_98, ((int32_t)16), NULL);
		// _pointer.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_99 = __this->____pointer_5;
		NullCheck(L_99);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_99, (bool)0, NULL);
		// dialogueBox.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_100 = __this->___dialogueBox_34;
		NullCheck(L_100);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_100, (bool)1, NULL);
		// message.gameObject.SetActive(true);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_101 = __this->___message_35;
		NullCheck(L_101);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_102;
		L_102 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_101, NULL);
		NullCheck(L_102);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_102, (bool)1, NULL);
		// nextButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_103 = __this->___nextButton_36;
		NullCheck(L_103);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_103, (bool)1, NULL);
		goto IL_03de;
	}

IL_02cc:
	{
		// else if (secondPointAdded == true)
		bool L_104 = __this->___secondPointAdded_18;
		if (!L_104)
		{
			goto IL_035d;
		}
	}
	{
		// instructions3.gameObject.SetActive(false);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_105 = __this->___instructions3_32;
		NullCheck(L_105);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_106;
		L_106 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_105, NULL);
		NullCheck(L_106);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_106, (bool)0, NULL);
		// instructions4.gameObject.SetActive(true);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_107 = __this->___instructions4_33;
		NullCheck(L_107);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_108;
		L_108 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_107, NULL);
		NullCheck(L_108);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_108, (bool)1, NULL);
		// pointNum++;
		int32_t L_109 = __this->___pointNum_29;
		__this->___pointNum_29 = ((int32_t)il2cpp_codegen_add(L_109, 1));
		// _placedObjects[3].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_110 = __this->____placedObjects_10;
		NullCheck(L_110);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_111;
		L_111 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_110, 3, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_111);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_111, (bool)1, NULL);
		// thirdPointPos = _pointer.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_112 = __this->____pointer_5;
		NullCheck(L_112);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_113;
		L_113 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_112, NULL);
		NullCheck(L_113);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		L_114 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_113, NULL);
		__this->___thirdPointPos_21 = L_114;
		// _placedObjects[3].transform.position = thirdPointPos;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_115 = __this->____placedObjects_10;
		NullCheck(L_115);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_116;
		L_116 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_115, 3, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_116);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_117;
		L_117 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_116, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118 = __this->___thirdPointPos_21;
		NullCheck(L_117);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_117, L_118, NULL);
		// thirdPointAdded = true;
		__this->___thirdPointAdded_20 = (bool)1;
		// drawLine();
		measurement_drawLine_m585D8A0F83520A46A4538BA7771398581DA5B0D5(__this, NULL);
		goto IL_03de;
	}

IL_035d:
	{
		// instructions2.gameObject.SetActive(false);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_119 = __this->___instructions2_31;
		NullCheck(L_119);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_120;
		L_120 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_119, NULL);
		NullCheck(L_120);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_120, (bool)0, NULL);
		// instructions3.gameObject.SetActive(true);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_121 = __this->___instructions3_32;
		NullCheck(L_121);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_122;
		L_122 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_121, NULL);
		NullCheck(L_122);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_122, (bool)1, NULL);
		// pointNum++;
		int32_t L_123 = __this->___pointNum_29;
		__this->___pointNum_29 = ((int32_t)il2cpp_codegen_add(L_123, 1));
		// _placedObjects[2].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_124 = __this->____placedObjects_10;
		NullCheck(L_124);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_125;
		L_125 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_124, 2, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_125);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_125, (bool)1, NULL);
		// secondPointPos = _pointer.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_126 = __this->____pointer_5;
		NullCheck(L_126);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_127;
		L_127 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_126, NULL);
		NullCheck(L_127);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128;
		L_128 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_127, NULL);
		__this->___secondPointPos_19 = L_128;
		// _placedObjects[2].transform.position = secondPointPos;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_129 = __this->____placedObjects_10;
		NullCheck(L_129);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_130;
		L_130 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_129, 2, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_130);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_131;
		L_131 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_130, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132 = __this->___secondPointPos_19;
		NullCheck(L_131);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_131, L_132, NULL);
		// secondPointAdded = true;
		__this->___secondPointAdded_18 = (bool)1;
		// drawLine();
		measurement_drawLine_m585D8A0F83520A46A4538BA7771398581DA5B0D5(__this, NULL);
	}

IL_03de:
	{
		// if (startPointAdded == false)
		bool L_133 = __this->___startPointAdded_16;
		if (L_133)
		{
			goto IL_04ae;
		}
	}
	{
		// pointNum++;
		int32_t L_134 = __this->___pointNum_29;
		__this->___pointNum_29 = ((int32_t)il2cpp_codegen_add(L_134, 1));
		// _placedObjects[0].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_135 = __this->____placedObjects_10;
		NullCheck(L_135);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_136;
		L_136 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_135, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_136);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_136, (bool)1, NULL);
		// startPointPos = _pointer.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_137 = __this->____pointer_5;
		NullCheck(L_137);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_138;
		L_138 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_137, NULL);
		NullCheck(L_138);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139;
		L_139 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_138, NULL);
		__this->___startPointPos_17 = L_139;
		// _placedObjects[0].transform.position = startPointPos;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_140 = __this->____placedObjects_10;
		NullCheck(L_140);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_141;
		L_141 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_140, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_141);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_142;
		L_142 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_141, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_143 = __this->___startPointPos_17;
		NullCheck(L_142);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_142, L_143, NULL);
		// _placedObjects[1].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_144 = __this->____placedObjects_10;
		NullCheck(L_144);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_145;
		L_145 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_144, 1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_145);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_145, (bool)1, NULL);
		// _placedObjects[1].transform.position = _pointer.transform.position;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_146 = __this->____placedObjects_10;
		NullCheck(L_146);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_147;
		L_147 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_146, 1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_147);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_148;
		L_148 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_147, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_149 = __this->____pointer_5;
		NullCheck(L_149);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_150;
		L_150 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_149, NULL);
		NullCheck(L_150);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_151;
		L_151 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_150, NULL);
		NullCheck(L_148);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_148, L_151, NULL);
		// startPointAdded = true;
		__this->___startPointAdded_16 = (bool)1;
		// drawLine();
		measurement_drawLine_m585D8A0F83520A46A4538BA7771398581DA5B0D5(__this, NULL);
		// _arDepthManager.OcclusionTechnique = ARDepthManager.OcclusionMode.None;
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_152 = __this->____arDepthManager_4;
		NullCheck(L_152);
		ARDepthManager_set_OcclusionTechnique_m90D08D97D88AA283A3C9D720E45A29202C7A70BA(L_152, 0, NULL);
		// instructions1.gameObject.SetActive(false);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_153 = __this->___instructions1_30;
		NullCheck(L_153);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_154;
		L_154 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_153, NULL);
		NullCheck(L_154);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_154, (bool)0, NULL);
		// instructions2.gameObject.SetActive(true);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_155 = __this->___instructions2_31;
		NullCheck(L_155);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_156;
		L_156 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_155, NULL);
		NullCheck(L_156);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_156, (bool)1, NULL);
	}

IL_04ae:
	{
		// }
		return;
	}
}
// System.Void measurement::drawLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void measurement_drawLine_m585D8A0F83520A46A4538BA7771398581DA5B0D5 (measurement_tBABFBD94B7887511259EC83C6D3FADB3CF803A2A* __this, const RuntimeMethod* method) 
{
	{
		// lineRenderer.positionCount = pointNum + 1;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___lineRenderer_11;
		int32_t L_1 = __this->___pointNum_29;
		NullCheck(L_0);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_0, ((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		// }
		return;
	}
}
// System.Void measurement::addDistanceText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void measurement_addDistanceText_mAB99DFD81C42E878CB8D4F4D0D38419C11911050 (measurement_tBABFBD94B7887511259EC83C6D3FADB3CF803A2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46E5172E84E8B1FABA8D0F95FE004C4F08DAE573);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FF480A10A0AC9FD4B4110588B84F22D4872DB3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral581CA318F8B5E78153DFAB13447844D5260CEB9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77793DF87854A30D202EA3C188F1A4F21D4DDCBD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral781586D553DF44B8DBC60377864D74BE4616563E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8304C3144F9A746AC8A090694231F7F17241DAC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC76E1D7F401D4024E6A362193CE7E72167215532);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8D4F15E09CCE1D2332DA41F357D38BA0A627FAF);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	{
		// var halfWay = (startPointPos + endPointPos) / 2f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___startPointPos_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___endPointPos_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_0, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_2, (2.0f), NULL);
		V_0 = L_3;
		// mText.gameObject.SetActive(true);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_4 = __this->___mText_12;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// mText.transform.position = new Vector3(halfWay.x, halfWay.y, halfWay.z);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_6 = __this->___mText_12;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = TextMeshPro_get_transform_m750148EC362B176A0E80D6F4ABAC1062E5281E11(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		float L_9 = L_8.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = L_10.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		float L_13 = L_12.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_9, L_11, L_13, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_14, NULL);
		// var halfWay1 = (startPointPos + secondPointPos) / 2f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___startPointPos_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___secondPointPos_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_15, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_17, (2.0f), NULL);
		V_1 = L_18;
		// firstSideText.gameObject.SetActive(true);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_19 = __this->___firstSideText_13;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_19, NULL);
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)1, NULL);
		// firstSideText.transform.position = new Vector3(halfWay1.x, halfWay1.y, halfWay1.z);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_21 = __this->___firstSideText_13;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = TextMeshPro_get_transform_m750148EC362B176A0E80D6F4ABAC1062E5281E11(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_1;
		float L_24 = L_23.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_1;
		float L_26 = L_25.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_1;
		float L_28 = L_27.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_29), L_24, L_26, L_28, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_22, L_29, NULL);
		// var halfWay2 = (secondPointPos + thirdPointPos) / 2f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = __this->___secondPointPos_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = __this->___thirdPointPos_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_30, L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_32, (2.0f), NULL);
		V_2 = L_33;
		// secondSideText.gameObject.SetActive(true);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_34 = __this->___secondSideText_14;
		NullCheck(L_34);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_34, NULL);
		NullCheck(L_35);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)1, NULL);
		// secondSideText.transform.position = new Vector3(halfWay2.x, halfWay2.y, halfWay2.z);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_36 = __this->___secondSideText_14;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = TextMeshPro_get_transform_m750148EC362B176A0E80D6F4ABAC1062E5281E11(L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_2;
		float L_39 = L_38.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_2;
		float L_41 = L_40.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_2;
		float L_43 = L_42.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_44), L_39, L_41, L_43, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_37, L_44, NULL);
		// var halfWay3 = (thirdPointPos + endPointPos) / 2f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = __this->___thirdPointPos_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = __this->___endPointPos_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_45, L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_47, (2.0f), NULL);
		V_3 = L_48;
		// thirdSideText.gameObject.SetActive(true);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_49 = __this->___thirdSideText_15;
		NullCheck(L_49);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
		L_50 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_49, NULL);
		NullCheck(L_50);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_50, (bool)1, NULL);
		// thirdSideText.transform.position = new Vector3(halfWay3.x, halfWay3.y, halfWay3.z);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_51 = __this->___thirdSideText_15;
		NullCheck(L_51);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = TextMeshPro_get_transform_m750148EC362B176A0E80D6F4ABAC1062E5281E11(L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_3;
		float L_54 = L_53.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_3;
		float L_56 = L_55.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_3;
		float L_58 = L_57.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_59), L_54, L_56, L_58, /*hidden argument*/NULL);
		NullCheck(L_52);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_52, L_59, NULL);
		// Quaternion lookRotation = Quaternion.LookRotation((mText.transform.position - arCamera.transform.position).normalized);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_60 = __this->___mText_12;
		NullCheck(L_60);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61;
		L_61 = TextMeshPro_get_transform_m750148EC362B176A0E80D6F4ABAC1062E5281E11(L_60, NULL);
		NullCheck(L_61);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_61, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_63 = __this->___arCamera_26;
		NullCheck(L_63);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_63, NULL);
		NullCheck(L_64);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_64, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_62, L_65, NULL);
		V_12 = L_66;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_12), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_68;
		L_68 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_67, NULL);
		V_4 = L_68;
		// mText.transform.rotation = Quaternion.Euler(0, lookRotation.eulerAngles.y, lookRotation.eulerAngles.z);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_69 = __this->___mText_12;
		NullCheck(L_69);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = TextMeshPro_get_transform_m750148EC362B176A0E80D6F4ABAC1062E5281E11(L_69, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_4), NULL);
		float L_72 = L_71.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_4), NULL);
		float L_74 = L_73.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_75;
		L_75 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), L_72, L_74, NULL);
		NullCheck(L_70);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_70, L_75, NULL);
		// Quaternion lookRotation1 = Quaternion.LookRotation((firstSideText.transform.position - arCamera.transform.position).normalized);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_76 = __this->___firstSideText_13;
		NullCheck(L_76);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77;
		L_77 = TextMeshPro_get_transform_m750148EC362B176A0E80D6F4ABAC1062E5281E11(L_76, NULL);
		NullCheck(L_77);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_77, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_79 = __this->___arCamera_26;
		NullCheck(L_79);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80;
		L_80 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_79, NULL);
		NullCheck(L_80);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_80, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_78, L_81, NULL);
		V_12 = L_82;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_12), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_84;
		L_84 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_83, NULL);
		V_5 = L_84;
		// firstSideText.transform.rotation = Quaternion.Euler(0, lookRotation1.eulerAngles.y, lookRotation1.eulerAngles.z);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_85 = __this->___firstSideText_13;
		NullCheck(L_85);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_86;
		L_86 = TextMeshPro_get_transform_m750148EC362B176A0E80D6F4ABAC1062E5281E11(L_85, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_5), NULL);
		float L_88 = L_87.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_5), NULL);
		float L_90 = L_89.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_91;
		L_91 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), L_88, L_90, NULL);
		NullCheck(L_86);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_86, L_91, NULL);
		// Quaternion lookRotation2 = Quaternion.LookRotation((secondSideText.transform.position - arCamera.transform.position).normalized);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_92 = __this->___secondSideText_14;
		NullCheck(L_92);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93;
		L_93 = TextMeshPro_get_transform_m750148EC362B176A0E80D6F4ABAC1062E5281E11(L_92, NULL);
		NullCheck(L_93);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_93, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_95 = __this->___arCamera_26;
		NullCheck(L_95);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_96;
		L_96 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_95, NULL);
		NullCheck(L_96);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_96, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_94, L_97, NULL);
		V_12 = L_98;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_12), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_100;
		L_100 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_99, NULL);
		V_6 = L_100;
		// secondSideText.transform.rotation = Quaternion.Euler(0, lookRotation2.eulerAngles.y, lookRotation2.eulerAngles.z);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_101 = __this->___secondSideText_14;
		NullCheck(L_101);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_102;
		L_102 = TextMeshPro_get_transform_m750148EC362B176A0E80D6F4ABAC1062E5281E11(L_101, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_6), NULL);
		float L_104 = L_103.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		L_105 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_6), NULL);
		float L_106 = L_105.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_107;
		L_107 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), L_104, L_106, NULL);
		NullCheck(L_102);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_102, L_107, NULL);
		// Quaternion lookRotation3 = Quaternion.LookRotation((thirdSideText.transform.position - arCamera.transform.position).normalized);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_108 = __this->___thirdSideText_15;
		NullCheck(L_108);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_109;
		L_109 = TextMeshPro_get_transform_m750148EC362B176A0E80D6F4ABAC1062E5281E11(L_108, NULL);
		NullCheck(L_109);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_109, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_111 = __this->___arCamera_26;
		NullCheck(L_111);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_112;
		L_112 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_111, NULL);
		NullCheck(L_112);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113;
		L_113 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_112, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		L_114 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_110, L_113, NULL);
		V_12 = L_114;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115;
		L_115 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_12), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_116;
		L_116 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_115, NULL);
		V_7 = L_116;
		// thirdSideText.transform.rotation = Quaternion.Euler(0, lookRotation3.eulerAngles.y, lookRotation3.eulerAngles.z);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_117 = __this->___thirdSideText_15;
		NullCheck(L_117);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_118;
		L_118 = TextMeshPro_get_transform_m750148EC362B176A0E80D6F4ABAC1062E5281E11(L_117, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_7), NULL);
		float L_120 = L_119.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121;
		L_121 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_7), NULL);
		float L_122 = L_121.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_123;
		L_123 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), L_120, L_122, NULL);
		NullCheck(L_118);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_118, L_123, NULL);
		// var firstSideDistance = (Vector3.Distance(startPointPos, secondPointPos) * measurementFactor) / 12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124 = __this->___startPointPos_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125 = __this->___secondPointPos_19;
		float L_126;
		L_126 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_124, L_125, NULL);
		float L_127 = __this->___measurementFactor_27;
		V_8 = ((float)(((float)il2cpp_codegen_multiply(L_126, L_127))/(12.0f)));
		// var secondSideDistance = (Vector3.Distance(secondPointPos, thirdPointPos) * measurementFactor) / 12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128 = __this->___secondPointPos_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129 = __this->___thirdPointPos_21;
		float L_130;
		L_130 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_128, L_129, NULL);
		float L_131 = __this->___measurementFactor_27;
		V_9 = ((float)(((float)il2cpp_codegen_multiply(L_130, L_131))/(12.0f)));
		// var thirdSideDistance = (Vector3.Distance(thirdPointPos, endPointPos) * measurementFactor) / 12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132 = __this->___thirdPointPos_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133 = __this->___endPointPos_23;
		float L_134;
		L_134 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_132, L_133, NULL);
		float L_135 = __this->___measurementFactor_27;
		V_10 = ((float)(((float)il2cpp_codegen_multiply(L_134, L_135))/(12.0f)));
		// var volume = firstSideDistance * secondSideDistance * thirdSideDistance;
		float L_136 = V_8;
		float L_137 = V_9;
		float L_138 = V_10;
		V_11 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_136, L_137)), L_138));
		// mText.text = $"Volume: {volume.ToString("F2")} ft^3";
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_139 = __this->___mText_12;
		String_t* L_140;
		L_140 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_11), _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		String_t* L_141;
		L_141 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral4FF480A10A0AC9FD4B4110588B84F22D4872DB3A, L_140, _stringLiteral581CA318F8B5E78153DFAB13447844D5260CEB9B, NULL);
		NullCheck(L_139);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_139, L_141);
		// firstSideText.text = $"{firstSideDistance.ToString("F2")} ft";
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_142 = __this->___firstSideText_13;
		String_t* L_143;
		L_143 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_8), _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		String_t* L_144;
		L_144 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_143, _stringLiteral8304C3144F9A746AC8A090694231F7F17241DAC3, NULL);
		NullCheck(L_142);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_142, L_144);
		// secondSideText.text = $"{secondSideDistance.ToString("F2")} ft";
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_145 = __this->___secondSideText_14;
		String_t* L_146;
		L_146 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_9), _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		String_t* L_147;
		L_147 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_146, _stringLiteral8304C3144F9A746AC8A090694231F7F17241DAC3, NULL);
		NullCheck(L_145);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_145, L_147);
		// thirdSideText.text = $"{thirdSideDistance.ToString("F2")} ft";
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_148 = __this->___thirdSideText_15;
		String_t* L_149;
		L_149 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_10), _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		String_t* L_150;
		L_150 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_149, _stringLiteral8304C3144F9A746AC8A090694231F7F17241DAC3, NULL);
		NullCheck(L_148);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_148, L_150);
		// message.text = $"V = {firstSideDistance.ToString("F2")} *  {secondSideDistance.ToString("F2")} * {thirdSideDistance.ToString("F2")} = {volume.ToString()} ft^3. The volume of your shape is {volume.ToString()} feet cubed!";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_151 = __this->___message_35;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_152 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_153 = L_152;
		NullCheck(L_153);
		ArrayElementTypeCheck (L_153, _stringLiteralC8D4F15E09CCE1D2332DA41F357D38BA0A627FAF);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC8D4F15E09CCE1D2332DA41F357D38BA0A627FAF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_154 = L_153;
		String_t* L_155;
		L_155 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_8), _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		NullCheck(L_154);
		ArrayElementTypeCheck (L_154, L_155);
		(L_154)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_155);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_156 = L_154;
		NullCheck(L_156);
		ArrayElementTypeCheck (L_156, _stringLiteral781586D553DF44B8DBC60377864D74BE4616563E);
		(L_156)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral781586D553DF44B8DBC60377864D74BE4616563E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_157 = L_156;
		String_t* L_158;
		L_158 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_9), _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		NullCheck(L_157);
		ArrayElementTypeCheck (L_157, L_158);
		(L_157)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_158);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_159 = L_157;
		NullCheck(L_159);
		ArrayElementTypeCheck (L_159, _stringLiteral77793DF87854A30D202EA3C188F1A4F21D4DDCBD);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral77793DF87854A30D202EA3C188F1A4F21D4DDCBD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_160 = L_159;
		String_t* L_161;
		L_161 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_10), _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		NullCheck(L_160);
		ArrayElementTypeCheck (L_160, L_161);
		(L_160)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_161);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_162 = L_160;
		NullCheck(L_162);
		ArrayElementTypeCheck (L_162, _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_163 = L_162;
		String_t* L_164;
		L_164 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_11), NULL);
		NullCheck(L_163);
		ArrayElementTypeCheck (L_163, L_164);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_164);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_165 = L_163;
		NullCheck(L_165);
		ArrayElementTypeCheck (L_165, _stringLiteralC76E1D7F401D4024E6A362193CE7E72167215532);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralC76E1D7F401D4024E6A362193CE7E72167215532);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_166 = L_165;
		String_t* L_167;
		L_167 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_11), NULL);
		NullCheck(L_166);
		ArrayElementTypeCheck (L_166, L_167);
		(L_166)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_167);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_168 = L_166;
		NullCheck(L_168);
		ArrayElementTypeCheck (L_168, _stringLiteral46E5172E84E8B1FABA8D0F95FE004C4F08DAE573);
		(L_168)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral46E5172E84E8B1FABA8D0F95FE004C4F08DAE573);
		String_t* L_169;
		L_169 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_168, NULL);
		NullCheck(L_151);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_151, L_169);
		// }
		return;
	}
}
// System.Void measurement::reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void measurement_reset_m2353DD79CFA0EAE7F6A10C32E419464C918E2B42 (measurement_tBABFBD94B7887511259EC83C6D3FADB3CF803A2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// lineRenderer.positionCount = 0;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___lineRenderer_11;
		NullCheck(L_0);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_0, 0, NULL);
		// for (int i = 0; i < _placedObjects.Count; i++)
		V_0 = 0;
		goto IL_0026;
	}

IL_0010:
	{
		// _placedObjects[i].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = __this->____placedObjects_10;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_1, L_2, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// for (int i = 0; i < _placedObjects.Count; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0026:
	{
		// for (int i = 0; i < _placedObjects.Count; i++)
		int32_t L_5 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->____placedObjects_10;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_6, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0010;
		}
	}
	{
		// if (mText != null)
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_8 = __this->___mText_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0086;
		}
	}
	{
		// mText.gameObject.SetActive(false);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_10 = __this->___mText_12;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// firstSideText.gameObject.SetActive(false);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_12 = __this->___firstSideText_13;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		// secondSideText.gameObject.SetActive(false);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_14 = __this->___secondSideText_14;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
		// thirdSideText.gameObject.SetActive(false);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_16 = __this->___thirdSideText_15;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
	}

IL_0086:
	{
		// startPointAdded = false;
		__this->___startPointAdded_16 = (bool)0;
		// secondPointAdded = false;
		__this->___secondPointAdded_18 = (bool)0;
		// thirdPointAdded = false;
		__this->___thirdPointAdded_20 = (bool)0;
		// endPointAdded = false;
		__this->___endPointAdded_22 = (bool)0;
		// pointNum = 0;
		__this->___pointNum_29 = 0;
		// _pointer.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->____pointer_5;
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)1, NULL);
		// instructions1.gameObject.SetActive(true);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_19 = __this->___instructions1_30;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_19, NULL);
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)1, NULL);
		// instructions2.gameObject.SetActive(false);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_21 = __this->___instructions2_31;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_21, NULL);
		NullCheck(L_22);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)0, NULL);
		// instructions3.gameObject.SetActive(false);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_23 = __this->___instructions3_32;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_23, NULL);
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)0, NULL);
		// instructions4.gameObject.SetActive(false);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_25 = __this->___instructions4_33;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_25, NULL);
		NullCheck(L_26);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void measurement::NextMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void measurement_NextMessage_m3F7192EDECCA792D31F0822D9A7DEC99C1679326 (measurement_tBABFBD94B7887511259EC83C6D3FADB3CF803A2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24C6DD9224BE12FEDE05A7D75423A9A7D8CF4C25);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (clicker == false)
		bool L_0 = __this->___clicker_37;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// clicker = true;
		__this->___clicker_37 = (bool)1;
		// message.text = "Find another rectangular prism and measure its volume! See if you can find one with a similar volume, a larger volume, and a smaller volume.";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___message_35;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, _stringLiteral24C6DD9224BE12FEDE05A7D75423A9A7D8CF4C25);
		return;
	}

IL_0020:
	{
		// else if (clicker == true)
		bool L_2 = __this->___clicker_37;
		if (!L_2)
		{
			goto IL_005e;
		}
	}
	{
		// clicker = false;
		__this->___clicker_37 = (bool)0;
		// message.gameObject.SetActive(false);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___message_35;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// dialogueBox.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___dialogueBox_34;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// nextButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___nextButton_36;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// reset();
		measurement_reset_m2353DD79CFA0EAE7F6A10C32E419464C918E2B42(__this, NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void measurement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void measurement__ctor_m40B535B751582FAA31A93BF6836ABF5D2A5367B2 (measurement_tBABFBD94B7887511259EC83C6D3FADB3CF803A2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<GameObject> _placedObjects = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->____placedObjects_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____placedObjects_10), (void*)L_0);
		// private float measurementFactor = 39.37f;
		__this->___measurementFactor_27 = (39.3699989f);
		// private Vector3 offsetMeasurement = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___offsetMeasurement_28 = L_1;
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
// System.Void partOne::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void partOne_Start_m032C5A2A435199A015107D6100D5C5C6A704B673 (partOne_t5777F0EB23ACFA85AFECCDFF6365856E784381C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&partOne_OnDepthBufferInitialized_mC549D8D5096C47CE70821F978AC290170A4D1F9D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.targetFrameRate = 60;
		Application_set_targetFrameRate_m794A13DC5116C506B042663606691257CF3A7325(((int32_t)60), NULL);
		// _arDepthManager.DepthBufferInitialized += OnDepthBufferInitialized;
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_0 = __this->____arDepthManager_4;
		ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1* L_1 = (ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1*)il2cpp_codegen_object_new(ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ArdkEventHandler_1__ctor_m19F1F9BF1482926368FBE78243964F9734079A2B(L_1, __this, (intptr_t)((void*)partOne_OnDepthBufferInitialized_mC549D8D5096C47CE70821F978AC290170A4D1F9D_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARDepthManager_add_DepthBufferInitialized_m4479653F652274A4AA7E10CB38AB971CC0F7354A(L_0, L_1, NULL);
		// backgroundBox.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___backgroundBox_19;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// messageText.gameObject.SetActive(false);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___messageText_18;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// nextButton.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___nextButton_15;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// currentMessages = messages;
		MessageU5BU5D_tFE8C0A6DF33CB2B40201F0B2194144AD1DD4E27B* L_8 = __this->___messages_16;
		__this->___currentMessages_17 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentMessages_17), (void*)L_8);
		// instantiateGameObjects();
		partOne_instantiateGameObjects_m0234A1146E3D3F48E13DEA8596F0DB5E205668D0(__this, NULL);
		// }
		return;
	}
}
// System.Void partOne::OnDepthBufferInitialized(Niantic.ARDK.AR.Awareness.ContextAwarenessArgs`1<Niantic.ARDK.AR.Awareness.Depth.IDepthBuffer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void partOne_OnDepthBufferInitialized_mC549D8D5096C47CE70821F978AC290170A4D1F9D (partOne_t5777F0EB23ACFA85AFECCDFF6365856E784381C4* __this, ContextAwarenessArgs_1_t58B3B5DC8745F50F26A2217B0B869FDD542EEA84* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&partOne_OnDepthBufferInitialized_mC549D8D5096C47CE70821F978AC290170A4D1F9D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _arDepthManager.DepthBufferInitialized -= OnDepthBufferInitialized;
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_0 = __this->____arDepthManager_4;
		ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1* L_1 = (ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1*)il2cpp_codegen_object_new(ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ArdkEventHandler_1__ctor_m19F1F9BF1482926368FBE78243964F9734079A2B(L_1, __this, (intptr_t)((void*)partOne_OnDepthBufferInitialized_mC549D8D5096C47CE70821F978AC290170A4D1F9D_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARDepthManager_remove_DepthBufferInitialized_m481AB40F0527B25B5D50A948E9A663E52C4330A0(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void partOne::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void partOne_Update_m8113EB16CB3BC8E9F8A8E1EBFDF7AD766B3C8C80 (partOne_t5777F0EB23ACFA85AFECCDFF6365856E784381C4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// setPositions();
		partOne_setPositions_m423B83B512D82411FD0E094D303D5BA0977CF353(__this, NULL);
		// if (activeMessage == 11)
		int32_t L_0 = __this->___activeMessage_20;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_009d;
		}
	}
	{
		// var total = int.Parse(input1.text) * int.Parse(input2.text) * int.Parse(input3.text);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_1 = __this->___input1_33;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_1, NULL);
		int32_t L_3;
		L_3 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_2, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_4 = __this->___input2_34;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_4, NULL);
		int32_t L_6;
		L_6 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_5, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_7 = __this->___input3_35;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_7, NULL);
		int32_t L_9;
		L_9 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_8, NULL);
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_3, L_6)), L_9));
		// total_text.text = total.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_10 = __this->___total_text_32;
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_10, L_11);
		// if (int.Parse(input1.text) == 7 && int.Parse(input2.text) == 7 && int.Parse(input3.text) == 7)
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_12 = __this->___input1_33;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_12, NULL);
		int32_t L_14;
		L_14 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_13, NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)7))))
		{
			goto IL_009d;
		}
	}
	{
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_15 = __this->___input2_34;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_15, NULL);
		int32_t L_17;
		L_17 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_16, NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)7))))
		{
			goto IL_009d;
		}
	}
	{
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_18 = __this->___input3_35;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_18, NULL);
		int32_t L_20;
		L_20 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_19, NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)7))))
		{
			goto IL_009d;
		}
	}
	{
		// nextButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___nextButton_15;
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)1, NULL);
	}

IL_009d:
	{
		// }
		return;
	}
}
// System.Void partOne::instantiateGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void partOne_instantiateGameObjects_m0234A1146E3D3F48E13DEA8596F0DB5E205668D0 (partOne_t5777F0EB23ACFA85AFECCDFF6365856E784381C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _placedObjects.Add(Instantiate(PlacementObjectPf, Vector3.zero, Quaternion.identity));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->____placedObjects_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___PlacementObjectPf_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_1, L_2, L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_0, L_4, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// _placedObjects.Add(Instantiate(sidesObject, Vector3.zero, Quaternion.identity));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->____placedObjects_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___sidesObject_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_6, L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		NullCheck(L_5);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_5, L_9, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// _placedObjects[0].gameObject.transform.localScale += new Vector3(-0.5f, -0.5f, -0.5f);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = __this->____placedObjects_10;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_10, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_11, NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = L_13;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), (-0.5f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_15, L_16, NULL);
		NullCheck(L_14);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_14, L_17, NULL);
		// _placedObjects[1].gameObject.transform.localScale += new Vector3(-0.5f, -0.5f, -0.5f);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_18 = __this->____placedObjects_10;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_18, 1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_19, NULL);
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = L_21;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), (-0.5f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_23, L_24, NULL);
		NullCheck(L_22);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_22, L_25, NULL);
		// demoObject.transform.localScale += new Vector3(-0.5f, -0.5f, -0.5f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___demoObject_21;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = L_27;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_30), (-0.5f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_29, L_30, NULL);
		NullCheck(L_28);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_28, L_31, NULL);
		// _placedObjects[0].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_32 = __this->____placedObjects_10;
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_32, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_33);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)0, NULL);
		// _placedObjects[1].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_34 = __this->____placedObjects_10;
		NullCheck(L_34);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_34, 1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_35);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void partOne::setPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void partOne_setPositions_m423B83B512D82411FD0E094D303D5BA0977CF353 (partOne_t5777F0EB23ACFA85AFECCDFF6365856E784381C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthBufferProcessor_t8BB67409E168243E9BA7B883AF2C5597E1A32522_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var screenPosition = new Vector2(Screen.width / 2.0f, Screen.height / 2.0f);
		int32_t L_0;
		L_0 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_1;
		L_1 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)(((float)L_0)/(2.0f))), ((float)(((float)L_1)/(2.0f))), NULL);
		// var worldPosition = _arDepthManager.DepthBufferProcessor.GetWorldPosition(
		//     (int)screenPosition.x,
		//     (int)screenPosition.y);
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_2 = __this->____arDepthManager_4;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ARDepthManager_get_DepthBufferProcessor_mF05A0564834975FAF1BF001BBFE15D80225E990C(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		float L_7 = L_6.___y_1;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = InterfaceFuncInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t, int32_t >::Invoke(5 /* UnityEngine.Vector3 Niantic.ARDK.AR.Awareness.Depth.IDepthBufferProcessor::GetWorldPosition(System.Int32,System.Int32) */, IDepthBufferProcessor_t8BB67409E168243E9BA7B883AF2C5597E1A32522_il2cpp_TypeInfo_var, L_3, il2cpp_codegen_cast_double_to_int<int32_t>(L_5), il2cpp_codegen_cast_double_to_int<int32_t>(L_7));
		V_1 = L_8;
		// var normal = _arDepthManager.DepthBufferProcessor.GetSurfaceNormal(
		//     (int)screenPosition.x,
		//     (int)screenPosition.y);
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_9 = __this->____arDepthManager_4;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = ARDepthManager_get_DepthBufferProcessor_mF05A0564834975FAF1BF001BBFE15D80225E990C(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		float L_12 = L_11.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		float L_14 = L_13.___y_1;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = InterfaceFuncInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t, int32_t >::Invoke(6 /* UnityEngine.Vector3 Niantic.ARDK.AR.Awareness.Depth.IDepthBufferProcessor::GetSurfaceNormal(System.Int32,System.Int32) */, IDepthBufferProcessor_t8BB67409E168243E9BA7B883AF2C5597E1A32522_il2cpp_TypeInfo_var, L_10, il2cpp_codegen_cast_double_to_int<int32_t>(L_12), il2cpp_codegen_cast_double_to_int<int32_t>(L_14));
		V_2 = L_15;
		// var rotation = Quaternion.Slerp(
		//     _pointer.transform.rotation,
		//     Quaternion.FromToRotation(Vector3.up, normal),
		//     Time.deltaTime * 10.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->____pointer_5;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_FromToRotation_m041093DBB23CB3641118310881D6B7746E3B8418(L_19, L_20, NULL);
		float L_22;
		L_22 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_18, L_21, ((float)il2cpp_codegen_multiply(L_22, (10.0f))), NULL);
		V_3 = L_23;
		// _pointer.transform.position = worldPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->____pointer_5;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_1;
		NullCheck(L_25);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_25, L_26, NULL);
		// _pointer.transform.rotation = rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->____pointer_5;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29 = V_3;
		NullCheck(L_28);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_28, L_29, NULL);
		// }
		return;
	}
}
// System.Void partOne::addPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void partOne_addPoint_m14D4B728A4DA66676206D70311766038CF2DA678 (partOne_t5777F0EB23ACFA85AFECCDFF6365856E784381C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _pointer.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____pointer_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// _placedObjects[0].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = __this->____placedObjects_10;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_1, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// _placedObjects[0].transform.position = new Vector3(_pointer.transform.position.x, _pointer.transform.position.y + 1, _pointer.transform.position.z);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->____placedObjects_10;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_3, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->____pointer_5;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->____pointer_5;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___y_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->____pointer_5;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), L_9, ((float)il2cpp_codegen_add(L_13, (1.0f))), L_17, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_18, NULL);
		// _placedObjects[0].transform.Rotate(0, 180, 0);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_19 = __this->____placedObjects_10;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_19, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		NullCheck(L_21);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_21, (0.0f), (180.0f), (0.0f), NULL);
		// button.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___button_14;
		NullCheck(L_22);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)0, NULL);
		// backgroundBox.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_23 = __this->___backgroundBox_19;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_23, NULL);
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)1, NULL);
		// messageText.gameObject.SetActive(true);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_25 = __this->___messageText_18;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_25, NULL);
		NullCheck(L_26);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)1, NULL);
		// nextButton.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___nextButton_15;
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_27, NULL);
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)1, NULL);
		// openDialogue(messages);
		MessageU5BU5D_tFE8C0A6DF33CB2B40201F0B2194144AD1DD4E27B* L_29 = __this->___messages_16;
		partOne_openDialogue_m3EC4C48F54252D2686B865E4F0026BBD89645C36(__this, L_29, NULL);
		// }
		return;
	}
}
// System.Void partOne::reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void partOne_reset_mBE9A67ECDC993DE4BA950D0BAD88CEFF0DBEE7C1 (partOne_t5777F0EB23ACFA85AFECCDFF6365856E784381C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < _placedObjects.Count; i++)
		V_0 = 0;
		goto IL_001a;
	}

IL_0004:
	{
		// _placedObjects[i].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->____placedObjects_10;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// for (int i = 0; i < _placedObjects.Count; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_001a:
	{
		// for (int i = 0; i < _placedObjects.Count; i++)
		int32_t L_4 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->____placedObjects_10;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_5, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// _pointer.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->____pointer_5;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void partOne::openDialogue(Message[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void partOne_openDialogue_m3EC4C48F54252D2686B865E4F0026BBD89645C36 (partOne_t5777F0EB23ACFA85AFECCDFF6365856E784381C4* __this, MessageU5BU5D_tFE8C0A6DF33CB2B40201F0B2194144AD1DD4E27B* ___messages0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D9D56ECE340DEF1E16D2DAF67E12473528DDC39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentMessages = messages;
		MessageU5BU5D_tFE8C0A6DF33CB2B40201F0B2194144AD1DD4E27B* L_0 = ___messages0;
		__this->___currentMessages_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentMessages_17), (void*)L_0);
		// activeMessage = 0;
		__this->___activeMessage_20 = 0;
		// Debug.Log("here");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral5D9D56ECE340DEF1E16D2DAF67E12473528DDC39, NULL);
		// displayMessage();
		partOne_displayMessage_mCCE7F872FD3206F22572C38EAFD2B13D7FB384EA(__this, NULL);
		// }
		return;
	}
}
// System.Void partOne::displayMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void partOne_displayMessage_mCCE7F872FD3206F22572C38EAFD2B13D7FB384EA (partOne_t5777F0EB23ACFA85AFECCDFF6365856E784381C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	Message_t6F0607127E5920A1C18E3FA5FDE1CDB7C3F10640* V_0 = NULL;
	{
		// Message messageToDisplay = currentMessages[activeMessage];
		MessageU5BU5D_tFE8C0A6DF33CB2B40201F0B2194144AD1DD4E27B* L_0 = __this->___currentMessages_17;
		int32_t L_1 = __this->___activeMessage_20;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Message_t6F0607127E5920A1C18E3FA5FDE1CDB7C3F10640* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// messageText.text = messageToDisplay.message;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___messageText_18;
		Message_t6F0607127E5920A1C18E3FA5FDE1CDB7C3F10640* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = L_5->___message_0;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_6);
		// Debug.Log(activeMessage);
		int32_t L_7 = __this->___activeMessage_20;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_9, NULL);
		// if (activeMessage == 5)
		int32_t L_10 = __this->___activeMessage_20;
		if ((!(((uint32_t)L_10) == ((uint32_t)5))))
		{
			goto IL_00ad;
		}
	}
	{
		// _placedObjects[1].transform.position = _placedObjects[0].transform.position;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11 = __this->____placedObjects_10;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_11, 1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = __this->____placedObjects_10;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_14, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		NullCheck(L_13);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_13, L_17, NULL);
		// _placedObjects[1].transform.Rotate(0, 180, 0);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_18 = __this->____placedObjects_10;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_18, 1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		NullCheck(L_20);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_20, (0.0f), (180.0f), (0.0f), NULL);
		// _placedObjects[0].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_21 = __this->____placedObjects_10;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_21, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_22);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)0, NULL);
		// _placedObjects[1].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_23 = __this->____placedObjects_10;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_23, 1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)1, NULL);
	}

IL_00ad:
	{
		// if (activeMessage == 6)
		int32_t L_25 = __this->___activeMessage_20;
		if ((!(((uint32_t)L_25) == ((uint32_t)6))))
		{
			goto IL_0170;
		}
	}
	{
		// _placedObjects[1].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_26 = __this->____placedObjects_10;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_26, 1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)0, NULL);
		// demoObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___demoObject_21;
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)1, NULL);
		// demoObject.transform.position = _placedObjects[1].transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___demoObject_21;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_31 = __this->____placedObjects_10;
		NullCheck(L_31);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_31, 1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_32, NULL);
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_33, NULL);
		NullCheck(L_30);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_30, L_34, NULL);
		// demoObject.transform.Rotate(0, 180, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___demoObject_21;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		NullCheck(L_36);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_36, (0.0f), (180.0f), (0.0f), NULL);
		// formula2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___formula2_24;
		NullCheck(L_37);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_37, (bool)0, NULL);
		// formula3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = __this->___formula3_25;
		NullCheck(L_38);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_38, (bool)0, NULL);
		// formula4.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___formula4_26;
		NullCheck(L_39);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)0, NULL);
		// formula5.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___formula5_27;
		NullCheck(L_40);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_40, (bool)0, NULL);
		// length.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___length_28;
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)0, NULL);
		// width.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___width_29;
		NullCheck(L_42);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_42, (bool)0, NULL);
		// height.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = __this->___height_30;
		NullCheck(L_43);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_43, (bool)0, NULL);
	}

IL_0170:
	{
		// if (activeMessage == 7)
		int32_t L_44 = __this->___activeMessage_20;
		if ((!(((uint32_t)L_44) == ((uint32_t)7))))
		{
			goto IL_019d;
		}
	}
	{
		// formula1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = __this->___formula1_23;
		NullCheck(L_45);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_45, (bool)0, NULL);
		// formula2.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = __this->___formula2_24;
		NullCheck(L_46);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_46, (bool)1, NULL);
		// length.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = __this->___length_28;
		NullCheck(L_47);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_47, (bool)1, NULL);
	}

IL_019d:
	{
		// if (activeMessage == 8)
		int32_t L_48 = __this->___activeMessage_20;
		if ((!(((uint32_t)L_48) == ((uint32_t)8))))
		{
			goto IL_01e0;
		}
	}
	{
		// formula2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = __this->___formula2_24;
		NullCheck(L_49);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_49, (bool)0, NULL);
		// formula3.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = __this->___formula3_25;
		NullCheck(L_50);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_50, (bool)1, NULL);
		// length.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = __this->___length_28;
		NullCheck(L_51);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_51, (bool)0, NULL);
		// width.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = __this->___width_29;
		NullCheck(L_52);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_52, (bool)1, NULL);
		// Debug.Log("width");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84, NULL);
	}

IL_01e0:
	{
		// if (activeMessage == 9)
		int32_t L_53 = __this->___activeMessage_20;
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0224;
		}
	}
	{
		// Debug.Log("height");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563, NULL);
		// formula3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___formula3_25;
		NullCheck(L_54);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_54, (bool)0, NULL);
		// formula4.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = __this->___formula4_26;
		NullCheck(L_55);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_55, (bool)1, NULL);
		// width.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = __this->___width_29;
		NullCheck(L_56);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_56, (bool)0, NULL);
		// height.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = __this->___height_30;
		NullCheck(L_57);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_57, (bool)1, NULL);
	}

IL_0224:
	{
		// if (activeMessage == 10)
		int32_t L_58 = __this->___activeMessage_20;
		if ((!(((uint32_t)L_58) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_026a;
		}
	}
	{
		// formula4.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = __this->___formula4_26;
		NullCheck(L_59);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_59, (bool)0, NULL);
		// formula5.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = __this->___formula5_27;
		NullCheck(L_60);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_60, (bool)1, NULL);
		// width.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61 = __this->___width_29;
		NullCheck(L_61);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_61, (bool)1, NULL);
		// height.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = __this->___height_30;
		NullCheck(L_62);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_62, (bool)1, NULL);
		// length.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = __this->___length_28;
		NullCheck(L_63);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_63, (bool)1, NULL);
	}

IL_026a:
	{
		// if (activeMessage == 11)
		int32_t L_64 = __this->___activeMessage_20;
		if ((!(((uint32_t)L_64) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_02bc;
		}
	}
	{
		// equation.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65 = __this->___equation_31;
		NullCheck(L_65);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_65, (bool)1, NULL);
		// nextButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66 = __this->___nextButton_15;
		NullCheck(L_66);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_66, (bool)0, NULL);
		// input1.text = "0";
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_67 = __this->___input1_33;
		NullCheck(L_67);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_67, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		// input2.text = "0";
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_68 = __this->___input2_34;
		NullCheck(L_68);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_68, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		// input3.text = "0";
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_69 = __this->___input3_35;
		NullCheck(L_69);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_69, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
	}

IL_02bc:
	{
		// if (activeMessage == 12)
		int32_t L_70 = __this->___activeMessage_20;
		if ((!(((uint32_t)L_70) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_02f0;
		}
	}
	{
		// equation.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = __this->___equation_31;
		NullCheck(L_71);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_71, (bool)0, NULL);
		// _placedObjects[0].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_72 = __this->____placedObjects_10;
		NullCheck(L_72);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_73;
		L_73 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_72, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_73);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_73, (bool)1, NULL);
		// demoObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74 = __this->___demoObject_21;
		NullCheck(L_74);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_74, (bool)0, NULL);
	}

IL_02f0:
	{
		// }
		return;
	}
}
// System.Void partOne::NextMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void partOne_NextMessage_mFA0B5ECCC1EE041178A1240867C9EE6CD5F25460 (partOne_t5777F0EB23ACFA85AFECCDFF6365856E784381C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB7A330309BFA84FB156E4FBA6A35A48D3B78C3A);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// activeMessage++;
		int32_t L_0 = __this->___activeMessage_20;
		__this->___activeMessage_20 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (activeMessage < currentMessages.Length)
		int32_t L_1 = __this->___activeMessage_20;
		MessageU5BU5D_tFE8C0A6DF33CB2B40201F0B2194144AD1DD4E27B* L_2 = __this->___currentMessages_17;
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0025;
		}
	}
	{
		// displayMessage();
		partOne_displayMessage_mCCE7F872FD3206F22572C38EAFD2B13D7FB384EA(__this, NULL);
		return;
	}

IL_0025:
	{
		// Debug.Log("done");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralDB7A330309BFA84FB156E4FBA6A35A48D3B78C3A, NULL);
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_3;
		L_3 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(((int32_t)il2cpp_codegen_add(L_4, 1)), NULL);
		// }
		return;
	}
}
// System.Void partOne::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void partOne__ctor_m8B919696EF5389FAB11E9F8144854FDB98642950 (partOne_t5777F0EB23ACFA85AFECCDFF6365856E784381C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<GameObject> _placedObjects = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->____placedObjects_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____placedObjects_10), (void*)L_0);
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
// System.Void Message::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_m4B34B407C9C10627022C55648F679C2844877969 (Message_t6F0607127E5920A1C18E3FA5FDE1CDB7C3F10640* __this, const RuntimeMethod* method) 
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
// System.Void switchScene::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void switchScene_Start_mDFAB8E4DD3691D964A9F69444797FB09177719C4 (switchScene_tBAE45A40FF588E86C545CF18D1E24FB7A5292465* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void switchScene::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void switchScene_Update_m63CF48DC056F5A39BD94969A14A39DC2CF65187A (switchScene_tBAE45A40FF588E86C545CF18D1E24FB7A5292465* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void switchScene::playGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void switchScene_playGame_m4811766A7A463314A211A9646D3B712B87ECB750 (switchScene_tBAE45A40FF588E86C545CF18D1E24FB7A5292465* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		// }
		return;
	}
}
// System.Void switchScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void switchScene__ctor_m70737FA577946A4EABF7EE8977A741210A518F90 (switchScene_tBAE45A40FF588E86C545CF18D1E24FB7A5292465* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Niantic.ARDKExamples.DepthExampleManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthExampleManager_Start_m6B9E465F8B9C084266B844286DBE848304D6A8DE (DepthExampleManager_tA983D4E9AFC742EA0665BF0E5BF62778CA0D5338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthExampleManager_OnDepthBufferInitialized_mED8BF3A33EF7E4616C92566B19D0EE2EE149003A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_toggles != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____toggles_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// _toggles.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____toggles_5;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
	}

IL_001a:
	{
		// Application.targetFrameRate = 60;
		Application_set_targetFrameRate_m794A13DC5116C506B042663606691257CF3A7325(((int32_t)60), NULL);
		// _arDepthManager.DepthBufferInitialized += OnDepthBufferInitialized;
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_3 = __this->____arDepthManager_4;
		ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1* L_4 = (ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1*)il2cpp_codegen_object_new(ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ArdkEventHandler_1__ctor_m19F1F9BF1482926368FBE78243964F9734079A2B(L_4, __this, (intptr_t)((void*)DepthExampleManager_OnDepthBufferInitialized_mED8BF3A33EF7E4616C92566B19D0EE2EE149003A_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		ARDepthManager_add_DepthBufferInitialized_m4479653F652274A4AA7E10CB38AB971CC0F7354A(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.DepthExampleManager::OnDepthBufferInitialized(Niantic.ARDK.AR.Awareness.ContextAwarenessArgs`1<Niantic.ARDK.AR.Awareness.Depth.IDepthBuffer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthExampleManager_OnDepthBufferInitialized_mED8BF3A33EF7E4616C92566B19D0EE2EE149003A (DepthExampleManager_tA983D4E9AFC742EA0665BF0E5BF62778CA0D5338* __this, ContextAwarenessArgs_1_t58B3B5DC8745F50F26A2217B0B869FDD542EEA84* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthExampleManager_OnDepthBufferInitialized_mED8BF3A33EF7E4616C92566B19D0EE2EE149003A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _arDepthManager.DepthBufferInitialized -= OnDepthBufferInitialized;
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_0 = __this->____arDepthManager_4;
		ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1* L_1 = (ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1*)il2cpp_codegen_object_new(ArdkEventHandler_1_t1566CE4ABA100ABBA153948FB4DDF57EC85550E1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ArdkEventHandler_1__ctor_m19F1F9BF1482926368FBE78243964F9734079A2B(L_1, __this, (intptr_t)((void*)DepthExampleManager_OnDepthBufferInitialized_mED8BF3A33EF7E4616C92566B19D0EE2EE149003A_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARDepthManager_remove_DepthBufferInitialized_m481AB40F0527B25B5D50A948E9A663E52C4330A0(L_0, L_1, NULL);
		// if (_toggles != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____toggles_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// _toggles.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->____toggles_5;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.DepthExampleManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthExampleManager_Update_mB77C0013F86D02CEAB84739914FF126097FB31D4 (DepthExampleManager_tA983D4E9AFC742EA0665BF0E5BF62778CA0D5338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthBufferProcessor_t8BB67409E168243E9BA7B883AF2C5597E1A32522_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAgnosticInput_tB0003440F676D5712F8A78BBE7BA335FC593809D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// var touchPosition = PlatformAgnosticInput.touchCount > 0
		//   ? PlatformAgnosticInput.GetTouch(0).position
		//   : new Vector2(Screen.width / 2.0f, Screen.height / 2.0f);
		il2cpp_codegen_runtime_class_init_inline(PlatformAgnosticInput_tB0003440F676D5712F8A78BBE7BA335FC593809D_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = PlatformAgnosticInput_get_touchCount_m5B0BCAF4749676D6E2A709BC032C908D54A823E7(NULL);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1;
		L_1 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_2;
		L_2 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), ((float)(((float)L_1)/(2.0f))), ((float)(((float)L_2)/(2.0f))), /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0036;
	}

IL_0027:
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformAgnosticInput_tB0003440F676D5712F8A78BBE7BA335FC593809D_il2cpp_TypeInfo_var);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_4;
		L_4 = PlatformAgnosticInput_GetTouch_m6B44EA87943AA6B7AA916B13DD9EFB5209A6377F(0, NULL);
		V_4 = L_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_4), NULL);
		G_B3_0 = L_5;
	}

IL_0036:
	{
		V_0 = G_B3_0;
		// var worldPosition = _arDepthManager.DepthBufferProcessor.GetWorldPosition
		// (
		//   (int)touchPosition.x,
		//   (int)touchPosition.y
		// );
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_6 = __this->____arDepthManager_4;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ARDepthManager_get_DepthBufferProcessor_mF05A0564834975FAF1BF001BBFE15D80225E990C(L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		float L_9 = L_8.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		float L_11 = L_10.___y_1;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = InterfaceFuncInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t, int32_t >::Invoke(5 /* UnityEngine.Vector3 Niantic.ARDK.AR.Awareness.Depth.IDepthBufferProcessor::GetWorldPosition(System.Int32,System.Int32) */, IDepthBufferProcessor_t8BB67409E168243E9BA7B883AF2C5597E1A32522_il2cpp_TypeInfo_var, L_7, il2cpp_codegen_cast_double_to_int<int32_t>(L_9), il2cpp_codegen_cast_double_to_int<int32_t>(L_11));
		V_1 = L_12;
		// var normal = _arDepthManager.DepthBufferProcessor.GetSurfaceNormal
		// (
		//   (int)touchPosition.x,
		//   (int)touchPosition.y
		// );
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_13 = __this->____arDepthManager_4;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = ARDepthManager_get_DepthBufferProcessor_mF05A0564834975FAF1BF001BBFE15D80225E990C(L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		float L_16 = L_15.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		float L_18 = L_17.___y_1;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = InterfaceFuncInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t, int32_t >::Invoke(6 /* UnityEngine.Vector3 Niantic.ARDK.AR.Awareness.Depth.IDepthBufferProcessor::GetSurfaceNormal(System.Int32,System.Int32) */, IDepthBufferProcessor_t8BB67409E168243E9BA7B883AF2C5597E1A32522_il2cpp_TypeInfo_var, L_14, il2cpp_codegen_cast_double_to_int<int32_t>(L_16), il2cpp_codegen_cast_double_to_int<int32_t>(L_18));
		V_2 = L_19;
		// var rotation = Quaternion.Slerp
		// (
		//   _pointer.transform.rotation,
		//   Quaternion.FromToRotation(Vector3.up, normal),
		//   Time.deltaTime * 10.0f
		// );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->____pointer_12;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		NullCheck(L_21);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_FromToRotation_m041093DBB23CB3641118310881D6B7746E3B8418(L_23, L_24, NULL);
		float L_26;
		L_26 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_22, L_25, ((float)il2cpp_codegen_multiply(L_26, (10.0f))), NULL);
		V_3 = L_27;
		// _pointer.transform.position = worldPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->____pointer_12;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_1;
		NullCheck(L_29);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_29, L_30, NULL);
		// _pointer.transform.rotation = rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->____pointer_12;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33 = V_3;
		NullCheck(L_32);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_32, L_33, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.DepthExampleManager::PlaceCube()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthExampleManager_PlaceCube_m6D0AD08D2D35C1FB7AE47973646ABBC52EBEB223 (DepthExampleManager_tA983D4E9AFC742EA0665BF0E5BF62778CA0D5338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthBufferProcessor_t8BB67409E168243E9BA7B883AF2C5597E1A32522_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral447F41D7423FBA1A58110B093E2B8E27D4BB1E28);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _cube.transform.position = _arDepthManager.DepthBufferProcessor.GetWorldPosition
		//   (Screen.width / 2, Screen.height / 2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____cube_13;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_2 = __this->____arDepthManager_4;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ARDepthManager_get_DepthBufferProcessor_mF05A0564834975FAF1BF001BBFE15D80225E990C(L_2, NULL);
		int32_t L_4;
		L_4 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_5;
		L_5 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = InterfaceFuncInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t, int32_t >::Invoke(5 /* UnityEngine.Vector3 Niantic.ARDK.AR.Awareness.Depth.IDepthBufferProcessor::GetWorldPosition(System.Int32,System.Int32) */, IDepthBufferProcessor_t8BB67409E168243E9BA7B883AF2C5597E1A32522_il2cpp_TypeInfo_var, L_3, ((int32_t)(L_4/2)), ((int32_t)(L_5/2)));
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_6, NULL);
		// Debug.Log("Placed cube at: " + _cube.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->____cube_13;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		String_t* L_11;
		L_11 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral447F41D7423FBA1A58110B093E2B8E27D4BB1E28, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_11, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.DepthExampleManager::ToggleInterpolation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthExampleManager_ToggleInterpolation_m77C4F004D21314D224D248456D45D2B0E73FD15C (DepthExampleManager_tA983D4E9AFC742EA0665BF0E5BF62778CA0D5338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAwarenessBufferProcessor_t2F83E2CB1300EA8DCA11BCFA09703FA7DB8BCD54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterpolationMode_tF0839B90402DAABD0E619360BAB21FDB38A24689_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F739B3B6F9A50A558F01BC946725EA086630D43);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (_arDepthManager == null)
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_0 = __this->____arDepthManager_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// var provider = _arDepthManager.DepthBufferProcessor;
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_2 = __this->____arDepthManager_4;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ARDepthManager_get_DepthBufferProcessor_mF05A0564834975FAF1BF001BBFE15D80225E990C(L_2, NULL);
		V_0 = L_3;
		// var current = provider.InterpolationMode;
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Niantic.ARDK.AR.InterpolationMode Niantic.ARDK.AR.Awareness.IAwarenessBufferProcessor::get_InterpolationMode() */, IAwarenessBufferProcessor_t2F83E2CB1300EA8DCA11BCFA09703FA7DB8BCD54_il2cpp_TypeInfo_var, L_4);
		V_1 = L_5;
		int32_t L_6 = V_1;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_003f;
			}
			case 2:
			{
				goto IL_0048;
			}
		}
	}
	{
		goto IL_0051;
	}

IL_0036:
	{
		// provider.InterpolationMode = InterpolationMode.Balanced;
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void Niantic.ARDK.AR.Awareness.IAwarenessBufferProcessor::set_InterpolationMode(Niantic.ARDK.AR.InterpolationMode) */, IAwarenessBufferProcessor_t2F83E2CB1300EA8DCA11BCFA09703FA7DB8BCD54_il2cpp_TypeInfo_var, L_7, 1);
		// break;
		goto IL_0057;
	}

IL_003f:
	{
		// provider.InterpolationMode = InterpolationMode.Smooth;
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void Niantic.ARDK.AR.Awareness.IAwarenessBufferProcessor::set_InterpolationMode(Niantic.ARDK.AR.InterpolationMode) */, IAwarenessBufferProcessor_t2F83E2CB1300EA8DCA11BCFA09703FA7DB8BCD54_il2cpp_TypeInfo_var, L_8, 2);
		// break;
		goto IL_0057;
	}

IL_0048:
	{
		// provider.InterpolationMode = InterpolationMode.None;
		RuntimeObject* L_9 = V_0;
		NullCheck(L_9);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void Niantic.ARDK.AR.Awareness.IAwarenessBufferProcessor::set_InterpolationMode(Niantic.ARDK.AR.InterpolationMode) */, IAwarenessBufferProcessor_t2F83E2CB1300EA8DCA11BCFA09703FA7DB8BCD54_il2cpp_TypeInfo_var, L_9, 0);
		// break;
		goto IL_0057;
	}

IL_0051:
	{
		// throw new ArgumentOutOfRangeException();
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_10 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DepthExampleManager_ToggleInterpolation_m77C4F004D21314D224D248456D45D2B0E73FD15C_RuntimeMethod_var)));
	}

IL_0057:
	{
		// _toggleInterpolationButtonText.text = "Interpolation:\n" + provider.InterpolationMode;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->____toggleInterpolationButtonText_9;
		RuntimeObject* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Niantic.ARDK.AR.InterpolationMode Niantic.ARDK.AR.Awareness.IAwarenessBufferProcessor::get_InterpolationMode() */, IAwarenessBufferProcessor_t2F83E2CB1300EA8DCA11BCFA09703FA7DB8BCD54_il2cpp_TypeInfo_var, L_12);
		V_2 = L_13;
		Il2CppFakeBox<int32_t> L_14(InterpolationMode_tF0839B90402DAABD0E619360BAB21FDB38A24689_il2cpp_TypeInfo_var, (&V_2));
		String_t* L_15;
		L_15 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_14), NULL);
		String_t* L_16;
		L_16 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3F739B3B6F9A50A558F01BC946725EA086630D43, L_15, NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_16);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.DepthExampleManager::ToggleOcclusion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthExampleManager_ToggleOcclusion_m5CB060B22BC0B78BE595D0B102CFB8E5E9681932 (DepthExampleManager_tA983D4E9AFC742EA0665BF0E5BF62778CA0D5338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OcclusionMode_t7DD8CC69E694901B48E22F113F1EB41D04167D86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral544A642FE86349136FA63001E0BD0CF9A5B9A7F1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (_arDepthManager == null)
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_0 = __this->____arDepthManager_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// var current = _arDepthManager.OcclusionTechnique;
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_2 = __this->____arDepthManager_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ARDepthManager_get_OcclusionTechnique_m6FE3004BE2C895840609866663B8EF88785901FB_inline(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0033;
			}
			case 1:
			{
				goto IL_0041;
			}
			case 2:
			{
				goto IL_004f;
			}
			case 3:
			{
				goto IL_005d;
			}
		}
	}
	{
		goto IL_006b;
	}

IL_0033:
	{
		// _arDepthManager.OcclusionTechnique = ARDepthManager.OcclusionMode.DepthBuffer;
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_5 = __this->____arDepthManager_4;
		NullCheck(L_5);
		ARDepthManager_set_OcclusionTechnique_m90D08D97D88AA283A3C9D720E45A29202C7A70BA(L_5, 1, NULL);
		// break;
		goto IL_0071;
	}

IL_0041:
	{
		// _arDepthManager.OcclusionTechnique = ARDepthManager.OcclusionMode.ScreenSpaceMesh;
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_6 = __this->____arDepthManager_4;
		NullCheck(L_6);
		ARDepthManager_set_OcclusionTechnique_m90D08D97D88AA283A3C9D720E45A29202C7A70BA(L_6, 2, NULL);
		// break;
		goto IL_0071;
	}

IL_004f:
	{
		// _arDepthManager.OcclusionTechnique = ARDepthManager.OcclusionMode.None;
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_7 = __this->____arDepthManager_4;
		NullCheck(L_7);
		ARDepthManager_set_OcclusionTechnique_m90D08D97D88AA283A3C9D720E45A29202C7A70BA(L_7, 0, NULL);
		// break;
		goto IL_0071;
	}

IL_005d:
	{
		// _arDepthManager.OcclusionTechnique = ARDepthManager.OcclusionMode.None;
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_8 = __this->____arDepthManager_4;
		NullCheck(L_8);
		ARDepthManager_set_OcclusionTechnique_m90D08D97D88AA283A3C9D720E45A29202C7A70BA(L_8, 0, NULL);
		// break;
		goto IL_0071;
	}

IL_006b:
	{
		// throw new ArgumentOutOfRangeException();
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DepthExampleManager_ToggleOcclusion_m5CB060B22BC0B78BE595D0B102CFB8E5E9681932_RuntimeMethod_var)));
	}

IL_0071:
	{
		// _toggleOcclusionButtonText.text = "Occlusion:\n" + _arDepthManager.OcclusionTechnique;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->____toggleOcclusionButtonText_8;
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_11 = __this->____arDepthManager_4;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = ARDepthManager_get_OcclusionTechnique_m6FE3004BE2C895840609866663B8EF88785901FB_inline(L_11, NULL);
		V_1 = L_12;
		Il2CppFakeBox<int32_t> L_13(OcclusionMode_t7DD8CC69E694901B48E22F113F1EB41D04167D86_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_14;
		L_14 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_13), NULL);
		String_t* L_15;
		L_15 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral544A642FE86349136FA63001E0BD0CF9A5B9A7F1, L_14, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_15);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.DepthExampleManager::ToggleShowDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthExampleManager_ToggleShowDepth_m21A2D0C0453176B840FC05C34943E5CABB6E7805 (DepthExampleManager_tA983D4E9AFC742EA0665BF0E5BF62778CA0D5338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral348B1D40AF32C3F48F9A55D29BC560BDAF82699B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7691D48674C785E388ECAABC40058CD16BC2F53);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// _isShowingDepths = !_isShowingDepths;
		bool L_0 = __this->____isShowingDepths_14;
		__this->____isShowingDepths_14 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// _toggleViewButtonText.text = _isShowingDepths ? "Show Camera" : "Show Depth";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->____toggleViewButtonText_6;
		bool L_2 = __this->____isShowingDepths_14;
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_0024;
		}
	}
	{
		G_B3_0 = _stringLiteral348B1D40AF32C3F48F9A55D29BC560BDAF82699B;
		G_B3_1 = G_B1_0;
		goto IL_0029;
	}

IL_0024:
	{
		G_B3_0 = _stringLiteralD7691D48674C785E388ECAABC40058CD16BC2F53;
		G_B3_1 = G_B2_0;
	}

IL_0029:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_1, G_B3_0);
		// _arDepthManager.ToggleDebugVisualization(_isShowingDepths);
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_3 = __this->____arDepthManager_4;
		bool L_4 = __this->____isShowingDepths_14;
		NullCheck(L_3);
		ARDepthManager_ToggleDebugVisualization_m1B40B1E6FC01C17B2BE16C135C359E63926F74E0(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.DepthExampleManager::ToggleShowPointCloud()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthExampleManager_ToggleShowPointCloud_mD4F191106A39A621FA8AB1C37C15880CDAE0FF00 (DepthExampleManager_tA983D4E9AFC742EA0665BF0E5BF62778CA0D5338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B11797863960D4DE233B30DCEF65DE6E5493DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2091262F7B0917C4BA184A21BD3F4E0700FE1785);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// _isShowingPointCloud = !_isShowingPointCloud;
		bool L_0 = __this->____isShowingPointCloud_15;
		__this->____isShowingPointCloud_15 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// _togglePointCloudButtonText.text =
		//   _isShowingPointCloud ? "Hide Point Cloud" : "Show Current Point Cloud";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->____togglePointCloudButtonText_7;
		bool L_2 = __this->____isShowingPointCloud_15;
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_0024;
		}
	}
	{
		G_B3_0 = _stringLiteral1B11797863960D4DE233B30DCEF65DE6E5493DAA;
		G_B3_1 = G_B1_0;
		goto IL_0029;
	}

IL_0024:
	{
		G_B3_0 = _stringLiteral2091262F7B0917C4BA184A21BD3F4E0700FE1785;
		G_B3_1 = G_B2_0;
	}

IL_0029:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.DepthExampleManager::ToggleSessionDepthFeatures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthExampleManager_ToggleSessionDepthFeatures_m0B6CF8993E99A9120F46D1CF24FCAF1B7FC668EC (DepthExampleManager_tA983D4E9AFC742EA0665BF0E5BF62778CA0D5338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral840A9E33E68787885A0C5B8AED1E0729364AF586);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF57300997ADD4615042099A09A508ACFF8C3BE07);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// var depthEnabled = !_arDepthManager.enabled;
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_0 = __this->____arDepthManager_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// _pointer.SetActive(depthEnabled);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____pointer_12;
		bool L_3 = V_0;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, L_3, NULL);
		// _arDepthManager.enabled = depthEnabled;
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_4 = __this->____arDepthManager_4;
		bool L_5 = V_0;
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, L_5, NULL);
		// _toggleDepthButtonText.text = depthEnabled ? "Disable Depth" : "Enable Depth";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->____toggleDepthButtonText_10;
		bool L_7 = V_0;
		G_B1_0 = L_6;
		if (L_7)
		{
			G_B2_0 = L_6;
			goto IL_0037;
		}
	}
	{
		G_B3_0 = _stringLiteral840A9E33E68787885A0C5B8AED1E0729364AF586;
		G_B3_1 = G_B1_0;
		goto IL_003c;
	}

IL_0037:
	{
		G_B3_0 = _stringLiteralF57300997ADD4615042099A09A508ACFF8C3BE07;
		G_B3_1 = G_B2_0;
	}

IL_003c:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.DepthExampleManager::TogglePreferSmoothEdges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthExampleManager_TogglePreferSmoothEdges_m6DE81E8E7BC30370D9C39189B60DADC3FE3913EE (DepthExampleManager_tA983D4E9AFC742EA0665BF0E5BF62778CA0D5338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A922CADE4941E4318B21D5655B82CB158428EF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5997941F4F547F7F3435415BCA8D796999AD84F0);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// var preferSmoothEdges = !_arDepthManager.PreferSmoothEdges;
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_0 = __this->____arDepthManager_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = ARDepthManager_get_PreferSmoothEdges_m9215EBD9EEFE81A332F8AB44F4F1CB744D534D81(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// _arDepthManager.PreferSmoothEdges = preferSmoothEdges;
		ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* L_2 = __this->____arDepthManager_4;
		bool L_3 = V_0;
		NullCheck(L_2);
		ARDepthManager_set_PreferSmoothEdges_m459296BC9E58F622855D49A20ED6A0FAFFB0C3B2(L_2, L_3, NULL);
		// _toggleFilterText.text = preferSmoothEdges ? "Sampling: Bilinear" : "Sampling: Point";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->____toggleFilterText_11;
		bool L_5 = V_0;
		G_B1_0 = L_4;
		if (L_5)
		{
			G_B2_0 = L_4;
			goto IL_002b;
		}
	}
	{
		G_B3_0 = _stringLiteral5997941F4F547F7F3435415BCA8D796999AD84F0;
		G_B3_1 = G_B1_0;
		goto IL_0030;
	}

IL_002b:
	{
		G_B3_0 = _stringLiteral3A922CADE4941E4318B21D5655B82CB158428EF7;
		G_B3_1 = G_B2_0;
	}

IL_0030:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.DepthExampleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthExampleManager__ctor_m5F24A0F1EF6F252DE2E915F89DBA9139F128C265 (DepthExampleManager_tA983D4E9AFC742EA0665BF0E5BF62778CA0D5338* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_60;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARDepthManager_get_OcclusionTechnique_m6FE3004BE2C895840609866663B8EF88785901FB_inline (ARDepthManager_t45198791D6E7566D498EB236954DAAC7DEF03D8B* __this, const RuntimeMethod* method) 
{
	{
		// get => _occlusionMode;
		int32_t L_0 = __this->____occlusionMode_20;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
