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

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
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
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
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
// UnityEngine.GameObject[,]
struct GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E;
// GridTile[,]
struct GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C;
// ActionButton
struct ActionButton_tC5008E96CD4F0A1DCDCDD9124469023C12AAD709;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808;
// Character
struct Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameController
struct GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// TravisGameAssets.HitImpactEffectsPreview
struct HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
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
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Tile
struct Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64;
// TitleScreenButtons
struct TitleScreenButtons_t4F9828301478ED8188811188EB69980E5FD384F6;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// Video
struct Video_t836AAEE6BD5AF9A66DB88DF3993B649D977F9BBC;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// VuforiaLicense
struct VuforiaLicense_t558A3A93186A45EF8A9401D2262B52B5593182BC;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// GameController/<AttackEnemy>d__53
struct U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* CharacterType_tDCA59CA1F7D8EAE16F11759682B2A814B5AE283D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____4BA0541F05008903BC2BA632A80E81EA309A48CC0620F72A279ACDB1AC1BEF97_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____D0A300A6E266DEAA817AC9DCC7ED54F7FADE13954D63F97BD7A03A8C859593F6_1_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03458FAE53B29BD3B46E2CCB49056F90D71AFDA5;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306;
IL2CPP_EXTERN_C String_t* _stringLiteral0E92D19726F10E23A99001553ECB029656AD0AC3;
IL2CPP_EXTERN_C String_t* _stringLiteral162CE55EB2CCD370559752816D170BC16738BF76;
IL2CPP_EXTERN_C String_t* _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE;
IL2CPP_EXTERN_C String_t* _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
IL2CPP_EXTERN_C String_t* _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral4482C06BF9FD6C98F52A69437D3CE3E0A9D083A0;
IL2CPP_EXTERN_C String_t* _stringLiteral462A04EA78567D8293A4A7ADC43105AF65453192;
IL2CPP_EXTERN_C String_t* _stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C;
IL2CPP_EXTERN_C String_t* _stringLiteral588948505B18DFD1521F476BDCC30F83F47A785A;
IL2CPP_EXTERN_C String_t* _stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8;
IL2CPP_EXTERN_C String_t* _stringLiteral70BD1FF50321E0DEE9508FF070A8BAAAE42F5FB0;
IL2CPP_EXTERN_C String_t* _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A;
IL2CPP_EXTERN_C String_t* _stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79;
IL2CPP_EXTERN_C String_t* _stringLiteral7D61FA9D9BE7581D7E2EE28C775ABE0D4B8C3D69;
IL2CPP_EXTERN_C String_t* _stringLiteral88222E65FD385EBA9901132DEECAD4FB40A68E00;
IL2CPP_EXTERN_C String_t* _stringLiteral8BB78D92F682AB5C8B9EBE8DC95BCD86995484BD;
IL2CPP_EXTERN_C String_t* _stringLiteral8F1551ACDC6C2F450CA0F478C3208A3988707380;
IL2CPP_EXTERN_C String_t* _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C;
IL2CPP_EXTERN_C String_t* _stringLiteralC93FEA935815A67E8D724FC1E3F1C62B945414F3;
IL2CPP_EXTERN_C String_t* _stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5;
IL2CPP_EXTERN_C String_t* _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C String_t* _stringLiteralFF95DF5537184AB57CFCFB85BBF9C1A3E252B1A4;
IL2CPP_EXTERN_C const RuntimeMethod* ActionButton_OnClick_m1E0798C86966541546A9BB61CEB5C7F5213E604D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameController_U3CStartU3Eb__49_0_m0A376EA5AB5FD9F228883D3A03615D486DBC7D30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameController_U3CStartU3Eb__49_1_mDAB2CE4D0486E3E71E85E1C5D7C9EE31509CED7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m7C70BBFE6656C524C87A4A81898C874BA4F035C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m297C8A480F93829939D3C844EF127F9C2C28DF72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_m159F768EFA54B38B000FB4104B7A4E3A9948E2C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TitleScreenButtons_OnClick_mD19AFF9E887C364317E052A5DB1406E716678DB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAttackEnemyU3Ed__53_System_Collections_IEnumerator_Reset_m79073959161C04648F185D42EE799FB38489FC94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Video_OnPointerClick_m7F6F2C51F53F4F3E58B376078715CC28B3C83178_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E;
struct GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C;
struct Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F;

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
struct Il2CppArrayBounds;

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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// VuforiaLicense
struct VuforiaLicense_t558A3A93186A45EF8A9401D2262B52B5593182BC  : public RuntimeObject
{
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

// GameController/<AttackEnemy>d__53
struct U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E  : public RuntimeObject
{
	// System.Int32 GameController/<AttackEnemy>d__53::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameController/<AttackEnemy>d__53::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameController GameController/<AttackEnemy>d__53::<>4__this
	GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* ___U3CU3E4__this_2;
	// System.Int32 GameController/<AttackEnemy>d__53::x
	int32_t ___x_3;
	// System.Int32 GameController/<AttackEnemy>d__53::y
	int32_t ___y_4;
	// CharacterType GameController/<AttackEnemy>d__53::characterType
	int32_t ___characterType_5;
	// UnityEngine.GameObject[,] GameController/<AttackEnemy>d__53::<enemyChars>5__2
	GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* ___U3CenemyCharsU3E5__2_6;
	// Character GameController/<AttackEnemy>d__53::<enemy>5__3
	Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* ___U3CenemyU3E5__3_7;
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

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069__padding[32];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
struct __StaticArrayInitTypeSizeU3D96_tE962D346DA0011435482BCE5513DB1E0D88A8DEB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_tE962D346DA0011435482BCE5513DB1E0D88A8DEB__padding[96];
	};
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
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

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::4BA0541F05008903BC2BA632A80E81EA309A48CC0620F72A279ACDB1AC1BEF97
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___4BA0541F05008903BC2BA632A80E81EA309A48CC0620F72A279ACDB1AC1BEF97_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::D0A300A6E266DEAA817AC9DCC7ED54F7FADE13954D63F97BD7A03A8C859593F6
	__StaticArrayInitTypeSizeU3D96_tE962D346DA0011435482BCE5513DB1E0D88A8DEB ___D0A300A6E266DEAA817AC9DCC7ED54F7FADE13954D63F97BD7A03A8C859593F6_1;
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

// GridTile
struct GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106 
{
	// UnityEngine.Vector3 GridTile::Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_0;
	// System.Boolean GridTile::IsWalkable
	bool ___IsWalkable_1;
	// System.Boolean GridTile::IsAttackable
	bool ___IsAttackable_2;
};
// Native definition for P/Invoke marshalling of GridTile
struct GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_0;
	int32_t ___IsWalkable_1;
	int32_t ___IsAttackable_2;
};
// Native definition for COM marshalling of GridTile
struct GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_0;
	int32_t ___IsWalkable_1;
	int32_t ___IsAttackable_2;
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
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

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
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

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
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

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
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

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ActionButton
struct ActionButton_tC5008E96CD4F0A1DCDCDD9124469023C12AAD709  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ActionType ActionButton::actionType
	int32_t ___actionType_4;
	// UnityEngine.UI.Button ActionButton::_button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____button_5;
	// GameController ActionButton::_gameController
	GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* ____gameController_6;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Character
struct Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Character::x
	int32_t ___x_4;
	// System.Int32 Character::y
	int32_t ___y_5;
	// System.Int32 Character::health
	int32_t ___health_6;
	// System.Int32 Character::maxHealth
	int32_t ___maxHealth_7;
	// System.Int32 Character::damage
	int32_t ___damage_8;
	// CharacterType Character::characterType
	int32_t ___characterType_9;
	// GameController Character::_gameController
	GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* ____gameController_10;
};

// GameController
struct GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 GameController::width
	int32_t ___width_4;
	// System.Int32 GameController::height
	int32_t ___height_5;
	// GridTile[,] GameController::_grid
	GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C* ____grid_6;
	// UnityEngine.GameObject[,] GameController::_tiles
	GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* ____tiles_7;
	// UnityEngine.GameObject[,] GameController::_characters
	GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* ____characters_8;
	// UnityEngine.GameObject[,] GameController::_enemies
	GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* ____enemies_9;
	// UnityEngine.GameObject[,] GameController::_obstacles
	GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* ____obstacles_10;
	// UnityEngine.GameObject GameController::tilePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tilePrefab_11;
	// UnityEngine.GameObject GameController::playerPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerPrefab_12;
	// UnityEngine.GameObject GameController::enemyPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemyPrefab_13;
	// UnityEngine.GameObject GameController::attackButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attackButton_14;
	// UnityEngine.GameObject GameController::moveButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___moveButton_15;
	// UnityEngine.GameObject GameController::gameScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameScreen_16;
	// UnityEngine.GameObject GameController::titleScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___titleScreen_17;
	// UnityEngine.GameObject GameController::winScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___winScreen_18;
	// TMPro.TextMeshProUGUI GameController::healthText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___healthText_19;
	// TMPro.TextMeshProUGUI GameController::jobText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___jobText_20;
	// TMPro.TextMeshProUGUI GameController::turnText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___turnText_21;
	// TMPro.TextMeshProUGUI GameController::winText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___winText_22;
	// UnityEngine.UI.Button GameController::titleScreenButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___titleScreenButton_23;
	// UnityEngine.UI.Button GameController::playAgainButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___playAgainButton_24;
	// UnityEngine.Material GameController::walkableTileMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___walkableTileMaterial_25;
	// UnityEngine.Material GameController::unwalkableTileMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___unwalkableTileMaterial_26;
	// UnityEngine.Material GameController::selectedTileMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___selectedTileMaterial_27;
	// UnityEngine.Material GameController::hoveredTileMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___hoveredTileMaterial_28;
	// UnityEngine.Material GameController::attackableTileMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___attackableTileMaterial_29;
	// UnityEngine.Material GameController::enemyTileMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___enemyTileMaterial_30;
	// UnityEngine.GameObject GameController::warriorHitParticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___warriorHitParticle_31;
	// UnityEngine.GameObject GameController::gunnerHitParticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gunnerHitParticle_32;
	// UnityEngine.AudioSource GameController::_audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____audioSource_33;
	// UnityEngine.AudioSource GameController::_backsound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____backsound_34;
	// UnityEngine.AudioClip GameController::swordSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___swordSound_35;
	// UnityEngine.AudioClip GameController::gunSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___gunSound_36;
	// UnityEngine.AudioClip GameController::walkSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___walkSound_37;
	// UnityEngine.AudioClip GameController::hurtSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___hurtSound_38;
	// UnityEngine.AudioClip GameController::winSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___winSound_39;
	// UnityEngine.GameObject GameController::_selectedCharacter
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____selectedCharacter_40;
	// ActionType GameController::_actionType
	int32_t ____actionType_41;
	// System.Boolean GameController::_isEnemyTurn
	bool ____isEnemyTurn_42;
	// System.Boolean GameController::_playerLose
	bool ____playerLose_43;
	// System.Single GameController::_scale
	float ____scale_44;
	// System.Single GameController::_offsetX
	float ____offsetX_45;
	// System.Single GameController::_offsetY
	float ____offsetY_46;
};

struct GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_StaticFields
{
	// System.Int32 GameController::Mode
	int32_t ___Mode_47;
	// System.Int32 GameController::SrcBlend
	int32_t ___SrcBlend_48;
	// System.Int32 GameController::DstBlend
	int32_t ___DstBlend_49;
	// System.Int32 GameController::ZWrite
	int32_t ___ZWrite_50;
};

// TravisGameAssets.HitImpactEffectsPreview
struct HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Collider TravisGameAssets.HitImpactEffectsPreview::floorCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___floorCollider_4;
	// UnityEngine.Transform TravisGameAssets.HitImpactEffectsPreview::particlesPool
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___particlesPool_5;
	// UnityEngine.UI.Text TravisGameAssets.HitImpactEffectsPreview::hitNameLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___hitNameLabel_6;
	// UnityEngine.UI.Text TravisGameAssets.HitImpactEffectsPreview::hitIndexLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___hitIndexLabel_7;
	// UnityEngine.Transform TravisGameAssets.HitImpactEffectsPreview::cameraPivot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cameraPivot_8;
	// System.Single TravisGameAssets.HitImpactEffectsPreview::cameraRotationSpeed
	float ___cameraRotationSpeed_9;
	// UnityEngine.MeshRenderer TravisGameAssets.HitImpactEffectsPreview::floor
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___floor_10;
	// UnityEngine.UI.Image TravisGameAssets.HitImpactEffectsPreview::rotationIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___rotationIcon_11;
	// UnityEngine.UI.Image TravisGameAssets.HitImpactEffectsPreview::floorIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___floorIcon_12;
	// UnityEngine.UI.Image TravisGameAssets.HitImpactEffectsPreview::slowMotionIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___slowMotionIcon_13;
	// UnityEngine.GameObject TravisGameAssets.HitImpactEffectsPreview::light
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___light_14;
	// UnityEngine.GameObject[] TravisGameAssets.HitImpactEffectsPreview::hitEffects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___hitEffects_15;
	// System.Int32 TravisGameAssets.HitImpactEffectsPreview::hitIndex
	int32_t ___hitIndex_16;
	// UnityEngine.Vector3 TravisGameAssets.HitImpactEffectsPreview::initCamPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initCamPosition_17;
	// UnityEngine.Quaternion TravisGameAssets.HitImpactEffectsPreview::initCamRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___initCamRotation_18;
	// System.Single TravisGameAssets.HitImpactEffectsPreview::initFov
	float ___initFov_19;
	// System.Single TravisGameAssets.HitImpactEffectsPreview::minFov
	float ___minFov_20;
	// System.Single TravisGameAssets.HitImpactEffectsPreview::maxFov
	float ___maxFov_21;
	// System.Single TravisGameAssets.HitImpactEffectsPreview::sensitivity
	float ___sensitivity_22;
	// System.Boolean TravisGameAssets.HitImpactEffectsPreview::cameraRotating
	bool ___cameraRotating_23;
	// System.Boolean TravisGameAssets.HitImpactEffectsPreview::floorVisible
	bool ___floorVisible_24;
	// System.Boolean TravisGameAssets.HitImpactEffectsPreview::slowMotion
	bool ___slowMotion_25;
	// System.Boolean TravisGameAssets.HitImpactEffectsPreview::lighting
	bool ___lighting_26;
};

// Tile
struct Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Tile::x
	int32_t ___x_4;
	// System.Int32 Tile::y
	int32_t ___y_5;
	// GameController Tile::_gameController
	GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* ____gameController_6;
};

// TitleScreenButtons
struct TitleScreenButtons_t4F9828301478ED8188811188EB69980E5FD384F6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GameController TitleScreenButtons::_gameController
	GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* ____gameController_4;
	// System.Int32 TitleScreenButtons::width
	int32_t ___width_5;
	// System.Int32 TitleScreenButtons::height
	int32_t ___height_6;
	// System.Boolean TitleScreenButtons::startButton
	bool ___startButton_7;
	// TMPro.TextMeshProUGUI TitleScreenButtons::selectText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___selectText_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Video
struct Video_t836AAEE6BD5AF9A66DB88DF3993B649D977F9BBC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
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

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
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

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
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
// UnityEngine.GameObject[,]
struct GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GridTile[,]
struct GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C  : public RuntimeArray
{
	ALIGN_FIELD (8) GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106 m_Items[1];

	inline GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106 value)
	{
		m_Items[index] = value;
	}
	inline GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106 GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106 value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106 GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106 value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// System.Int32[,]
struct Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F  : public RuntimeArray
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
	inline int32_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;

// T UnityEngine.Object::FindObjectOfType<GameController>()
inline GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_m159F768EFA54B38B000FB4104B7A4E3A9948E2C1 (const RuntimeMethod* method)
{
	return ((  GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void GameController::HandleChangeAction(ActionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_HandleChangeAction_m83F3B70A82930C825F45D9135C90651161AEE601 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, int32_t ___actionType0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void GameController::SelectCharacter(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_SelectCharacter_m8BA7724D569CBE60C1A05C997E61D1CAB3A97C0E (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void GameController::CreateGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_CreateGrid_m24F35B0F711B6FC658815DFF34F52A7FF6A7E862 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.GameObject::GetComponent<Character>()
inline Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<Tile>()
inline Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* GameObject_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m297C8A480F93829939D3C844EF127F9C2C28DF72 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void GameController::ClearTiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_ClearTiles_m4EB7B773A17A0A278D3E1DE60106B1908C569D06 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void GameController::MakeAllCharactersOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_MakeAllCharactersOpaque_m3B229D7483584891DF5825B9EC905B8AEB9BE5BF (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameController::AttackEnemy(System.Int32,System.Int32,CharacterType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameController_AttackEnemy_m6B3C99010AB1630C045EC425792861A83990BE52 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, int32_t ___x0, int32_t ___y1, int32_t ___characterType2, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Array::GetUpperBound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetUpperBound_m64006116D5244EB8DA52188A9E49929AA7D08E4E (RuntimeArray* __this, int32_t ___dimension0, const RuntimeMethod* method) ;
// System.Int32 System.Array::GetLowerBound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___dimension0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.CapsuleCollider>()
inline CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* GameObject_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m7C70BBFE6656C524C87A4A81898C874BA4F035C7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void GameController::MakeCharacterOpaque(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_MakeCharacterOpaque_m603CDCA74410FF0BF7718D8444A4EB7B903ED7F6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___character0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Int32 System.Array::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935 (RuntimeArray* __this, int32_t ___dimension0, const RuntimeMethod* method) ;
// System.Void GameController::MakeCharacterTransparent(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_MakeCharacterTransparent_m7484F60A52283AD964D0EFDD34677C049F302B0B (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___character0, const RuntimeMethod* method) ;
// System.Void GameController/<AttackEnemy>d__53::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackEnemyU3Ed__53__ctor_mB4D1161768844A6749E6C1C4AA26FB79769F6DAA (U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___source0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m9C05C9D7C152CFCC48F8572710F89DDAC9277E39 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void GameController::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_StartGame_mFCA6A8FA880B305904C014360F87A4685B76D0BE (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) ;
// System.Void GameController::TitleScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_TitleScreen_m00EFF451863C98609ECBBADE8F10B7F3CE3B8F2B (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void GameController::HandleWin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_HandleWin_m5BF395882B178C305174D8C427ABFF0577EC7ADE (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void GameController::SelectTile(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_SelectTile_m1F3ACE4F61E570CBF2CD7906B2B33F2EDB130C15 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void TravisGameAssets.HitImpactEffectsPreview::RefreshHitUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_RefreshHitUI_mF6020FE296846EE7188FA76D98C00269B7DECF23 (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void TravisGameAssets.HitImpactEffectsPreview::PreviousHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_PreviousHit_m4C03EFBA92EA6B4BEED3C8CEBB3818556E30407F (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) ;
// System.Void TravisGameAssets.HitImpactEffectsPreview::NextHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_NextHit_m68BC7C4EDDD7DD6352C8C16B83719A7D1B8B92AF (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Collider::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_Raycast_mD7683E94051173B3FFC0862F4A17847E94AEB938 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method) ;
// UnityEngine.GameObject TravisGameAssets.HitImpactEffectsPreview::SpawnHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* HitImpactEffectsPreview_SpawnHit_m0B6276660CE590154CCB7C9C55FBB2DA2F4705AC (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m4D8FE3CF83D6650C34E66A95175DC37DF2D98916 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void TravisGameAssets.HitImpactEffectsPreview::ToggleRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_ToggleRotation_mDF257CEC93D29B988AB7C7D5351BA90D0F23D95A (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) ;
// System.Void TravisGameAssets.HitImpactEffectsPreview::ToggleFloor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_ToggleFloor_m46CAA22630F68A0091563740B922CF33A8A58D60 (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) ;
// System.Void TravisGameAssets.HitImpactEffectsPreview::ToggleSlowMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_ToggleSlowMotion_mBA6019B5589C94E3D4422E381A4B32AB41832F10 (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) ;
// System.Void TravisGameAssets.HitImpactEffectsPreview::ToggleLighting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_ToggleLighting_m9460655D22228DD82181A3A916B96801438FC05B (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C (float ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
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
// System.Void ActionButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionButton_Start_m25CDE40892D38B6FD480E3CBDE5A056EE88A2EA4 (ActionButton_tC5008E96CD4F0A1DCDCDD9124469023C12AAD709* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionButton_OnClick_m1E0798C86966541546A9BB61CEB5C7F5213E604D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_m159F768EFA54B38B000FB4104B7A4E3A9948E2C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gameController = FindObjectOfType<GameController>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_0;
		L_0 = Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_m159F768EFA54B38B000FB4104B7A4E3A9948E2C1(Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_m159F768EFA54B38B000FB4104B7A4E3A9948E2C1_RuntimeMethod_var);
		__this->____gameController_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gameController_6), (void*)L_0);
		// _button = GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1;
		L_1 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		__this->____button_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____button_5), (void*)L_1);
		// _button.onClick.AddListener(OnClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->____button_5;
		NullCheck(L_2);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_3;
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)ActionButton_OnClick_m1E0798C86966541546A9BB61CEB5C7F5213E604D_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void ActionButton::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionButton_OnClick_m1E0798C86966541546A9BB61CEB5C7F5213E604D (ActionButton_tC5008E96CD4F0A1DCDCDD9124469023C12AAD709* __this, const RuntimeMethod* method) 
{
	{
		// _gameController.HandleChangeAction(actionType);
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_0 = __this->____gameController_6;
		int32_t L_1 = __this->___actionType_4;
		NullCheck(L_0);
		GameController_HandleChangeAction_m83F3B70A82930C825F45D9135C90651161AEE601(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ActionButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionButton__ctor_mA587755EBE6A7BA215E5870573A9770AEEDEC0BA (ActionButton_tC5008E96CD4F0A1DCDCDD9124469023C12AAD709* __this, const RuntimeMethod* method) 
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
// System.Void Character::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_Start_m970374CEE2508A3EFD2DAD04ABCF8DED3236DC78 (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_m159F768EFA54B38B000FB4104B7A4E3A9948E2C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gameController = FindObjectOfType<GameController>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_0;
		L_0 = Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_m159F768EFA54B38B000FB4104B7A4E3A9948E2C1(Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_m159F768EFA54B38B000FB4104B7A4E3A9948E2C1_RuntimeMethod_var);
		__this->____gameController_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gameController_10), (void*)L_0);
		// }
		return;
	}
}
// System.Void Character::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_OnMouseDown_mC95A13BAD6F06F4CCD0213A2BA4539257DFFC43B (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, const RuntimeMethod* method) 
{
	{
		// _gameController.SelectCharacter(x, y);
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_0 = __this->____gameController_10;
		int32_t L_1 = __this->___x_4;
		int32_t L_2 = __this->___y_5;
		NullCheck(L_0);
		GameController_SelectCharacter_m8BA7724D569CBE60C1A05C997E61D1CAB3A97C0E(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Character::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character__ctor_m9D8D6104D9CB19DAE6866ECA929FFB0F2592DD19 (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, const RuntimeMethod* method) 
{
	{
		// public int health = 100;
		__this->___health_6 = ((int32_t)100);
		// public int maxHealth = 100;
		__this->___maxHealth_7 = ((int32_t)100);
		// public int damage = 50;
		__this->___damage_8 = ((int32_t)50);
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
// System.Void GameController::TitleScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_TitleScreen_m00EFF451863C98609ECBBADE8F10B7F3CE3B8F2B (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Game");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, NULL);
		// }
		return;
	}
}
// System.Void GameController::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_StartGame_mFCA6A8FA880B305904C014360F87A4685B76D0BE (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m297C8A480F93829939D3C844EF127F9C2C28DF72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* G_B5_0 = NULL;
	Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* G_B6_1 = NULL;
	Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* G_B8_0 = NULL;
	Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* G_B9_1 = NULL;
	Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* G_B13_0 = NULL;
	Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* G_B14_1 = NULL;
	Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* G_B16_0 = NULL;
	Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* G_B15_0 = NULL;
	int32_t G_B17_0 = 0;
	Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* G_B17_1 = NULL;
	{
		// titleScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___titleScreen_17;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// gameScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___gameScreen_16;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// winScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___winScreen_18;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// _backsound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->____backsound_34;
		NullCheck(L_3);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
		// _selectedCharacter = null;
		__this->____selectedCharacter_40 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____selectedCharacter_40), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// _offsetX = -width * 5 + 5;
		int32_t L_4 = __this->___width_4;
		__this->____offsetX_45 = ((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((-L_4)), 5)), 5)));
		// _offsetY = -height * 5 + 5;
		int32_t L_5 = __this->___height_5;
		__this->____offsetY_46 = ((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((-L_5)), 5)), 5)));
		// _scale = 0.0025f;
		__this->____scale_44 = (0.00249999994f);
		// CreateGrid();
		GameController_CreateGrid_m24F35B0F711B6FC658815DFF34F52A7FF6A7E862(__this, NULL);
		// _tiles = new GameObject[width, height];
		int32_t L_6 = __this->___width_4;
		int32_t L_7 = __this->___height_5;
		il2cpp_array_size_t L_9[] = { (il2cpp_array_size_t)L_6, (il2cpp_array_size_t)L_7 };
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_8 = (GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E*)GenArrayNew(GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E_il2cpp_TypeInfo_var, L_9);
		__this->____tiles_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tiles_7), (void*)L_8);
		// _characters = new GameObject[width, height];
		int32_t L_10 = __this->___width_4;
		int32_t L_11 = __this->___height_5;
		il2cpp_array_size_t L_13[] = { (il2cpp_array_size_t)L_10, (il2cpp_array_size_t)L_11 };
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_12 = (GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E*)GenArrayNew(GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E_il2cpp_TypeInfo_var, L_13);
		__this->____characters_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____characters_8), (void*)L_12);
		// _enemies = new GameObject[width, height];
		int32_t L_14 = __this->___width_4;
		int32_t L_15 = __this->___height_5;
		il2cpp_array_size_t L_17[] = { (il2cpp_array_size_t)L_14, (il2cpp_array_size_t)L_15 };
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_16 = (GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E*)GenArrayNew(GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E_il2cpp_TypeInfo_var, L_17);
		__this->____enemies_9 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enemies_9), (void*)L_16);
		// _obstacles = new GameObject[width, height];
		int32_t L_18 = __this->___width_4;
		int32_t L_19 = __this->___height_5;
		il2cpp_array_size_t L_21[] = { (il2cpp_array_size_t)L_18, (il2cpp_array_size_t)L_19 };
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_20 = (GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E*)GenArrayNew(GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E_il2cpp_TypeInfo_var, L_21);
		__this->____obstacles_10 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obstacles_10), (void*)L_20);
		// for (var x = 0; x < width; x++)
		V_0 = 0;
		goto IL_02e2;
	}

IL_00ce:
	{
		// for (var y = 0; y < height; y++)
		V_1 = 0;
		goto IL_02d2;
	}

IL_00d5:
	{
		// var posX = _grid[x, y].Position.x;
		GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C* L_22 = __this->____grid_6;
		int32_t L_23 = V_0;
		int32_t L_24 = V_1;
		NullCheck(L_22);
		GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106* L_25;
		L_25 = (L_22)->GetAddressAt(L_23, L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = (&L_25->___Position_0);
		float L_27 = L_26->___x_2;
		V_2 = L_27;
		// var posY = _grid[x, y].Position.z;
		GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C* L_28 = __this->____grid_6;
		int32_t L_29 = V_0;
		int32_t L_30 = V_1;
		NullCheck(L_28);
		GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106* L_31;
		L_31 = (L_28)->GetAddressAt(L_29, L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_32 = (&L_31->___Position_0);
		float L_33 = L_32->___z_4;
		V_3 = L_33;
		// if (x == 0)
		int32_t L_34 = V_0;
		if (L_34)
		{
			goto IL_01b6;
		}
	}
	{
		// _characters[x, y] = Instantiate(
		//     playerPrefab,
		//     new Vector3(posX, playerPrefab.transform.position.y, posY),
		//     Quaternion.identity
		// );
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_35 = __this->____characters_8;
		int32_t L_36 = V_0;
		int32_t L_37 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = __this->___playerPrefab_12;
		float L_39 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___playerPrefab_12;
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_40, NULL);
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_41, NULL);
		float L_43 = L_42.___y_3;
		float L_44 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_45), L_39, L_43, L_44, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46;
		L_46 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47;
		L_47 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_38, L_45, L_46, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		NullCheck(L_35);
		(L_35)->SetAt(L_36, L_37, L_47);
		// _characters[x, y].GetComponent<Character>().x = x;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_48 = __this->____characters_8;
		int32_t L_49 = V_0;
		int32_t L_50 = V_1;
		NullCheck(L_48);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51;
		L_51 = (L_48)->GetAt(L_49, L_50);
		NullCheck(L_51);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_52;
		L_52 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_51, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		int32_t L_53 = V_0;
		NullCheck(L_52);
		L_52->___x_4 = L_53;
		// _characters[x, y].GetComponent<Character>().y = y;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_54 = __this->____characters_8;
		int32_t L_55 = V_0;
		int32_t L_56 = V_1;
		NullCheck(L_54);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57;
		L_57 = (L_54)->GetAt(L_55, L_56);
		NullCheck(L_57);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_58;
		L_58 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_57, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		int32_t L_59 = V_1;
		NullCheck(L_58);
		L_58->___y_5 = L_59;
		// _characters[x, y].GetComponent<Character>().characterType =
		//     y % 2 == 0 ? CharacterType.Gunner : CharacterType.Warrior;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_60 = __this->____characters_8;
		int32_t L_61 = V_0;
		int32_t L_62 = V_1;
		NullCheck(L_60);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63;
		L_63 = (L_60)->GetAt(L_61, L_62);
		NullCheck(L_63);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_64;
		L_64 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_63, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		int32_t L_65 = V_1;
		G_B4_0 = L_64;
		if (!((int32_t)(L_65%2)))
		{
			G_B5_0 = L_64;
			goto IL_018e;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_018f;
	}

IL_018e:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_018f:
	{
		NullCheck(G_B6_1);
		G_B6_1->___characterType_9 = G_B6_0;
		// _characters[x, y].GetComponent<Character>().damage = y % 2 == 0 ? 25 : 35;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_66 = __this->____characters_8;
		int32_t L_67 = V_0;
		int32_t L_68 = V_1;
		NullCheck(L_66);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69;
		L_69 = (L_66)->GetAt(L_67, L_68);
		NullCheck(L_69);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_70;
		L_70 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_69, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		int32_t L_71 = V_1;
		G_B7_0 = L_70;
		if (!((int32_t)(L_71%2)))
		{
			G_B8_0 = L_70;
			goto IL_01af;
		}
	}
	{
		G_B9_0 = ((int32_t)35);
		G_B9_1 = G_B7_0;
		goto IL_01b1;
	}

IL_01af:
	{
		G_B9_0 = ((int32_t)25);
		G_B9_1 = G_B8_0;
	}

IL_01b1:
	{
		NullCheck(G_B9_1);
		G_B9_1->___damage_8 = G_B9_0;
	}

IL_01b6:
	{
		// _tiles[x, y] = Instantiate(tilePrefab, _grid[x, y].Position, Quaternion.identity);
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_72 = __this->____tiles_7;
		int32_t L_73 = V_0;
		int32_t L_74 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_75 = __this->___tilePrefab_11;
		GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C* L_76 = __this->____grid_6;
		int32_t L_77 = V_0;
		int32_t L_78 = V_1;
		NullCheck(L_76);
		GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106* L_79;
		L_79 = (L_76)->GetAddressAt(L_77, L_78);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = L_79->___Position_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_81;
		L_81 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_82;
		L_82 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_75, L_80, L_81, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		NullCheck(L_72);
		(L_72)->SetAt(L_73, L_74, L_82);
		// _tiles[x, y].GetComponent<Tile>().x = x;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_83 = __this->____tiles_7;
		int32_t L_84 = V_0;
		int32_t L_85 = V_1;
		NullCheck(L_83);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_86;
		L_86 = (L_83)->GetAt(L_84, L_85);
		NullCheck(L_86);
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_87;
		L_87 = GameObject_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m297C8A480F93829939D3C844EF127F9C2C28DF72(L_86, GameObject_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m297C8A480F93829939D3C844EF127F9C2C28DF72_RuntimeMethod_var);
		int32_t L_88 = V_0;
		NullCheck(L_87);
		L_87->___x_4 = L_88;
		// _tiles[x, y].GetComponent<Tile>().y = y;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_89 = __this->____tiles_7;
		int32_t L_90 = V_0;
		int32_t L_91 = V_1;
		NullCheck(L_89);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_92;
		L_92 = (L_89)->GetAt(L_90, L_91);
		NullCheck(L_92);
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_93;
		L_93 = GameObject_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m297C8A480F93829939D3C844EF127F9C2C28DF72(L_92, GameObject_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m297C8A480F93829939D3C844EF127F9C2C28DF72_RuntimeMethod_var);
		int32_t L_94 = V_1;
		NullCheck(L_93);
		L_93->___y_5 = L_94;
		// if (x != width - 1) continue;
		int32_t L_95 = V_0;
		int32_t L_96 = __this->___width_4;
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_96, 1))))))
		{
			goto IL_02ce;
		}
	}
	{
		// _enemies[x, y] = Instantiate(
		//     enemyPrefab,
		//     new Vector3(posX, enemyPrefab.transform.position.y, posY),
		//     Quaternion.identity
		// );
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_97 = __this->____enemies_9;
		int32_t L_98 = V_0;
		int32_t L_99 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_100 = __this->___enemyPrefab_13;
		float L_101 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_102 = __this->___enemyPrefab_13;
		NullCheck(L_102);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_103;
		L_103 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_102, NULL);
		NullCheck(L_103);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_103, NULL);
		float L_105 = L_104.___y_3;
		float L_106 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		memset((&L_107), 0, sizeof(L_107));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_107), L_101, L_105, L_106, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_108;
		L_108 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_109;
		L_109 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_100, L_107, L_108, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		NullCheck(L_97);
		(L_97)->SetAt(L_98, L_99, L_109);
		// _enemies[x, y].GetComponent<Character>().x = x;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_110 = __this->____enemies_9;
		int32_t L_111 = V_0;
		int32_t L_112 = V_1;
		NullCheck(L_110);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_113;
		L_113 = (L_110)->GetAt(L_111, L_112);
		NullCheck(L_113);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_114;
		L_114 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_113, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		int32_t L_115 = V_0;
		NullCheck(L_114);
		L_114->___x_4 = L_115;
		// _enemies[x, y].GetComponent<Character>().y = y;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_116 = __this->____enemies_9;
		int32_t L_117 = V_0;
		int32_t L_118 = V_1;
		NullCheck(L_116);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_119;
		L_119 = (L_116)->GetAt(L_117, L_118);
		NullCheck(L_119);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_120;
		L_120 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_119, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		int32_t L_121 = V_1;
		NullCheck(L_120);
		L_120->___y_5 = L_121;
		// _enemies[x, y].GetComponent<Character>().characterType =
		//     y % 2 == 0 ? CharacterType.Gunner : CharacterType.Warrior;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_122 = __this->____enemies_9;
		int32_t L_123 = V_0;
		int32_t L_124 = V_1;
		NullCheck(L_122);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_125;
		L_125 = (L_122)->GetAt(L_123, L_124);
		NullCheck(L_125);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_126;
		L_126 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_125, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		int32_t L_127 = V_1;
		G_B12_0 = L_126;
		if (!((int32_t)(L_127%2)))
		{
			G_B13_0 = L_126;
			goto IL_02a6;
		}
	}
	{
		G_B14_0 = 0;
		G_B14_1 = G_B12_0;
		goto IL_02a7;
	}

IL_02a6:
	{
		G_B14_0 = 1;
		G_B14_1 = G_B13_0;
	}

IL_02a7:
	{
		NullCheck(G_B14_1);
		G_B14_1->___characterType_9 = G_B14_0;
		// _enemies[x, y].GetComponent<Character>().damage = y % 2 == 0 ? 25 : 35;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_128 = __this->____enemies_9;
		int32_t L_129 = V_0;
		int32_t L_130 = V_1;
		NullCheck(L_128);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_131;
		L_131 = (L_128)->GetAt(L_129, L_130);
		NullCheck(L_131);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_132;
		L_132 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_131, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		int32_t L_133 = V_1;
		G_B15_0 = L_132;
		if (!((int32_t)(L_133%2)))
		{
			G_B16_0 = L_132;
			goto IL_02c7;
		}
	}
	{
		G_B17_0 = ((int32_t)35);
		G_B17_1 = G_B15_0;
		goto IL_02c9;
	}

IL_02c7:
	{
		G_B17_0 = ((int32_t)25);
		G_B17_1 = G_B16_0;
	}

IL_02c9:
	{
		NullCheck(G_B17_1);
		G_B17_1->___damage_8 = G_B17_0;
	}

IL_02ce:
	{
		// for (var y = 0; y < height; y++)
		int32_t L_134 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_134, 1));
	}

IL_02d2:
	{
		// for (var y = 0; y < height; y++)
		int32_t L_135 = V_1;
		int32_t L_136 = __this->___height_5;
		if ((((int32_t)L_135) < ((int32_t)L_136)))
		{
			goto IL_00d5;
		}
	}
	{
		// for (var x = 0; x < width; x++)
		int32_t L_137 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_137, 1));
	}

IL_02e2:
	{
		// for (var x = 0; x < width; x++)
		int32_t L_138 = V_0;
		int32_t L_139 = __this->___width_4;
		if ((((int32_t)L_138) < ((int32_t)L_139)))
		{
			goto IL_00ce;
		}
	}
	{
		// ClearTiles();
		GameController_ClearTiles_m4EB7B773A17A0A278D3E1DE60106B1908C569D06(__this, NULL);
		// }
		return;
	}
}
// System.Void GameController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Start_mD0C79B8B5B5D8EDC88F7F2F88B5954B1342198EF (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_U3CStartU3Eb__49_0_m0A376EA5AB5FD9F228883D3A03615D486DBC7D30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_U3CStartU3Eb__49_1_mDAB2CE4D0486E3E71E85E1C5D7C9EE31509CED7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BB78D92F682AB5C8B9EBE8DC95BCD86995484BD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->____audioSource_33 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioSource_33), (void*)L_0);
		// _backsound = GameObject.Find("Backsound").GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral8BB78D92F682AB5C8B9EBE8DC95BCD86995484BD, NULL);
		NullCheck(L_1);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_1, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		__this->____backsound_34 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____backsound_34), (void*)L_2);
		// titleScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___titleScreen_17;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// gameScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___gameScreen_16;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// winScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___winScreen_18;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// playAgainButton.onClick.AddListener(() => StartGame());
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___playAgainButton_24;
		NullCheck(L_6);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_7;
		L_7 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_6, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_8, __this, (intptr_t)((void*)GameController_U3CStartU3Eb__49_0_m0A376EA5AB5FD9F228883D3A03615D486DBC7D30_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_7, L_8, NULL);
		// titleScreenButton.onClick.AddListener(() => TitleScreen());
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___titleScreenButton_23;
		NullCheck(L_9);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_10;
		L_10 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_9, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_11 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_11, __this, (intptr_t)((void*)GameController_U3CStartU3Eb__49_1_mDAB2CE4D0486E3E71E85E1C5D7C9EE31509CED7C_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void GameController::CreateGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_CreateGrid_m24F35B0F711B6FC658815DFF34F52A7FF6A7E862 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// _grid = new GridTile[width, height];
		int32_t L_0 = __this->___width_4;
		int32_t L_1 = __this->___height_5;
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C* L_2 = (GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C*)GenArrayNew(GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C_il2cpp_TypeInfo_var, L_3);
		__this->____grid_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____grid_6), (void*)L_2);
		// for (var x = 0; x < width; x++)
		V_0 = 0;
		goto IL_0099;
	}

IL_001b:
	{
		// for (var y = 0; y < height; y++)
		V_1 = 0;
		goto IL_008c;
	}

IL_001f:
	{
		// _grid[x, y] = new GridTile
		// {
		//     Position = new Vector3(
		//         x * _scale * 10 + _offsetX * _scale,
		//         0,
		//         y * _scale * 10 + _offsetY * _scale
		//     ),
		//     IsWalkable = false
		// };
		GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C* L_4 = __this->____grid_6;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		il2cpp_codegen_initobj((&V_2), sizeof(GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106));
		int32_t L_7 = V_0;
		float L_8 = __this->____scale_44;
		float L_9 = __this->____offsetX_45;
		float L_10 = __this->____scale_44;
		int32_t L_11 = V_1;
		float L_12 = __this->____scale_44;
		float L_13 = __this->____offsetY_46;
		float L_14 = __this->____scale_44;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_7), L_8)), (10.0f))), ((float)il2cpp_codegen_multiply(L_9, L_10)))), (0.0f), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_11), L_12)), (10.0f))), ((float)il2cpp_codegen_multiply(L_13, L_14)))), /*hidden argument*/NULL);
		(&V_2)->___Position_0 = L_15;
		(&V_2)->___IsWalkable_1 = (bool)0;
		GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106 L_16 = V_2;
		NullCheck(L_4);
		(L_4)->SetAt(L_5, L_6, L_16);
		// for (var y = 0; y < height; y++)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_008c:
	{
		// for (var y = 0; y < height; y++)
		int32_t L_18 = V_1;
		int32_t L_19 = __this->___height_5;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_001f;
		}
	}
	{
		// for (var x = 0; x < width; x++)
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0099:
	{
		// for (var x = 0; x < width; x++)
		int32_t L_21 = V_0;
		int32_t L_22 = __this->___width_4;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_001b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Update_m5E36D1D6999A7510DFDFBF6805CF9E9CB50F0962 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral462A04EA78567D8293A4A7ADC43105AF65453192);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC93FEA935815A67E8D724FC1E3F1C62B945414F3);
		s_Il2CppMethodInitialized = true;
	}
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B2_0 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B3_1 = NULL;
	{
		// turnText.text = _isEnemyTurn ? "Dutch Turn" : "Indonesia Turn";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___turnText_21;
		bool L_1 = __this->____isEnemyTurn_42;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = _stringLiteral462A04EA78567D8293A4A7ADC43105AF65453192;
		G_B3_1 = G_B1_0;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = _stringLiteralC93FEA935815A67E8D724FC1E3F1C62B945414F3;
		G_B3_1 = G_B2_0;
	}

IL_001a:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void GameController::SelectCharacter(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_SelectCharacter_m8BA7724D569CBE60C1A05C997E61D1CAB3A97C0E (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterType_tDCA59CA1F7D8EAE16F11759682B2A814B5AE283D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m7C70BBFE6656C524C87A4A81898C874BA4F035C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____4BA0541F05008903BC2BA632A80E81EA309A48CC0620F72A279ACDB1AC1BEF97_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____D0A300A6E266DEAA817AC9DCC7ED54F7FADE13954D63F97BD7A03A8C859593F6_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E92D19726F10E23A99001553ECB029656AD0AC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4482C06BF9FD6C98F52A69437D3CE3E0A9D083A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70BD1FF50321E0DEE9508FF070A8BAAAE42F5FB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF95DF5537184AB57CFCFB85BBF9C1A3E252B1A4);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	int32_t V_1 = 0;
	Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* V_2 = NULL;
	Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* V_3 = NULL;
	Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* V_4 = NULL;
	GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_10 = NULL;
	Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* G_B10_0 = NULL;
	GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* G_B20_0 = NULL;
	GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* G_B19_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B21_0 = NULL;
	GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* G_B21_1 = NULL;
	Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* G_B36_0 = NULL;
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* G_B81_0 = NULL;
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* G_B80_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B82_0 = NULL;
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* G_B82_1 = NULL;
	{
		// var enemy = _isEnemyTurn ? _characters[x, y] : _enemies[x, y];
		bool L_0 = __this->____isEnemyTurn_42;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_1 = __this->____enemies_9;
		int32_t L_2 = ___x0;
		int32_t L_3 = ___y1;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = (L_1)->GetAt(L_2, L_3);
		G_B3_0 = L_4;
		goto IL_0024;
	}

IL_0017:
	{
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_5 = __this->____characters_8;
		int32_t L_6 = ___x0;
		int32_t L_7 = ___y1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = (L_5)->GetAt(L_6, L_7);
		G_B3_0 = L_8;
	}

IL_0024:
	{
		V_0 = G_B3_0;
		// if (enemy != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_011c;
		}
	}
	{
		// MakeAllCharactersOpaque();
		GameController_MakeAllCharactersOpaque_m3B229D7483584891DF5825B9EC905B8AEB9BE5BF(__this, NULL);
		// healthText.gameObject.SetActive(true);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_11 = __this->___healthText_19;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// jobText.gameObject.SetActive(true);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_13 = __this->___jobText_20;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		// healthText.text = "Health: " + enemy.GetComponent<Character>().health;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_15 = __this->___healthText_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_0;
		NullCheck(L_16);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_17;
		L_17 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_16, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		NullCheck(L_17);
		int32_t* L_18 = (&L_17->___health_6);
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_18, NULL);
		String_t* L_20;
		L_20 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralFF95DF5537184AB57CFCFB85BBF9C1A3E252B1A4, L_19, NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_15, L_20);
		// jobText.text = "Enemy\nJob: " + enemy.GetComponent<Character>().characterType + "\nDamage: " +
		//                enemy.GetComponent<Character>().damage;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_21 = __this->___jobText_20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_0;
		NullCheck(L_22);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_23;
		L_23 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_22, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		NullCheck(L_23);
		int32_t* L_24 = (&L_23->___characterType_9);
		Il2CppFakeBox<int32_t> L_25(CharacterType_tDCA59CA1F7D8EAE16F11759682B2A814B5AE283D_il2cpp_TypeInfo_var, L_24);
		String_t* L_26;
		L_26 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_25), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_0;
		NullCheck(L_27);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_28;
		L_28 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_27, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		NullCheck(L_28);
		int32_t* L_29 = (&L_28->___damage_8);
		String_t* L_30;
		L_30 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_29, NULL);
		String_t* L_31;
		L_31 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral4482C06BF9FD6C98F52A69437D3CE3E0A9D083A0, L_26, _stringLiteral0E92D19726F10E23A99001553ECB029656AD0AC3, L_30, NULL);
		NullCheck(L_21);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_21, L_31);
		// if (_grid[x, y].IsAttackable)
		GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C* L_32 = __this->____grid_6;
		int32_t L_33 = ___x0;
		int32_t L_34 = ___y1;
		NullCheck(L_32);
		GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106* L_35;
		L_35 = (L_32)->GetAddressAt(L_33, L_34);
		bool L_36 = L_35->___IsAttackable_2;
		if (!L_36)
		{
			goto IL_00f8;
		}
	}
	{
		// ClearTiles();
		GameController_ClearTiles_m4EB7B773A17A0A278D3E1DE60106B1908C569D06(__this, NULL);
		// StartCoroutine(
		//     AttackEnemy(x, y, _selectedCharacter.GetComponent<Character>().characterType)
		// );
		int32_t L_37 = ___x0;
		int32_t L_38 = ___y1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->____selectedCharacter_40;
		NullCheck(L_39);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_40;
		L_40 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_39, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		NullCheck(L_40);
		int32_t L_41 = L_40->___characterType_9;
		RuntimeObject* L_42;
		L_42 = GameController_AttackEnemy_m6B3C99010AB1630C045EC425792861A83990BE52(__this, L_37, L_38, L_41, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_43;
		L_43 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_42, NULL);
		return;
	}

IL_00f8:
	{
		// ClearTiles();
		GameController_ClearTiles_m4EB7B773A17A0A278D3E1DE60106B1908C569D06(__this, NULL);
		// _tiles[x, y].GetComponent<MeshRenderer>().material = selectedTileMaterial;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_44 = __this->____tiles_7;
		int32_t L_45 = ___x0;
		int32_t L_46 = ___y1;
		NullCheck(L_44);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47;
		L_47 = (L_44)->GetAt(L_45, L_46);
		NullCheck(L_47);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_48;
		L_48 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_47, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___selectedTileMaterial_27;
		NullCheck(L_48);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_48, L_49, NULL);
		// return;
		return;
	}

IL_011c:
	{
		// ClearTiles();
		GameController_ClearTiles_m4EB7B773A17A0A278D3E1DE60106B1908C569D06(__this, NULL);
		// _tiles[x, y].GetComponent<MeshRenderer>().material = selectedTileMaterial;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_50 = __this->____tiles_7;
		int32_t L_51 = ___x0;
		int32_t L_52 = ___y1;
		NullCheck(L_50);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53;
		L_53 = (L_50)->GetAt(L_51, L_52);
		NullCheck(L_53);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_54;
		L_54 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_53, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_55 = __this->___selectedTileMaterial_27;
		NullCheck(L_54);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_54, L_55, NULL);
		// attackButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = __this->___attackButton_14;
		NullCheck(L_56);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_56, (bool)1, NULL);
		// moveButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = __this->___moveButton_15;
		NullCheck(L_57);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_57, (bool)1, NULL);
		// healthText.gameObject.SetActive(true);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_58 = __this->___healthText_19;
		NullCheck(L_58);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59;
		L_59 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_58, NULL);
		NullCheck(L_59);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_59, (bool)1, NULL);
		// jobText.gameObject.SetActive(true);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___jobText_20;
		NullCheck(L_60);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61;
		L_61 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_60, NULL);
		NullCheck(L_61);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_61, (bool)1, NULL);
		// var chars = _isEnemyTurn ? _enemies : _characters;
		bool L_62 = __this->____isEnemyTurn_42;
		if (L_62)
		{
			goto IL_0189;
		}
	}
	{
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_63 = __this->____characters_8;
		G_B10_0 = L_63;
		goto IL_018f;
	}

IL_0189:
	{
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_64 = __this->____enemies_9;
		G_B10_0 = L_64;
	}

IL_018f:
	{
		// foreach (var character in chars)
		V_5 = G_B10_0;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_65 = V_5;
		NullCheck((RuntimeArray*)L_65);
		int32_t L_66;
		L_66 = Array_GetUpperBound_m64006116D5244EB8DA52188A9E49929AA7D08E4E((RuntimeArray*)L_65, 0, NULL);
		V_6 = L_66;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_67 = V_5;
		NullCheck((RuntimeArray*)L_67);
		int32_t L_68;
		L_68 = Array_GetUpperBound_m64006116D5244EB8DA52188A9E49929AA7D08E4E((RuntimeArray*)L_67, 1, NULL);
		V_7 = L_68;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_69 = V_5;
		NullCheck((RuntimeArray*)L_69);
		int32_t L_70;
		L_70 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC((RuntimeArray*)L_69, 0, NULL);
		V_8 = L_70;
		goto IL_01fa;
	}

IL_01b1:
	{
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_71 = V_5;
		NullCheck((RuntimeArray*)L_71);
		int32_t L_72;
		L_72 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC((RuntimeArray*)L_71, 1, NULL);
		V_9 = L_72;
		goto IL_01ee;
	}

IL_01bd:
	{
		// foreach (var character in chars)
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_73 = V_5;
		int32_t L_74 = V_8;
		int32_t L_75 = V_9;
		NullCheck(L_73);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76;
		L_76 = (L_73)->GetAt(L_74, L_75);
		V_10 = L_76;
		// if (character == null) continue;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77 = V_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_78;
		L_78 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_77, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_78)
		{
			goto IL_01e8;
		}
	}
	{
		// character.GetComponent<CapsuleCollider>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_79 = V_10;
		NullCheck(L_79);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_80;
		L_80 = GameObject_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m7C70BBFE6656C524C87A4A81898C874BA4F035C7(L_79, GameObject_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m7C70BBFE6656C524C87A4A81898C874BA4F035C7_RuntimeMethod_var);
		NullCheck(L_80);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_80, (bool)1, NULL);
		// MakeCharacterOpaque(character);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81 = V_10;
		il2cpp_codegen_runtime_class_init_inline(GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var);
		GameController_MakeCharacterOpaque_m603CDCA74410FF0BF7718D8444A4EB7B903ED7F6(L_81, NULL);
	}

IL_01e8:
	{
		int32_t L_82 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01ee:
	{
		// foreach (var character in chars)
		int32_t L_83 = V_9;
		int32_t L_84 = V_7;
		if ((((int32_t)L_83) <= ((int32_t)L_84)))
		{
			goto IL_01bd;
		}
	}
	{
		int32_t L_85 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_01fa:
	{
		// foreach (var character in chars)
		int32_t L_86 = V_8;
		int32_t L_87 = V_6;
		if ((((int32_t)L_86) <= ((int32_t)L_87)))
		{
			goto IL_01b1;
		}
	}
	{
		// _selectedCharacter = _isEnemyTurn ? _enemies[x, y] : _characters[x, y];
		bool L_88 = __this->____isEnemyTurn_42;
		G_B19_0 = __this;
		if (L_88)
		{
			G_B20_0 = __this;
			goto IL_0218;
		}
	}
	{
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_89 = __this->____characters_8;
		int32_t L_90 = ___x0;
		int32_t L_91 = ___y1;
		NullCheck(L_89);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_92;
		L_92 = (L_89)->GetAt(L_90, L_91);
		G_B21_0 = L_92;
		G_B21_1 = G_B19_0;
		goto IL_0225;
	}

IL_0218:
	{
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_93 = __this->____enemies_9;
		int32_t L_94 = ___x0;
		int32_t L_95 = ___y1;
		NullCheck(L_93);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_96;
		L_96 = (L_93)->GetAt(L_94, L_95);
		G_B21_0 = L_96;
		G_B21_1 = G_B20_0;
	}

IL_0225:
	{
		NullCheck(G_B21_1);
		G_B21_1->____selectedCharacter_40 = G_B21_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B21_1->____selectedCharacter_40), (void*)G_B21_0);
		// var characterType = _selectedCharacter.GetComponent<Character>().characterType;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_97 = __this->____selectedCharacter_40;
		NullCheck(L_97);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_98;
		L_98 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_97, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		NullCheck(L_98);
		int32_t L_99 = L_98->___characterType_9;
		V_1 = L_99;
		// healthText.text = "Health: " + _selectedCharacter.GetComponent<Character>().health;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_100 = __this->___healthText_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_101 = __this->____selectedCharacter_40;
		NullCheck(L_101);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_102;
		L_102 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_101, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		NullCheck(L_102);
		int32_t* L_103 = (&L_102->___health_6);
		String_t* L_104;
		L_104 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_103, NULL);
		String_t* L_105;
		L_105 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralFF95DF5537184AB57CFCFB85BBF9C1A3E252B1A4, L_104, NULL);
		NullCheck(L_100);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_100, L_105);
		// jobText.text = "Job: " + characterType + "\nDamage: " + _selectedCharacter.GetComponent<Character>().damage;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_106 = __this->___jobText_20;
		Il2CppFakeBox<int32_t> L_107(CharacterType_tDCA59CA1F7D8EAE16F11759682B2A814B5AE283D_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_108;
		L_108 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_107), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_109 = __this->____selectedCharacter_40;
		NullCheck(L_109);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_110;
		L_110 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_109, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		NullCheck(L_110);
		int32_t* L_111 = (&L_110->___damage_8);
		String_t* L_112;
		L_112 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_111, NULL);
		String_t* L_113;
		L_113 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral70BD1FF50321E0DEE9508FF070A8BAAAE42F5FB0, L_108, _stringLiteral0E92D19726F10E23A99001553ECB029656AD0AC3, L_112, NULL);
		NullCheck(L_106);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_106, L_113);
		// var moveDirections = characterType switch
		// {
		//     CharacterType.Warrior => new[,]
		//     {
		//         { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 },
		// 
		//         { 1, 1 }, { 1, -1 }, { -1, 1 }, { -1, -1 },
		// 
		//         { 2, 0 }, { -2, 0 }, { 0, 2 }, { 0, -2 }
		//     },
		//     CharacterType.Gunner => new[,] { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } },
		//     _ => null
		// };
		int32_t L_114 = V_1;
		if (!L_114)
		{
			goto IL_02aa;
		}
	}
	{
		int32_t L_115 = V_1;
		if ((((int32_t)L_115) == ((int32_t)1)))
		{
			goto IL_02c1;
		}
	}
	{
		goto IL_02d7;
	}

IL_02aa:
	{
		// CharacterType.Warrior => new[,]
		// {
		//     { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 },
		// 
		//     { 1, 1 }, { 1, -1 }, { -1, 1 }, { -1, -1 },
		// 
		//     { 2, 0 }, { -2, 0 }, { 0, 2 }, { 0, -2 }
		// },
		il2cpp_array_size_t L_117[] = { (il2cpp_array_size_t)((int32_t)12), (il2cpp_array_size_t)2 };
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_116 = (Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F*)GenArrayNew(Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var, L_117);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_118 = L_116;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_119 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____D0A300A6E266DEAA817AC9DCC7ED54F7FADE13954D63F97BD7A03A8C859593F6_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_118, L_119, NULL);
		V_11 = L_118;
		goto IL_02da;
	}

IL_02c1:
	{
		// CharacterType.Gunner => new[,] { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } },
		il2cpp_array_size_t L_121[] = { (il2cpp_array_size_t)4, (il2cpp_array_size_t)2 };
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_120 = (Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F*)GenArrayNew(Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var, L_121);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_122 = L_120;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_123 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____4BA0541F05008903BC2BA632A80E81EA309A48CC0620F72A279ACDB1AC1BEF97_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_122, L_123, NULL);
		V_11 = L_122;
		goto IL_02da;
	}

IL_02d7:
	{
		// _ => null
		V_11 = (Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F*)NULL;
	}

IL_02da:
	{
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_124 = V_11;
		V_2 = L_124;
		// var attackDirections = characterType switch
		// {
		//     CharacterType.Warrior => new[,] { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } },
		//     CharacterType.Gunner => new[,]
		//     {
		//         { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 },
		// 
		//         { 1, 1 }, { 1, -1 }, { -1, 1 }, { -1, -1 },
		// 
		//         { 2, 0 }, { -2, 0 }, { 0, 2 }, { 0, -2 }
		//     },
		//     _ => null
		// };
		int32_t L_125 = V_1;
		if (!L_125)
		{
			goto IL_02e6;
		}
	}
	{
		int32_t L_126 = V_1;
		if ((((int32_t)L_126) == ((int32_t)1)))
		{
			goto IL_02fc;
		}
	}
	{
		goto IL_0313;
	}

IL_02e6:
	{
		// CharacterType.Warrior => new[,] { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } },
		il2cpp_array_size_t L_128[] = { (il2cpp_array_size_t)4, (il2cpp_array_size_t)2 };
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_127 = (Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F*)GenArrayNew(Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var, L_128);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_129 = L_127;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_130 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____4BA0541F05008903BC2BA632A80E81EA309A48CC0620F72A279ACDB1AC1BEF97_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_129, L_130, NULL);
		V_11 = L_129;
		goto IL_0316;
	}

IL_02fc:
	{
		// CharacterType.Gunner => new[,]
		// {
		//     { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 },
		// 
		//     { 1, 1 }, { 1, -1 }, { -1, 1 }, { -1, -1 },
		// 
		//     { 2, 0 }, { -2, 0 }, { 0, 2 }, { 0, -2 }
		// },
		il2cpp_array_size_t L_132[] = { (il2cpp_array_size_t)((int32_t)12), (il2cpp_array_size_t)2 };
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_131 = (Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F*)GenArrayNew(Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var, L_132);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_133 = L_131;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_134 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____D0A300A6E266DEAA817AC9DCC7ED54F7FADE13954D63F97BD7A03A8C859593F6_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_133, L_134, NULL);
		V_11 = L_133;
		goto IL_0316;
	}

IL_0313:
	{
		// _ => null
		V_11 = (Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F*)NULL;
	}

IL_0316:
	{
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_135 = V_11;
		V_3 = L_135;
		// var directions = _actionType == ActionType.Move ? moveDirections : attackDirections;
		int32_t L_136 = __this->____actionType_41;
		if (!L_136)
		{
			goto IL_0324;
		}
	}
	{
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_137 = V_3;
		G_B36_0 = L_137;
		goto IL_0325;
	}

IL_0324:
	{
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_138 = V_2;
		G_B36_0 = L_138;
	}

IL_0325:
	{
		V_4 = G_B36_0;
		// if (directions != null)
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_139 = V_4;
		if (!L_139)
		{
			goto IL_0723;
		}
	}
	{
		// for (var i = 0; i < directions.GetLength(0); i++)
		V_12 = 0;
		goto IL_0714;
	}

IL_0336:
	{
		// if (
		//     directions[i, 0] > 1
		//     && x + directions[i, 0] - 1 >= 0
		//     && x + directions[i, 0] - 1 < width
		//     && y + directions[i, 1] >= 0
		//     && y + directions[i, 1] < height
		// )
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_140 = V_4;
		int32_t L_141 = V_12;
		NullCheck(L_140);
		int32_t L_142;
		L_142 = (L_140)->GetAt(L_141, 0);
		if ((((int32_t)L_142) <= ((int32_t)1)))
		{
			goto IL_03c7;
		}
	}
	{
		int32_t L_143 = ___x0;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_144 = V_4;
		int32_t L_145 = V_12;
		NullCheck(L_144);
		int32_t L_146;
		L_146 = (L_144)->GetAt(L_145, 0);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_143, L_146)), 1))) < ((int32_t)0)))
		{
			goto IL_03c7;
		}
	}
	{
		int32_t L_147 = ___x0;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_148 = V_4;
		int32_t L_149 = V_12;
		NullCheck(L_148);
		int32_t L_150;
		L_150 = (L_148)->GetAt(L_149, 0);
		int32_t L_151 = __this->___width_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_147, L_150)), 1))) >= ((int32_t)L_151)))
		{
			goto IL_03c7;
		}
	}
	{
		int32_t L_152 = ___y1;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_153 = V_4;
		int32_t L_154 = V_12;
		NullCheck(L_153);
		int32_t L_155;
		L_155 = (L_153)->GetAt(L_154, 1);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_152, L_155))) < ((int32_t)0)))
		{
			goto IL_03c7;
		}
	}
	{
		int32_t L_156 = ___y1;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_157 = V_4;
		int32_t L_158 = V_12;
		NullCheck(L_157);
		int32_t L_159;
		L_159 = (L_157)->GetAt(L_158, 1);
		int32_t L_160 = __this->___height_5;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_156, L_159))) >= ((int32_t)L_160)))
		{
			goto IL_03c7;
		}
	}
	{
		// if (
		//     _actionType == ActionType.Move
		//     && !_grid[x + directions[i, 0] - 1, y + directions[i, 1]].IsWalkable
		// )
		int32_t L_161 = __this->____actionType_41;
		if (L_161)
		{
			goto IL_03c7;
		}
	}
	{
		GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C* L_162 = __this->____grid_6;
		int32_t L_163 = ___x0;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_164 = V_4;
		int32_t L_165 = V_12;
		NullCheck(L_164);
		int32_t L_166;
		L_166 = (L_164)->GetAt(L_165, 0);
		int32_t L_167 = ___y1;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_168 = V_4;
		int32_t L_169 = V_12;
		NullCheck(L_168);
		int32_t L_170;
		L_170 = (L_168)->GetAt(L_169, 1);
		NullCheck(L_162);
		GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106* L_171;
		L_171 = (L_162)->GetAddressAt(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_163, L_166)), 1)), ((int32_t)il2cpp_codegen_add(L_167, L_170)));
		bool L_172 = L_171->___IsWalkable_1;
		if (!L_172)
		{
			goto IL_070e;
		}
	}

IL_03c7:
	{
		// if (
		//     directions[i, 0] < -1
		//     && x + directions[i, 0] + 1 >= 0
		//     && x + directions[i, 0] + 1 < width
		//     && y + directions[i, 1] >= 0
		//     && y + directions[i, 1] < height
		// )
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_173 = V_4;
		int32_t L_174 = V_12;
		NullCheck(L_173);
		int32_t L_175;
		L_175 = (L_173)->GetAt(L_174, 0);
		if ((((int32_t)L_175) >= ((int32_t)(-1))))
		{
			goto IL_0458;
		}
	}
	{
		int32_t L_176 = ___x0;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_177 = V_4;
		int32_t L_178 = V_12;
		NullCheck(L_177);
		int32_t L_179;
		L_179 = (L_177)->GetAt(L_178, 0);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_176, L_179)), 1))) < ((int32_t)0)))
		{
			goto IL_0458;
		}
	}
	{
		int32_t L_180 = ___x0;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_181 = V_4;
		int32_t L_182 = V_12;
		NullCheck(L_181);
		int32_t L_183;
		L_183 = (L_181)->GetAt(L_182, 0);
		int32_t L_184 = __this->___width_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_180, L_183)), 1))) >= ((int32_t)L_184)))
		{
			goto IL_0458;
		}
	}
	{
		int32_t L_185 = ___y1;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_186 = V_4;
		int32_t L_187 = V_12;
		NullCheck(L_186);
		int32_t L_188;
		L_188 = (L_186)->GetAt(L_187, 1);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_185, L_188))) < ((int32_t)0)))
		{
			goto IL_0458;
		}
	}
	{
		int32_t L_189 = ___y1;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_190 = V_4;
		int32_t L_191 = V_12;
		NullCheck(L_190);
		int32_t L_192;
		L_192 = (L_190)->GetAt(L_191, 1);
		int32_t L_193 = __this->___height_5;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_189, L_192))) >= ((int32_t)L_193)))
		{
			goto IL_0458;
		}
	}
	{
		// if (
		//     _actionType == ActionType.Move
		//     && !_grid[x + directions[i, 0] + 1, y + directions[i, 1]].IsWalkable
		// )
		int32_t L_194 = __this->____actionType_41;
		if (L_194)
		{
			goto IL_0458;
		}
	}
	{
		GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C* L_195 = __this->____grid_6;
		int32_t L_196 = ___x0;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_197 = V_4;
		int32_t L_198 = V_12;
		NullCheck(L_197);
		int32_t L_199;
		L_199 = (L_197)->GetAt(L_198, 0);
		int32_t L_200 = ___y1;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_201 = V_4;
		int32_t L_202 = V_12;
		NullCheck(L_201);
		int32_t L_203;
		L_203 = (L_201)->GetAt(L_202, 1);
		NullCheck(L_195);
		GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106* L_204;
		L_204 = (L_195)->GetAddressAt(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_196, L_199)), 1)), ((int32_t)il2cpp_codegen_add(L_200, L_203)));
		bool L_205 = L_204->___IsWalkable_1;
		if (!L_205)
		{
			goto IL_070e;
		}
	}

IL_0458:
	{
		// if (
		//     directions[i, 1] > 1
		//     && x + directions[i, 0] >= 0
		//     && x + directions[i, 0] < width
		//     && y + directions[i, 1] - 1 >= 0
		//     && y + directions[i, 1] - 1 < height
		// )
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_206 = V_4;
		int32_t L_207 = V_12;
		NullCheck(L_206);
		int32_t L_208;
		L_208 = (L_206)->GetAt(L_207, 1);
		if ((((int32_t)L_208) <= ((int32_t)1)))
		{
			goto IL_04e9;
		}
	}
	{
		int32_t L_209 = ___x0;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_210 = V_4;
		int32_t L_211 = V_12;
		NullCheck(L_210);
		int32_t L_212;
		L_212 = (L_210)->GetAt(L_211, 0);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_209, L_212))) < ((int32_t)0)))
		{
			goto IL_04e9;
		}
	}
	{
		int32_t L_213 = ___x0;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_214 = V_4;
		int32_t L_215 = V_12;
		NullCheck(L_214);
		int32_t L_216;
		L_216 = (L_214)->GetAt(L_215, 0);
		int32_t L_217 = __this->___width_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_213, L_216))) >= ((int32_t)L_217)))
		{
			goto IL_04e9;
		}
	}
	{
		int32_t L_218 = ___y1;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_219 = V_4;
		int32_t L_220 = V_12;
		NullCheck(L_219);
		int32_t L_221;
		L_221 = (L_219)->GetAt(L_220, 1);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_218, L_221)), 1))) < ((int32_t)0)))
		{
			goto IL_04e9;
		}
	}
	{
		int32_t L_222 = ___y1;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_223 = V_4;
		int32_t L_224 = V_12;
		NullCheck(L_223);
		int32_t L_225;
		L_225 = (L_223)->GetAt(L_224, 1);
		int32_t L_226 = __this->___height_5;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_222, L_225)), 1))) >= ((int32_t)L_226)))
		{
			goto IL_04e9;
		}
	}
	{
		// if (
		//     _actionType == ActionType.Move
		//     && !_grid[x + directions[i, 0], y + directions[i, 1] - 1].IsWalkable
		// )
		int32_t L_227 = __this->____actionType_41;
		if (L_227)
		{
			goto IL_04e9;
		}
	}
	{
		GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C* L_228 = __this->____grid_6;
		int32_t L_229 = ___x0;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_230 = V_4;
		int32_t L_231 = V_12;
		NullCheck(L_230);
		int32_t L_232;
		L_232 = (L_230)->GetAt(L_231, 0);
		int32_t L_233 = ___y1;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_234 = V_4;
		int32_t L_235 = V_12;
		NullCheck(L_234);
		int32_t L_236;
		L_236 = (L_234)->GetAt(L_235, 1);
		NullCheck(L_228);
		GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106* L_237;
		L_237 = (L_228)->GetAddressAt(((int32_t)il2cpp_codegen_add(L_229, L_232)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_233, L_236)), 1)));
		bool L_238 = L_237->___IsWalkable_1;
		if (!L_238)
		{
			goto IL_070e;
		}
	}

IL_04e9:
	{
		// if (
		//     directions[i, 1] < -1
		//     && x + directions[i, 0] >= 0
		//     && x + directions[i, 0] < width
		//     && y + directions[i, 1] + 1 >= 0
		//     && y + directions[i, 1] + 1 < height
		// )
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_239 = V_4;
		int32_t L_240 = V_12;
		NullCheck(L_239);
		int32_t L_241;
		L_241 = (L_239)->GetAt(L_240, 1);
		if ((((int32_t)L_241) >= ((int32_t)(-1))))
		{
			goto IL_057a;
		}
	}
	{
		int32_t L_242 = ___x0;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_243 = V_4;
		int32_t L_244 = V_12;
		NullCheck(L_243);
		int32_t L_245;
		L_245 = (L_243)->GetAt(L_244, 0);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_242, L_245))) < ((int32_t)0)))
		{
			goto IL_057a;
		}
	}
	{
		int32_t L_246 = ___x0;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_247 = V_4;
		int32_t L_248 = V_12;
		NullCheck(L_247);
		int32_t L_249;
		L_249 = (L_247)->GetAt(L_248, 0);
		int32_t L_250 = __this->___width_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_246, L_249))) >= ((int32_t)L_250)))
		{
			goto IL_057a;
		}
	}
	{
		int32_t L_251 = ___y1;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_252 = V_4;
		int32_t L_253 = V_12;
		NullCheck(L_252);
		int32_t L_254;
		L_254 = (L_252)->GetAt(L_253, 1);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_251, L_254)), 1))) < ((int32_t)0)))
		{
			goto IL_057a;
		}
	}
	{
		int32_t L_255 = ___y1;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_256 = V_4;
		int32_t L_257 = V_12;
		NullCheck(L_256);
		int32_t L_258;
		L_258 = (L_256)->GetAt(L_257, 1);
		int32_t L_259 = __this->___height_5;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_255, L_258)), 1))) >= ((int32_t)L_259)))
		{
			goto IL_057a;
		}
	}
	{
		// if (
		//     _actionType == ActionType.Move
		//     && !_grid[x + directions[i, 0], y + directions[i, 1] + 1].IsWalkable
		// )
		int32_t L_260 = __this->____actionType_41;
		if (L_260)
		{
			goto IL_057a;
		}
	}
	{
		GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C* L_261 = __this->____grid_6;
		int32_t L_262 = ___x0;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_263 = V_4;
		int32_t L_264 = V_12;
		NullCheck(L_263);
		int32_t L_265;
		L_265 = (L_263)->GetAt(L_264, 0);
		int32_t L_266 = ___y1;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_267 = V_4;
		int32_t L_268 = V_12;
		NullCheck(L_267);
		int32_t L_269;
		L_269 = (L_267)->GetAt(L_268, 1);
		NullCheck(L_261);
		GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106* L_270;
		L_270 = (L_261)->GetAddressAt(((int32_t)il2cpp_codegen_add(L_262, L_265)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_266, L_269)), 1)));
		bool L_271 = L_270->___IsWalkable_1;
		if (!L_271)
		{
			goto IL_070e;
		}
	}

IL_057a:
	{
		// var newX = x + directions[i, 0];
		int32_t L_272 = ___x0;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_273 = V_4;
		int32_t L_274 = V_12;
		NullCheck(L_273);
		int32_t L_275;
		L_275 = (L_273)->GetAt(L_274, 0);
		V_13 = ((int32_t)il2cpp_codegen_add(L_272, L_275));
		// var newY = y + directions[i, 1];
		int32_t L_276 = ___y1;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_277 = V_4;
		int32_t L_278 = V_12;
		NullCheck(L_277);
		int32_t L_279;
		L_279 = (L_277)->GetAt(L_278, 1);
		V_14 = ((int32_t)il2cpp_codegen_add(L_276, L_279));
		// if (newX < 0 || newX >= width || newY < 0 || newY >= height)
		int32_t L_280 = V_13;
		if ((((int32_t)L_280) < ((int32_t)0)))
		{
			goto IL_070e;
		}
	}
	{
		int32_t L_281 = V_13;
		int32_t L_282 = __this->___width_4;
		if ((((int32_t)L_281) >= ((int32_t)L_282)))
		{
			goto IL_070e;
		}
	}
	{
		int32_t L_283 = V_14;
		if ((((int32_t)L_283) < ((int32_t)0)))
		{
			goto IL_070e;
		}
	}
	{
		int32_t L_284 = V_14;
		int32_t L_285 = __this->___height_5;
		if ((((int32_t)L_284) >= ((int32_t)L_285)))
		{
			goto IL_070e;
		}
	}
	{
		// if (_characters[newX, newY] != null)
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_286 = __this->____characters_8;
		int32_t L_287 = V_13;
		int32_t L_288 = V_14;
		NullCheck(L_286);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_289;
		L_289 = (L_286)->GetAt(L_287, L_288);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_290;
		L_290 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_289, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_290)
		{
			goto IL_0627;
		}
	}
	{
		// if (_isEnemyTurn && _actionType == ActionType.Attack)
		bool L_291 = __this->____isEnemyTurn_42;
		if (!L_291)
		{
			goto IL_070e;
		}
	}
	{
		int32_t L_292 = __this->____actionType_41;
		if ((!(((uint32_t)L_292) == ((uint32_t)1))))
		{
			goto IL_070e;
		}
	}
	{
		// _tiles[newX, newY].GetComponent<MeshRenderer>().material = enemyTileMaterial;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_293 = __this->____tiles_7;
		int32_t L_294 = V_13;
		int32_t L_295 = V_14;
		NullCheck(L_293);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_296;
		L_296 = (L_293)->GetAt(L_294, L_295);
		NullCheck(L_296);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_297;
		L_297 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_296, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_298 = __this->___enemyTileMaterial_30;
		NullCheck(L_297);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_297, L_298, NULL);
		// _grid[newX, newY].IsAttackable = true;
		GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C* L_299 = __this->____grid_6;
		int32_t L_300 = V_13;
		int32_t L_301 = V_14;
		NullCheck(L_299);
		GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106* L_302;
		L_302 = (L_299)->GetAddressAt(L_300, L_301);
		L_302->___IsAttackable_2 = (bool)1;
		// continue;
		goto IL_070e;
	}

IL_0627:
	{
		// if (_obstacles[newX, newY] != null)
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_303 = __this->____obstacles_10;
		int32_t L_304 = V_13;
		int32_t L_305 = V_14;
		NullCheck(L_303);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_306;
		L_306 = (L_303)->GetAt(L_304, L_305);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_307;
		L_307 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_306, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_307)
		{
			goto IL_070e;
		}
	}
	{
		// if (_enemies[newX, newY] != null)
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_308 = __this->____enemies_9;
		int32_t L_309 = V_13;
		int32_t L_310 = V_14;
		NullCheck(L_308);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_311;
		L_311 = (L_308)->GetAt(L_309, L_310);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_312;
		L_312 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_311, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_312)
		{
			goto IL_06a5;
		}
	}
	{
		// if (!_isEnemyTurn && _actionType == ActionType.Attack)
		bool L_313 = __this->____isEnemyTurn_42;
		if (L_313)
		{
			goto IL_070e;
		}
	}
	{
		int32_t L_314 = __this->____actionType_41;
		if ((!(((uint32_t)L_314) == ((uint32_t)1))))
		{
			goto IL_070e;
		}
	}
	{
		// _tiles[newX, newY].GetComponent<MeshRenderer>().material = enemyTileMaterial;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_315 = __this->____tiles_7;
		int32_t L_316 = V_13;
		int32_t L_317 = V_14;
		NullCheck(L_315);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_318;
		L_318 = (L_315)->GetAt(L_316, L_317);
		NullCheck(L_318);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_319;
		L_319 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_318, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_320 = __this->___enemyTileMaterial_30;
		NullCheck(L_319);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_319, L_320, NULL);
		// _grid[newX, newY].IsAttackable = true;
		GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C* L_321 = __this->____grid_6;
		int32_t L_322 = V_13;
		int32_t L_323 = V_14;
		NullCheck(L_321);
		GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106* L_324;
		L_324 = (L_321)->GetAddressAt(L_322, L_323);
		L_324->___IsAttackable_2 = (bool)1;
		// continue;
		goto IL_070e;
	}

IL_06a5:
	{
		// _tiles[newX, newY].GetComponent<MeshRenderer>().material =
		//     _actionType == ActionType.Move ? walkableTileMaterial : attackableTileMaterial;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_325 = __this->____tiles_7;
		int32_t L_326 = V_13;
		int32_t L_327 = V_14;
		NullCheck(L_325);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_328;
		L_328 = (L_325)->GetAt(L_326, L_327);
		NullCheck(L_328);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_329;
		L_329 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_328, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		int32_t L_330 = __this->____actionType_41;
		G_B80_0 = L_329;
		if (!L_330)
		{
			G_B81_0 = L_329;
			goto IL_06c9;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_331 = __this->___attackableTileMaterial_29;
		G_B82_0 = L_331;
		G_B82_1 = G_B80_0;
		goto IL_06cf;
	}

IL_06c9:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_332 = __this->___walkableTileMaterial_25;
		G_B82_0 = L_332;
		G_B82_1 = G_B81_0;
	}

IL_06cf:
	{
		NullCheck(G_B82_1);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(G_B82_1, G_B82_0, NULL);
		// _grid[newX, newY].IsWalkable = _actionType == ActionType.Move;
		GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C* L_333 = __this->____grid_6;
		int32_t L_334 = V_13;
		int32_t L_335 = V_14;
		NullCheck(L_333);
		GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106* L_336;
		L_336 = (L_333)->GetAddressAt(L_334, L_335);
		int32_t L_337 = __this->____actionType_41;
		L_336->___IsWalkable_1 = (bool)((((int32_t)L_337) == ((int32_t)0))? 1 : 0);
		// _grid[newX, newY].IsAttackable = _actionType == ActionType.Attack;
		GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C* L_338 = __this->____grid_6;
		int32_t L_339 = V_13;
		int32_t L_340 = V_14;
		NullCheck(L_338);
		GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106* L_341;
		L_341 = (L_338)->GetAddressAt(L_339, L_340);
		int32_t L_342 = __this->____actionType_41;
		L_341->___IsAttackable_2 = (bool)((((int32_t)L_342) == ((int32_t)1))? 1 : 0);
	}

IL_070e:
	{
		// for (var i = 0; i < directions.GetLength(0); i++)
		int32_t L_343 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_343, 1));
	}

IL_0714:
	{
		// for (var i = 0; i < directions.GetLength(0); i++)
		int32_t L_344 = V_12;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_345 = V_4;
		NullCheck((RuntimeArray*)L_345);
		int32_t L_346;
		L_346 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_345, 0, NULL);
		if ((((int32_t)L_344) < ((int32_t)L_346)))
		{
			goto IL_0336;
		}
	}

IL_0723:
	{
		// MakeCharacterTransparent(_selectedCharacter);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_347 = __this->____selectedCharacter_40;
		GameController_MakeCharacterTransparent_m7484F60A52283AD964D0EFDD34677C049F302B0B(__this, L_347, NULL);
		// _selectedCharacter.GetComponent<CapsuleCollider>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_348 = __this->____selectedCharacter_40;
		NullCheck(L_348);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_349;
		L_349 = GameObject_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m7C70BBFE6656C524C87A4A81898C874BA4F035C7(L_348, GameObject_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m7C70BBFE6656C524C87A4A81898C874BA4F035C7_RuntimeMethod_var);
		NullCheck(L_349);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_349, (bool)0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameController::AttackEnemy(System.Int32,System.Int32,CharacterType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameController_AttackEnemy_m6B3C99010AB1630C045EC425792861A83990BE52 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, int32_t ___x0, int32_t ___y1, int32_t ___characterType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E* L_0 = (U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E*)il2cpp_codegen_object_new(U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAttackEnemyU3Ed__53__ctor_mB4D1161768844A6749E6C1C4AA26FB79769F6DAA(L_0, 0, NULL);
		U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E* L_2 = L_1;
		int32_t L_3 = ___x0;
		NullCheck(L_2);
		L_2->___x_3 = L_3;
		U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E* L_4 = L_2;
		int32_t L_5 = ___y1;
		NullCheck(L_4);
		L_4->___y_4 = L_5;
		U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E* L_6 = L_4;
		int32_t L_7 = ___characterType2;
		NullCheck(L_6);
		L_6->___characterType_5 = L_7;
		return L_6;
	}
}
// System.Void GameController::HandleWin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_HandleWin_m5BF395882B178C305174D8C427ABFF0577EC7ADE (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88222E65FD385EBA9901132DEECAD4FB40A68E00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F1551ACDC6C2F450CA0F478C3208A3988707380);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B16_0 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B15_0 = NULL;
	String_t* G_B17_0 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B17_1 = NULL;
	{
		// foreach (var character in _characters)
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_0 = __this->____characters_8;
		V_0 = L_0;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_1 = V_0;
		NullCheck((RuntimeArray*)L_1);
		int32_t L_2;
		L_2 = Array_GetUpperBound_m64006116D5244EB8DA52188A9E49929AA7D08E4E((RuntimeArray*)L_1, 0, NULL);
		V_1 = L_2;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_3 = V_0;
		NullCheck((RuntimeArray*)L_3);
		int32_t L_4;
		L_4 = Array_GetUpperBound_m64006116D5244EB8DA52188A9E49929AA7D08E4E((RuntimeArray*)L_3, 1, NULL);
		V_2 = L_4;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_5 = V_0;
		NullCheck((RuntimeArray*)L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC((RuntimeArray*)L_5, 0, NULL);
		V_3 = L_6;
		goto IL_0049;
	}

IL_0021:
	{
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_7 = V_0;
		NullCheck((RuntimeArray*)L_7);
		int32_t L_8;
		L_8 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC((RuntimeArray*)L_7, 1, NULL);
		V_4 = L_8;
		goto IL_0040;
	}

IL_002c:
	{
		// foreach (var character in _characters)
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_9 = V_0;
		int32_t L_10 = V_3;
		int32_t L_11 = V_4;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = (L_9)->GetAt(L_10, L_11);
		// Destroy(character);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_12, NULL);
		int32_t L_13 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0040:
	{
		// foreach (var character in _characters)
		int32_t L_14 = V_4;
		int32_t L_15 = V_2;
		if ((((int32_t)L_14) <= ((int32_t)L_15)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0049:
	{
		// foreach (var character in _characters)
		int32_t L_17 = V_3;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_0021;
		}
	}
	{
		// foreach (var enemy in _enemies)
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_19 = __this->____enemies_9;
		V_0 = L_19;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_20 = V_0;
		NullCheck((RuntimeArray*)L_20);
		int32_t L_21;
		L_21 = Array_GetUpperBound_m64006116D5244EB8DA52188A9E49929AA7D08E4E((RuntimeArray*)L_20, 0, NULL);
		V_2 = L_21;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_22 = V_0;
		NullCheck((RuntimeArray*)L_22);
		int32_t L_23;
		L_23 = Array_GetUpperBound_m64006116D5244EB8DA52188A9E49929AA7D08E4E((RuntimeArray*)L_22, 1, NULL);
		V_1 = L_23;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_24 = V_0;
		NullCheck((RuntimeArray*)L_24);
		int32_t L_25;
		L_25 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC((RuntimeArray*)L_24, 0, NULL);
		V_3 = L_25;
		goto IL_0096;
	}

IL_006e:
	{
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_26 = V_0;
		NullCheck((RuntimeArray*)L_26);
		int32_t L_27;
		L_27 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC((RuntimeArray*)L_26, 1, NULL);
		V_4 = L_27;
		goto IL_008d;
	}

IL_0079:
	{
		// foreach (var enemy in _enemies)
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_28 = V_0;
		int32_t L_29 = V_3;
		int32_t L_30 = V_4;
		NullCheck(L_28);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = (L_28)->GetAt(L_29, L_30);
		// Destroy(enemy);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_31, NULL);
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_008d:
	{
		// foreach (var enemy in _enemies)
		int32_t L_33 = V_4;
		int32_t L_34 = V_1;
		if ((((int32_t)L_33) <= ((int32_t)L_34)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_0096:
	{
		// foreach (var enemy in _enemies)
		int32_t L_36 = V_3;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) <= ((int32_t)L_37)))
		{
			goto IL_006e;
		}
	}
	{
		// titleScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = __this->___titleScreen_17;
		NullCheck(L_38);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_38, (bool)0, NULL);
		// gameScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___gameScreen_16;
		NullCheck(L_39);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)0, NULL);
		// winScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___winScreen_18;
		NullCheck(L_40);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_40, (bool)1, NULL);
		// _backsound.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_41 = __this->____backsound_34;
		NullCheck(L_41);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_41, NULL);
		// _audioSource.PlayOneShot(winSound);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_42 = __this->____audioSource_33;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_43 = __this->___winSound_39;
		NullCheck(L_42);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_42, L_43, NULL);
		// attackButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = __this->___attackButton_14;
		NullCheck(L_44);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_44, (bool)0, NULL);
		// moveButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = __this->___moveButton_15;
		NullCheck(L_45);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_45, (bool)0, NULL);
		// healthText.gameObject.SetActive(false);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_46 = __this->___healthText_19;
		NullCheck(L_46);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47;
		L_47 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_46, NULL);
		NullCheck(L_47);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_47, (bool)0, NULL);
		// jobText.gameObject.SetActive(false);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_48 = __this->___jobText_20;
		NullCheck(L_48);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49;
		L_49 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_48, NULL);
		NullCheck(L_49);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_49, (bool)0, NULL);
		// if (_isEnemyTurn)
		bool L_50 = __this->____isEnemyTurn_42;
		if (!L_50)
		{
			goto IL_0123;
		}
	}
	{
		// _playerLose = true;
		__this->____playerLose_43 = (bool)1;
	}

IL_0123:
	{
		// winText.text = _playerLose ? "Dutch WIN!" : "Indonesia WIN!";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_51 = __this->___winText_22;
		bool L_52 = __this->____playerLose_43;
		G_B15_0 = L_51;
		if (L_52)
		{
			G_B16_0 = L_51;
			goto IL_0138;
		}
	}
	{
		G_B17_0 = _stringLiteral8F1551ACDC6C2F450CA0F478C3208A3988707380;
		G_B17_1 = G_B15_0;
		goto IL_013d;
	}

IL_0138:
	{
		G_B17_0 = _stringLiteral88222E65FD385EBA9901132DEECAD4FB40A68E00;
		G_B17_1 = G_B16_0;
	}

IL_013d:
	{
		NullCheck(G_B17_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, G_B17_1, G_B17_0);
		// }
		return;
	}
}
// System.Void GameController::SelectTile(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_SelectTile_m1F3ACE4F61E570CBF2CD7906B2B33F2EDB130C15 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m7C70BBFE6656C524C87A4A81898C874BA4F035C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* V_5 = NULL;
	GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* G_B7_0 = NULL;
	{
		// if (_characters[x, y] != null || _enemies[x, y] != null)
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_0 = __this->____characters_8;
		int32_t L_1 = ___x0;
		int32_t L_2 = ___y1;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = (L_0)->GetAt(L_1, L_2);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_5 = __this->____enemies_9;
		int32_t L_6 = ___x0;
		int32_t L_7 = ___y1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = (L_5)->GetAt(L_6, L_7);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0033;
		}
	}

IL_002a:
	{
		// SelectCharacter(x, y);
		int32_t L_10 = ___x0;
		int32_t L_11 = ___y1;
		GameController_SelectCharacter_m8BA7724D569CBE60C1A05C997E61D1CAB3A97C0E(__this, L_10, L_11, NULL);
		// return;
		return;
	}

IL_0033:
	{
		// attackButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___attackButton_14;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// moveButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___moveButton_15;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		// healthText.gameObject.SetActive(false);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_14 = __this->___healthText_19;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
		// jobText.gameObject.SetActive(false);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_16 = __this->___jobText_20;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
		// var isWalkable = _grid[x, y].IsWalkable;
		GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C* L_18 = __this->____grid_6;
		int32_t L_19 = ___x0;
		int32_t L_20 = ___y1;
		NullCheck(L_18);
		GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106* L_21;
		L_21 = (L_18)->GetAddressAt(L_19, L_20);
		bool L_22 = L_21->___IsWalkable_1;
		V_0 = L_22;
		// if (_selectedCharacter != null && isWalkable)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->____selectedCharacter_40;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		bool L_25 = V_0;
		if (!((int32_t)((int32_t)L_24&(int32_t)L_25)))
		{
			goto IL_01cf;
		}
	}
	{
		// _audioSource.PlayOneShot(walkSound);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_26 = __this->____audioSource_33;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_27 = __this->___walkSound_37;
		NullCheck(L_26);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_26, L_27, NULL);
		// _selectedCharacter.GetComponent<CapsuleCollider>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->____selectedCharacter_40;
		NullCheck(L_28);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_29;
		L_29 = GameObject_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m7C70BBFE6656C524C87A4A81898C874BA4F035C7(L_28, GameObject_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m7C70BBFE6656C524C87A4A81898C874BA4F035C7_RuntimeMethod_var);
		NullCheck(L_29);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_29, (bool)1, NULL);
		// var posX = _grid[x, y].Position.x;
		GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C* L_30 = __this->____grid_6;
		int32_t L_31 = ___x0;
		int32_t L_32 = ___y1;
		NullCheck(L_30);
		GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106* L_33;
		L_33 = (L_30)->GetAddressAt(L_31, L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_34 = (&L_33->___Position_0);
		float L_35 = L_34->___x_2;
		V_1 = L_35;
		// var posY = _grid[x, y].Position.z;
		GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C* L_36 = __this->____grid_6;
		int32_t L_37 = ___x0;
		int32_t L_38 = ___y1;
		NullCheck(L_36);
		GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106* L_39;
		L_39 = (L_36)->GetAddressAt(L_37, L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_40 = (&L_39->___Position_0);
		float L_41 = L_40->___z_4;
		V_2 = L_41;
		// _selectedCharacter.transform.position = new Vector3(
		//     posX,
		//     _selectedCharacter.transform.position.y,
		//     posY
		// );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->____selectedCharacter_40;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_42, NULL);
		float L_44 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = __this->____selectedCharacter_40;
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_45, NULL);
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_46, NULL);
		float L_48 = L_47.___y_3;
		float L_49 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_50), L_44, L_48, L_49, /*hidden argument*/NULL);
		NullCheck(L_43);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_43, L_50, NULL);
		// var oldX = _selectedCharacter.GetComponent<Character>().x;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = __this->____selectedCharacter_40;
		NullCheck(L_51);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_52;
		L_52 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_51, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		NullCheck(L_52);
		int32_t L_53 = L_52->___x_4;
		V_3 = L_53;
		// var oldY = _selectedCharacter.GetComponent<Character>().y;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->____selectedCharacter_40;
		NullCheck(L_54);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_55;
		L_55 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_54, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		NullCheck(L_55);
		int32_t L_56 = L_55->___y_5;
		V_4 = L_56;
		// var chars = _isEnemyTurn ? _enemies : _characters;
		bool L_57 = __this->____isEnemyTurn_42;
		if (L_57)
		{
			goto IL_0144;
		}
	}
	{
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_58 = __this->____characters_8;
		G_B7_0 = L_58;
		goto IL_014a;
	}

IL_0144:
	{
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_59 = __this->____enemies_9;
		G_B7_0 = L_59;
	}

IL_014a:
	{
		V_5 = G_B7_0;
		// chars[x, y] = chars[oldX, oldY];
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_60 = V_5;
		int32_t L_61 = ___x0;
		int32_t L_62 = ___y1;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_63 = V_5;
		int32_t L_64 = V_3;
		int32_t L_65 = V_4;
		NullCheck(L_63);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66;
		L_66 = (L_63)->GetAt(L_64, L_65);
		NullCheck(L_60);
		(L_60)->SetAt(L_61, L_62, L_66);
		// chars[oldX, oldY] = null;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_67 = V_5;
		int32_t L_68 = V_3;
		int32_t L_69 = V_4;
		NullCheck(L_67);
		(L_67)->SetAt(L_68, L_69, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// chars[x, y].GetComponent<Character>().x = x;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_70 = V_5;
		int32_t L_71 = ___x0;
		int32_t L_72 = ___y1;
		NullCheck(L_70);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_73;
		L_73 = (L_70)->GetAt(L_71, L_72);
		NullCheck(L_73);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_74;
		L_74 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_73, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		int32_t L_75 = ___x0;
		NullCheck(L_74);
		L_74->___x_4 = L_75;
		// chars[x, y].GetComponent<Character>().y = y;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_76 = V_5;
		int32_t L_77 = ___x0;
		int32_t L_78 = ___y1;
		NullCheck(L_76);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_79;
		L_79 = (L_76)->GetAt(L_77, L_78);
		NullCheck(L_79);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_80;
		L_80 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_79, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		int32_t L_81 = ___y1;
		NullCheck(L_80);
		L_80->___y_5 = L_81;
		// if (_isEnemyTurn)
		bool L_82 = __this->____isEnemyTurn_42;
		if (!L_82)
		{
			goto IL_01a4;
		}
	}
	{
		// _enemies = chars;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_83 = V_5;
		__this->____enemies_9 = L_83;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enemies_9), (void*)L_83);
		goto IL_01ac;
	}

IL_01a4:
	{
		// _characters = chars;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_84 = V_5;
		__this->____characters_8 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____characters_8), (void*)L_84);
	}

IL_01ac:
	{
		// MakeCharacterOpaque(_selectedCharacter);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_85 = __this->____selectedCharacter_40;
		il2cpp_codegen_runtime_class_init_inline(GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var);
		GameController_MakeCharacterOpaque_m603CDCA74410FF0BF7718D8444A4EB7B903ED7F6(L_85, NULL);
		// _selectedCharacter = null;
		__this->____selectedCharacter_40 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____selectedCharacter_40), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// _isEnemyTurn = !_isEnemyTurn;
		bool L_86 = __this->____isEnemyTurn_42;
		__this->____isEnemyTurn_42 = (bool)((((int32_t)L_86) == ((int32_t)0))? 1 : 0);
		goto IL_01d5;
	}

IL_01cf:
	{
		// MakeAllCharactersOpaque();
		GameController_MakeAllCharactersOpaque_m3B229D7483584891DF5825B9EC905B8AEB9BE5BF(__this, NULL);
	}

IL_01d5:
	{
		// ClearTiles();
		GameController_ClearTiles_m4EB7B773A17A0A278D3E1DE60106B1908C569D06(__this, NULL);
		// }
		return;
	}
}
// System.Void GameController::MakeAllCharactersOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_MakeAllCharactersOpaque_m3B229D7483584891DF5825B9EC905B8AEB9BE5BF (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m7C70BBFE6656C524C87A4A81898C874BA4F035C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_6 = NULL;
	{
		// foreach (var character in _characters)
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_0 = __this->____characters_8;
		V_0 = L_0;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_1 = V_0;
		NullCheck((RuntimeArray*)L_1);
		int32_t L_2;
		L_2 = Array_GetUpperBound_m64006116D5244EB8DA52188A9E49929AA7D08E4E((RuntimeArray*)L_1, 0, NULL);
		V_1 = L_2;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_3 = V_0;
		NullCheck((RuntimeArray*)L_3);
		int32_t L_4;
		L_4 = Array_GetUpperBound_m64006116D5244EB8DA52188A9E49929AA7D08E4E((RuntimeArray*)L_3, 1, NULL);
		V_2 = L_4;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_5 = V_0;
		NullCheck((RuntimeArray*)L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC((RuntimeArray*)L_5, 0, NULL);
		V_3 = L_6;
		goto IL_0064;
	}

IL_0021:
	{
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_7 = V_0;
		NullCheck((RuntimeArray*)L_7);
		int32_t L_8;
		L_8 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC((RuntimeArray*)L_7, 1, NULL);
		V_4 = L_8;
		goto IL_005b;
	}

IL_002c:
	{
		// foreach (var character in _characters)
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_9 = V_0;
		int32_t L_10 = V_3;
		int32_t L_11 = V_4;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = (L_9)->GetAt(L_10, L_11);
		V_5 = L_12;
		// if (character == null) continue;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_14)
		{
			goto IL_0055;
		}
	}
	{
		// character.GetComponent<CapsuleCollider>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_5;
		NullCheck(L_15);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_16;
		L_16 = GameObject_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m7C70BBFE6656C524C87A4A81898C874BA4F035C7(L_15, GameObject_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m7C70BBFE6656C524C87A4A81898C874BA4F035C7_RuntimeMethod_var);
		NullCheck(L_16);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_16, (bool)1, NULL);
		// MakeCharacterOpaque(character);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_5;
		il2cpp_codegen_runtime_class_init_inline(GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var);
		GameController_MakeCharacterOpaque_m603CDCA74410FF0BF7718D8444A4EB7B903ED7F6(L_17, NULL);
	}

IL_0055:
	{
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_005b:
	{
		// foreach (var character in _characters)
		int32_t L_19 = V_4;
		int32_t L_20 = V_2;
		if ((((int32_t)L_19) <= ((int32_t)L_20)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0064:
	{
		// foreach (var character in _characters)
		int32_t L_22 = V_3;
		int32_t L_23 = V_1;
		if ((((int32_t)L_22) <= ((int32_t)L_23)))
		{
			goto IL_0021;
		}
	}
	{
		// foreach (var enemy in _enemies)
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_24 = __this->____enemies_9;
		V_0 = L_24;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_25 = V_0;
		NullCheck((RuntimeArray*)L_25);
		int32_t L_26;
		L_26 = Array_GetUpperBound_m64006116D5244EB8DA52188A9E49929AA7D08E4E((RuntimeArray*)L_25, 0, NULL);
		V_2 = L_26;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_27 = V_0;
		NullCheck((RuntimeArray*)L_27);
		int32_t L_28;
		L_28 = Array_GetUpperBound_m64006116D5244EB8DA52188A9E49929AA7D08E4E((RuntimeArray*)L_27, 1, NULL);
		V_1 = L_28;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_29 = V_0;
		NullCheck((RuntimeArray*)L_29);
		int32_t L_30;
		L_30 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC((RuntimeArray*)L_29, 0, NULL);
		V_3 = L_30;
		goto IL_00cc;
	}

IL_0089:
	{
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_31 = V_0;
		NullCheck((RuntimeArray*)L_31);
		int32_t L_32;
		L_32 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC((RuntimeArray*)L_31, 1, NULL);
		V_4 = L_32;
		goto IL_00c3;
	}

IL_0094:
	{
		// foreach (var enemy in _enemies)
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_33 = V_0;
		int32_t L_34 = V_3;
		int32_t L_35 = V_4;
		NullCheck(L_33);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = (L_33)->GetAt(L_34, L_35);
		V_6 = L_36;
		// if (enemy == null) continue;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_37, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_38)
		{
			goto IL_00bd;
		}
	}
	{
		// enemy.GetComponent<CapsuleCollider>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = V_6;
		NullCheck(L_39);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_40;
		L_40 = GameObject_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m7C70BBFE6656C524C87A4A81898C874BA4F035C7(L_39, GameObject_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m7C70BBFE6656C524C87A4A81898C874BA4F035C7_RuntimeMethod_var);
		NullCheck(L_40);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_40, (bool)1, NULL);
		// MakeCharacterOpaque(enemy);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = V_6;
		il2cpp_codegen_runtime_class_init_inline(GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var);
		GameController_MakeCharacterOpaque_m603CDCA74410FF0BF7718D8444A4EB7B903ED7F6(L_41, NULL);
	}

IL_00bd:
	{
		int32_t L_42 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00c3:
	{
		// foreach (var enemy in _enemies)
		int32_t L_43 = V_4;
		int32_t L_44 = V_1;
		if ((((int32_t)L_43) <= ((int32_t)L_44)))
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00cc:
	{
		// foreach (var enemy in _enemies)
		int32_t L_46 = V_3;
		int32_t L_47 = V_2;
		if ((((int32_t)L_46) <= ((int32_t)L_47)))
		{
			goto IL_0089;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameController::HandleChangeAction(ActionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_HandleChangeAction_m83F3B70A82930C825F45D9135C90651161AEE601 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, int32_t ___actionType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this._actionType = actionType;
		int32_t L_0 = ___actionType0;
		__this->____actionType_41 = L_0;
		// if (_selectedCharacter != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____selectedCharacter_40;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		// SelectCharacter(
		//     _selectedCharacter.GetComponent<Character>().x,
		//     _selectedCharacter.GetComponent<Character>().y
		// );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->____selectedCharacter_40;
		NullCheck(L_3);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_4;
		L_4 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_3, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		NullCheck(L_4);
		int32_t L_5 = L_4->___x_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->____selectedCharacter_40;
		NullCheck(L_6);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_7;
		L_7 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_6, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_8 = L_7->___y_5;
		GameController_SelectCharacter_m8BA7724D569CBE60C1A05C997E61D1CAB3A97C0E(__this, L_5, L_8, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void GameController::MakeCharacterTransparent(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_MakeCharacterTransparent_m7484F60A52283AD964D0EFDD34677C049F302B0B (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___character0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Material newMat = new Material(character.GetComponent<Renderer>().material);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___character0;
		NullCheck(L_0);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1;
		L_1 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_0, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_3, L_2, NULL);
		V_0 = L_3;
		// newMat.SetFloat(Mode, 3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var);
		int32_t L_5 = ((GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_StaticFields*)il2cpp_codegen_static_fields_for(GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var))->___Mode_47;
		NullCheck(L_4);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_4, L_5, (3.0f), NULL);
		// newMat.SetInt(SrcBlend, (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = V_0;
		int32_t L_7 = ((GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_StaticFields*)il2cpp_codegen_static_fields_for(GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var))->___SrcBlend_48;
		NullCheck(L_6);
		Material_SetInt_m9C05C9D7C152CFCC48F8572710F89DDAC9277E39(L_6, L_7, 5, NULL);
		// newMat.SetInt(DstBlend, (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = V_0;
		int32_t L_9 = ((GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_StaticFields*)il2cpp_codegen_static_fields_for(GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var))->___DstBlend_49;
		NullCheck(L_8);
		Material_SetInt_m9C05C9D7C152CFCC48F8572710F89DDAC9277E39(L_8, L_9, ((int32_t)10), NULL);
		// newMat.SetInt(ZWrite, 0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = V_0;
		int32_t L_11 = ((GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_StaticFields*)il2cpp_codegen_static_fields_for(GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var))->___ZWrite_50;
		NullCheck(L_10);
		Material_SetInt_m9C05C9D7C152CFCC48F8572710F89DDAC9277E39(L_10, L_11, 0, NULL);
		// newMat.DisableKeyword("_ALPHATEST_ON");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = V_0;
		NullCheck(L_12);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_12, _stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5, NULL);
		// newMat.EnableKeyword("_ALPHABLEND_ON");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = V_0;
		NullCheck(L_13);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_13, _stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C, NULL);
		// newMat.DisableKeyword("_ALPHAPREMULTIPLY_ON");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = V_0;
		NullCheck(L_14);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_14, _stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8, NULL);
		// newMat.renderQueue = 3000;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = V_0;
		NullCheck(L_15);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_15, ((int32_t)3000), NULL);
		// var currentColor = newMat.color;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = V_0;
		NullCheck(L_16);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		L_17 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_16, NULL);
		V_1 = L_17;
		// currentColor.a = 0.5f;
		(&V_1)->___a_3 = (0.5f);
		// newMat.color = currentColor;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = V_1;
		NullCheck(L_18);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_18, L_19, NULL);
		// character.GetComponent<Renderer>().material = newMat;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = ___character0;
		NullCheck(L_20);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_21;
		L_21 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_20, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = V_0;
		NullCheck(L_21);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_21, L_22, NULL);
		// }
		return;
	}
}
// System.Void GameController::MakeCharacterOpaque(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_MakeCharacterOpaque_m603CDCA74410FF0BF7718D8444A4EB7B903ED7F6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___character0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var newMat = new Material(character.GetComponent<Renderer>().material);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___character0;
		NullCheck(L_0);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1;
		L_1 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_0, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_3, L_2, NULL);
		V_0 = L_3;
		// var currentColor = newMat.color;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = V_0;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_4, NULL);
		V_1 = L_5;
		// currentColor.a = 1f;
		(&V_1)->___a_3 = (1.0f);
		// newMat.color = currentColor;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_1;
		NullCheck(L_6);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_6, L_7, NULL);
		// character.GetComponent<Renderer>().material = newMat;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ___character0;
		NullCheck(L_8);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_9;
		L_9 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_8, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = V_0;
		NullCheck(L_9);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void GameController::ClearTiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_ClearTiles_m4EB7B773A17A0A278D3E1DE60106B1908C569D06 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* V_2 = NULL;
	GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* G_B5_0 = NULL;
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* G_B7_0 = NULL;
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* G_B6_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B8_0 = NULL;
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* G_B8_1 = NULL;
	{
		// for (var i = 0; i < width; i++)
		V_0 = 0;
		goto IL_008e;
	}

IL_0007:
	{
		// for (var j = 0; j < height; j++)
		V_1 = 0;
		goto IL_0081;
	}

IL_000b:
	{
		// var chars = _isEnemyTurn ? _enemies : _characters;
		bool L_0 = __this->____isEnemyTurn_42;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_1 = __this->____characters_8;
		G_B5_0 = L_1;
		goto IL_0021;
	}

IL_001b:
	{
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_2 = __this->____enemies_9;
		G_B5_0 = L_2;
	}

IL_0021:
	{
		V_2 = G_B5_0;
		// _tiles[i, j].GetComponent<MeshRenderer>().material =
		//     chars[i, j] != null ? hoveredTileMaterial : unwalkableTileMaterial;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_3 = __this->____tiles_7;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = (L_3)->GetAt(L_4, L_5);
		NullCheck(L_6);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_7;
		L_7 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_6, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_8 = V_2;
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = (L_8)->GetAt(L_9, L_10);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B6_0 = L_7;
		if (L_12)
		{
			G_B7_0 = L_7;
			goto IL_004c;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___unwalkableTileMaterial_26;
		G_B8_0 = L_13;
		G_B8_1 = G_B6_0;
		goto IL_0052;
	}

IL_004c:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = __this->___hoveredTileMaterial_28;
		G_B8_0 = L_14;
		G_B8_1 = G_B7_0;
	}

IL_0052:
	{
		NullCheck(G_B8_1);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(G_B8_1, G_B8_0, NULL);
		// _grid[i, j].IsWalkable = false;
		GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C* L_15 = __this->____grid_6;
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_15);
		GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106* L_18;
		L_18 = (L_15)->GetAddressAt(L_16, L_17);
		L_18->___IsWalkable_1 = (bool)0;
		// _grid[i, j].IsAttackable = false;
		GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C* L_19 = __this->____grid_6;
		int32_t L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_19);
		GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106* L_22;
		L_22 = (L_19)->GetAddressAt(L_20, L_21);
		L_22->___IsAttackable_2 = (bool)0;
		// for (var j = 0; j < height; j++)
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0081:
	{
		// for (var j = 0; j < height; j++)
		int32_t L_24 = V_1;
		int32_t L_25 = __this->___height_5;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_000b;
		}
	}
	{
		// for (var i = 0; i < width; i++)
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_008e:
	{
		// for (var i = 0; i < width; i++)
		int32_t L_27 = V_0;
		int32_t L_28 = __this->___width_4;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController__ctor_mB6369F6C5357D5984325D613D589EDA60818CBE9 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void GameController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController__cctor_m0A2787148D76EBB68A2E5A869E156A8C7D6F9BCD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D61FA9D9BE7581D7E2EE28C775ABE0D4B8C3D69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int Mode = Shader.PropertyToID("_Mode");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral7D61FA9D9BE7581D7E2EE28C775ABE0D4B8C3D69, NULL);
		((GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_StaticFields*)il2cpp_codegen_static_fields_for(GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var))->___Mode_47 = L_0;
		// private static readonly int SrcBlend = Shader.PropertyToID("_SrcBlend");
		int32_t L_1;
		L_1 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, NULL);
		((GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_StaticFields*)il2cpp_codegen_static_fields_for(GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var))->___SrcBlend_48 = L_1;
		// private static readonly int DstBlend = Shader.PropertyToID("_DstBlend");
		int32_t L_2;
		L_2 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, NULL);
		((GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_StaticFields*)il2cpp_codegen_static_fields_for(GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var))->___DstBlend_49 = L_2;
		// private static readonly int ZWrite = Shader.PropertyToID("_ZWrite");
		int32_t L_3;
		L_3 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, NULL);
		((GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_StaticFields*)il2cpp_codegen_static_fields_for(GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var))->___ZWrite_50 = L_3;
		return;
	}
}
// System.Void GameController::<Start>b__49_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_U3CStartU3Eb__49_0_m0A376EA5AB5FD9F228883D3A03615D486DBC7D30 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	{
		// playAgainButton.onClick.AddListener(() => StartGame());
		GameController_StartGame_mFCA6A8FA880B305904C014360F87A4685B76D0BE(__this, NULL);
		return;
	}
}
// System.Void GameController::<Start>b__49_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_U3CStartU3Eb__49_1_mDAB2CE4D0486E3E71E85E1C5D7C9EE31509CED7C (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	{
		// titleScreenButton.onClick.AddListener(() => TitleScreen());
		GameController_TitleScreen_m00EFF451863C98609ECBBADE8F10B7F3CE3B8F2B(__this, NULL);
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
// System.Void GameController/<AttackEnemy>d__53::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackEnemyU3Ed__53__ctor_mB4D1161768844A6749E6C1C4AA26FB79769F6DAA (U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameController/<AttackEnemy>d__53::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackEnemyU3Ed__53_System_IDisposable_Dispose_m5ABC2296911CE00EDC5B500F6A4AC5158F35EDFC (U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameController/<AttackEnemy>d__53::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAttackEnemyU3Ed__53_MoveNext_m9F37B25A4AD6447737B19E6436E2250C9A10299F (U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF95DF5537184AB57CFCFB85BBF9C1A3E252B1A4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* V_1 = NULL;
	int32_t V_2 = 0;
	GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E* G_B5_0 = NULL;
	U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E* G_B4_0 = NULL;
	GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* G_B6_0 = NULL;
	U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E* G_B6_1 = NULL;
	U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E* G_B8_0 = NULL;
	U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E* G_B7_0 = NULL;
	Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* G_B9_0 = NULL;
	U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E* G_B9_1 = NULL;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* G_B11_0 = NULL;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* G_B10_0 = NULL;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* G_B12_0 = NULL;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* G_B12_1 = NULL;
	U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E* G_B14_0 = NULL;
	U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E* G_B13_0 = NULL;
	float G_B15_0 = 0.0f;
	U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E* G_B15_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B19_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00f2;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var enemyChars = _isEnemyTurn ? _characters : _enemies;
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->____isEnemyTurn_42;
		G_B4_0 = __this;
		if (L_5)
		{
			G_B5_0 = __this;
			goto IL_0032;
		}
	}
	{
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_6 = V_1;
		NullCheck(L_6);
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_7 = L_6->____enemies_9;
		G_B6_0 = L_7;
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_0032:
	{
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_8 = V_1;
		NullCheck(L_8);
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_9 = L_8->____characters_8;
		G_B6_0 = L_9;
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		NullCheck(G_B6_1);
		G_B6_1->___U3CenemyCharsU3E5__2_6 = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->___U3CenemyCharsU3E5__2_6), (void*)G_B6_0);
		// var enemy = _isEnemyTurn
		//     ? _characters[x, y].GetComponent<Character>()
		//     : _enemies[x, y].GetComponent<Character>();
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = L_10->____isEnemyTurn_42;
		G_B7_0 = __this;
		if (L_11)
		{
			G_B8_0 = __this;
			goto IL_0064;
		}
	}
	{
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_12 = V_1;
		NullCheck(L_12);
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_13 = L_12->____enemies_9;
		int32_t L_14 = __this->___x_3;
		int32_t L_15 = __this->___y_4;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = (L_13)->GetAt(L_14, L_15);
		NullCheck(L_16);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_17;
		L_17 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_16, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		G_B9_0 = L_17;
		G_B9_1 = G_B7_0;
		goto IL_0080;
	}

IL_0064:
	{
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_18 = V_1;
		NullCheck(L_18);
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_19 = L_18->____characters_8;
		int32_t L_20 = __this->___x_3;
		int32_t L_21 = __this->___y_4;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = (L_19)->GetAt(L_20, L_21);
		NullCheck(L_22);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_23;
		L_23 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_22, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		G_B9_0 = L_23;
		G_B9_1 = G_B8_0;
	}

IL_0080:
	{
		NullCheck(G_B9_1);
		G_B9_1->___U3CenemyU3E5__3_7 = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___U3CenemyU3E5__3_7), (void*)G_B9_0);
		// enemy.health -= _selectedCharacter.GetComponent<Character>().damage;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_24 = __this->___U3CenemyU3E5__3_7;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_25 = L_24;
		NullCheck(L_25);
		int32_t L_26 = L_25->___health_6;
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_27 = V_1;
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = L_27->____selectedCharacter_40;
		NullCheck(L_28);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_29;
		L_29 = GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D(L_28, GameObject_GetComponent_TisCharacter_tAF47BB8D49829E1464C3692B366FC33C5B38CD61_m43ED98F8C3C92C02F1EB6A5E9C2FEE64E70EF28D_RuntimeMethod_var);
		NullCheck(L_29);
		int32_t L_30 = L_29->___damage_8;
		NullCheck(L_25);
		L_25->___health_6 = ((int32_t)il2cpp_codegen_subtract(L_26, L_30));
		// _audioSource.PlayOneShot(characterType == CharacterType.Gunner ? gunSound : swordSound);
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_31 = V_1;
		NullCheck(L_31);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_32 = L_31->____audioSource_33;
		int32_t L_33 = __this->___characterType_5;
		G_B10_0 = L_32;
		if ((((int32_t)L_33) == ((int32_t)1)))
		{
			G_B11_0 = L_32;
			goto IL_00be;
		}
	}
	{
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_34 = V_1;
		NullCheck(L_34);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_35 = L_34->___swordSound_35;
		G_B12_0 = L_35;
		G_B12_1 = G_B10_0;
		goto IL_00c4;
	}

IL_00be:
	{
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_36 = V_1;
		NullCheck(L_36);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_37 = L_36->___gunSound_36;
		G_B12_0 = L_37;
		G_B12_1 = G_B11_0;
	}

IL_00c4:
	{
		NullCheck(G_B12_1);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(G_B12_1, G_B12_0, NULL);
		// yield return new WaitForSeconds(characterType == CharacterType.Gunner ? 0.5f : 0.1f);
		int32_t L_38 = __this->___characterType_5;
		G_B13_0 = __this;
		if ((((int32_t)L_38) == ((int32_t)1)))
		{
			G_B14_0 = __this;
			goto IL_00da;
		}
	}
	{
		G_B15_0 = (0.100000001f);
		G_B15_1 = G_B13_0;
		goto IL_00df;
	}

IL_00da:
	{
		G_B15_0 = (0.5f);
		G_B15_1 = G_B14_0;
	}

IL_00df:
	{
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_39 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_39, G_B15_0, NULL);
		NullCheck(G_B15_1);
		G_B15_1->___U3CU3E2__current_1 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&G_B15_1->___U3CU3E2__current_1), (void*)L_39);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00f2:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Instantiate(
		//     characterType == CharacterType.Warrior ? warriorHitParticle : gunnerHitParticle,
		//     new Vector3(_grid[x, y].Position.x, 0.01f, _grid[x, y].Position.z),
		//     Quaternion.identity
		// );
		int32_t L_40 = __this->___characterType_5;
		if (!L_40)
		{
			goto IL_0109;
		}
	}
	{
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_41 = V_1;
		NullCheck(L_41);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = L_41->___gunnerHitParticle_32;
		G_B19_0 = L_42;
		goto IL_010f;
	}

IL_0109:
	{
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_43 = V_1;
		NullCheck(L_43);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = L_43->___warriorHitParticle_31;
		G_B19_0 = L_44;
	}

IL_010f:
	{
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_45 = V_1;
		NullCheck(L_45);
		GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C* L_46 = L_45->____grid_6;
		int32_t L_47 = __this->___x_3;
		int32_t L_48 = __this->___y_4;
		NullCheck(L_46);
		GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106* L_49;
		L_49 = (L_46)->GetAddressAt(L_47, L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_50 = (&L_49->___Position_0);
		float L_51 = L_50->___x_2;
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_52 = V_1;
		NullCheck(L_52);
		GridTileU5BU2CU5D_t492CD1BC6EE311B1E8CA169AA135B2867B4C7C9C* L_53 = L_52->____grid_6;
		int32_t L_54 = __this->___x_3;
		int32_t L_55 = __this->___y_4;
		NullCheck(L_53);
		GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106* L_56;
		L_56 = (L_53)->GetAddressAt(L_54, L_55);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_57 = (&L_56->___Position_0);
		float L_58 = L_57->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_59), L_51, (0.00999999978f), L_58, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60;
		L_60 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61;
		L_61 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(G_B19_0, L_59, L_60, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// if (enemy.health <= 0)
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_62 = __this->___U3CenemyU3E5__3_7;
		NullCheck(L_62);
		int32_t L_63 = L_62->___health_6;
		if ((((int32_t)L_63) > ((int32_t)0)))
		{
			goto IL_0273;
		}
	}
	{
		// if (_isEnemyTurn)
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_64 = V_1;
		NullCheck(L_64);
		bool L_65 = L_64->____isEnemyTurn_42;
		if (!L_65)
		{
			goto IL_01b5;
		}
	}
	{
		// Destroy(_characters[x, y]);
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_66 = V_1;
		NullCheck(L_66);
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_67 = L_66->____characters_8;
		int32_t L_68 = __this->___x_3;
		int32_t L_69 = __this->___y_4;
		NullCheck(L_67);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70;
		L_70 = (L_67)->GetAt(L_68, L_69);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_70, NULL);
		// _characters[x, y] = null;
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_71 = V_1;
		NullCheck(L_71);
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_72 = L_71->____characters_8;
		int32_t L_73 = __this->___x_3;
		int32_t L_74 = __this->___y_4;
		NullCheck(L_72);
		(L_72)->SetAt(L_73, L_74, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		goto IL_01e9;
	}

IL_01b5:
	{
		// Destroy(_enemies[x, y]);
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_75 = V_1;
		NullCheck(L_75);
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_76 = L_75->____enemies_9;
		int32_t L_77 = __this->___x_3;
		int32_t L_78 = __this->___y_4;
		NullCheck(L_76);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_79;
		L_79 = (L_76)->GetAt(L_77, L_78);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_79, NULL);
		// _enemies[x, y] = null;
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_80 = V_1;
		NullCheck(L_80);
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_81 = L_80->____enemies_9;
		int32_t L_82 = __this->___x_3;
		int32_t L_83 = __this->___y_4;
		NullCheck(L_81);
		(L_81)->SetAt(L_82, L_83, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_01e9:
	{
		// healthText.gameObject.SetActive(false);
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_84 = V_1;
		NullCheck(L_84);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_85 = L_84->___healthText_19;
		NullCheck(L_85);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_86;
		L_86 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_85, NULL);
		NullCheck(L_86);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_86, (bool)0, NULL);
		// jobText.gameObject.SetActive(false);
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_87 = V_1;
		NullCheck(L_87);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_88 = L_87->___jobText_20;
		NullCheck(L_88);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_89;
		L_89 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_88, NULL);
		NullCheck(L_89);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_89, (bool)0, NULL);
		// int count = 0;
		V_2 = 0;
		// foreach (var enemyChar in enemyChars)
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_90 = __this->___U3CenemyCharsU3E5__2_6;
		V_3 = L_90;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_91 = V_3;
		NullCheck((RuntimeArray*)L_91);
		int32_t L_92;
		L_92 = Array_GetUpperBound_m64006116D5244EB8DA52188A9E49929AA7D08E4E((RuntimeArray*)L_91, 0, NULL);
		V_4 = L_92;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_93 = V_3;
		NullCheck((RuntimeArray*)L_93);
		int32_t L_94;
		L_94 = Array_GetUpperBound_m64006116D5244EB8DA52188A9E49929AA7D08E4E((RuntimeArray*)L_93, 1, NULL);
		V_5 = L_94;
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_95 = V_3;
		NullCheck((RuntimeArray*)L_95);
		int32_t L_96;
		L_96 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC((RuntimeArray*)L_95, 0, NULL);
		V_6 = L_96;
		goto IL_0264;
	}

IL_0231:
	{
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_97 = V_3;
		NullCheck((RuntimeArray*)L_97);
		int32_t L_98;
		L_98 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC((RuntimeArray*)L_97, 1, NULL);
		V_7 = L_98;
		goto IL_0258;
	}

IL_023c:
	{
		// foreach (var enemyChar in enemyChars)
		GameObjectU5BU2CU5D_t6EEFFC1B5ACC6E21D9743DEBC8F57BF8A4ACA11E* L_99 = V_3;
		int32_t L_100 = V_6;
		int32_t L_101 = V_7;
		NullCheck(L_99);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_102;
		L_102 = (L_99)->GetAt(L_100, L_101);
		// if (enemyChar != null)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_103;
		L_103 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_102, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_103)
		{
			goto IL_0252;
		}
	}
	{
		// count++;
		int32_t L_104 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
	}

IL_0252:
	{
		int32_t L_105 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_105, 1));
	}

IL_0258:
	{
		// foreach (var enemyChar in enemyChars)
		int32_t L_106 = V_7;
		int32_t L_107 = V_5;
		if ((((int32_t)L_106) <= ((int32_t)L_107)))
		{
			goto IL_023c;
		}
	}
	{
		int32_t L_108 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_108, 1));
	}

IL_0264:
	{
		// foreach (var enemyChar in enemyChars)
		int32_t L_109 = V_6;
		int32_t L_110 = V_4;
		if ((((int32_t)L_109) <= ((int32_t)L_110)))
		{
			goto IL_0231;
		}
	}
	{
		// if (count == 0)
		int32_t L_111 = V_2;
		if (L_111)
		{
			goto IL_0273;
		}
	}
	{
		// HandleWin();
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_112 = V_1;
		NullCheck(L_112);
		GameController_HandleWin_m5BF395882B178C305174D8C427ABFF0577EC7ADE(L_112, NULL);
	}

IL_0273:
	{
		// healthText.text = "Health: " + enemy.health;
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_113 = V_1;
		NullCheck(L_113);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_114 = L_113->___healthText_19;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_115 = __this->___U3CenemyU3E5__3_7;
		NullCheck(L_115);
		int32_t* L_116 = (&L_115->___health_6);
		String_t* L_117;
		L_117 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_116, NULL);
		String_t* L_118;
		L_118 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralFF95DF5537184AB57CFCFB85BBF9C1A3E252B1A4, L_117, NULL);
		NullCheck(L_114);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_114, L_118);
		// _audioSource.PlayOneShot(hurtSound);
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_119 = V_1;
		NullCheck(L_119);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_120 = L_119->____audioSource_33;
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_121 = V_1;
		NullCheck(L_121);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_122 = L_121->___hurtSound_38;
		NullCheck(L_120);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_120, L_122, NULL);
		// _isEnemyTurn = !_isEnemyTurn;
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_123 = V_1;
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_124 = V_1;
		NullCheck(L_124);
		bool L_125 = L_124->____isEnemyTurn_42;
		NullCheck(L_123);
		L_123->____isEnemyTurn_42 = (bool)((((int32_t)L_125) == ((int32_t)0))? 1 : 0);
		// ClearTiles();
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_126 = V_1;
		NullCheck(L_126);
		GameController_ClearTiles_m4EB7B773A17A0A278D3E1DE60106B1908C569D06(L_126, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameController/<AttackEnemy>d__53::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAttackEnemyU3Ed__53_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3A5F100268F13ACA0C59F1ABD62AB35500E1562B (U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameController/<AttackEnemy>d__53::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackEnemyU3Ed__53_System_Collections_IEnumerator_Reset_m79073959161C04648F185D42EE799FB38489FC94 (U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAttackEnemyU3Ed__53_System_Collections_IEnumerator_Reset_m79073959161C04648F185D42EE799FB38489FC94_RuntimeMethod_var)));
	}
}
// System.Object GameController/<AttackEnemy>d__53::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAttackEnemyU3Ed__53_System_Collections_IEnumerator_get_Current_m184D46D2CAAF1ADBD80CB1018E10AFF3C2B80DCA (U3CAttackEnemyU3Ed__53_tDAD446E0355EBE5CF12FC6C3B9716024AC36C81E* __this, const RuntimeMethod* method) 
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
// Conversion methods for marshalling of: GridTile
IL2CPP_EXTERN_C void GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106_marshal_pinvoke(const GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106& unmarshaled, GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106_marshaled_pinvoke& marshaled)
{
	marshaled.___Position_0 = unmarshaled.___Position_0;
	marshaled.___IsWalkable_1 = static_cast<int32_t>(unmarshaled.___IsWalkable_1);
	marshaled.___IsAttackable_2 = static_cast<int32_t>(unmarshaled.___IsAttackable_2);
}
IL2CPP_EXTERN_C void GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106_marshal_pinvoke_back(const GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106_marshaled_pinvoke& marshaled, GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106& unmarshaled)
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledPosition_temp_0;
	memset((&unmarshaledPosition_temp_0), 0, sizeof(unmarshaledPosition_temp_0));
	unmarshaledPosition_temp_0 = marshaled.___Position_0;
	unmarshaled.___Position_0 = unmarshaledPosition_temp_0;
	bool unmarshaledIsWalkable_temp_1 = false;
	unmarshaledIsWalkable_temp_1 = static_cast<bool>(marshaled.___IsWalkable_1);
	unmarshaled.___IsWalkable_1 = unmarshaledIsWalkable_temp_1;
	bool unmarshaledIsAttackable_temp_2 = false;
	unmarshaledIsAttackable_temp_2 = static_cast<bool>(marshaled.___IsAttackable_2);
	unmarshaled.___IsAttackable_2 = unmarshaledIsAttackable_temp_2;
}
// Conversion method for clean up from marshalling of: GridTile
IL2CPP_EXTERN_C void GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106_marshal_pinvoke_cleanup(GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GridTile
IL2CPP_EXTERN_C void GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106_marshal_com(const GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106& unmarshaled, GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106_marshaled_com& marshaled)
{
	marshaled.___Position_0 = unmarshaled.___Position_0;
	marshaled.___IsWalkable_1 = static_cast<int32_t>(unmarshaled.___IsWalkable_1);
	marshaled.___IsAttackable_2 = static_cast<int32_t>(unmarshaled.___IsAttackable_2);
}
IL2CPP_EXTERN_C void GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106_marshal_com_back(const GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106_marshaled_com& marshaled, GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106& unmarshaled)
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledPosition_temp_0;
	memset((&unmarshaledPosition_temp_0), 0, sizeof(unmarshaledPosition_temp_0));
	unmarshaledPosition_temp_0 = marshaled.___Position_0;
	unmarshaled.___Position_0 = unmarshaledPosition_temp_0;
	bool unmarshaledIsWalkable_temp_1 = false;
	unmarshaledIsWalkable_temp_1 = static_cast<bool>(marshaled.___IsWalkable_1);
	unmarshaled.___IsWalkable_1 = unmarshaledIsWalkable_temp_1;
	bool unmarshaledIsAttackable_temp_2 = false;
	unmarshaledIsAttackable_temp_2 = static_cast<bool>(marshaled.___IsAttackable_2);
	unmarshaled.___IsAttackable_2 = unmarshaledIsAttackable_temp_2;
}
// Conversion method for clean up from marshalling of: GridTile
IL2CPP_EXTERN_C void GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106_marshal_com_cleanup(GridTile_t862FE3A3D53C3F17D8907C199BDBDDAE4869B106_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tile::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_Start_m7570D3565812FE205FD0D72A69D9979C41E08FB1 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_m159F768EFA54B38B000FB4104B7A4E3A9948E2C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gameController = FindObjectOfType<GameController>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_0;
		L_0 = Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_m159F768EFA54B38B000FB4104B7A4E3A9948E2C1(Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_m159F768EFA54B38B000FB4104B7A4E3A9948E2C1_RuntimeMethod_var);
		__this->____gameController_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gameController_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Tile::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_OnMouseDown_m15CC374FC44376602BDD7405A7125F9AB2542ED0 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
{
	{
		// _gameController.SelectTile(x, y);
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_0 = __this->____gameController_6;
		int32_t L_1 = __this->___x_4;
		int32_t L_2 = __this->___y_5;
		NullCheck(L_0);
		GameController_SelectTile_m1F3ACE4F61E570CBF2CD7906B2B33F2EDB130C15(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Tile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile__ctor_mB2C904B47040471552C938AE751AC0BF80B369E7 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
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
// System.Void TitleScreenButtons::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleScreenButtons_Start_m9803CE475CAD3D79BBFA8C08C10FBABA9BDEED95 (TitleScreenButtons_t4F9828301478ED8188811188EB69980E5FD384F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_m159F768EFA54B38B000FB4104B7A4E3A9948E2C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TitleScreenButtons_OnClick_mD19AFF9E887C364317E052A5DB1406E716678DB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gameController = FindObjectOfType<GameController>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_0;
		L_0 = Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_m159F768EFA54B38B000FB4104B7A4E3A9948E2C1(Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_m159F768EFA54B38B000FB4104B7A4E3A9948E2C1_RuntimeMethod_var);
		__this->____gameController_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gameController_4), (void*)L_0);
		// var button = GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1;
		L_1 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		// button.onClick.AddListener(OnClick);
		NullCheck(L_1);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_2;
		L_2 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_1, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)TitleScreenButtons_OnClick_mD19AFF9E887C364317E052A5DB1406E716678DB6_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void TitleScreenButtons::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleScreenButtons_OnClick_mD19AFF9E887C364317E052A5DB1406E716678DB6 (TitleScreenButtons_t4F9828301478ED8188811188EB69980E5FD384F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03458FAE53B29BD3B46E2CCB49056F90D71AFDA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (startButton)
		bool L_0 = __this->___startButton_7;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// _gameController.StartGame();
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_1 = __this->____gameController_4;
		NullCheck(L_1);
		GameController_StartGame_mFCA6A8FA880B305904C014360F87A4685B76D0BE(L_1, NULL);
		return;
	}

IL_0014:
	{
		// selectText.text = "Choose level size: " + width + "x" + height;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___selectText_8;
		int32_t* L_3 = (&__this->___width_5);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		int32_t* L_5 = (&__this->___height_6);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral03458FAE53B29BD3B46E2CCB49056F90D71AFDA5, L_4, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_6, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_7);
		// _gameController.width = width;
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_8 = __this->____gameController_4;
		int32_t L_9 = __this->___width_5;
		NullCheck(L_8);
		L_8->___width_4 = L_9;
		// _gameController.height = height;
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_10 = __this->____gameController_4;
		int32_t L_11 = __this->___height_6;
		NullCheck(L_10);
		L_10->___height_5 = L_11;
		// }
		return;
	}
}
// System.Void TitleScreenButtons::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleScreenButtons__ctor_m263698F084D14B8013D65357CCB84EAA878E0006 (TitleScreenButtons_t4F9828301478ED8188811188EB69980E5FD384F6* __this, const RuntimeMethod* method) 
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
// System.Void Video::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Video_Start_mC3A06DC417B7FB5F57B8978CDB1CB6FEB0E0C956 (Video_t836AAEE6BD5AF9A66DB88DF3993B649D977F9BBC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Video_OnPointerClick_m7F6F2C51F53F4F3E58B376078715CC28B3C83178_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Button>().onClick.AddListener(OnPointerClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0;
		L_0 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)Video_OnPointerClick_m7F6F2C51F53F4F3E58B376078715CC28B3C83178_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Video::OnPointerClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Video_OnPointerClick_m7F6F2C51F53F4F3E58B376078715CC28B3C83178 (Video_t836AAEE6BD5AF9A66DB88DF3993B649D977F9BBC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral588948505B18DFD1521F476BDCC30F83F47A785A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Called");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral588948505B18DFD1521F476BDCC30F83F47A785A, NULL);
		// SceneManager.LoadScene("Game");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, NULL);
		// }
		return;
	}
}
// System.Void Video::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Video__ctor_mA3A93F8AC2EE45E2818EC2EA008008EA0705DED0 (Video_t836AAEE6BD5AF9A66DB88DF3993B649D977F9BBC* __this, const RuntimeMethod* method) 
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
// System.String VuforiaLicense::GetLicenseKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VuforiaLicense_GetLicenseKey_m8E6E03709CDB6968425A93FB9D016DA6AFC6C91B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral162CE55EB2CCD370559752816D170BC16738BF76);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return license;
		return _stringLiteral162CE55EB2CCD370559752816D170BC16738BF76;
	}
}
// System.Void VuforiaLicense::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuforiaLicense__ctor_m094B92B3323DFFD79ADB696474D5D158C95E291B (VuforiaLicense_t558A3A93186A45EF8A9401D2262B52B5593182BC* __this, const RuntimeMethod* method) 
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
// System.Void TravisGameAssets.HitImpactEffectsPreview::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_Start_mDBAE4636E9F53312E86D068F3B71820822E2FEE7 (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// hitIndex = 0;
		__this->___hitIndex_16 = 0;
		// cameraRotating = false;
		__this->___cameraRotating_23 = (bool)0;
		// floorVisible = true;
		__this->___floorVisible_24 = (bool)1;
		// slowMotion = false;
		__this->___slowMotion_25 = (bool)0;
		// lighting = true;
		__this->___lighting_26 = (bool)1;
		// initFov = Camera.main.fieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_0, NULL);
		__this->___initFov_19 = L_1;
		// initCamPosition = Camera.main.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		__this->___initCamPosition_17 = L_4;
		// initCamRotation = Camera.main.transform.rotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		__this->___initCamRotation_18 = L_7;
		// hitEffects = new GameObject[particlesPool.childCount];
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___particlesPool_5;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_8, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_9);
		__this->___hitEffects_15 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hitEffects_15), (void*)L_10);
		// for(int i = 0; i < particlesPool.childCount; i++)
		V_0 = 0;
		goto IL_0094;
	}

IL_0077:
	{
		// hitEffects[i] = particlesPool.GetChild(i).gameObject;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = __this->___hitEffects_15;
		int32_t L_12 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___particlesPool_5;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_13, L_14, NULL);
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_16);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_16);
		// for(int i = 0; i < particlesPool.childCount; i++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0094:
	{
		// for(int i = 0; i < particlesPool.childCount; i++)
		int32_t L_18 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___particlesPool_5;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_19, NULL);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0077;
		}
	}
	{
		// RefreshHitUI();
		HitImpactEffectsPreview_RefreshHitUI_mF6020FE296846EE7188FA76D98C00269B7DECF23(__this, NULL);
		// }
		return;
	}
}
// System.Void TravisGameAssets.HitImpactEffectsPreview::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_Update_m3E5851C79F2B6FED8960F5854B7576BB9C2AE18B (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// if(Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)97), NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)276), NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}

IL_0015:
	{
		// PreviousHit();
		HitImpactEffectsPreview_PreviousHit_m4C03EFBA92EA6B4BEED3C8CEBB3818556E30407F(__this, NULL);
		goto IL_0038;
	}

IL_001d:
	{
		// else if(Input.GetKeyDown(KeyCode.D) || Input.GetKeyDown(KeyCode.RightArrow))
		bool L_2;
		L_2 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)100), NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		bool L_3;
		L_3 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)275), NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}

IL_0032:
	{
		// NextHit();
		HitImpactEffectsPreview_NextHit_m68BC7C4EDDD7DD6352C8C16B83719A7D1B8B92AF(__this, NULL);
	}

IL_0038:
	{
		// if(Input.GetMouseButtonDown(0))
		bool L_4;
		L_4 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		if (!L_4)
		{
			goto IL_00a0;
		}
	}
	{
		// if(!EventSystem.current.IsPointerOverGameObject())
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_5;
		L_5 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38(L_5, NULL);
		if (L_6)
		{
			goto IL_00a0;
		}
	}
	{
		// RaycastHit hit = new RaycastHit();
		il2cpp_codegen_initobj((&V_1), sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		// if(floorCollider.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, 1000f))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = __this->___floorCollider_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		NullCheck(L_8);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_10;
		L_10 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_8, L_9, NULL);
		NullCheck(L_7);
		bool L_11;
		L_11 = Collider_Raycast_mD7683E94051173B3FFC0862F4A17847E94AEB938(L_7, L_10, (&V_1), (1000.0f), NULL);
		if (!L_11)
		{
			goto IL_00a0;
		}
	}
	{
		// GameObject newHits = SpawnHit();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = HitImpactEffectsPreview_SpawnHit_m0B6276660CE590154CCB7C9C55FBB2DA2F4705AC(__this, NULL);
		V_2 = L_12;
		// newHits.transform.position = hit.point + newHits.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_2;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_1), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_2;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_15, L_18, NULL);
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_19, NULL);
	}

IL_00a0:
	{
		// if(Input.GetKeyDown("1"))
		bool L_20;
		L_20 = Input_GetKeyDown_m4D8FE3CF83D6650C34E66A95175DC37DF2D98916(_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, NULL);
		if (!L_20)
		{
			goto IL_00b2;
		}
	}
	{
		// ToggleRotation();
		HitImpactEffectsPreview_ToggleRotation_mDF257CEC93D29B988AB7C7D5351BA90D0F23D95A(__this, NULL);
	}

IL_00b2:
	{
		// if(Input.GetKeyDown("2"))
		bool L_21;
		L_21 = Input_GetKeyDown_m4D8FE3CF83D6650C34E66A95175DC37DF2D98916(_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, NULL);
		if (!L_21)
		{
			goto IL_00c4;
		}
	}
	{
		// ToggleFloor();
		HitImpactEffectsPreview_ToggleFloor_m46CAA22630F68A0091563740B922CF33A8A58D60(__this, NULL);
	}

IL_00c4:
	{
		// if(Input.GetKeyDown("3"))
		bool L_22;
		L_22 = Input_GetKeyDown_m4D8FE3CF83D6650C34E66A95175DC37DF2D98916(_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE, NULL);
		if (!L_22)
		{
			goto IL_00d6;
		}
	}
	{
		// ToggleSlowMotion();
		HitImpactEffectsPreview_ToggleSlowMotion_mBA6019B5589C94E3D4422E381A4B32AB41832F10(__this, NULL);
	}

IL_00d6:
	{
		// if(Input.GetKeyDown(KeyCode.Space))
		bool L_23;
		L_23 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)32), NULL);
		if (!L_23)
		{
			goto IL_00e5;
		}
	}
	{
		// ToggleLighting();
		HitImpactEffectsPreview_ToggleLighting_m9460655D22228DD82181A3A916B96801438FC05B(__this, NULL);
	}

IL_00e5:
	{
		// float fov = Camera.main.fieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_24;
		L_24 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_24);
		float L_25;
		L_25 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_24, NULL);
		V_0 = L_25;
		// fov -= Input.GetAxis("Mouse ScrollWheel") * sensitivity;
		float L_26 = V_0;
		float L_27;
		L_27 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		float L_28 = __this->___sensitivity_22;
		V_0 = ((float)il2cpp_codegen_subtract(L_26, ((float)il2cpp_codegen_multiply(L_27, L_28))));
		// fov = Mathf.Clamp(fov, minFov, maxFov);
		float L_29 = V_0;
		float L_30 = __this->___minFov_20;
		float L_31 = __this->___maxFov_21;
		float L_32;
		L_32 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_29, L_30, L_31, NULL);
		V_0 = L_32;
		// Camera.main.fieldOfView = fov;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_33;
		L_33 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		float L_34 = V_0;
		NullCheck(L_33);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_33, L_34, NULL);
		// if(Input.GetMouseButtonDown(1))
		bool L_35;
		L_35 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(1, NULL);
		if (!L_35)
		{
			goto IL_0162;
		}
	}
	{
		// Camera.main.transform.position = initCamPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_36;
		L_36 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = __this->___initCamPosition_17;
		NullCheck(L_37);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_37, L_38, NULL);
		// Camera.main.transform.rotation = initCamRotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_39;
		L_39 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_39, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41 = __this->___initCamRotation_18;
		NullCheck(L_40);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_40, L_41, NULL);
		// if(cameraRotating)
		bool L_42 = __this->___cameraRotating_23;
		if (!L_42)
		{
			goto IL_0162;
		}
	}
	{
		// ToggleRotation();
		HitImpactEffectsPreview_ToggleRotation_mDF257CEC93D29B988AB7C7D5351BA90D0F23D95A(__this, NULL);
	}

IL_0162:
	{
		// if(Input.GetMouseButtonDown(2))
		bool L_43;
		L_43 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(2, NULL);
		if (!L_43)
		{
			goto IL_017a;
		}
	}
	{
		// Camera.main.fieldOfView = initFov;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_44;
		L_44 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		float L_45 = __this->___initFov_19;
		NullCheck(L_44);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_44, L_45, NULL);
	}

IL_017a:
	{
		// if(cameraRotating)
		bool L_46 = __this->___cameraRotating_23;
		if (!L_46)
		{
			goto IL_01a3;
		}
	}
	{
		// cameraPivot.Rotate(Vector3.up * (cameraRotationSpeed * Time.deltaTime));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = __this->___cameraPivot_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_49 = __this->___cameraRotationSpeed_9;
		float L_50;
		L_50 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_48, ((float)il2cpp_codegen_multiply(L_49, L_50)), NULL);
		NullCheck(L_47);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_47, L_51, NULL);
	}

IL_01a3:
	{
		// }
		return;
	}
}
// System.Void TravisGameAssets.HitImpactEffectsPreview::ToggleRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_ToggleRotation_mDF257CEC93D29B988AB7C7D5351BA90D0F23D95A (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B3_1 = NULL;
	{
		// cameraRotating = !cameraRotating;
		bool L_0 = __this->___cameraRotating_23;
		__this->___cameraRotating_23 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// var newColor = rotationIcon.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___rotationIcon_11;
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		V_0 = L_2;
		// newColor.a = cameraRotating ? 1f : 0.33f;
		bool L_3 = __this->___cameraRotating_23;
		G_B1_0 = (&V_0);
		if (L_3)
		{
			G_B2_0 = (&V_0);
			goto IL_002c;
		}
	}
	{
		G_B3_0 = (0.330000013f);
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_002c:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		G_B3_1->___a_3 = G_B3_0;
		// rotationIcon.color = newColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___rotationIcon_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = V_0;
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// }
		return;
	}
}
// System.Void TravisGameAssets.HitImpactEffectsPreview::ToggleFloor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_ToggleFloor_m46CAA22630F68A0091563740B922CF33A8A58D60 (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B3_1 = NULL;
	{
		// floorVisible = !floorVisible;
		bool L_0 = __this->___floorVisible_24;
		__this->___floorVisible_24 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// floor.enabled = floorVisible;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1 = __this->___floor_10;
		bool L_2 = __this->___floorVisible_24;
		NullCheck(L_1);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, L_2, NULL);
		// var newColor = floorIcon.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___floorIcon_12;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_3);
		V_0 = L_4;
		// newColor.a = floorVisible ? 1f : 0.33f;
		bool L_5 = __this->___floorVisible_24;
		G_B1_0 = (&V_0);
		if (L_5)
		{
			G_B2_0 = (&V_0);
			goto IL_003d;
		}
	}
	{
		G_B3_0 = (0.330000013f);
		G_B3_1 = G_B1_0;
		goto IL_0042;
	}

IL_003d:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
	}

IL_0042:
	{
		G_B3_1->___a_3 = G_B3_0;
		// floorIcon.color = newColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___floorIcon_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_0;
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		// }
		return;
	}
}
// System.Void TravisGameAssets.HitImpactEffectsPreview::ToggleSlowMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_ToggleSlowMotion_mBA6019B5589C94E3D4422E381A4B32AB41832F10 (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B5_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B6_1 = NULL;
	{
		// slowMotion = !slowMotion;
		bool L_0 = __this->___slowMotion_25;
		__this->___slowMotion_25 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// if(slowMotion)
		bool L_1 = __this->___slowMotion_25;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// Time.timeScale = 0.5f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.5f), NULL);
		goto IL_002d;
	}

IL_0023:
	{
		// Time.timeScale = 1.0f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
	}

IL_002d:
	{
		// var newColor = slowMotionIcon.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___slowMotionIcon_13;
		NullCheck(L_2);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_2);
		V_0 = L_3;
		// newColor.a = slowMotion ? 1f : 0.33f;
		bool L_4 = __this->___slowMotion_25;
		G_B4_0 = (&V_0);
		if (L_4)
		{
			G_B5_0 = (&V_0);
			goto IL_004a;
		}
	}
	{
		G_B6_0 = (0.330000013f);
		G_B6_1 = G_B4_0;
		goto IL_004f;
	}

IL_004a:
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B5_0;
	}

IL_004f:
	{
		G_B6_1->___a_3 = G_B6_0;
		// slowMotionIcon.color = newColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___slowMotionIcon_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// }
		return;
	}
}
// System.Void TravisGameAssets.HitImpactEffectsPreview::ToggleLighting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_ToggleLighting_m9460655D22228DD82181A3A916B96801438FC05B (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) 
{
	{
		// lighting = !lighting;
		bool L_0 = __this->___lighting_26;
		__this->___lighting_26 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// light.SetActive(lighting);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___light_14;
		bool L_2 = __this->___lighting_26;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void TravisGameAssets.HitImpactEffectsPreview::NextHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_NextHit_m68BC7C4EDDD7DD6352C8C16B83719A7D1B8B92AF (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) 
{
	{
		// hitIndex++;
		int32_t L_0 = __this->___hitIndex_16;
		__this->___hitIndex_16 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if(hitIndex >= hitEffects.Length)
		int32_t L_1 = __this->___hitIndex_16;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___hitEffects_15;
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0025;
		}
	}
	{
		// hitIndex = 0;
		__this->___hitIndex_16 = 0;
	}

IL_0025:
	{
		// RefreshHitUI();
		HitImpactEffectsPreview_RefreshHitUI_mF6020FE296846EE7188FA76D98C00269B7DECF23(__this, NULL);
		// }
		return;
	}
}
// System.Void TravisGameAssets.HitImpactEffectsPreview::PreviousHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_PreviousHit_m4C03EFBA92EA6B4BEED3C8CEBB3818556E30407F (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) 
{
	{
		// hitIndex--;
		int32_t L_0 = __this->___hitIndex_16;
		__this->___hitIndex_16 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if(hitIndex < 0)
		int32_t L_1 = __this->___hitIndex_16;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		// hitIndex = hitEffects.Length - 1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___hitEffects_15;
		NullCheck(L_2);
		__this->___hitIndex_16 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
	}

IL_0027:
	{
		// RefreshHitUI();
		HitImpactEffectsPreview_RefreshHitUI_mF6020FE296846EE7188FA76D98C00269B7DECF23(__this, NULL);
		// }
		return;
	}
}
// System.Void TravisGameAssets.HitImpactEffectsPreview::RefreshHitUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview_RefreshHitUI_mF6020FE296846EE7188FA76D98C00269B7DECF23 (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// hitNameLabel.text = hitEffects[hitIndex].name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___hitNameLabel_6;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___hitEffects_15;
		int32_t L_2 = __this->___hitIndex_16;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		// hitIndexLabel.text = string.Format("{0}/{1}", (hitIndex+1).ToString("00"), hitEffects.Length.ToString("00"));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___hitIndexLabel_7;
		int32_t L_7 = __this->___hitIndex_16;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		String_t* L_8;
		L_8 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_0), _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->___hitEffects_15;
		NullCheck(L_9);
		V_0 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		String_t* L_10;
		L_10 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_0), _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, NULL);
		String_t* L_11;
		L_11 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79, L_8, L_10, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_11);
		// }
		return;
	}
}
// UnityEngine.GameObject TravisGameAssets.HitImpactEffectsPreview::SpawnHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* HitImpactEffectsPreview_SpawnHit_m0B6276660CE590154CCB7C9C55FBB2DA2F4705AC (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject spawnedHit = Instantiate(hitEffects[hitIndex]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___hitEffects_15;
		int32_t L_1 = __this->___hitIndex_16;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		// spawnedHit.transform.LookAt(Camera.main.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_6);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_6, L_8, NULL);
		// return spawnedHit;
		return L_5;
	}
}
// System.Void TravisGameAssets.HitImpactEffectsPreview::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitImpactEffectsPreview__ctor_m55BC63E955B324AB77FCDD705DE282B6BFE0DD60 (HitImpactEffectsPreview_t924C54AA3BC8FD49FBE8A3E988C29C44E7495505* __this, const RuntimeMethod* method) 
{
	{
		// public float cameraRotationSpeed = 10f;
		__this->___cameraRotationSpeed_9 = (10.0f);
		// private float minFov = 15f;
		__this->___minFov_20 = (15.0f);
		// private float maxFov = 90f;
		__this->___maxFov_21 = (90.0f);
		// private float sensitivity = 10f;
		__this->___sensitivity_22 = (10.0f);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
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
