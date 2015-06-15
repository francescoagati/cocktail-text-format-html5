#ifndef INCLUDED_lime_ui_Gamepad
#define INCLUDED_lime_ui_Gamepad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(lime,ui,Gamepad)
namespace lime{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  Gamepad_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Gamepad_obj OBJ_;
		Gamepad_obj();
		Void __construct(int id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.ui.Gamepad")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Gamepad_obj > __new(int id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Gamepad_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Gamepad","\x81","\x08","\xd7","\x56"); }

		static void __boot();
		bool connected;
		int id;
		virtual ::String get_guid( );
		Dynamic get_guid_dyn();

		virtual ::String get_name( );
		Dynamic get_name_dyn();

		static ::haxe::ds::IntMap devices;
		static Dynamic lime_gamepad_get_device_guid;
		static Dynamic &lime_gamepad_get_device_guid_dyn() { return lime_gamepad_get_device_guid;}
		static Dynamic lime_gamepad_get_device_name;
		static Dynamic &lime_gamepad_get_device_name_dyn() { return lime_gamepad_get_device_name;}
};

} // end namespace lime
} // end namespace ui

#endif /* INCLUDED_lime_ui_Gamepad */ 
