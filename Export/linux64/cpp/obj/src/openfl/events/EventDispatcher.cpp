#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_EventPhase
#include <openfl/events/EventPhase.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events__EventDispatcher_Listener
#include <openfl/events/_EventDispatcher/Listener.h>
#endif
namespace openfl{
namespace events{

Void EventDispatcher_obj::__construct(::openfl::events::IEventDispatcher target)
{
HX_STACK_FRAME("openfl.events.EventDispatcher","new",0xd41245fc,"openfl.events.EventDispatcher.new","openfl/events/EventDispatcher.hx",82,0xe2270714)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
{
	HX_STACK_LINE(84)
	bool tmp = (target != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	if ((tmp)){
		HX_STACK_LINE(86)
		this->__targetDispatcher = target;
	}
}
;
	return null();
}

//EventDispatcher_obj::~EventDispatcher_obj() { }

Dynamic EventDispatcher_obj::__CreateEmpty() { return  new EventDispatcher_obj; }
hx::ObjectPtr< EventDispatcher_obj > EventDispatcher_obj::__new(::openfl::events::IEventDispatcher target)
{  hx::ObjectPtr< EventDispatcher_obj > _result_ = new EventDispatcher_obj();
	_result_->__construct(target);
	return _result_;}

Dynamic EventDispatcher_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EventDispatcher_obj > _result_ = new EventDispatcher_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *EventDispatcher_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::events::IEventDispatcher_obj)) return operator ::openfl::events::IEventDispatcher_obj *();
	return super::__ToInterface(inType);
}

EventDispatcher_obj::operator ::openfl::events::IEventDispatcher_obj *()
	{ return new ::openfl::events::IEventDispatcher_delegate_< EventDispatcher_obj >(this); }
Void EventDispatcher_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("openfl.events.EventDispatcher","addEventListener",0xf79f44b1,"openfl.events.EventDispatcher.addEventListener","openfl/events/EventDispatcher.hx",186,0xe2270714)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
		HX_STACK_LINE(188)
		::haxe::ds::StringMap tmp = this->__eventMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(188)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(188)
		if ((tmp1)){
			HX_STACK_LINE(190)
			::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(190)
			this->__dispatching = tmp2;
			HX_STACK_LINE(191)
			::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(191)
			this->__eventMap = tmp3;
			HX_STACK_LINE(192)
			::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(192)
			this->__newEventMap = tmp4;
		}
		HX_STACK_LINE(196)
		::haxe::ds::StringMap tmp2 = this->__eventMap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(196)
		bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		if ((tmp5)){
			HX_STACK_LINE(198)
			Array< ::Dynamic > list = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(list,"list");
			HX_STACK_LINE(199)
			::openfl::events::_EventDispatcher::Listener tmp6 = ::openfl::events::_EventDispatcher::Listener_obj::__new(listener,useCapture,priority);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(199)
			list->push(tmp6);
			HX_STACK_LINE(200)
			::haxe::ds::StringMap tmp7 = this->__eventMap;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(200)
			::String tmp8 = type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(200)
			tmp7->set(tmp8,list);
		}
		else{
			HX_STACK_LINE(204)
			Array< ::Dynamic > list;		HX_STACK_VAR(list,"list");
			HX_STACK_LINE(206)
			::haxe::ds::StringMap tmp6 = this->__dispatching;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(206)
			::String tmp7 = type;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(206)
			Dynamic tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(206)
			Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(206)
			bool tmp10 = (tmp9 == true);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(206)
			if ((tmp10)){
				HX_STACK_LINE(208)
				::haxe::ds::StringMap tmp11 = this->__newEventMap;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(208)
				::String tmp12 = type;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(208)
				bool tmp13 = tmp11->exists(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(208)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(208)
				if ((tmp14)){
					HX_STACK_LINE(210)
					::haxe::ds::StringMap tmp15 = this->__eventMap;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(210)
					::String tmp16 = type;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(210)
					list = ((Array< ::Dynamic >)(tmp15->get(tmp16)))->copy();
					HX_STACK_LINE(211)
					::haxe::ds::StringMap tmp17 = this->__newEventMap;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(211)
					::String tmp18 = type;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(211)
					tmp17->set(tmp18,list);
				}
				else{
					HX_STACK_LINE(215)
					::haxe::ds::StringMap tmp15 = this->__newEventMap;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(215)
					::String tmp16 = type;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(215)
					list = ((Array< ::Dynamic >)(tmp15->get(tmp16)));
				}
			}
			else{
				HX_STACK_LINE(221)
				::haxe::ds::StringMap tmp11 = this->__eventMap;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(221)
				::String tmp12 = type;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(221)
				list = ((Array< ::Dynamic >)(tmp11->get(tmp12)));
			}
			HX_STACK_LINE(225)
			{
				HX_STACK_LINE(225)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(225)
				int _g = list->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(225)
				while((true)){
					HX_STACK_LINE(225)
					bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(225)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(225)
					if ((tmp12)){
						HX_STACK_LINE(225)
						break;
					}
					HX_STACK_LINE(225)
					int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(225)
					int i = tmp13;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(227)
					::openfl::events::_EventDispatcher::Listener tmp14 = list->__get(i).StaticCast< ::openfl::events::_EventDispatcher::Listener >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(227)
					Dynamic tmp15 = tmp14->callback;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(227)
					Dynamic tmp16 = listener;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(227)
					bool tmp17 = ::Reflect_obj::compareMethods(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(227)
					if ((tmp17)){
						HX_STACK_LINE(227)
						return null();
					}
				}
			}
			HX_STACK_LINE(231)
			::openfl::events::_EventDispatcher::Listener tmp11 = ::openfl::events::_EventDispatcher::Listener_obj::__new(listener,useCapture,priority);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(231)
			list->push(tmp11);
			HX_STACK_LINE(232)
			Dynamic tmp12 = ::openfl::events::EventDispatcher_obj::__sortByPriority_dyn();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(232)
			list->sort(tmp12);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(EventDispatcher_obj,addEventListener,(void))

bool EventDispatcher_obj::dispatchEvent( ::openfl::events::Event event){
	HX_STACK_FRAME("openfl.events.EventDispatcher","dispatchEvent",0x2230d79c,"openfl.events.EventDispatcher.dispatchEvent","openfl/events/EventDispatcher.hx",254,0xe2270714)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(256)
	::haxe::ds::StringMap tmp = this->__eventMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(256)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(256)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(256)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(256)
	if ((tmp2)){
		HX_STACK_LINE(256)
		tmp3 = (event == null());
	}
	else{
		HX_STACK_LINE(256)
		tmp3 = true;
	}
	HX_STACK_LINE(256)
	if ((tmp3)){
		HX_STACK_LINE(256)
		return false;
	}
	HX_STACK_LINE(258)
	::String type = event->type;		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(260)
	::haxe::ds::StringMap tmp4 = this->__eventMap;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(260)
	::String tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(260)
	Array< ::Dynamic > list = ((Array< ::Dynamic >)(tmp4->get(tmp5)));		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(261)
	bool tmp6 = (list == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(261)
	if ((tmp6)){
		HX_STACK_LINE(261)
		return false;
	}
	HX_STACK_LINE(263)
	::haxe::ds::StringMap tmp7 = this->__dispatching;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(263)
	::String tmp8 = type;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(263)
	tmp7->set(tmp8,true);
	HX_STACK_LINE(265)
	bool tmp9 = (event->target == null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(265)
	if ((tmp9)){
		HX_STACK_LINE(267)
		::openfl::events::IEventDispatcher tmp10 = this->__targetDispatcher;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(267)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(267)
		if ((tmp11)){
			HX_STACK_LINE(269)
			::openfl::events::IEventDispatcher tmp12 = this->__targetDispatcher;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(269)
			event->target = tmp12;
		}
		else{
			HX_STACK_LINE(273)
			event->target = hx::ObjectPtr<OBJ_>(this);
		}
	}
	HX_STACK_LINE(279)
	event->currentTarget = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(281)
	bool tmp10 = (event->eventPhase == ::openfl::events::EventPhase_obj::CAPTURING_PHASE);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(281)
	bool capture = tmp10;		HX_STACK_VAR(capture,"capture");
	HX_STACK_LINE(282)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(283)
	::openfl::events::_EventDispatcher::Listener listener;		HX_STACK_VAR(listener,"listener");
	HX_STACK_LINE(285)
	while((true)){
		HX_STACK_LINE(285)
		bool tmp11 = (index < list->length);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(285)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(285)
		if ((tmp12)){
			HX_STACK_LINE(285)
			break;
		}
		HX_STACK_LINE(287)
		::openfl::events::_EventDispatcher::Listener tmp13 = list->__get(index).StaticCast< ::openfl::events::_EventDispatcher::Listener >();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(287)
		listener = tmp13;
		HX_STACK_LINE(289)
		bool tmp14 = (listener->useCapture == capture);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(289)
		if ((tmp14)){
			HX_STACK_LINE(292)
			::openfl::events::Event tmp15 = event;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(292)
			listener->callback(tmp15);
			HX_STACK_LINE(294)
			bool tmp16 = event->__isCancelledNow;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(294)
			if ((tmp16)){
				HX_STACK_LINE(296)
				break;
			}
		}
		HX_STACK_LINE(302)
		::openfl::events::_EventDispatcher::Listener tmp15 = listener;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(302)
		::openfl::events::_EventDispatcher::Listener tmp16 = list->__get(index).StaticCast< ::openfl::events::_EventDispatcher::Listener >();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(302)
		bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(302)
		if ((tmp17)){
			HX_STACK_LINE(304)
			(index)++;
		}
	}
	HX_STACK_LINE(310)
	::haxe::ds::StringMap tmp11 = this->__newEventMap;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(310)
	bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(310)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(310)
	if ((tmp12)){
		HX_STACK_LINE(310)
		::haxe::ds::StringMap tmp14 = this->__newEventMap;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(310)
		::haxe::ds::StringMap tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(310)
		::String tmp16 = type;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(310)
		::String tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(310)
		tmp13 = tmp15->exists(tmp17);
	}
	else{
		HX_STACK_LINE(310)
		tmp13 = false;
	}
	HX_STACK_LINE(310)
	if ((tmp13)){
		HX_STACK_LINE(312)
		::haxe::ds::StringMap tmp14 = this->__newEventMap;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(312)
		::String tmp15 = type;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(312)
		Array< ::Dynamic > list1 = ((Array< ::Dynamic >)(tmp14->get(tmp15)));		HX_STACK_VAR(list1,"list1");
		HX_STACK_LINE(314)
		bool tmp16 = (list1->length > (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(314)
		if ((tmp16)){
			HX_STACK_LINE(316)
			::haxe::ds::StringMap tmp17 = this->__eventMap;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(316)
			::String tmp18 = type;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(316)
			tmp17->set(tmp18,list1);
		}
		else{
			HX_STACK_LINE(320)
			::haxe::ds::StringMap tmp17 = this->__eventMap;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(320)
			::String tmp18 = type;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(320)
			tmp17->remove(tmp18);
		}
		HX_STACK_LINE(324)
		::haxe::ds::StringMap tmp17 = this->__eventMap;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(324)
		Dynamic tmp18 = tmp17->iterator();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(324)
		bool tmp19 = tmp18->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(324)
		bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(324)
		if ((tmp20)){
			HX_STACK_LINE(326)
			this->__eventMap = null();
			HX_STACK_LINE(327)
			this->__newEventMap = null();
		}
		HX_STACK_LINE(331)
		::haxe::ds::StringMap tmp21 = this->__newEventMap;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(331)
		::String tmp22 = type;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(331)
		tmp21->remove(tmp22);
	}
	HX_STACK_LINE(335)
	::haxe::ds::StringMap tmp14 = this->__dispatching;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(335)
	::String tmp15 = event->type;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(335)
	tmp14->set(tmp15,false);
	HX_STACK_LINE(337)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,dispatchEvent,return )

bool EventDispatcher_obj::hasEventListener( ::String type){
	HX_STACK_FRAME("openfl.events.EventDispatcher","hasEventListener",0x132567d8,"openfl.events.EventDispatcher.hasEventListener","openfl/events/EventDispatcher.hx",362,0xe2270714)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(364)
	::haxe::ds::StringMap tmp = this->__eventMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(364)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(364)
	if ((tmp1)){
		HX_STACK_LINE(364)
		return false;
	}
	HX_STACK_LINE(365)
	::haxe::ds::StringMap tmp2 = this->__eventMap;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(365)
	::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(365)
	bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(365)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,hasEventListener,return )

Void EventDispatcher_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_capture){
bool capture = __o_capture.Default(false);
	HX_STACK_FRAME("openfl.events.EventDispatcher","removeEventListener",0x40c1f566,"openfl.events.EventDispatcher.removeEventListener","openfl/events/EventDispatcher.hx",385,0xe2270714)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(capture,"capture")
{
		HX_STACK_LINE(387)
		::haxe::ds::StringMap tmp = this->__eventMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(387)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(387)
		if ((tmp1)){
			HX_STACK_LINE(387)
			return null();
		}
		HX_STACK_LINE(389)
		::haxe::ds::StringMap tmp2 = this->__eventMap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(389)
		::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(389)
		Array< ::Dynamic > list = ((Array< ::Dynamic >)(tmp2->get(tmp3)));		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(390)
		bool tmp4 = (list == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(390)
		if ((tmp4)){
			HX_STACK_LINE(390)
			return null();
		}
		HX_STACK_LINE(392)
		::haxe::ds::StringMap tmp5 = this->__dispatching;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(392)
		::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(392)
		Dynamic tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(392)
		Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(392)
		bool tmp9 = (tmp8 == true);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(392)
		if ((tmp9)){
			HX_STACK_LINE(394)
			::haxe::ds::StringMap tmp10 = this->__newEventMap;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(394)
			::String tmp11 = type;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(394)
			bool tmp12 = tmp10->exists(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(394)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(394)
			if ((tmp13)){
				HX_STACK_LINE(396)
				::haxe::ds::StringMap tmp14 = this->__eventMap;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(396)
				::String tmp15 = type;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(396)
				list = ((Array< ::Dynamic >)(tmp14->get(tmp15)))->copy();
				HX_STACK_LINE(397)
				::haxe::ds::StringMap tmp16 = this->__newEventMap;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(397)
				::String tmp17 = type;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(397)
				tmp16->set(tmp17,list);
			}
			else{
				HX_STACK_LINE(401)
				::haxe::ds::StringMap tmp14 = this->__newEventMap;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(401)
				::String tmp15 = type;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(401)
				list = ((Array< ::Dynamic >)(tmp14->get(tmp15)));
			}
		}
		HX_STACK_LINE(407)
		{
			HX_STACK_LINE(407)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(407)
			int _g = list->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(407)
			while((true)){
				HX_STACK_LINE(407)
				bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(407)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(407)
				if ((tmp11)){
					HX_STACK_LINE(407)
					break;
				}
				HX_STACK_LINE(407)
				int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(407)
				int i = tmp12;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(409)
				::openfl::events::_EventDispatcher::Listener tmp13 = list->__get(i).StaticCast< ::openfl::events::_EventDispatcher::Listener >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(409)
				Dynamic tmp14 = listener;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(409)
				bool tmp15 = capture;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(409)
				bool tmp16 = tmp13->match(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(409)
				if ((tmp16)){
					HX_STACK_LINE(411)
					int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(411)
					list->splice(tmp17,(int)1);
					HX_STACK_LINE(412)
					break;
				}
			}
		}
		HX_STACK_LINE(418)
		bool tmp10 = (list->length == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(418)
		if ((tmp10)){
			HX_STACK_LINE(420)
			::haxe::ds::StringMap tmp11 = this->__eventMap;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(420)
			::String tmp12 = type;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(420)
			tmp11->remove(tmp12);
		}
		HX_STACK_LINE(424)
		::haxe::ds::StringMap tmp11 = this->__eventMap;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(424)
		Dynamic tmp12 = tmp11->iterator();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(424)
		bool tmp13 = tmp12->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(424)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(424)
		if ((tmp14)){
			HX_STACK_LINE(426)
			this->__eventMap = null();
			HX_STACK_LINE(427)
			this->__newEventMap = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(EventDispatcher_obj,removeEventListener,(void))

::String EventDispatcher_obj::toString( ){
	HX_STACK_FRAME("openfl.events.EventDispatcher","toString",0x34d48590,"openfl.events.EventDispatcher.toString","openfl/events/EventDispatcher.hx",434,0xe2270714)
	HX_STACK_THIS(this)
	HX_STACK_LINE(436)
	::hx::Class tmp = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(436)
	::String tmp1 = ::Type_obj::getClassName(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(436)
	::String full = tmp1;		HX_STACK_VAR(full,"full");
	HX_STACK_LINE(437)
	::String tmp2 = full.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"))->pop();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(437)
	::String _short = tmp2;		HX_STACK_VAR(_short,"short");
	HX_STACK_LINE(439)
	::String tmp3 = (HX_HCSTRING("[object ","\x86","\xf9","\x3d","\xd7") + _short);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(439)
	::String tmp4 = (tmp3 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(439)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,toString,return )

bool EventDispatcher_obj::willTrigger( ::String type){
	HX_STACK_FRAME("openfl.events.EventDispatcher","willTrigger",0x7a1765e2,"openfl.events.EventDispatcher.willTrigger","openfl/events/EventDispatcher.hx",464,0xe2270714)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(466)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(466)
	bool tmp1 = this->hasEventListener(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(466)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,willTrigger,return )

int EventDispatcher_obj::__sortByPriority( ::openfl::events::_EventDispatcher::Listener l1,::openfl::events::_EventDispatcher::Listener l2){
	HX_STACK_FRAME("openfl.events.EventDispatcher","__sortByPriority",0x7512cd5d,"openfl.events.EventDispatcher.__sortByPriority","openfl/events/EventDispatcher.hx",471,0xe2270714)
	HX_STACK_ARG(l1,"l1")
	HX_STACK_ARG(l2,"l2")
	HX_STACK_LINE(473)
	bool tmp = (l1->priority == l2->priority);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(473)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(473)
	if ((tmp)){
		HX_STACK_LINE(473)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(473)
		bool tmp2 = (l1->priority > l2->priority);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(473)
		if ((tmp2)){
			HX_STACK_LINE(473)
			tmp1 = (int)-1;
		}
		else{
			HX_STACK_LINE(473)
			tmp1 = (int)1;
		}
	}
	HX_STACK_LINE(473)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(EventDispatcher_obj,__sortByPriority,return )


EventDispatcher_obj::EventDispatcher_obj()
{
}

void EventDispatcher_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventDispatcher);
	HX_MARK_MEMBER_NAME(__dispatching,"__dispatching");
	HX_MARK_MEMBER_NAME(__targetDispatcher,"__targetDispatcher");
	HX_MARK_MEMBER_NAME(__eventMap,"__eventMap");
	HX_MARK_MEMBER_NAME(__newEventMap,"__newEventMap");
	HX_MARK_END_CLASS();
}

void EventDispatcher_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__dispatching,"__dispatching");
	HX_VISIT_MEMBER_NAME(__targetDispatcher,"__targetDispatcher");
	HX_VISIT_MEMBER_NAME(__eventMap,"__eventMap");
	HX_VISIT_MEMBER_NAME(__newEventMap,"__newEventMap");
}

Dynamic EventDispatcher_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__eventMap") ) { return __eventMap; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"willTrigger") ) { return willTrigger_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__dispatching") ) { return __dispatching; }
		if (HX_FIELD_EQ(inName,"__newEventMap") ) { return __newEventMap; }
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return dispatchEvent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"hasEventListener") ) { return hasEventListener_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__targetDispatcher") ) { return __targetDispatcher; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return removeEventListener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool EventDispatcher_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"__sortByPriority") ) { outValue = __sortByPriority_dyn(); return true;  }
	}
	return false;
}

Dynamic EventDispatcher_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__eventMap") ) { __eventMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__dispatching") ) { __dispatching=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__newEventMap") ) { __newEventMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__targetDispatcher") ) { __targetDispatcher=inValue.Cast< ::openfl::events::IEventDispatcher >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool EventDispatcher_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void EventDispatcher_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__dispatching","\x48","\xef","\x2a","\xaf"));
	outFields->push(HX_HCSTRING("__targetDispatcher","\x78","\x03","\x5d","\x88"));
	outFields->push(HX_HCSTRING("__eventMap","\xc2","\xf9","\x0a","\x64"));
	outFields->push(HX_HCSTRING("__newEventMap","\x02","\xb4","\x27","\x2e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(EventDispatcher_obj,__dispatching),HX_HCSTRING("__dispatching","\x48","\xef","\x2a","\xaf")},
	{hx::fsObject /*::openfl::events::IEventDispatcher*/ ,(int)offsetof(EventDispatcher_obj,__targetDispatcher),HX_HCSTRING("__targetDispatcher","\x78","\x03","\x5d","\x88")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(EventDispatcher_obj,__eventMap),HX_HCSTRING("__eventMap","\xc2","\xf9","\x0a","\x64")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(EventDispatcher_obj,__newEventMap),HX_HCSTRING("__newEventMap","\x02","\xb4","\x27","\x2e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__dispatching","\x48","\xef","\x2a","\xaf"),
	HX_HCSTRING("__targetDispatcher","\x78","\x03","\x5d","\x88"),
	HX_HCSTRING("__eventMap","\xc2","\xf9","\x0a","\x64"),
	HX_HCSTRING("__newEventMap","\x02","\xb4","\x27","\x2e"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("dispatchEvent","\x00","\xc7","\x64","\xc6"),
	HX_HCSTRING("hasEventListener","\xf4","\x2e","\xea","\x0c"),
	HX_HCSTRING("removeEventListener","\xca","\x87","\x75","\x55"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("willTrigger","\x46","\xf4","\x3f","\xd8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventDispatcher_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventDispatcher_obj::__mClass,"__mClass");
};

#endif

hx::Class EventDispatcher_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__sortByPriority","\x79","\x94","\xd7","\x6e"),
	::String(null()) };

void EventDispatcher_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.EventDispatcher","\x0a","\xd8","\x08","\xc2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EventDispatcher_obj::__GetStatic;
	__mClass->mSetStaticField = &EventDispatcher_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EventDispatcher_obj >;
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

} // end namespace openfl
} // end namespace events
