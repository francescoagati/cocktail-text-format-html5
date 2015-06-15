#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeApplication_TextEventInfo
#include <lime/_backend/native/_NativeApplication/TextEventInfo.h>
#endif
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{

Void TextEventInfo_obj::__construct(Dynamic type,::String __o_text,hx::Null< int >  __o_start,hx::Null< int >  __o_length)
{
HX_STACK_FRAME("lime._backend.native._NativeApplication.TextEventInfo","new",0xb1ead390,"lime._backend.native._NativeApplication.TextEventInfo.new","lime/_backend/native/NativeApplication.hx",611,0xb13849fd)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_text,"text")
HX_STACK_ARG(__o_start,"start")
HX_STACK_ARG(__o_length,"length")
::String text = __o_text.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
int start = __o_start.Default(0);
int length = __o_length.Default(0);
{
	HX_STACK_LINE(613)
	this->type = type;
	HX_STACK_LINE(614)
	this->text = text;
	HX_STACK_LINE(615)
	this->start = start;
	HX_STACK_LINE(616)
	this->length = length;
}
;
	return null();
}

//TextEventInfo_obj::~TextEventInfo_obj() { }

Dynamic TextEventInfo_obj::__CreateEmpty() { return  new TextEventInfo_obj; }
hx::ObjectPtr< TextEventInfo_obj > TextEventInfo_obj::__new(Dynamic type,::String __o_text,hx::Null< int >  __o_start,hx::Null< int >  __o_length)
{  hx::ObjectPtr< TextEventInfo_obj > _result_ = new TextEventInfo_obj();
	_result_->__construct(type,__o_text,__o_start,__o_length);
	return _result_;}

Dynamic TextEventInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextEventInfo_obj > _result_ = new TextEventInfo_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::lime::_backend::native::_NativeApplication::TextEventInfo TextEventInfo_obj::clone( ){
	HX_STACK_FRAME("lime._backend.native._NativeApplication.TextEventInfo","clone",0xd025428d,"lime._backend.native._NativeApplication.TextEventInfo.clone","lime/_backend/native/NativeApplication.hx",621,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(623)
	int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(623)
	::String tmp1 = this->text;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(623)
	int tmp2 = this->start;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(623)
	int tmp3 = this->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(623)
	::lime::_backend::native::_NativeApplication::TextEventInfo tmp4 = ::lime::_backend::native::_NativeApplication::TextEventInfo_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(623)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(TextEventInfo_obj,clone,return )


TextEventInfo_obj::TextEventInfo_obj()
{
}

void TextEventInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextEventInfo);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void TextEventInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic TextEventInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextEventInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextEventInfo_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TextEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TextEventInfo_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsInt,(int)offsetof(TextEventInfo_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsInt,(int)offsetof(TextEventInfo_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsString,(int)offsetof(TextEventInfo_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsInt,(int)offsetof(TextEventInfo_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEventInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class TextEventInfo_obj::__mClass;

void TextEventInfo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native._NativeApplication.TextEventInfo","\x9e","\x0b","\x7e","\x1a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TextEventInfo_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextEventInfo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication
