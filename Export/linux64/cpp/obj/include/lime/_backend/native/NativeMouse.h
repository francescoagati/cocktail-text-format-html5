#ifndef INCLUDED_lime__backend_native_NativeMouse
#define INCLUDED_lime__backend_native_NativeMouse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_backend,native,NativeMouse)
HX_DECLARE_CLASS2(lime,ui,MouseCursor)
HX_DECLARE_CLASS2(lime,ui,Window)
namespace lime{
namespace _backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES  NativeMouse_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NativeMouse_obj OBJ_;
		NativeMouse_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime._backend.native.NativeMouse")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NativeMouse_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NativeMouse_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("NativeMouse","\xee","\x30","\x93","\x57"); }

		static void __boot();
		static ::lime::ui::MouseCursor __cursor;
		static bool __hidden;
		static bool __lock;
		static Void hide( );
		static Dynamic hide_dyn();

		static Void show( );
		static Dynamic show_dyn();

		static Void warp( int x,int y,::lime::ui::Window window);
		static Dynamic warp_dyn();

		static ::lime::ui::MouseCursor get_cursor( );
		static Dynamic get_cursor_dyn();

		static ::lime::ui::MouseCursor set_cursor( ::lime::ui::MouseCursor value);
		static Dynamic set_cursor_dyn();

		static bool get_lock( );
		static Dynamic get_lock_dyn();

		static bool set_lock( bool value);
		static Dynamic set_lock_dyn();

		static Dynamic lime_mouse_hide;
		static Dynamic &lime_mouse_hide_dyn() { return lime_mouse_hide;}
		static Dynamic lime_mouse_set_cursor;
		static Dynamic &lime_mouse_set_cursor_dyn() { return lime_mouse_set_cursor;}
		static Dynamic lime_mouse_set_lock;
		static Dynamic &lime_mouse_set_lock_dyn() { return lime_mouse_set_lock;}
		static Dynamic lime_mouse_show;
		static Dynamic &lime_mouse_show_dyn() { return lime_mouse_show;}
		static Dynamic lime_mouse_warp;
		static Dynamic &lime_mouse_warp_dyn() { return lime_mouse_warp;}
};

} // end namespace lime
} // end namespace _backend
} // end namespace native

#endif /* INCLUDED_lime__backend_native_NativeMouse */ 
