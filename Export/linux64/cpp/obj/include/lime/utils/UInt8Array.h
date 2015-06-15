#ifndef INCLUDED_lime_utils_UInt8Array
#define INCLUDED_lime_utils_UInt8Array

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
HX_DECLARE_CLASS2(lime,utils,UInt8Array)
namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  UInt8Array_obj : public ::lime::utils::ArrayBufferView_obj{
	public:
		typedef ::lime::utils::ArrayBufferView_obj super;
		typedef UInt8Array_obj OBJ_;
		UInt8Array_obj();
		Void __construct(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.utils.UInt8Array")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< UInt8Array_obj > __new(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UInt8Array_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("UInt8Array","\x5b","\xa9","\xb0","\x87"); }

		static void __boot();
		typedef int __array_access;
		int length;
		virtual Void set( Dynamic bufferOrArray,hx::Null< int >  offset);
		Dynamic set_dyn();

		virtual ::lime::utils::UInt8Array subarray( int start,Dynamic end);
		Dynamic subarray_dyn();

		virtual int __get( int index);
		Dynamic __get_dyn();

		virtual Void __set( int index,int value);
		Dynamic __set_dyn();

		static int BYTES_PER_ELEMENT;
};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_UInt8Array */ 
