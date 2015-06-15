#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_GameInputEvent
#include <openfl/events/GameInputEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInput
#include <openfl/ui/GameInput.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputControl
#include <openfl/ui/GameInputControl.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputDevice
#include <openfl/ui/GameInputDevice.h>
#endif
namespace openfl{
namespace ui{

Void GameInput_obj::__construct()
{
HX_STACK_FRAME("openfl.ui.GameInput","new",0x178f028e,"openfl.ui.GameInput.new","openfl/ui/GameInput.hx",25,0x96cdaf42)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(27)
	super::__construct(null());
	HX_STACK_LINE(29)
	::openfl::ui::GameInput_obj::__instances->push(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//GameInput_obj::~GameInput_obj() { }

Dynamic GameInput_obj::__CreateEmpty() { return  new GameInput_obj; }
hx::ObjectPtr< GameInput_obj > GameInput_obj::__new()
{  hx::ObjectPtr< GameInput_obj > _result_ = new GameInput_obj();
	_result_->__construct();
	return _result_;}

Dynamic GameInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameInput_obj > _result_ = new GameInput_obj();
	_result_->__construct();
	return _result_;}

bool GameInput_obj::isAvailable;

int GameInput_obj::numDevices;

::haxe::ds::ObjectMap GameInput_obj::__devices;

Array< ::Dynamic > GameInput_obj::__instances;

::openfl::ui::GameInputDevice GameInput_obj::getDeviceAt( int index){
	HX_STACK_FRAME("openfl.ui.GameInput","getDeviceAt",0x22aaba0d,"openfl.ui.GameInput.getDeviceAt","openfl/ui/GameInput.hx",34,0x96cdaf42)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(36)
	::haxe::ds::IntMap tmp = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	if ((tmp2)){
		HX_STACK_LINE(38)
		::openfl::ui::GameInputDevice tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		{
			HX_STACK_LINE(38)
			::haxe::ds::IntMap tmp4 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(38)
			int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(38)
			::lime::ui::Gamepad tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(38)
			::lime::ui::Gamepad key = tmp6;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(38)
			::haxe::ds::ObjectMap tmp7 = ::openfl::ui::GameInput_obj::__devices;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(38)
			::lime::ui::Gamepad tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(38)
			tmp3 = tmp7->get(tmp8);
		}
		HX_STACK_LINE(38)
		return tmp3;
	}
	HX_STACK_LINE(42)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GameInput_obj,getDeviceAt,return )

Void GameInput_obj::__onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value){
{
		HX_STACK_FRAME("openfl.ui.GameInput","__onGamepadAxisMove",0x7bd40ec2,"openfl.ui.GameInput.__onGamepadAxisMove","openfl/ui/GameInput.hx",47,0x96cdaf42)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(49)
		::haxe::ds::ObjectMap tmp = ::openfl::ui::GameInput_obj::__devices;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		::lime::ui::Gamepad tmp1 = gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		::openfl::ui::GameInputDevice tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		::openfl::ui::GameInputDevice device = tmp2;		HX_STACK_VAR(device,"device");
		HX_STACK_LINE(51)
		bool tmp3 = device->enabled;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		if ((tmp3)){
			HX_STACK_LINE(53)
			int tmp4 = axis;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			bool tmp5 = device->__axis->exists(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			if ((tmp6)){
				HX_STACK_LINE(55)
				::openfl::ui::GameInputDevice tmp7 = device;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(55)
				int tmp8 = axis;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(55)
				::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(55)
				switch( (int)(tmp8)){
					case (int)0: {
						HX_STACK_LINE(55)
						tmp9 = HX_HCSTRING("LEFT_X","\xe0","\x72","\x4a","\x4c");
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(55)
						tmp9 = HX_HCSTRING("LEFT_Y","\xe1","\x72","\x4a","\x4c");
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(55)
						tmp9 = HX_HCSTRING("RIGHT_X","\xd5","\xfd","\x37","\x93");
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(55)
						tmp9 = HX_HCSTRING("RIGHT_Y","\xd6","\xfd","\x37","\x93");
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(55)
						tmp9 = HX_HCSTRING("TRIGGER_LEFT","\xce","\xcb","\x4a","\xf1");
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(55)
						tmp9 = HX_HCSTRING("TRIGGER_RIGHT","\x15","\x96","\x34","\xa7");
					}
					;break;
					default: {
						HX_STACK_LINE(55)
						::String tmp10 = (HX_HCSTRING("UNKNOWN (","\xf2","\x41","\x8b","\x8c") + axis);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(55)
						tmp9 = (tmp10 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
					}
				}
				HX_STACK_LINE(55)
				::String tmp10 = (HX_HCSTRING("AXIS_","\x9e","\x28","\x6e","\xa7") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(55)
				::openfl::ui::GameInputControl tmp11 = ::openfl::ui::GameInputControl_obj::__new(tmp7,tmp10,(int)-1,(int)1,null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(55)
				::openfl::ui::GameInputControl control = tmp11;		HX_STACK_VAR(control,"control");
				HX_STACK_LINE(56)
				int tmp12 = axis;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(56)
				::openfl::ui::GameInputControl tmp13 = control;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(56)
				device->__axis->set(tmp12,tmp13);
				HX_STACK_LINE(57)
				::openfl::ui::GameInputControl tmp14 = control;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(57)
				device->__controls->push(tmp14);
			}
			HX_STACK_LINE(61)
			int tmp7 = axis;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(61)
			::openfl::ui::GameInputControl tmp8 = device->__axis->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(61)
			::openfl::ui::GameInputControl control = tmp8;		HX_STACK_VAR(control,"control");
			HX_STACK_LINE(62)
			control->value = value;
			HX_STACK_LINE(63)
			::String tmp9 = ::openfl::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(63)
			::openfl::events::Event tmp10 = ::openfl::events::Event_obj::__new(tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(63)
			control->dispatchEvent(tmp10);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GameInput_obj,__onGamepadAxisMove,(void))

Void GameInput_obj::__onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("openfl.ui.GameInput","__onGamepadButtonDown",0xedf461e4,"openfl.ui.GameInput.__onGamepadButtonDown","openfl/ui/GameInput.hx",70,0x96cdaf42)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(72)
		::haxe::ds::ObjectMap tmp = ::openfl::ui::GameInput_obj::__devices;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		::lime::ui::Gamepad tmp1 = gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		::openfl::ui::GameInputDevice tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		::openfl::ui::GameInputDevice device = tmp2;		HX_STACK_VAR(device,"device");
		HX_STACK_LINE(74)
		bool tmp3 = device->enabled;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		if ((tmp3)){
			HX_STACK_LINE(76)
			int tmp4 = button;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(76)
			bool tmp5 = device->__button->exists(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(76)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(76)
			if ((tmp6)){
				HX_STACK_LINE(78)
				::openfl::ui::GameInputDevice tmp7 = device;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(78)
				int tmp8 = button;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(78)
				::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(78)
				switch( (int)(tmp8)){
					case (int)0: {
						HX_STACK_LINE(78)
						tmp9 = HX_HCSTRING("A","\x41","\x00","\x00","\x00");
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(78)
						tmp9 = HX_HCSTRING("B","\x42","\x00","\x00","\x00");
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(78)
						tmp9 = HX_HCSTRING("X","\x58","\x00","\x00","\x00");
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(78)
						tmp9 = HX_HCSTRING("Y","\x59","\x00","\x00","\x00");
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(78)
						tmp9 = HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b");
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(78)
						tmp9 = HX_HCSTRING("GUIDE","\x9c","\xf2","\xd9","\x19");
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(78)
						tmp9 = HX_HCSTRING("START","\x42","\xac","\xf9","\x01");
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(78)
						tmp9 = HX_HCSTRING("LEFT_STICK","\xb8","\x07","\xea","\x37");
					}
					;break;
					case (int)8: {
						HX_STACK_LINE(78)
						tmp9 = HX_HCSTRING("RIGHT_STICK","\x2d","\xb1","\x90","\x56");
					}
					;break;
					case (int)9: {
						HX_STACK_LINE(78)
						tmp9 = HX_HCSTRING("LEFT_SHOULDER","\xd8","\xb1","\xa9","\x01");
					}
					;break;
					case (int)10: {
						HX_STACK_LINE(78)
						tmp9 = HX_HCSTRING("RIGHT_SHOULDER","\x83","\x9f","\x28","\x11");
					}
					;break;
					case (int)11: {
						HX_STACK_LINE(78)
						tmp9 = HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2");
					}
					;break;
					case (int)12: {
						HX_STACK_LINE(78)
						tmp9 = HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87");
					}
					;break;
					case (int)13: {
						HX_STACK_LINE(78)
						tmp9 = HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c");
					}
					;break;
					case (int)14: {
						HX_STACK_LINE(78)
						tmp9 = HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3");
					}
					;break;
					default: {
						HX_STACK_LINE(78)
						::String tmp10 = (HX_HCSTRING("UNKNOWN (","\xf2","\x41","\x8b","\x8c") + button);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(78)
						tmp9 = (tmp10 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
					}
				}
				HX_STACK_LINE(78)
				::String tmp10 = (HX_HCSTRING("BUTTON_","\x2d","\x26","\x49","\x4a") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(78)
				::openfl::ui::GameInputControl tmp11 = ::openfl::ui::GameInputControl_obj::__new(tmp7,tmp10,(int)0,(int)1,null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(78)
				::openfl::ui::GameInputControl control = tmp11;		HX_STACK_VAR(control,"control");
				HX_STACK_LINE(79)
				int tmp12 = button;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(79)
				::openfl::ui::GameInputControl tmp13 = control;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(79)
				device->__button->set(tmp12,tmp13);
				HX_STACK_LINE(80)
				::openfl::ui::GameInputControl tmp14 = control;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(80)
				device->__controls->push(tmp14);
			}
			HX_STACK_LINE(84)
			int tmp7 = button;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(84)
			::openfl::ui::GameInputControl tmp8 = device->__button->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(84)
			::openfl::ui::GameInputControl control = tmp8;		HX_STACK_VAR(control,"control");
			HX_STACK_LINE(85)
			control->value = (int)1;
			HX_STACK_LINE(86)
			::String tmp9 = ::openfl::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(86)
			::openfl::events::Event tmp10 = ::openfl::events::Event_obj::__new(tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(86)
			control->dispatchEvent(tmp10);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameInput_obj,__onGamepadButtonDown,(void))

Void GameInput_obj::__onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("openfl.ui.GameInput","__onGamepadButtonUp",0x48120b5d,"openfl.ui.GameInput.__onGamepadButtonUp","openfl/ui/GameInput.hx",93,0x96cdaf42)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(95)
		::haxe::ds::ObjectMap tmp = ::openfl::ui::GameInput_obj::__devices;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		::lime::ui::Gamepad tmp1 = gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		::openfl::ui::GameInputDevice tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		::openfl::ui::GameInputDevice device = tmp2;		HX_STACK_VAR(device,"device");
		HX_STACK_LINE(97)
		bool tmp3 = device->enabled;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(97)
		if ((tmp3)){
			HX_STACK_LINE(99)
			int tmp4 = button;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(99)
			bool tmp5 = device->__button->exists(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(99)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(99)
			if ((tmp6)){
				HX_STACK_LINE(101)
				::openfl::ui::GameInputDevice tmp7 = device;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(101)
				int tmp8 = button;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(101)
				::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(101)
				switch( (int)(tmp8)){
					case (int)0: {
						HX_STACK_LINE(101)
						tmp9 = HX_HCSTRING("A","\x41","\x00","\x00","\x00");
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(101)
						tmp9 = HX_HCSTRING("B","\x42","\x00","\x00","\x00");
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(101)
						tmp9 = HX_HCSTRING("X","\x58","\x00","\x00","\x00");
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(101)
						tmp9 = HX_HCSTRING("Y","\x59","\x00","\x00","\x00");
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(101)
						tmp9 = HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b");
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(101)
						tmp9 = HX_HCSTRING("GUIDE","\x9c","\xf2","\xd9","\x19");
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(101)
						tmp9 = HX_HCSTRING("START","\x42","\xac","\xf9","\x01");
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(101)
						tmp9 = HX_HCSTRING("LEFT_STICK","\xb8","\x07","\xea","\x37");
					}
					;break;
					case (int)8: {
						HX_STACK_LINE(101)
						tmp9 = HX_HCSTRING("RIGHT_STICK","\x2d","\xb1","\x90","\x56");
					}
					;break;
					case (int)9: {
						HX_STACK_LINE(101)
						tmp9 = HX_HCSTRING("LEFT_SHOULDER","\xd8","\xb1","\xa9","\x01");
					}
					;break;
					case (int)10: {
						HX_STACK_LINE(101)
						tmp9 = HX_HCSTRING("RIGHT_SHOULDER","\x83","\x9f","\x28","\x11");
					}
					;break;
					case (int)11: {
						HX_STACK_LINE(101)
						tmp9 = HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2");
					}
					;break;
					case (int)12: {
						HX_STACK_LINE(101)
						tmp9 = HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87");
					}
					;break;
					case (int)13: {
						HX_STACK_LINE(101)
						tmp9 = HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c");
					}
					;break;
					case (int)14: {
						HX_STACK_LINE(101)
						tmp9 = HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3");
					}
					;break;
					default: {
						HX_STACK_LINE(101)
						::String tmp10 = (HX_HCSTRING("UNKNOWN (","\xf2","\x41","\x8b","\x8c") + button);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(101)
						tmp9 = (tmp10 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
					}
				}
				HX_STACK_LINE(101)
				::String tmp10 = (HX_HCSTRING("BUTTON_","\x2d","\x26","\x49","\x4a") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(101)
				::openfl::ui::GameInputControl tmp11 = ::openfl::ui::GameInputControl_obj::__new(tmp7,tmp10,(int)0,(int)1,null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(101)
				::openfl::ui::GameInputControl control = tmp11;		HX_STACK_VAR(control,"control");
				HX_STACK_LINE(102)
				int tmp12 = button;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(102)
				::openfl::ui::GameInputControl tmp13 = control;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(102)
				device->__button->set(tmp12,tmp13);
				HX_STACK_LINE(103)
				::openfl::ui::GameInputControl tmp14 = control;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(103)
				device->__controls->push(tmp14);
			}
			HX_STACK_LINE(107)
			int tmp7 = button;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(107)
			::openfl::ui::GameInputControl tmp8 = device->__button->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(107)
			::openfl::ui::GameInputControl control = tmp8;		HX_STACK_VAR(control,"control");
			HX_STACK_LINE(108)
			control->value = (int)0;
			HX_STACK_LINE(109)
			::String tmp9 = ::openfl::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(109)
			::openfl::events::Event tmp10 = ::openfl::events::Event_obj::__new(tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(109)
			control->dispatchEvent(tmp10);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameInput_obj,__onGamepadButtonUp,(void))

Void GameInput_obj::__onGamepadConnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("openfl.ui.GameInput","__onGamepadConnect",0xce3c5b7a,"openfl.ui.GameInput.__onGamepadConnect","openfl/ui/GameInput.hx",116,0x96cdaf42)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(118)
		int tmp = gamepad->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		::String tmp1 = ::lime::ui::Gamepad_obj::lime_gamepad_get_device_guid(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		int tmp2 = gamepad->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(118)
		::String tmp3 = ::lime::ui::Gamepad_obj::lime_gamepad_get_device_name(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(118)
		::openfl::ui::GameInputDevice tmp4 = ::openfl::ui::GameInputDevice_obj::__new(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(118)
		::openfl::ui::GameInputDevice device = tmp4;		HX_STACK_VAR(device,"device");
		HX_STACK_LINE(119)
		::haxe::ds::ObjectMap tmp5 = ::openfl::ui::GameInput_obj::__devices;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(119)
		::lime::ui::Gamepad tmp6 = gamepad;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(119)
		::openfl::ui::GameInputDevice tmp7 = device;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(119)
		tmp5->set(tmp6,tmp7);
		HX_STACK_LINE(120)
		::haxe::ds::ObjectMap tmp8 = ::openfl::ui::GameInput_obj::__devices;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(120)
		Dynamic tmp9 = ((Dynamic)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(120)
		int tmp10 = ::Lambda_obj::count(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(120)
		::openfl::ui::GameInput_obj::numDevices = tmp10;
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(122)
			Array< ::Dynamic > _g1 = ::openfl::ui::GameInput_obj::__instances;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(122)
			while((true)){
				HX_STACK_LINE(122)
				bool tmp11 = (_g < _g1->length);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(122)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(122)
				if ((tmp12)){
					HX_STACK_LINE(122)
					break;
				}
				HX_STACK_LINE(122)
				::openfl::ui::GameInput tmp13 = _g1->__get(_g).StaticCast< ::openfl::ui::GameInput >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(122)
				::openfl::ui::GameInput instance = tmp13;		HX_STACK_VAR(instance,"instance");
				HX_STACK_LINE(122)
				++(_g);
				HX_STACK_LINE(124)
				::String tmp14 = ::openfl::events::GameInputEvent_obj::DEVICE_ADDED;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(124)
				::openfl::ui::GameInputDevice tmp15 = device;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(124)
				::openfl::events::GameInputEvent tmp16 = ::openfl::events::GameInputEvent_obj::__new(tmp14,null(),null(),tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(124)
				instance->dispatchEvent(tmp16);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GameInput_obj,__onGamepadConnect,(void))

Void GameInput_obj::__onGamepadDisconnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("openfl.ui.GameInput","__onGamepadDisconnect",0xaad45ecc,"openfl.ui.GameInput.__onGamepadDisconnect","openfl/ui/GameInput.hx",131,0x96cdaf42)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(133)
		::haxe::ds::ObjectMap tmp = ::openfl::ui::GameInput_obj::__devices;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		::lime::ui::Gamepad tmp1 = gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		::openfl::ui::GameInputDevice tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		::openfl::ui::GameInputDevice device = tmp2;		HX_STACK_VAR(device,"device");
		HX_STACK_LINE(135)
		bool tmp3 = (device != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(135)
		if ((tmp3)){
			HX_STACK_LINE(137)
			::haxe::ds::ObjectMap tmp4 = ::openfl::ui::GameInput_obj::__devices;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(137)
			::lime::ui::Gamepad tmp5 = gamepad;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(137)
			tmp4->remove(tmp5);
			HX_STACK_LINE(138)
			::haxe::ds::ObjectMap tmp6 = ::openfl::ui::GameInput_obj::__devices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(138)
			Dynamic tmp7 = ((Dynamic)(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(138)
			int tmp8 = ::Lambda_obj::count(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(138)
			::openfl::ui::GameInput_obj::numDevices = tmp8;
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(140)
				Array< ::Dynamic > _g1 = ::openfl::ui::GameInput_obj::__instances;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(140)
				while((true)){
					HX_STACK_LINE(140)
					bool tmp9 = (_g < _g1->length);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(140)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(140)
					if ((tmp10)){
						HX_STACK_LINE(140)
						break;
					}
					HX_STACK_LINE(140)
					::openfl::ui::GameInput tmp11 = _g1->__get(_g).StaticCast< ::openfl::ui::GameInput >();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(140)
					::openfl::ui::GameInput instance = tmp11;		HX_STACK_VAR(instance,"instance");
					HX_STACK_LINE(140)
					++(_g);
					HX_STACK_LINE(142)
					::String tmp12 = ::openfl::events::GameInputEvent_obj::DEVICE_REMOVED;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(142)
					::openfl::ui::GameInputDevice tmp13 = device;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(142)
					::openfl::events::GameInputEvent tmp14 = ::openfl::events::GameInputEvent_obj::__new(tmp12,null(),null(),tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(142)
					instance->dispatchEvent(tmp14);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GameInput_obj,__onGamepadDisconnect,(void))


GameInput_obj::GameInput_obj()
{
}

bool GameInput_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"__devices") ) { outValue = __devices; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numDevices") ) { outValue = numDevices; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isAvailable") ) { outValue = isAvailable; return true;  }
		if (HX_FIELD_EQ(inName,"__instances") ) { outValue = __instances; return true;  }
		if (HX_FIELD_EQ(inName,"getDeviceAt") ) { outValue = getDeviceAt_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__onGamepadConnect") ) { outValue = __onGamepadConnect_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__onGamepadAxisMove") ) { outValue = __onGamepadAxisMove_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__onGamepadButtonUp") ) { outValue = __onGamepadButtonUp_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__onGamepadButtonDown") ) { outValue = __onGamepadButtonDown_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__onGamepadDisconnect") ) { outValue = __onGamepadDisconnect_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &GameInput_obj::isAvailable,HX_HCSTRING("isAvailable","\x7f","\x10","\x04","\x56")},
	{hx::fsInt,(void *) &GameInput_obj::numDevices,HX_HCSTRING("numDevices","\x77","\x65","\x89","\x07")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(void *) &GameInput_obj::__devices,HX_HCSTRING("__devices","\xfd","\x77","\xb7","\x58")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &GameInput_obj::__instances,HX_HCSTRING("__instances","\x1e","\xcc","\x46","\x79")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameInput_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GameInput_obj::isAvailable,"isAvailable");
	HX_MARK_MEMBER_NAME(GameInput_obj::numDevices,"numDevices");
	HX_MARK_MEMBER_NAME(GameInput_obj::__devices,"__devices");
	HX_MARK_MEMBER_NAME(GameInput_obj::__instances,"__instances");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameInput_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GameInput_obj::isAvailable,"isAvailable");
	HX_VISIT_MEMBER_NAME(GameInput_obj::numDevices,"numDevices");
	HX_VISIT_MEMBER_NAME(GameInput_obj::__devices,"__devices");
	HX_VISIT_MEMBER_NAME(GameInput_obj::__instances,"__instances");
};

#endif

hx::Class GameInput_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("isAvailable","\x7f","\x10","\x04","\x56"),
	HX_HCSTRING("numDevices","\x77","\x65","\x89","\x07"),
	HX_HCSTRING("__devices","\xfd","\x77","\xb7","\x58"),
	HX_HCSTRING("__instances","\x1e","\xcc","\x46","\x79"),
	HX_HCSTRING("getDeviceAt","\xdf","\xa9","\x8c","\xca"),
	HX_HCSTRING("__onGamepadAxisMove","\x94","\x20","\xc5","\xd7"),
	HX_HCSTRING("__onGamepadButtonDown","\x36","\x0c","\xab","\xf5"),
	HX_HCSTRING("__onGamepadButtonUp","\x2f","\x1d","\x03","\xa4"),
	HX_HCSTRING("__onGamepadConnect","\xe8","\xe9","\x67","\x58"),
	HX_HCSTRING("__onGamepadDisconnect","\x1e","\x09","\x8b","\xb2"),
	::String(null()) };

void GameInput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.ui.GameInput","\x9c","\x63","\x63","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GameInput_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GameInput_obj >;
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

void GameInput_obj::__boot()
{
	isAvailable= true;
	numDevices= (int)0;
struct _Function_0_1{
	inline static ::haxe::ds::ObjectMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/ui/GameInput.hx",21,0x96cdaf42)
		{
			HX_STACK_LINE(21)
			::haxe::ds::ObjectMap tmp = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(21)
			::haxe::ds::ObjectMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(21)
			return tmp1;
		}
		return null();
	}
};
	__devices= _Function_0_1::Block();
	__instances= Array_obj< ::Dynamic >::__new();
}

} // end namespace openfl
} // end namespace ui
