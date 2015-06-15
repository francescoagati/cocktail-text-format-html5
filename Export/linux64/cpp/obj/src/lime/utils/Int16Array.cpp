#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_lime_utils_Int16Array
#include <lime/utils/Int16Array.h>
#endif
namespace lime{
namespace utils{

Void Int16Array_obj::__construct(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length)
{
HX_STACK_FRAME("lime.utils.Int16Array","new",0xa942968d,"lime.utils.Int16Array.new","lime/utils/Int16Array.hx",15,0x65863181)
HX_STACK_THIS(this)
HX_STACK_ARG(bufferOrArray,"bufferOrArray")
HX_STACK_ARG(__o_start,"start")
HX_STACK_ARG(length,"length")
int start = __o_start.Default(0);
{
	HX_STACK_LINE(45)
	Dynamic tmp = bufferOrArray;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::Int >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	if ((tmp1)){
		HX_STACK_LINE(47)
		Float tmp2 = ((Float)(bufferOrArray));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		int tmp4 = (int(tmp3) << int((int)1));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		super::__construct(tmp4,null(),null());
		HX_STACK_LINE(49)
		this->length = ((int)(bufferOrArray));
	}
	else{
		HX_STACK_LINE(51)
		Dynamic tmp2 = bufferOrArray;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		if ((tmp3)){
			HX_STACK_LINE(53)
			Array< int > ints = ((Array< int >)(bufferOrArray));		HX_STACK_VAR(ints,"ints");
			HX_STACK_LINE(54)
			bool tmp4 = (length != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(54)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(54)
			if ((tmp4)){
				HX_STACK_LINE(54)
				tmp5 = length;
			}
			else{
				HX_STACK_LINE(54)
				tmp5 = (ints->length - start);
			}
			HX_STACK_LINE(54)
			this->length = tmp5;
			HX_STACK_LINE(56)
			int tmp6 = this->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(56)
			int tmp7 = (int(tmp6) << int((int)1));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(56)
			super::__construct(tmp7,null(),null());
			HX_STACK_LINE(62)
			{
				HX_STACK_LINE(62)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(62)
				int tmp8 = this->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(62)
				int _g = tmp8;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(62)
				while((true)){
					HX_STACK_LINE(62)
					bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(62)
					if ((tmp10)){
						HX_STACK_LINE(62)
						break;
					}
					HX_STACK_LINE(62)
					int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(62)
					int i = tmp11;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(65)
					::__hxcpp_memory_set_i16(this->bytes,(int(i) << int((int)1)),ints->__get((i + start)));
				}
			}
		}
		else{
			HX_STACK_LINE(72)
			Dynamic tmp4 = bufferOrArray;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(72)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::lime::utils::Int16Array >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(72)
			if ((tmp5)){
				HX_STACK_LINE(74)
				::lime::utils::Int16Array ints = ((::lime::utils::Int16Array)(bufferOrArray));		HX_STACK_VAR(ints,"ints");
				HX_STACK_LINE(75)
				bool tmp6 = (length != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(75)
				int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(75)
				if ((tmp6)){
					HX_STACK_LINE(75)
					tmp7 = length;
				}
				else{
					HX_STACK_LINE(75)
					tmp7 = (ints->length - start);
				}
				HX_STACK_LINE(75)
				this->length = tmp7;
				HX_STACK_LINE(77)
				int tmp8 = this->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(77)
				int tmp9 = (int(tmp8) << int((int)1));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(77)
				super::__construct(tmp9,null(),null());
				HX_STACK_LINE(83)
				{
					HX_STACK_LINE(83)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(83)
					int tmp10 = this->length;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(83)
					int _g = tmp10;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(83)
					while((true)){
						HX_STACK_LINE(83)
						bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(83)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(83)
						if ((tmp12)){
							HX_STACK_LINE(83)
							break;
						}
						HX_STACK_LINE(83)
						int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(83)
						int i = tmp13;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(86)
						::__hxcpp_memory_set_i16(this->bytes,(int(i) << int((int)1)),ints->__get((i + start)));
					}
				}
			}
			else{
				HX_STACK_LINE(95)
				Dynamic tmp6 = bufferOrArray;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(95)
				int tmp7 = start;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(95)
				bool tmp8 = (length != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(95)
				Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(95)
				if ((tmp8)){
					HX_STACK_LINE(95)
					tmp9 = (int(length) << int((int)1));
				}
				else{
					HX_STACK_LINE(95)
					tmp9 = null();
				}
				HX_STACK_LINE(95)
				super::__construct(tmp6,tmp7,tmp9);
				HX_STACK_LINE(97)
				int tmp10 = this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(97)
				int tmp11 = (int(tmp10) & int((int)1));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(97)
				bool tmp12 = (tmp11 > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(97)
				if ((tmp12)){
					HX_STACK_LINE(99)
					HX_STACK_DO_THROW(HX_HCSTRING("Invalid array size","\x51","\x8f","\x9a","\x6e"));
				}
				HX_STACK_LINE(103)
				int tmp13 = this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(103)
				int tmp14 = (int(tmp13) >> int((int)1));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(103)
				this->length = tmp14;
				HX_STACK_LINE(105)
				int tmp15 = this->length;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(105)
				int tmp16 = (int(tmp15) << int((int)1));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(105)
				int tmp17 = this->byteLength;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(105)
				bool tmp18 = (tmp16 != tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(105)
				if ((tmp18)){
					HX_STACK_LINE(107)
					HX_STACK_DO_THROW(HX_HCSTRING("Invalid length multiple","\x41","\x25","\x0f","\xe4"));
				}
			}
		}
	}
}
;
	return null();
}

//Int16Array_obj::~Int16Array_obj() { }

Dynamic Int16Array_obj::__CreateEmpty() { return  new Int16Array_obj; }
hx::ObjectPtr< Int16Array_obj > Int16Array_obj::__new(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length)
{  hx::ObjectPtr< Int16Array_obj > _result_ = new Int16Array_obj();
	_result_->__construct(bufferOrArray,__o_start,length);
	return _result_;}

Dynamic Int16Array_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Int16Array_obj > _result_ = new Int16Array_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Int16Array_obj::set( Dynamic bufferOrArray,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(0);
	HX_STACK_FRAME("lime.utils.Int16Array","set",0xa94661cf,"lime.utils.Int16Array.set","lime/utils/Int16Array.hx",116,0x65863181)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bufferOrArray,"bufferOrArray")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(118)
		Dynamic tmp = bufferOrArray;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		if ((tmp1)){
			HX_STACK_LINE(120)
			Array< int > ints = ((Array< int >)(bufferOrArray));		HX_STACK_VAR(ints,"ints");
			HX_STACK_LINE(122)
			{
				HX_STACK_LINE(122)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(122)
				int _g = ints->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(122)
				while((true)){
					HX_STACK_LINE(122)
					bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(122)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(122)
					if ((tmp3)){
						HX_STACK_LINE(122)
						break;
					}
					HX_STACK_LINE(122)
					int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(122)
					int i = tmp4;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(124)
					::__hxcpp_memory_set_i16(this->bytes,(((int((i + offset)) << int((int)1))) + this->byteOffset),ints->__get(i));
				}
			}
		}
		else{
			HX_STACK_LINE(128)
			Dynamic tmp2 = bufferOrArray;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(128)
			bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::lime::utils::Int16Array >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(128)
			if ((tmp3)){
				HX_STACK_LINE(130)
				::lime::utils::Int16Array ints = ((::lime::utils::Int16Array)(bufferOrArray));		HX_STACK_VAR(ints,"ints");
				HX_STACK_LINE(132)
				{
					HX_STACK_LINE(132)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(132)
					int _g = ints->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(132)
					while((true)){
						HX_STACK_LINE(132)
						bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(132)
						bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(132)
						if ((tmp5)){
							HX_STACK_LINE(132)
							break;
						}
						HX_STACK_LINE(132)
						int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(132)
						int i = tmp6;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(134)
						::__hxcpp_memory_set_i16(this->bytes,(((int((i + offset)) << int((int)1))) + this->byteOffset),ints->__get(i));
					}
				}
			}
			else{
				HX_STACK_LINE(140)
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid input buffer","\x3f","\x39","\x2d","\x2c"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Int16Array_obj,set,(void))

::lime::utils::Int16Array Int16Array_obj::subarray( int start,Dynamic end){
	HX_STACK_FRAME("lime.utils.Int16Array","subarray",0xe7540acc,"lime.utils.Int16Array.subarray","lime/utils/Int16Array.hx",147,0x65863181)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(149)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	if ((tmp)){
		HX_STACK_LINE(149)
		tmp1 = this->length;
	}
	else{
		HX_STACK_LINE(149)
		tmp1 = end;
	}
	HX_STACK_LINE(149)
	end = tmp1;
	HX_STACK_LINE(150)
	::lime::utils::ByteArray tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(150)
	int tmp3 = (int(start) << int((int)1));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(150)
	int tmp4 = (end - start);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(150)
	::lime::utils::Int16Array tmp5 = ::lime::utils::Int16Array_obj::__new(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(150)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(Int16Array_obj,subarray,return )

int Int16Array_obj::__get( int index){
	HX_STACK_FRAME("lime.utils.Int16Array","__get",0xc8f94ce3,"lime.utils.Int16Array.__get","lime/utils/Int16Array.hx",155,0x65863181)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(155)
	int tmp = ::__hxcpp_memory_get_i16(this->bytes,(((int(index) << int((int)1))) + this->byteOffset));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(155)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Int16Array_obj,__get,return )

Void Int16Array_obj::__set( int index,int value){
{
		HX_STACK_FRAME("lime.utils.Int16Array","__set",0xc90267ef,"lime.utils.Int16Array.__set","lime/utils/Int16Array.hx",156,0x65863181)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(156)
		::__hxcpp_memory_set_i16(this->bytes,(((int(index) << int((int)1))) + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Int16Array_obj,__set,(void))

int Int16Array_obj::BYTES_PER_ELEMENT;


Int16Array_obj::Int16Array_obj()
{
}

Dynamic Int16Array_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subarray") ) { return subarray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Int16Array_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Int16Array_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Int16Array_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Int16Array_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Int16Array_obj::BYTES_PER_ELEMENT,HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("subarray","\x19","\x54","\x81","\x07"),
	HX_HCSTRING("__get","\x76","\xe1","\x2a","\xf2"),
	HX_HCSTRING("__set","\x82","\xfc","\x33","\xf2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Int16Array_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Int16Array_obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Int16Array_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Int16Array_obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#endif

hx::Class Int16Array_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc"),
	::String(null()) };

void Int16Array_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.Int16Array","\x1b","\x4c","\x1f","\x0f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Int16Array_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Int16Array_obj >;
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

void Int16Array_obj::__boot()
{
	BYTES_PER_ELEMENT= (int)2;
}

} // end namespace lime
} // end namespace utils
