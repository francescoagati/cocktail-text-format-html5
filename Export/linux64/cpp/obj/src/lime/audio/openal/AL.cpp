#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_audio_openal_AL
#include <lime/audio/openal/AL.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
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
namespace lime{
namespace audio{
namespace openal{

Void AL_obj::__construct()
{
	return null();
}

//AL_obj::~AL_obj() { }

Dynamic AL_obj::__CreateEmpty() { return  new AL_obj; }
hx::ObjectPtr< AL_obj > AL_obj::__new()
{  hx::ObjectPtr< AL_obj > _result_ = new AL_obj();
	_result_->__construct();
	return _result_;}

Dynamic AL_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AL_obj > _result_ = new AL_obj();
	_result_->__construct();
	return _result_;}

int AL_obj::NONE;

int AL_obj::FALSE;

int AL_obj::TRUE;

int AL_obj::SOURCE_RELATIVE;

int AL_obj::CONE_INNER_ANGLE;

int AL_obj::CONE_OUTER_ANGLE;

int AL_obj::PITCH;

int AL_obj::POSITION;

int AL_obj::DIRECTION;

int AL_obj::VELOCITY;

int AL_obj::LOOPING;

int AL_obj::BUFFER;

int AL_obj::GAIN;

int AL_obj::MIN_GAIN;

int AL_obj::MAX_GAIN;

int AL_obj::ORIENTATION;

int AL_obj::SOURCE_STATE;

int AL_obj::INITIAL;

int AL_obj::PLAYING;

int AL_obj::PAUSED;

int AL_obj::STOPPED;

int AL_obj::BUFFERS_QUEUED;

int AL_obj::BUFFERS_PROCESSED;

int AL_obj::REFERENCE_DISTANCE;

int AL_obj::ROLLOFF_FACTOR;

int AL_obj::CONE_OUTER_GAIN;

int AL_obj::MAX_DISTANCE;

int AL_obj::SEC_OFFSET;

int AL_obj::SAMPLE_OFFSET;

int AL_obj::BYTE_OFFSET;

int AL_obj::SOURCE_TYPE;

int AL_obj::STATIC;

int AL_obj::STREAMING;

int AL_obj::UNDETERMINED;

int AL_obj::FORMAT_MONO8;

int AL_obj::FORMAT_MONO16;

int AL_obj::FORMAT_STEREO8;

int AL_obj::FORMAT_STEREO16;

int AL_obj::FREQUENCY;

int AL_obj::BITS;

int AL_obj::CHANNELS;

int AL_obj::SIZE;

int AL_obj::NO_ERROR;

int AL_obj::INVALID_NAME;

int AL_obj::INVALID_ENUM;

int AL_obj::INVALID_VALUE;

int AL_obj::INVALID_OPERATION;

int AL_obj::OUT_OF_MEMORY;

int AL_obj::VENDOR;

int AL_obj::VERSION;

int AL_obj::RENDERER;

int AL_obj::EXTENSIONS;

int AL_obj::DOPPLER_FACTOR;

int AL_obj::SPEED_OF_SOUND;

int AL_obj::DOPPLER_VELOCITY;

int AL_obj::DISTANCE_MODEL;

int AL_obj::INVERSE_DISTANCE;

int AL_obj::INVERSE_DISTANCE_CLAMPED;

int AL_obj::LINEAR_DISTANCE;

int AL_obj::LINEAR_DISTANCE_CLAMPED;

int AL_obj::EXPONENT_DISTANCE;

int AL_obj::EXPONENT_DISTANCE_CLAMPED;

Void AL_obj::bufferData( int buffer,int format,::lime::utils::ByteArray data,int size,int freq){
{
		HX_STACK_FRAME("lime.audio.openal.AL","bufferData",0x71908845,"lime.audio.openal.AL.bufferData","lime/audio/openal/AL.hx",75,0x8b371f2c)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(freq,"freq")
		HX_STACK_LINE(78)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		int tmp1 = format;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(78)
		::lime::utils::ByteArray tmp2 = data->getByteBuffer();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(78)
		int tmp3 = size;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(78)
		int tmp4 = freq;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(78)
		::lime::audio::openal::AL_obj::lime_al_buffer_data(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,bufferData,(void))

Void AL_obj::buffer3f( int buffer,int param,Float value1,Float value2,Float value3){
{
		HX_STACK_FRAME("lime.audio.openal.AL","buffer3f",0x30252e0e,"lime.audio.openal.AL.buffer3f","lime/audio/openal/AL.hx",86,0x8b371f2c)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(89)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		Float tmp2 = value1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		Float tmp3 = value2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(89)
		Float tmp4 = value3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(89)
		::lime::audio::openal::AL_obj::lime_al_buffer3f(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,buffer3f,(void))

Void AL_obj::buffer3i( int buffer,int param,int value1,int value2,int value3){
{
		HX_STACK_FRAME("lime.audio.openal.AL","buffer3i",0x30252e11,"lime.audio.openal.AL.buffer3i","lime/audio/openal/AL.hx",95,0x8b371f2c)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(98)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		int tmp2 = value1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		int tmp3 = value2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(98)
		int tmp4 = value3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(98)
		::lime::audio::openal::AL_obj::lime_al_buffer3i(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,buffer3i,(void))

Void AL_obj::bufferf( int buffer,int param,Float value){
{
		HX_STACK_FRAME("lime.audio.openal.AL","bufferf",0xa7d23f8b,"lime.audio.openal.AL.bufferf","lime/audio/openal/AL.hx",104,0x8b371f2c)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(107)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		::lime::audio::openal::AL_obj::lime_al_bufferf(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,bufferf,(void))

Void AL_obj::bufferfv( int buffer,int param,Array< Float > values){
{
		HX_STACK_FRAME("lime.audio.openal.AL","bufferfv",0x30255a8b,"lime.audio.openal.AL.bufferfv","lime/audio/openal/AL.hx",113,0x8b371f2c)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(116)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		::lime::audio::openal::AL_obj::lime_al_bufferfv(tmp,tmp1,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,bufferfv,(void))

Void AL_obj::bufferi( int buffer,int param,int value){
{
		HX_STACK_FRAME("lime.audio.openal.AL","bufferi",0xa7d23f8e,"lime.audio.openal.AL.bufferi","lime/audio/openal/AL.hx",122,0x8b371f2c)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(125)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(125)
		::lime::audio::openal::AL_obj::lime_al_bufferi(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,bufferi,(void))

Void AL_obj::bufferiv( int buffer,int param,Array< int > values){
{
		HX_STACK_FRAME("lime.audio.openal.AL","bufferiv",0x30255d28,"lime.audio.openal.AL.bufferiv","lime/audio/openal/AL.hx",131,0x8b371f2c)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(134)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(134)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		::lime::audio::openal::AL_obj::lime_al_bufferiv(tmp,tmp1,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,bufferiv,(void))

Void AL_obj::deleteBuffer( int buffer){
{
		HX_STACK_FRAME("lime.audio.openal.AL","deleteBuffer",0x6cca2146,"lime.audio.openal.AL.deleteBuffer","lime/audio/openal/AL.hx",140,0x8b371f2c)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(143)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		::lime::audio::openal::AL_obj::lime_al_delete_buffer(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,deleteBuffer,(void))

Void AL_obj::deleteBuffers( Array< int > buffers){
{
		HX_STACK_FRAME("lime.audio.openal.AL","deleteBuffers",0xc412fc6d,"lime.audio.openal.AL.deleteBuffers","lime/audio/openal/AL.hx",149,0x8b371f2c)
		HX_STACK_ARG(buffers,"buffers")
		HX_STACK_LINE(152)
		int tmp = buffers->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(152)
		::lime::audio::openal::AL_obj::lime_al_delete_buffers(tmp,buffers);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,deleteBuffers,(void))

Void AL_obj::deleteSource( int source){
{
		HX_STACK_FRAME("lime.audio.openal.AL","deleteSource",0xce671521,"lime.audio.openal.AL.deleteSource","lime/audio/openal/AL.hx",158,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(161)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		::lime::audio::openal::AL_obj::lime_al_delete_source(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,deleteSource,(void))

Void AL_obj::deleteSources( Array< int > sources){
{
		HX_STACK_FRAME("lime.audio.openal.AL","deleteSources",0xcbcb6832,"lime.audio.openal.AL.deleteSources","lime/audio/openal/AL.hx",167,0x8b371f2c)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(170)
		int tmp = sources->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(170)
		::lime::audio::openal::AL_obj::lime_al_delete_sources(tmp,sources);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,deleteSources,(void))

Void AL_obj::disable( int capability){
{
		HX_STACK_FRAME("lime.audio.openal.AL","disable",0xa79a060d,"lime.audio.openal.AL.disable","lime/audio/openal/AL.hx",176,0x8b371f2c)
		HX_STACK_ARG(capability,"capability")
		HX_STACK_LINE(179)
		int tmp = capability;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(179)
		::lime::audio::openal::AL_obj::lime_al_disable(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,disable,(void))

Void AL_obj::distanceModel( int distanceModel){
{
		HX_STACK_FRAME("lime.audio.openal.AL","distanceModel",0x87da0619,"lime.audio.openal.AL.distanceModel","lime/audio/openal/AL.hx",185,0x8b371f2c)
		HX_STACK_ARG(distanceModel,"distanceModel")
		HX_STACK_LINE(188)
		int tmp = distanceModel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(188)
		::lime::audio::openal::AL_obj::lime_al_distance_model(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,distanceModel,(void))

Void AL_obj::dopplerFactor( Float value){
{
		HX_STACK_FRAME("lime.audio.openal.AL","dopplerFactor",0x22fdf3c2,"lime.audio.openal.AL.dopplerFactor","lime/audio/openal/AL.hx",194,0x8b371f2c)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(197)
		Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		::lime::audio::openal::AL_obj::lime_al_doppler_factor(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,dopplerFactor,(void))

Void AL_obj::dopplerVelocity( Float value){
{
		HX_STACK_FRAME("lime.audio.openal.AL","dopplerVelocity",0x3ef13fd0,"lime.audio.openal.AL.dopplerVelocity","lime/audio/openal/AL.hx",203,0x8b371f2c)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(206)
		Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(206)
		::lime::audio::openal::AL_obj::lime_al_doppler_velocity(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,dopplerVelocity,(void))

Void AL_obj::enable( int capability){
{
		HX_STACK_FRAME("lime.audio.openal.AL","enable",0x3c379dfe,"lime.audio.openal.AL.enable","lime/audio/openal/AL.hx",212,0x8b371f2c)
		HX_STACK_ARG(capability,"capability")
		HX_STACK_LINE(215)
		int tmp = capability;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(215)
		::lime::audio::openal::AL_obj::lime_al_enable(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,enable,(void))

int AL_obj::genSource( ){
	HX_STACK_FRAME("lime.audio.openal.AL","genSource",0xf40420f0,"lime.audio.openal.AL.genSource","lime/audio/openal/AL.hx",221,0x8b371f2c)
	HX_STACK_LINE(224)
	int tmp = ::lime::audio::openal::AL_obj::lime_al_gen_source();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(224)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,genSource,return )

Array< int > AL_obj::genSources( int n){
	HX_STACK_FRAME("lime.audio.openal.AL","genSources",0x8f98b183,"lime.audio.openal.AL.genSources","lime/audio/openal/AL.hx",232,0x8b371f2c)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(235)
	int tmp = n;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	return ::lime::audio::openal::AL_obj::lime_al_gen_sources(tmp);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,genSources,return )

int AL_obj::genBuffer( ){
	HX_STACK_FRAME("lime.audio.openal.AL","genBuffer",0x92672d15,"lime.audio.openal.AL.genBuffer","lime/audio/openal/AL.hx",243,0x8b371f2c)
	HX_STACK_LINE(246)
	int tmp = ::lime::audio::openal::AL_obj::lime_al_gen_buffer();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(246)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,genBuffer,return )

Array< int > AL_obj::genBuffers( int n){
	HX_STACK_FRAME("lime.audio.openal.AL","genBuffers",0x87e045be,"lime.audio.openal.AL.genBuffers","lime/audio/openal/AL.hx",254,0x8b371f2c)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(257)
	int tmp = n;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(257)
	return ::lime::audio::openal::AL_obj::lime_al_gen_buffers(tmp);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,genBuffers,return )

bool AL_obj::getBoolean( int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getBoolean",0xab7d39ad,"lime.audio.openal.AL.getBoolean","lime/audio/openal/AL.hx",265,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(268)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(268)
	bool tmp1 = ::lime::audio::openal::AL_obj::lime_al_get_boolean(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(268)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getBoolean,return )

Array< bool > AL_obj::getBooleanv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.openal.AL","getBooleanv",0x62153e29,"lime.audio.openal.AL.getBooleanv","lime/audio/openal/AL.hx",276,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(279)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(279)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(279)
		return ::lime::audio::openal::AL_obj::lime_al_get_booleanv(tmp,tmp1);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBooleanv,return )

Array< Float > AL_obj::getBuffer3f( int buffer,int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getBuffer3f",0x4e04ff2e,"lime.audio.openal.AL.getBuffer3f","lime/audio/openal/AL.hx",287,0x8b371f2c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(290)
	int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(290)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(290)
	return ::lime::audio::openal::AL_obj::lime_al_get_buffer3f(tmp,tmp1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBuffer3f,return )

Array< int > AL_obj::getBuffer3i( int buffer,int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getBuffer3i",0x4e04ff31,"lime.audio.openal.AL.getBuffer3i","lime/audio/openal/AL.hx",298,0x8b371f2c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(301)
	int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(301)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(301)
	return ::lime::audio::openal::AL_obj::lime_al_get_buffer3i(tmp,tmp1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBuffer3i,return )

Float AL_obj::getBufferf( int buffer,int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getBufferf",0xdf0ef26b,"lime.audio.openal.AL.getBufferf","lime/audio/openal/AL.hx",309,0x8b371f2c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(312)
	int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(312)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(312)
	Float tmp2 = ::lime::audio::openal::AL_obj::lime_al_get_bufferf(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(312)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBufferf,return )

Array< Float > AL_obj::getBufferfv( int buffer,int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.openal.AL","getBufferfv",0x4e052bab,"lime.audio.openal.AL.getBufferfv","lime/audio/openal/AL.hx",320,0x8b371f2c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(323)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(323)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(323)
		int tmp2 = count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(323)
		return ::lime::audio::openal::AL_obj::lime_al_get_bufferfv(tmp,tmp1,tmp2);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,getBufferfv,return )

int AL_obj::getBufferi( int buffer,int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getBufferi",0xdf0ef26e,"lime.audio.openal.AL.getBufferi","lime/audio/openal/AL.hx",331,0x8b371f2c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(334)
	int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(334)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(334)
	int tmp2 = ::lime::audio::openal::AL_obj::lime_al_get_bufferi(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(334)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBufferi,return )

Array< int > AL_obj::getBufferiv( int buffer,int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.openal.AL","getBufferiv",0x4e052e48,"lime.audio.openal.AL.getBufferiv","lime/audio/openal/AL.hx",342,0x8b371f2c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(345)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(345)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(345)
		int tmp2 = count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(345)
		return ::lime::audio::openal::AL_obj::lime_al_get_bufferiv(tmp,tmp1,tmp2);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,getBufferiv,return )

Float AL_obj::getDouble( int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getDouble",0xee1e63ac,"lime.audio.openal.AL.getDouble","lime/audio/openal/AL.hx",353,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(356)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(356)
	Float tmp1 = ::lime::audio::openal::AL_obj::lime_al_get_double(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(356)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getDouble,return )

Array< Float > AL_obj::getDoublev( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.openal.AL","getDoublev",0x6c78d34a,"lime.audio.openal.AL.getDoublev","lime/audio/openal/AL.hx",364,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(367)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(367)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(367)
		return ::lime::audio::openal::AL_obj::lime_al_get_doublev(tmp,tmp1);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getDoublev,return )

int AL_obj::getEnumValue( ::String ename){
	HX_STACK_FRAME("lime.audio.openal.AL","getEnumValue",0x6cfadaf5,"lime.audio.openal.AL.getEnumValue","lime/audio/openal/AL.hx",375,0x8b371f2c)
	HX_STACK_ARG(ename,"ename")
	HX_STACK_LINE(378)
	::String tmp = ename;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(378)
	int tmp1 = ::lime::audio::openal::AL_obj::lime_al_get_enum_value(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(378)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getEnumValue,return )

int AL_obj::getError( ){
	HX_STACK_FRAME("lime.audio.openal.AL","getError",0x5627df8d,"lime.audio.openal.AL.getError","lime/audio/openal/AL.hx",386,0x8b371f2c)
	HX_STACK_LINE(389)
	int tmp = ::lime::audio::openal::AL_obj::lime_al_get_error();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(389)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,getError,return )

::String AL_obj::getErrorString( ){
	HX_STACK_FRAME("lime.audio.openal.AL","getErrorString",0x4cf0243e,"lime.audio.openal.AL.getErrorString","lime/audio/openal/AL.hx",397,0x8b371f2c)
	HX_STACK_LINE(399)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(399)
	{
		HX_STACK_LINE(399)
		int tmp1 = ::lime::audio::openal::AL_obj::getError();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(399)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(399)
		int tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(399)
		switch( (int)(tmp2)){
			case (int)40961: {
				HX_STACK_LINE(401)
				tmp = HX_HCSTRING("INVALID_NAME: Invalid parameter name","\x64","\xc3","\x04","\xf4");
			}
			;break;
			case (int)40962: {
				HX_STACK_LINE(402)
				tmp = HX_HCSTRING("INVALID_ENUM: Invalid enum value","\x0a","\xd7","\xdf","\x59");
			}
			;break;
			case (int)40963: {
				HX_STACK_LINE(403)
				tmp = HX_HCSTRING("INVALID_VALUE: Invalid parameter value","\xc2","\xa4","\x37","\xf8");
			}
			;break;
			case (int)40964: {
				HX_STACK_LINE(404)
				tmp = HX_HCSTRING("INVALID_OPERATION: Illegal operation or call","\x13","\x8a","\xe7","\x93");
			}
			;break;
			case (int)40965: {
				HX_STACK_LINE(405)
				tmp = HX_HCSTRING("OUT_OF_MEMORY: OpenAL has run out of memory","\xb0","\xdd","\xfb","\x0a");
			}
			;break;
			default: {
				HX_STACK_LINE(406)
				tmp = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
		}
	}
	HX_STACK_LINE(399)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,getErrorString,return )

Float AL_obj::getFloat( int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getFloat",0xe594d961,"lime.audio.openal.AL.getFloat","lime/audio/openal/AL.hx",413,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(416)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(416)
	Float tmp1 = ::lime::audio::openal::AL_obj::lime_al_get_float(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(416)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getFloat,return )

Array< Float > AL_obj::getFloatv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.openal.AL","getFloatv",0xfca95bf5,"lime.audio.openal.AL.getFloatv","lime/audio/openal/AL.hx",424,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(427)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(427)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(427)
		return ::lime::audio::openal::AL_obj::lime_al_get_floatv(tmp,tmp1);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getFloatv,return )

int AL_obj::getInteger( int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getInteger",0x449a0cc3,"lime.audio.openal.AL.getInteger","lime/audio/openal/AL.hx",435,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(438)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(438)
	int tmp1 = ::lime::audio::openal::AL_obj::lime_al_get_integer(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(438)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getInteger,return )

Array< int > AL_obj::getIntegerv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.openal.AL","getIntegerv",0xc2311e53,"lime.audio.openal.AL.getIntegerv","lime/audio/openal/AL.hx",446,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(449)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(449)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(449)
		return ::lime::audio::openal::AL_obj::lime_al_get_integerv(tmp,tmp1);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getIntegerv,return )

Array< Float > AL_obj::getListener3f( int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getListener3f",0x39755462,"lime.audio.openal.AL.getListener3f","lime/audio/openal/AL.hx",457,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(460)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(460)
	return ::lime::audio::openal::AL_obj::lime_al_get_listener3f(tmp);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getListener3f,return )

Array< int > AL_obj::getListener3i( int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getListener3i",0x39755465,"lime.audio.openal.AL.getListener3i","lime/audio/openal/AL.hx",468,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(471)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(471)
	return ::lime::audio::openal::AL_obj::lime_al_get_listener3i(tmp);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getListener3i,return )

Float AL_obj::getListenerf( int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getListenerf",0x38823fb7,"lime.audio.openal.AL.getListenerf","lime/audio/openal/AL.hx",479,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(482)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(482)
	Float tmp1 = ::lime::audio::openal::AL_obj::lime_al_get_listenerf(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(482)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getListenerf,return )

Array< Float > AL_obj::getListenerfv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.openal.AL","getListenerfv",0x397580df,"lime.audio.openal.AL.getListenerfv","lime/audio/openal/AL.hx",490,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(493)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(493)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(493)
		return ::lime::audio::openal::AL_obj::lime_al_get_listenerfv(tmp,tmp1);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getListenerfv,return )

int AL_obj::getListeneri( int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getListeneri",0x38823fba,"lime.audio.openal.AL.getListeneri","lime/audio/openal/AL.hx",501,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(504)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(504)
	int tmp1 = ::lime::audio::openal::AL_obj::lime_al_get_listeneri(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(504)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getListeneri,return )

Array< int > AL_obj::getListeneriv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.openal.AL","getListeneriv",0x3975837c,"lime.audio.openal.AL.getListeneriv","lime/audio/openal/AL.hx",512,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(515)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(515)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(515)
		return ::lime::audio::openal::AL_obj::lime_al_get_listeneriv(tmp,tmp1);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getListeneriv,return )

Dynamic AL_obj::getProcAddress( ::String fname){
	HX_STACK_FRAME("lime.audio.openal.AL","getProcAddress",0x4f564643,"lime.audio.openal.AL.getProcAddress","lime/audio/openal/AL.hx",525,0x8b371f2c)
	HX_STACK_ARG(fname,"fname")
	HX_STACK_LINE(525)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getProcAddress,return )

Array< Float > AL_obj::getSource3f( int source,int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getSource3f",0x07aadfc9,"lime.audio.openal.AL.getSource3f","lime/audio/openal/AL.hx",530,0x8b371f2c)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(533)
	int tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(533)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(533)
	return ::lime::audio::openal::AL_obj::lime_al_get_source3f(tmp,tmp1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSource3f,return )

Float AL_obj::getSourcef( int source,int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getSourcef",0xe6c75e30,"lime.audio.openal.AL.getSourcef","lime/audio/openal/AL.hx",541,0x8b371f2c)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(544)
	int tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(544)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(544)
	Float tmp2 = ::lime::audio::openal::AL_obj::lime_al_get_sourcef(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(544)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSourcef,return )

Array< int > AL_obj::getSource3i( int source,int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getSource3i",0x07aadfcc,"lime.audio.openal.AL.getSource3i","lime/audio/openal/AL.hx",552,0x8b371f2c)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(555)
	int tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(555)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(555)
	return ::lime::audio::openal::AL_obj::lime_al_get_source3i(tmp,tmp1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSource3i,return )

Array< Float > AL_obj::getSourcefv( int source,int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getSourcefv",0x07ab0c46,"lime.audio.openal.AL.getSourcefv","lime/audio/openal/AL.hx",563,0x8b371f2c)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(566)
	int tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(566)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(566)
	return ::lime::audio::openal::AL_obj::lime_al_get_sourcefv(tmp,tmp1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSourcefv,return )

int AL_obj::getSourcei( int source,int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getSourcei",0xe6c75e33,"lime.audio.openal.AL.getSourcei","lime/audio/openal/AL.hx",574,0x8b371f2c)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(577)
	int tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(577)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(577)
	int tmp2 = ::lime::audio::openal::AL_obj::lime_al_get_sourcei(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(577)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSourcei,return )

Array< int > AL_obj::getSourceiv( int source,int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.openal.AL","getSourceiv",0x07ab0ee3,"lime.audio.openal.AL.getSourceiv","lime/audio/openal/AL.hx",585,0x8b371f2c)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(588)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(588)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(588)
		int tmp2 = count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(588)
		return ::lime::audio::openal::AL_obj::lime_al_get_sourceiv(tmp,tmp1,tmp2);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,getSourceiv,return )

::String AL_obj::getString( int param){
	HX_STACK_FRAME("lime.audio.openal.AL","getString",0xcc83616c,"lime.audio.openal.AL.getString","lime/audio/openal/AL.hx",596,0x8b371f2c)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(599)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(599)
	::String tmp1 = ::lime::audio::openal::AL_obj::lime_al_get_string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(599)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getString,return )

bool AL_obj::isBuffer( int buffer){
	HX_STACK_FRAME("lime.audio.openal.AL","isBuffer",0xac255cc5,"lime.audio.openal.AL.isBuffer","lime/audio/openal/AL.hx",607,0x8b371f2c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(610)
	int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(610)
	bool tmp1 = ::lime::audio::openal::AL_obj::lime_al_is_buffer(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(610)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isBuffer,return )

bool AL_obj::isEnabled( int capability){
	HX_STACK_FRAME("lime.audio.openal.AL","isEnabled",0xc12c311c,"lime.audio.openal.AL.isEnabled","lime/audio/openal/AL.hx",618,0x8b371f2c)
	HX_STACK_ARG(capability,"capability")
	HX_STACK_LINE(621)
	int tmp = capability;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(621)
	bool tmp1 = ::lime::audio::openal::AL_obj::lime_al_is_enabled(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(621)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isEnabled,return )

bool AL_obj::isExtensionPresent( ::String extname){
	HX_STACK_FRAME("lime.audio.openal.AL","isExtensionPresent",0x7b01b541,"lime.audio.openal.AL.isExtensionPresent","lime/audio/openal/AL.hx",629,0x8b371f2c)
	HX_STACK_ARG(extname,"extname")
	HX_STACK_LINE(632)
	::String tmp = extname;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(632)
	bool tmp1 = ::lime::audio::openal::AL_obj::lime_al_is_extension_present(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(632)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isExtensionPresent,return )

bool AL_obj::isSource( int source){
	HX_STACK_FRAME("lime.audio.openal.AL","isSource",0x0dc250a0,"lime.audio.openal.AL.isSource","lime/audio/openal/AL.hx",640,0x8b371f2c)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(643)
	int tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(643)
	bool tmp1 = ::lime::audio::openal::AL_obj::lime_al_is_source(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(643)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isSource,return )

Void AL_obj::listener3f( int param,Float value1,Float value2,Float value3){
{
		HX_STACK_FRAME("lime.audio.openal.AL","listener3f",0x0726fb42,"lime.audio.openal.AL.listener3f","lime/audio/openal/AL.hx",651,0x8b371f2c)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(654)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(654)
		Float tmp1 = value1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(654)
		Float tmp2 = value2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(654)
		Float tmp3 = value3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(654)
		::lime::audio::openal::AL_obj::lime_al_listener3f(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AL_obj,listener3f,(void))

Void AL_obj::listener3i( int param,int value1,int value2,int value3){
{
		HX_STACK_FRAME("lime.audio.openal.AL","listener3i",0x0726fb45,"lime.audio.openal.AL.listener3i","lime/audio/openal/AL.hx",660,0x8b371f2c)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(663)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(663)
		int tmp1 = value1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(663)
		int tmp2 = value2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(663)
		int tmp3 = value3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(663)
		::lime::audio::openal::AL_obj::lime_al_listener3i(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AL_obj,listener3i,(void))

Void AL_obj::listenerf( int param,Float value){
{
		HX_STACK_FRAME("lime.audio.openal.AL","listenerf",0x328b14d7,"lime.audio.openal.AL.listenerf","lime/audio/openal/AL.hx",669,0x8b371f2c)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(672)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(672)
		Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(672)
		::lime::audio::openal::AL_obj::lime_al_listenerf(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,listenerf,(void))

Void AL_obj::listenerfv( int param,Array< Float > values){
{
		HX_STACK_FRAME("lime.audio.openal.AL","listenerfv",0x072727bf,"lime.audio.openal.AL.listenerfv","lime/audio/openal/AL.hx",678,0x8b371f2c)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(681)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(681)
		::lime::audio::openal::AL_obj::lime_al_listenerfv(tmp,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,listenerfv,(void))

Void AL_obj::listeneri( int param,int value){
{
		HX_STACK_FRAME("lime.audio.openal.AL","listeneri",0x328b14da,"lime.audio.openal.AL.listeneri","lime/audio/openal/AL.hx",687,0x8b371f2c)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(690)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(690)
		int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(690)
		::lime::audio::openal::AL_obj::lime_al_listeneri(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,listeneri,(void))

Void AL_obj::listeneriv( int param,Array< int > values){
{
		HX_STACK_FRAME("lime.audio.openal.AL","listeneriv",0x07272a5c,"lime.audio.openal.AL.listeneriv","lime/audio/openal/AL.hx",696,0x8b371f2c)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(699)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(699)
		::lime::audio::openal::AL_obj::lime_al_listeneriv(tmp,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,listeneriv,(void))

Void AL_obj::source3f( int source,int param,Float value1,Float value2,Float value3){
{
		HX_STACK_FRAME("lime.audio.openal.AL","source3f",0xe9cb0ea9,"lime.audio.openal.AL.source3f","lime/audio/openal/AL.hx",705,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(708)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(708)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(708)
		Float tmp2 = value1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(708)
		Float tmp3 = value2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(708)
		Float tmp4 = value3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(708)
		::lime::audio::openal::AL_obj::lime_al_source3f(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,source3f,(void))

Void AL_obj::source3i( int source,int param,int value1,int value2,int value3){
{
		HX_STACK_FRAME("lime.audio.openal.AL","source3i",0xe9cb0eac,"lime.audio.openal.AL.source3i","lime/audio/openal/AL.hx",714,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(717)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(717)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(717)
		int tmp2 = value1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(717)
		int tmp3 = value2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(717)
		int tmp4 = value3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(717)
		::lime::audio::openal::AL_obj::lime_al_source3i(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,source3i,(void))

Void AL_obj::sourcef( int source,int param,Float value){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourcef",0xaf8aab50,"lime.audio.openal.AL.sourcef","lime/audio/openal/AL.hx",723,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(726)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(726)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(726)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(726)
		::lime::audio::openal::AL_obj::lime_al_sourcef(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourcef,(void))

Void AL_obj::sourcefv( int source,int param,Array< Float > values){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourcefv",0xe9cb3b26,"lime.audio.openal.AL.sourcefv","lime/audio/openal/AL.hx",732,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(735)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(735)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(735)
		::lime::audio::openal::AL_obj::lime_al_sourcefv(tmp,tmp1,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourcefv,(void))

Void AL_obj::sourcei( int source,int param,int value){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourcei",0xaf8aab53,"lime.audio.openal.AL.sourcei","lime/audio/openal/AL.hx",741,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(744)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(744)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(744)
		int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(744)
		::lime::audio::openal::AL_obj::lime_al_sourcei(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourcei,(void))

Void AL_obj::sourceiv( int source,int param,Array< int > values){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourceiv",0xe9cb3dc3,"lime.audio.openal.AL.sourceiv","lime/audio/openal/AL.hx",750,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(753)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(753)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(753)
		::lime::audio::openal::AL_obj::lime_al_sourceiv(tmp,tmp1,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourceiv,(void))

Void AL_obj::sourcePlay( int source){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourcePlay",0x50dadd6a,"lime.audio.openal.AL.sourcePlay","lime/audio/openal/AL.hx",759,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(762)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(762)
		::lime::audio::openal::AL_obj::lime_al_source_play(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourcePlay,(void))

Void AL_obj::sourcePlayv( Array< int > sources){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourcePlayv",0x6ea6dfcc,"lime.audio.openal.AL.sourcePlayv","lime/audio/openal/AL.hx",768,0x8b371f2c)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(771)
		int tmp = sources->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(771)
		::lime::audio::openal::AL_obj::lime_al_source_playv(tmp,sources);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourcePlayv,(void))

Void AL_obj::sourceStop( int source){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourceStop",0x52dc9f78,"lime.audio.openal.AL.sourceStop","lime/audio/openal/AL.hx",777,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(780)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(780)
		::lime::audio::openal::AL_obj::lime_al_source_stop(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceStop,(void))

Void AL_obj::sourceStopv( Array< int > sources){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourceStopv",0x2e2ee9fe,"lime.audio.openal.AL.sourceStopv","lime/audio/openal/AL.hx",786,0x8b371f2c)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(789)
		int tmp = sources->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(789)
		::lime::audio::openal::AL_obj::lime_al_source_stopv(tmp,sources);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceStopv,(void))

Void AL_obj::sourceRewind( int source){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourceRewind",0x36c422f1,"lime.audio.openal.AL.sourceRewind","lime/audio/openal/AL.hx",795,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(798)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(798)
		::lime::audio::openal::AL_obj::lime_al_source_rewind(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceRewind,(void))

Void AL_obj::sourceRewindv( Array< int > sources){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourceRewindv",0xb4da7065,"lime.audio.openal.AL.sourceRewindv","lime/audio/openal/AL.hx",804,0x8b371f2c)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(807)
		int tmp = sources->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(807)
		::lime::audio::openal::AL_obj::lime_al_source_rewindv(tmp,sources);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceRewindv,(void))

Void AL_obj::sourcePause( int source){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourcePause",0x6770aec0,"lime.audio.openal.AL.sourcePause","lime/audio/openal/AL.hx",813,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(816)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(816)
		::lime::audio::openal::AL_obj::lime_al_source_pause(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourcePause,(void))

Void AL_obj::sourcePausev( Array< int > sources){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourcePausev",0x1b2839b6,"lime.audio.openal.AL.sourcePausev","lime/audio/openal/AL.hx",822,0x8b371f2c)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(825)
		int tmp = sources->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(825)
		::lime::audio::openal::AL_obj::lime_al_source_pausev(tmp,sources);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourcePausev,(void))

Void AL_obj::sourceQueueBuffer( int source,int buffer){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourceQueueBuffer",0x31678cbb,"lime.audio.openal.AL.sourceQueueBuffer","lime/audio/openal/AL.hx",831,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(834)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(834)
		::lime::audio::openal::AL_obj::lime_al_source_queue_buffers(tmp,(int)1,Array_obj< int >::__new().Add(buffer));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,sourceQueueBuffer,(void))

Void AL_obj::sourceQueueBuffers( int source,int nb,Array< int > buffers){
{
		HX_STACK_FRAME("lime.audio.openal.AL","sourceQueueBuffers",0x09339758,"lime.audio.openal.AL.sourceQueueBuffers","lime/audio/openal/AL.hx",840,0x8b371f2c)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(nb,"nb")
		HX_STACK_ARG(buffers,"buffers")
		HX_STACK_LINE(843)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(843)
		int tmp1 = nb;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(843)
		::lime::audio::openal::AL_obj::lime_al_source_queue_buffers(tmp,tmp1,buffers);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourceQueueBuffers,(void))

int AL_obj::sourceUnqueueBuffer( int source){
	HX_STACK_FRAME("lime.audio.openal.AL","sourceUnqueueBuffer",0x63a2e982,"lime.audio.openal.AL.sourceUnqueueBuffer","lime/audio/openal/AL.hx",849,0x8b371f2c)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(852)
	int tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(852)
	Array< int > res = ::lime::audio::openal::AL_obj::lime_al_source_unqueue_buffers(tmp,(int)1);		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(853)
	int tmp1 = res->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(853)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceUnqueueBuffer,return )

Array< int > AL_obj::sourceUnqueueBuffers( int source,int nb){
	HX_STACK_FRAME("lime.audio.openal.AL","sourceUnqueueBuffers",0xcae968b1,"lime.audio.openal.AL.sourceUnqueueBuffers","lime/audio/openal/AL.hx",861,0x8b371f2c)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(nb,"nb")
	HX_STACK_LINE(864)
	int tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(864)
	int tmp1 = nb;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(864)
	return ::lime::audio::openal::AL_obj::lime_al_source_unqueue_buffers(tmp,tmp1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,sourceUnqueueBuffers,return )

Void AL_obj::speedOfSound( Float value){
{
		HX_STACK_FRAME("lime.audio.openal.AL","speedOfSound",0x3fbf252c,"lime.audio.openal.AL.speedOfSound","lime/audio/openal/AL.hx",872,0x8b371f2c)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(875)
		Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(875)
		::lime::audio::openal::AL_obj::lime_al_speed_of_sound(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,speedOfSound,(void))

Dynamic AL_obj::lime_al_buffer_data;

Dynamic AL_obj::lime_al_bufferf;

Dynamic AL_obj::lime_al_buffer3f;

Dynamic AL_obj::lime_al_bufferfv;

Dynamic AL_obj::lime_al_bufferi;

Dynamic AL_obj::lime_al_buffer3i;

Dynamic AL_obj::lime_al_bufferiv;

Dynamic AL_obj::lime_al_delete_buffer;

Dynamic AL_obj::lime_al_delete_buffers;

Dynamic AL_obj::lime_al_delete_source;

Dynamic AL_obj::lime_al_delete_sources;

Dynamic AL_obj::lime_al_disable;

Dynamic AL_obj::lime_al_distance_model;

Dynamic AL_obj::lime_al_doppler_factor;

Dynamic AL_obj::lime_al_doppler_velocity;

Dynamic AL_obj::lime_al_enable;

Dynamic AL_obj::lime_al_gen_source;

Dynamic AL_obj::lime_al_gen_sources;

Dynamic AL_obj::lime_al_gen_buffer;

Dynamic AL_obj::lime_al_gen_buffers;

Dynamic AL_obj::lime_al_get_buffer3f;

Dynamic AL_obj::lime_al_get_buffer3i;

Dynamic AL_obj::lime_al_get_bufferf;

Dynamic AL_obj::lime_al_get_bufferfv;

Dynamic AL_obj::lime_al_get_bufferi;

Dynamic AL_obj::lime_al_get_bufferiv;

Dynamic AL_obj::lime_al_get_boolean;

Dynamic AL_obj::lime_al_get_booleanv;

Dynamic AL_obj::lime_al_get_double;

Dynamic AL_obj::lime_al_get_doublev;

Dynamic AL_obj::lime_al_get_enum_value;

Dynamic AL_obj::lime_al_get_error;

Dynamic AL_obj::lime_al_get_float;

Dynamic AL_obj::lime_al_get_floatv;

Dynamic AL_obj::lime_al_get_integer;

Dynamic AL_obj::lime_al_get_integerv;

Dynamic AL_obj::lime_al_get_listenerf;

Dynamic AL_obj::lime_al_get_listener3f;

Dynamic AL_obj::lime_al_get_listenerfv;

Dynamic AL_obj::lime_al_get_listeneri;

Dynamic AL_obj::lime_al_get_listener3i;

Dynamic AL_obj::lime_al_get_listeneriv;

Dynamic AL_obj::lime_al_get_proc_address;

Dynamic AL_obj::lime_al_get_source3f;

Dynamic AL_obj::lime_al_get_source3i;

Dynamic AL_obj::lime_al_get_sourcef;

Dynamic AL_obj::lime_al_get_sourcefv;

Dynamic AL_obj::lime_al_get_sourcei;

Dynamic AL_obj::lime_al_get_sourceiv;

Dynamic AL_obj::lime_al_get_string;

Dynamic AL_obj::lime_al_is_buffer;

Dynamic AL_obj::lime_al_is_enabled;

Dynamic AL_obj::lime_al_is_extension_present;

Dynamic AL_obj::lime_al_is_source;

Dynamic AL_obj::lime_al_listener3f;

Dynamic AL_obj::lime_al_listener3i;

Dynamic AL_obj::lime_al_listenerf;

Dynamic AL_obj::lime_al_listenerfv;

Dynamic AL_obj::lime_al_listeneri;

Dynamic AL_obj::lime_al_listeneriv;

Dynamic AL_obj::lime_al_source_play;

Dynamic AL_obj::lime_al_source_playv;

Dynamic AL_obj::lime_al_source_stop;

Dynamic AL_obj::lime_al_source_stopv;

Dynamic AL_obj::lime_al_source_rewind;

Dynamic AL_obj::lime_al_source_rewindv;

Dynamic AL_obj::lime_al_source_pause;

Dynamic AL_obj::lime_al_source_pausev;

Dynamic AL_obj::lime_al_source_queue_buffers;

Dynamic AL_obj::lime_al_source_unqueue_buffers;

Dynamic AL_obj::lime_al_source3f;

Dynamic AL_obj::lime_al_source3i;

Dynamic AL_obj::lime_al_sourcef;

Dynamic AL_obj::lime_al_sourcefv;

Dynamic AL_obj::lime_al_sourcei;

Dynamic AL_obj::lime_al_sourceiv;

Dynamic AL_obj::lime_al_speed_of_sound;


AL_obj::AL_obj()
{
}

bool AL_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { outValue = enable_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bufferf") ) { outValue = bufferf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bufferi") ) { outValue = bufferi_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"disable") ) { outValue = disable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourcef") ) { outValue = sourcef_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourcei") ) { outValue = sourcei_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"buffer3f") ) { outValue = buffer3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"buffer3i") ) { outValue = buffer3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bufferfv") ) { outValue = bufferfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bufferiv") ) { outValue = bufferiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getError") ) { outValue = getError_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getFloat") ) { outValue = getFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isBuffer") ) { outValue = isBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isSource") ) { outValue = isSource_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"source3f") ) { outValue = source3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"source3i") ) { outValue = source3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourcefv") ) { outValue = sourcefv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourceiv") ) { outValue = sourceiv_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"genSource") ) { outValue = genSource_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"genBuffer") ) { outValue = genBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getDouble") ) { outValue = getDouble_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getFloatv") ) { outValue = getFloatv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getString") ) { outValue = getString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isEnabled") ) { outValue = isEnabled_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"listenerf") ) { outValue = listenerf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"listeneri") ) { outValue = listeneri_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bufferData") ) { outValue = bufferData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"genSources") ) { outValue = genSources_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"genBuffers") ) { outValue = genBuffers_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBoolean") ) { outValue = getBoolean_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBufferf") ) { outValue = getBufferf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBufferi") ) { outValue = getBufferi_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getDoublev") ) { outValue = getDoublev_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getInteger") ) { outValue = getInteger_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSourcef") ) { outValue = getSourcef_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSourcei") ) { outValue = getSourcei_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"listener3f") ) { outValue = listener3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"listener3i") ) { outValue = listener3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"listenerfv") ) { outValue = listenerfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"listeneriv") ) { outValue = listeneriv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourcePlay") ) { outValue = sourcePlay_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourceStop") ) { outValue = sourceStop_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getBooleanv") ) { outValue = getBooleanv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBuffer3f") ) { outValue = getBuffer3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBuffer3i") ) { outValue = getBuffer3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBufferfv") ) { outValue = getBufferfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBufferiv") ) { outValue = getBufferiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getIntegerv") ) { outValue = getIntegerv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSource3f") ) { outValue = getSource3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSource3i") ) { outValue = getSource3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSourcefv") ) { outValue = getSourcefv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSourceiv") ) { outValue = getSourceiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourcePlayv") ) { outValue = sourcePlayv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourceStopv") ) { outValue = sourceStopv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourcePause") ) { outValue = sourcePause_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"deleteBuffer") ) { outValue = deleteBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteSource") ) { outValue = deleteSource_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getEnumValue") ) { outValue = getEnumValue_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getListenerf") ) { outValue = getListenerf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getListeneri") ) { outValue = getListeneri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourceRewind") ) { outValue = sourceRewind_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourcePausev") ) { outValue = sourcePausev_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"speedOfSound") ) { outValue = speedOfSound_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"deleteBuffers") ) { outValue = deleteBuffers_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteSources") ) { outValue = deleteSources_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"distanceModel") ) { outValue = distanceModel_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"dopplerFactor") ) { outValue = dopplerFactor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getListener3f") ) { outValue = getListener3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getListener3i") ) { outValue = getListener3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getListenerfv") ) { outValue = getListenerfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getListeneriv") ) { outValue = getListeneriv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourceRewindv") ) { outValue = sourceRewindv_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getErrorString") ) { outValue = getErrorString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getProcAddress") ) { outValue = getProcAddress_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_enable") ) { outValue = lime_al_enable; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dopplerVelocity") ) { outValue = dopplerVelocity_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_bufferf") ) { outValue = lime_al_bufferf; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_bufferi") ) { outValue = lime_al_bufferi; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_disable") ) { outValue = lime_al_disable; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_sourcef") ) { outValue = lime_al_sourcef; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_sourcei") ) { outValue = lime_al_sourcei; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_al_buffer3f") ) { outValue = lime_al_buffer3f; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_bufferfv") ) { outValue = lime_al_bufferfv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_buffer3i") ) { outValue = lime_al_buffer3i; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_bufferiv") ) { outValue = lime_al_bufferiv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_source3f") ) { outValue = lime_al_source3f; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_source3i") ) { outValue = lime_al_source3i; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_sourcefv") ) { outValue = lime_al_sourcefv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_sourceiv") ) { outValue = lime_al_sourceiv; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"sourceQueueBuffer") ) { outValue = sourceQueueBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_error") ) { outValue = lime_al_get_error; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_float") ) { outValue = lime_al_get_float; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_is_buffer") ) { outValue = lime_al_is_buffer; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_is_source") ) { outValue = lime_al_is_source; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_listenerf") ) { outValue = lime_al_listenerf; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_listeneri") ) { outValue = lime_al_listeneri; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isExtensionPresent") ) { outValue = isExtensionPresent_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourceQueueBuffers") ) { outValue = sourceQueueBuffers_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_gen_source") ) { outValue = lime_al_gen_source; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_gen_buffer") ) { outValue = lime_al_gen_buffer; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_double") ) { outValue = lime_al_get_double; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_floatv") ) { outValue = lime_al_get_floatv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_string") ) { outValue = lime_al_get_string; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_is_enabled") ) { outValue = lime_al_is_enabled; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_listener3f") ) { outValue = lime_al_listener3f; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_listener3i") ) { outValue = lime_al_listener3i; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_listenerfv") ) { outValue = lime_al_listenerfv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_listeneriv") ) { outValue = lime_al_listeneriv; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"sourceUnqueueBuffer") ) { outValue = sourceUnqueueBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_buffer_data") ) { outValue = lime_al_buffer_data; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_gen_sources") ) { outValue = lime_al_gen_sources; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_gen_buffers") ) { outValue = lime_al_gen_buffers; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_bufferf") ) { outValue = lime_al_get_bufferf; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_bufferi") ) { outValue = lime_al_get_bufferi; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_boolean") ) { outValue = lime_al_get_boolean; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_doublev") ) { outValue = lime_al_get_doublev; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_integer") ) { outValue = lime_al_get_integer; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_sourcef") ) { outValue = lime_al_get_sourcef; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_sourcei") ) { outValue = lime_al_get_sourcei; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_source_play") ) { outValue = lime_al_source_play; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_source_stop") ) { outValue = lime_al_source_stop; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"sourceUnqueueBuffers") ) { outValue = sourceUnqueueBuffers_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_buffer3f") ) { outValue = lime_al_get_buffer3f; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_buffer3i") ) { outValue = lime_al_get_buffer3i; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_bufferfv") ) { outValue = lime_al_get_bufferfv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_bufferiv") ) { outValue = lime_al_get_bufferiv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_booleanv") ) { outValue = lime_al_get_booleanv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_integerv") ) { outValue = lime_al_get_integerv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_source3f") ) { outValue = lime_al_get_source3f; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_source3i") ) { outValue = lime_al_get_source3i; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_sourcefv") ) { outValue = lime_al_get_sourcefv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_sourceiv") ) { outValue = lime_al_get_sourceiv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_source_playv") ) { outValue = lime_al_source_playv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_source_stopv") ) { outValue = lime_al_source_stopv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_source_pause") ) { outValue = lime_al_source_pause; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_al_delete_buffer") ) { outValue = lime_al_delete_buffer; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_delete_source") ) { outValue = lime_al_delete_source; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_listenerf") ) { outValue = lime_al_get_listenerf; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_listeneri") ) { outValue = lime_al_get_listeneri; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_source_rewind") ) { outValue = lime_al_source_rewind; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_source_pausev") ) { outValue = lime_al_source_pausev; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_al_delete_buffers") ) { outValue = lime_al_delete_buffers; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_delete_sources") ) { outValue = lime_al_delete_sources; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_distance_model") ) { outValue = lime_al_distance_model; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_doppler_factor") ) { outValue = lime_al_doppler_factor; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_enum_value") ) { outValue = lime_al_get_enum_value; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_listener3f") ) { outValue = lime_al_get_listener3f; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_listenerfv") ) { outValue = lime_al_get_listenerfv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_listener3i") ) { outValue = lime_al_get_listener3i; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_listeneriv") ) { outValue = lime_al_get_listeneriv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_source_rewindv") ) { outValue = lime_al_source_rewindv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_speed_of_sound") ) { outValue = lime_al_speed_of_sound; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_al_doppler_velocity") ) { outValue = lime_al_doppler_velocity; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_get_proc_address") ) { outValue = lime_al_get_proc_address; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_al_is_extension_present") ) { outValue = lime_al_is_extension_present; return true;  }
		if (HX_FIELD_EQ(inName,"lime_al_source_queue_buffers") ) { outValue = lime_al_source_queue_buffers; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_al_source_unqueue_buffers") ) { outValue = lime_al_source_unqueue_buffers; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &AL_obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsInt,(void *) &AL_obj::FALSE,HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79")},
	{hx::fsInt,(void *) &AL_obj::TRUE,HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37")},
	{hx::fsInt,(void *) &AL_obj::SOURCE_RELATIVE,HX_HCSTRING("SOURCE_RELATIVE","\xf0","\xf3","\x84","\xfe")},
	{hx::fsInt,(void *) &AL_obj::CONE_INNER_ANGLE,HX_HCSTRING("CONE_INNER_ANGLE","\x4e","\xa1","\xd7","\x93")},
	{hx::fsInt,(void *) &AL_obj::CONE_OUTER_ANGLE,HX_HCSTRING("CONE_OUTER_ANGLE","\xf3","\xe1","\xbf","\xcc")},
	{hx::fsInt,(void *) &AL_obj::PITCH,HX_HCSTRING("PITCH","\xa0","\xf3","\x8e","\x40")},
	{hx::fsInt,(void *) &AL_obj::POSITION,HX_HCSTRING("POSITION","\xa9","\x30","\x80","\x24")},
	{hx::fsInt,(void *) &AL_obj::DIRECTION,HX_HCSTRING("DIRECTION","\x1f","\xd2","\x98","\x0b")},
	{hx::fsInt,(void *) &AL_obj::VELOCITY,HX_HCSTRING("VELOCITY","\x1d","\x92","\x83","\x78")},
	{hx::fsInt,(void *) &AL_obj::LOOPING,HX_HCSTRING("LOOPING","\xde","\x50","\x51","\xa0")},
	{hx::fsInt,(void *) &AL_obj::BUFFER,HX_HCSTRING("BUFFER","\x00","\x69","\x17","\x83")},
	{hx::fsInt,(void *) &AL_obj::GAIN,HX_HCSTRING("GAIN","\x7f","\xb8","\x1f","\x2f")},
	{hx::fsInt,(void *) &AL_obj::MIN_GAIN,HX_HCSTRING("MIN_GAIN","\xac","\x29","\xd2","\x21")},
	{hx::fsInt,(void *) &AL_obj::MAX_GAIN,HX_HCSTRING("MAX_GAIN","\x5a","\x0f","\xb8","\xd4")},
	{hx::fsInt,(void *) &AL_obj::ORIENTATION,HX_HCSTRING("ORIENTATION","\xb0","\xfa","\x3a","\xd4")},
	{hx::fsInt,(void *) &AL_obj::SOURCE_STATE,HX_HCSTRING("SOURCE_STATE","\x4d","\xe8","\x1e","\xab")},
	{hx::fsInt,(void *) &AL_obj::INITIAL,HX_HCSTRING("INITIAL","\x64","\xe4","\x72","\x4b")},
	{hx::fsInt,(void *) &AL_obj::PLAYING,HX_HCSTRING("PLAYING","\x4e","\xe3","\xeb","\x09")},
	{hx::fsInt,(void *) &AL_obj::PAUSED,HX_HCSTRING("PAUSED","\xae","\xec","\x06","\xa2")},
	{hx::fsInt,(void *) &AL_obj::STOPPED,HX_HCSTRING("STOPPED","\xed","\xa5","\x35","\xc3")},
	{hx::fsInt,(void *) &AL_obj::BUFFERS_QUEUED,HX_HCSTRING("BUFFERS_QUEUED","\x5f","\x78","\xce","\x71")},
	{hx::fsInt,(void *) &AL_obj::BUFFERS_PROCESSED,HX_HCSTRING("BUFFERS_PROCESSED","\x42","\x9d","\x62","\xac")},
	{hx::fsInt,(void *) &AL_obj::REFERENCE_DISTANCE,HX_HCSTRING("REFERENCE_DISTANCE","\x89","\xd5","\xce","\x9a")},
	{hx::fsInt,(void *) &AL_obj::ROLLOFF_FACTOR,HX_HCSTRING("ROLLOFF_FACTOR","\xbc","\x10","\x98","\x56")},
	{hx::fsInt,(void *) &AL_obj::CONE_OUTER_GAIN,HX_HCSTRING("CONE_OUTER_GAIN","\x3f","\xda","\x8d","\xe3")},
	{hx::fsInt,(void *) &AL_obj::MAX_DISTANCE,HX_HCSTRING("MAX_DISTANCE","\x90","\x83","\xbb","\xa5")},
	{hx::fsInt,(void *) &AL_obj::SEC_OFFSET,HX_HCSTRING("SEC_OFFSET","\xe1","\x5d","\xa3","\xac")},
	{hx::fsInt,(void *) &AL_obj::SAMPLE_OFFSET,HX_HCSTRING("SAMPLE_OFFSET","\x48","\x82","\xac","\xb4")},
	{hx::fsInt,(void *) &AL_obj::BYTE_OFFSET,HX_HCSTRING("BYTE_OFFSET","\x2a","\xdf","\x43","\x36")},
	{hx::fsInt,(void *) &AL_obj::SOURCE_TYPE,HX_HCSTRING("SOURCE_TYPE","\xde","\xff","\x00","\xdf")},
	{hx::fsInt,(void *) &AL_obj::STATIC,HX_HCSTRING("STATIC","\xae","\x88","\x7e","\xb8")},
	{hx::fsInt,(void *) &AL_obj::STREAMING,HX_HCSTRING("STREAMING","\x42","\x38","\x7b","\xb1")},
	{hx::fsInt,(void *) &AL_obj::UNDETERMINED,HX_HCSTRING("UNDETERMINED","\x0a","\xed","\x9d","\x50")},
	{hx::fsInt,(void *) &AL_obj::FORMAT_MONO8,HX_HCSTRING("FORMAT_MONO8","\x6d","\x40","\x81","\x7a")},
	{hx::fsInt,(void *) &AL_obj::FORMAT_MONO16,HX_HCSTRING("FORMAT_MONO16","\x10","\x19","\x97","\xb6")},
	{hx::fsInt,(void *) &AL_obj::FORMAT_STEREO8,HX_HCSTRING("FORMAT_STEREO8","\xb8","\x19","\x58","\xda")},
	{hx::fsInt,(void *) &AL_obj::FORMAT_STEREO16,HX_HCSTRING("FORMAT_STEREO16","\x65","\x61","\xbe","\x32")},
	{hx::fsInt,(void *) &AL_obj::FREQUENCY,HX_HCSTRING("FREQUENCY","\x7c","\xf2","\x42","\xb7")},
	{hx::fsInt,(void *) &AL_obj::BITS,HX_HCSTRING("BITS","\x06","\xc3","\xd7","\x2b")},
	{hx::fsInt,(void *) &AL_obj::CHANNELS,HX_HCSTRING("CHANNELS","\x50","\x3a","\x74","\xc4")},
	{hx::fsInt,(void *) &AL_obj::SIZE,HX_HCSTRING("SIZE","\xc1","\x68","\x14","\x37")},
	{hx::fsInt,(void *) &AL_obj::NO_ERROR,HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f")},
	{hx::fsInt,(void *) &AL_obj::INVALID_NAME,HX_HCSTRING("INVALID_NAME","\xf3","\x7b","\x59","\x19")},
	{hx::fsInt,(void *) &AL_obj::INVALID_ENUM,HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13")},
	{hx::fsInt,(void *) &AL_obj::INVALID_VALUE,HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0")},
	{hx::fsInt,(void *) &AL_obj::INVALID_OPERATION,HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29")},
	{hx::fsInt,(void *) &AL_obj::OUT_OF_MEMORY,HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1")},
	{hx::fsInt,(void *) &AL_obj::VENDOR,HX_HCSTRING("VENDOR","\x88","\x91","\x19","\x51")},
	{hx::fsInt,(void *) &AL_obj::VERSION,HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc")},
	{hx::fsInt,(void *) &AL_obj::RENDERER,HX_HCSTRING("RENDERER","\x43","\x55","\x61","\x0c")},
	{hx::fsInt,(void *) &AL_obj::EXTENSIONS,HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b")},
	{hx::fsInt,(void *) &AL_obj::DOPPLER_FACTOR,HX_HCSTRING("DOPPLER_FACTOR","\xe0","\x6d","\x21","\x56")},
	{hx::fsInt,(void *) &AL_obj::SPEED_OF_SOUND,HX_HCSTRING("SPEED_OF_SOUND","\x5f","\x3f","\x54","\xba")},
	{hx::fsInt,(void *) &AL_obj::DOPPLER_VELOCITY,HX_HCSTRING("DOPPLER_VELOCITY","\x6e","\xe1","\x7d","\x1d")},
	{hx::fsInt,(void *) &AL_obj::DISTANCE_MODEL,HX_HCSTRING("DISTANCE_MODEL","\xbf","\x9b","\x1a","\x00")},
	{hx::fsInt,(void *) &AL_obj::INVERSE_DISTANCE,HX_HCSTRING("INVERSE_DISTANCE","\x04","\x89","\x17","\x1d")},
	{hx::fsInt,(void *) &AL_obj::INVERSE_DISTANCE_CLAMPED,HX_HCSTRING("INVERSE_DISTANCE_CLAMPED","\x7f","\x1a","\x32","\x28")},
	{hx::fsInt,(void *) &AL_obj::LINEAR_DISTANCE,HX_HCSTRING("LINEAR_DISTANCE","\x0f","\xb8","\xc7","\x14")},
	{hx::fsInt,(void *) &AL_obj::LINEAR_DISTANCE_CLAMPED,HX_HCSTRING("LINEAR_DISTANCE_CLAMPED","\x8a","\xcc","\x88","\xb2")},
	{hx::fsInt,(void *) &AL_obj::EXPONENT_DISTANCE,HX_HCSTRING("EXPONENT_DISTANCE","\x45","\x4a","\xec","\xc8")},
	{hx::fsInt,(void *) &AL_obj::EXPONENT_DISTANCE_CLAMPED,HX_HCSTRING("EXPONENT_DISTANCE_CLAMPED","\xc0","\x84","\x7b","\x57")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_buffer_data,HX_HCSTRING("lime_al_buffer_data","\x9f","\x3d","\x30","\xe4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_bufferf,HX_HCSTRING("lime_al_bufferf","\xfc","\xc8","\x9c","\xee")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_buffer3f,HX_HCSTRING("lime_al_buffer3f","\x7d","\xe7","\x92","\xda")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_bufferfv,HX_HCSTRING("lime_al_bufferfv","\xfa","\x13","\x93","\xda")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_bufferi,HX_HCSTRING("lime_al_bufferi","\xff","\xc8","\x9c","\xee")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_buffer3i,HX_HCSTRING("lime_al_buffer3i","\x80","\xe7","\x92","\xda")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_bufferiv,HX_HCSTRING("lime_al_bufferiv","\x97","\x16","\x93","\xda")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_delete_buffer,HX_HCSTRING("lime_al_delete_buffer","\xea","\xb3","\x0d","\x56")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_delete_buffers,HX_HCSTRING("lime_al_delete_buffers","\x49","\xb9","\xef","\xf5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_delete_source,HX_HCSTRING("lime_al_delete_source","\xc5","\xa7","\xaa","\xb7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_delete_sources,HX_HCSTRING("lime_al_delete_sources","\x0e","\x25","\xa8","\xfd")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_disable,HX_HCSTRING("lime_al_disable","\x7e","\x8f","\x64","\xee")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_distance_model,HX_HCSTRING("lime_al_distance_model","\x09","\x2d","\x9c","\x2e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_doppler_factor,HX_HCSTRING("lime_al_doppler_factor","\xea","\xb2","\x5f","\x1d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_doppler_velocity,HX_HCSTRING("lime_al_doppler_velocity","\xf8","\x18","\x9f","\xe4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_enable,HX_HCSTRING("lime_al_enable","\xad","\xcd","\xb6","\x64")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_gen_source,HX_HCSTRING("lime_al_gen_source","\x14","\x70","\x09","\x16")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_gen_sources,HX_HCSTRING("lime_al_gen_sources","\xdf","\xa1","\x38","\x32")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_gen_buffer,HX_HCSTRING("lime_al_gen_buffer","\x39","\x7c","\x6c","\xb4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_gen_buffers,HX_HCSTRING("lime_al_gen_buffers","\x1a","\x36","\x80","\x2a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_buffer3f,HX_HCSTRING("lime_al_get_buffer3f","\x86","\xb8","\x6d","\x87")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_buffer3i,HX_HCSTRING("lime_al_get_buffer3i","\x89","\xb8","\x6d","\x87")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_bufferf,HX_HCSTRING("lime_al_get_bufferf","\x13","\xac","\x28","\x1c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_bufferfv,HX_HCSTRING("lime_al_get_bufferfv","\x03","\xe5","\x6d","\x87")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_bufferi,HX_HCSTRING("lime_al_get_bufferi","\x16","\xac","\x28","\x1c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_bufferiv,HX_HCSTRING("lime_al_get_bufferiv","\xa0","\xe7","\x6d","\x87")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_boolean,HX_HCSTRING("lime_al_get_boolean","\x55","\xf3","\x96","\xe8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_booleanv,HX_HCSTRING("lime_al_get_booleanv","\x81","\xf7","\x7d","\x9b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_double,HX_HCSTRING("lime_al_get_double","\x04","\x97","\xd1","\x6d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_doublev,HX_HCSTRING("lime_al_get_doublev","\xf2","\x8c","\x92","\xa9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_enum_value,HX_HCSTRING("lime_al_get_enum_value","\xe6","\xc9","\xe4","\x87")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_error,HX_HCSTRING("lime_al_get_error","\x35","\x5f","\x64","\x6b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_float,HX_HCSTRING("lime_al_get_float","\x09","\x59","\xd1","\xfa")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_floatv,HX_HCSTRING("lime_al_get_floatv","\x4d","\x8f","\x5c","\x7c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_integer,HX_HCSTRING("lime_al_get_integer","\x6b","\xc6","\xb3","\x81")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_integerv,HX_HCSTRING("lime_al_get_integerv","\xab","\xd7","\x99","\xfb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_listenerf,HX_HCSTRING("lime_al_get_listenerf","\x5f","\xb3","\xbb","\x3a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_listener3f,HX_HCSTRING("lime_al_get_listener3f","\xba","\x13","\x81","\x29")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_listenerfv,HX_HCSTRING("lime_al_get_listenerfv","\x37","\x40","\x81","\x29")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_listeneri,HX_HCSTRING("lime_al_get_listeneri","\x62","\xb3","\xbb","\x3a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_listener3i,HX_HCSTRING("lime_al_get_listener3i","\xbd","\x13","\x81","\x29")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_listeneriv,HX_HCSTRING("lime_al_get_listeneriv","\xd4","\x42","\x81","\x29")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_proc_address,HX_HCSTRING("lime_al_get_proc_address","\xfe","\x7c","\x3d","\x26")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_source3f,HX_HCSTRING("lime_al_get_source3f","\x21","\x99","\x13","\x41")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_source3i,HX_HCSTRING("lime_al_get_source3i","\x24","\x99","\x13","\x41")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_sourcef,HX_HCSTRING("lime_al_get_sourcef","\xd8","\x17","\xe1","\x23")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_sourcefv,HX_HCSTRING("lime_al_get_sourcefv","\x9e","\xc5","\x13","\x41")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_sourcei,HX_HCSTRING("lime_al_get_sourcei","\xdb","\x17","\xe1","\x23")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_sourceiv,HX_HCSTRING("lime_al_get_sourceiv","\x3b","\xc8","\x13","\x41")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_get_string,HX_HCSTRING("lime_al_get_string","\xc4","\x94","\x36","\x4c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_is_buffer,HX_HCSTRING("lime_al_is_buffer","\x0b","\x5b","\x4a","\x2a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_is_enabled,HX_HCSTRING("lime_al_is_enabled","\x16","\xb0","\x65","\xa3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_is_extension_present,HX_HCSTRING("lime_al_is_extension_present","\xd0","\x16","\x00","\xef")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_is_source,HX_HCSTRING("lime_al_is_source","\xe6","\x4e","\xe7","\x8b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_listener3f,HX_HCSTRING("lime_al_listener3f","\x71","\x2e","\x89","\x73")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_listener3i,HX_HCSTRING("lime_al_listener3i","\x74","\x2e","\x89","\x73")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_listenerf,HX_HCSTRING("lime_al_listenerf","\x88","\x9c","\x1f","\xa8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_listenerfv,HX_HCSTRING("lime_al_listenerfv","\xee","\x5a","\x89","\x73")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_listeneri,HX_HCSTRING("lime_al_listeneri","\x8b","\x9c","\x1f","\xa8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_listeneriv,HX_HCSTRING("lime_al_listeneriv","\x8b","\x5d","\x89","\x73")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_source_play,HX_HCSTRING("lime_al_source_play","\xae","\x47","\xe1","\x7d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_source_playv,HX_HCSTRING("lime_al_source_playv","\x08","\x71","\x3d","\xa7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_source_stop,HX_HCSTRING("lime_al_source_stop","\xbc","\x09","\xe3","\x7f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_source_stopv,HX_HCSTRING("lime_al_source_stopv","\x3a","\x7b","\xc5","\x66")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_source_rewind,HX_HCSTRING("lime_al_source_rewind","\x35","\xa6","\xec","\x81")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_source_rewindv,HX_HCSTRING("lime_al_source_rewindv","\xa1","\xc8","\x24","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_source_pause,HX_HCSTRING("lime_al_source_pause","\xfc","\x3f","\x07","\xa0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_source_pausev,HX_HCSTRING("lime_al_source_pausev","\xfa","\xbc","\x50","\x66")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_source_queue_buffers,HX_HCSTRING("lime_al_source_queue_buffers","\x8b","\xe2","\x2d","\x54")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_source_unqueue_buffers,HX_HCSTRING("lime_al_source_unqueue_buffers","\x12","\x06","\xe2","\x64")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_source3f,HX_HCSTRING("lime_al_source3f","\x18","\xc8","\x38","\x94")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_source3i,HX_HCSTRING("lime_al_source3i","\x1b","\xc8","\x38","\x94")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_sourcef,HX_HCSTRING("lime_al_sourcef","\xc1","\x34","\x55","\xf6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_sourcefv,HX_HCSTRING("lime_al_sourcefv","\x95","\xf4","\x38","\x94")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_sourcei,HX_HCSTRING("lime_al_sourcei","\xc4","\x34","\x55","\xf6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_sourceiv,HX_HCSTRING("lime_al_sourceiv","\x32","\xf7","\x38","\x94")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::lime_al_speed_of_sound,HX_HCSTRING("lime_al_speed_of_sound","\x89","\xb0","\xa8","\x8a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AL_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AL_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(AL_obj::FALSE,"FALSE");
	HX_MARK_MEMBER_NAME(AL_obj::TRUE,"TRUE");
	HX_MARK_MEMBER_NAME(AL_obj::SOURCE_RELATIVE,"SOURCE_RELATIVE");
	HX_MARK_MEMBER_NAME(AL_obj::CONE_INNER_ANGLE,"CONE_INNER_ANGLE");
	HX_MARK_MEMBER_NAME(AL_obj::CONE_OUTER_ANGLE,"CONE_OUTER_ANGLE");
	HX_MARK_MEMBER_NAME(AL_obj::PITCH,"PITCH");
	HX_MARK_MEMBER_NAME(AL_obj::POSITION,"POSITION");
	HX_MARK_MEMBER_NAME(AL_obj::DIRECTION,"DIRECTION");
	HX_MARK_MEMBER_NAME(AL_obj::VELOCITY,"VELOCITY");
	HX_MARK_MEMBER_NAME(AL_obj::LOOPING,"LOOPING");
	HX_MARK_MEMBER_NAME(AL_obj::BUFFER,"BUFFER");
	HX_MARK_MEMBER_NAME(AL_obj::GAIN,"GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::MIN_GAIN,"MIN_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::MAX_GAIN,"MAX_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::ORIENTATION,"ORIENTATION");
	HX_MARK_MEMBER_NAME(AL_obj::SOURCE_STATE,"SOURCE_STATE");
	HX_MARK_MEMBER_NAME(AL_obj::INITIAL,"INITIAL");
	HX_MARK_MEMBER_NAME(AL_obj::PLAYING,"PLAYING");
	HX_MARK_MEMBER_NAME(AL_obj::PAUSED,"PAUSED");
	HX_MARK_MEMBER_NAME(AL_obj::STOPPED,"STOPPED");
	HX_MARK_MEMBER_NAME(AL_obj::BUFFERS_QUEUED,"BUFFERS_QUEUED");
	HX_MARK_MEMBER_NAME(AL_obj::BUFFERS_PROCESSED,"BUFFERS_PROCESSED");
	HX_MARK_MEMBER_NAME(AL_obj::REFERENCE_DISTANCE,"REFERENCE_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::ROLLOFF_FACTOR,"ROLLOFF_FACTOR");
	HX_MARK_MEMBER_NAME(AL_obj::CONE_OUTER_GAIN,"CONE_OUTER_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::MAX_DISTANCE,"MAX_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::SEC_OFFSET,"SEC_OFFSET");
	HX_MARK_MEMBER_NAME(AL_obj::SAMPLE_OFFSET,"SAMPLE_OFFSET");
	HX_MARK_MEMBER_NAME(AL_obj::BYTE_OFFSET,"BYTE_OFFSET");
	HX_MARK_MEMBER_NAME(AL_obj::SOURCE_TYPE,"SOURCE_TYPE");
	HX_MARK_MEMBER_NAME(AL_obj::STATIC,"STATIC");
	HX_MARK_MEMBER_NAME(AL_obj::STREAMING,"STREAMING");
	HX_MARK_MEMBER_NAME(AL_obj::UNDETERMINED,"UNDETERMINED");
	HX_MARK_MEMBER_NAME(AL_obj::FORMAT_MONO8,"FORMAT_MONO8");
	HX_MARK_MEMBER_NAME(AL_obj::FORMAT_MONO16,"FORMAT_MONO16");
	HX_MARK_MEMBER_NAME(AL_obj::FORMAT_STEREO8,"FORMAT_STEREO8");
	HX_MARK_MEMBER_NAME(AL_obj::FORMAT_STEREO16,"FORMAT_STEREO16");
	HX_MARK_MEMBER_NAME(AL_obj::FREQUENCY,"FREQUENCY");
	HX_MARK_MEMBER_NAME(AL_obj::BITS,"BITS");
	HX_MARK_MEMBER_NAME(AL_obj::CHANNELS,"CHANNELS");
	HX_MARK_MEMBER_NAME(AL_obj::SIZE,"SIZE");
	HX_MARK_MEMBER_NAME(AL_obj::NO_ERROR,"NO_ERROR");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_NAME,"INVALID_NAME");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_MARK_MEMBER_NAME(AL_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_MARK_MEMBER_NAME(AL_obj::VENDOR,"VENDOR");
	HX_MARK_MEMBER_NAME(AL_obj::VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(AL_obj::RENDERER,"RENDERER");
	HX_MARK_MEMBER_NAME(AL_obj::EXTENSIONS,"EXTENSIONS");
	HX_MARK_MEMBER_NAME(AL_obj::DOPPLER_FACTOR,"DOPPLER_FACTOR");
	HX_MARK_MEMBER_NAME(AL_obj::SPEED_OF_SOUND,"SPEED_OF_SOUND");
	HX_MARK_MEMBER_NAME(AL_obj::DOPPLER_VELOCITY,"DOPPLER_VELOCITY");
	HX_MARK_MEMBER_NAME(AL_obj::DISTANCE_MODEL,"DISTANCE_MODEL");
	HX_MARK_MEMBER_NAME(AL_obj::INVERSE_DISTANCE,"INVERSE_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::INVERSE_DISTANCE_CLAMPED,"INVERSE_DISTANCE_CLAMPED");
	HX_MARK_MEMBER_NAME(AL_obj::LINEAR_DISTANCE,"LINEAR_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::LINEAR_DISTANCE_CLAMPED,"LINEAR_DISTANCE_CLAMPED");
	HX_MARK_MEMBER_NAME(AL_obj::EXPONENT_DISTANCE,"EXPONENT_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::EXPONENT_DISTANCE_CLAMPED,"EXPONENT_DISTANCE_CLAMPED");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_buffer_data,"lime_al_buffer_data");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_bufferf,"lime_al_bufferf");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_buffer3f,"lime_al_buffer3f");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_bufferfv,"lime_al_bufferfv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_bufferi,"lime_al_bufferi");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_buffer3i,"lime_al_buffer3i");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_bufferiv,"lime_al_bufferiv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_delete_buffer,"lime_al_delete_buffer");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_delete_buffers,"lime_al_delete_buffers");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_delete_source,"lime_al_delete_source");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_delete_sources,"lime_al_delete_sources");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_disable,"lime_al_disable");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_distance_model,"lime_al_distance_model");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_doppler_factor,"lime_al_doppler_factor");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_doppler_velocity,"lime_al_doppler_velocity");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_enable,"lime_al_enable");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_gen_source,"lime_al_gen_source");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_gen_sources,"lime_al_gen_sources");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_gen_buffer,"lime_al_gen_buffer");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_gen_buffers,"lime_al_gen_buffers");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_buffer3f,"lime_al_get_buffer3f");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_buffer3i,"lime_al_get_buffer3i");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_bufferf,"lime_al_get_bufferf");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_bufferfv,"lime_al_get_bufferfv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_bufferi,"lime_al_get_bufferi");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_bufferiv,"lime_al_get_bufferiv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_boolean,"lime_al_get_boolean");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_booleanv,"lime_al_get_booleanv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_double,"lime_al_get_double");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_doublev,"lime_al_get_doublev");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_enum_value,"lime_al_get_enum_value");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_error,"lime_al_get_error");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_float,"lime_al_get_float");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_floatv,"lime_al_get_floatv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_integer,"lime_al_get_integer");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_integerv,"lime_al_get_integerv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_listenerf,"lime_al_get_listenerf");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_listener3f,"lime_al_get_listener3f");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_listenerfv,"lime_al_get_listenerfv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_listeneri,"lime_al_get_listeneri");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_listener3i,"lime_al_get_listener3i");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_listeneriv,"lime_al_get_listeneriv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_proc_address,"lime_al_get_proc_address");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_source3f,"lime_al_get_source3f");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_source3i,"lime_al_get_source3i");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_sourcef,"lime_al_get_sourcef");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_sourcefv,"lime_al_get_sourcefv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_sourcei,"lime_al_get_sourcei");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_sourceiv,"lime_al_get_sourceiv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_get_string,"lime_al_get_string");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_is_buffer,"lime_al_is_buffer");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_is_enabled,"lime_al_is_enabled");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_is_extension_present,"lime_al_is_extension_present");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_is_source,"lime_al_is_source");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_listener3f,"lime_al_listener3f");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_listener3i,"lime_al_listener3i");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_listenerf,"lime_al_listenerf");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_listenerfv,"lime_al_listenerfv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_listeneri,"lime_al_listeneri");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_listeneriv,"lime_al_listeneriv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_source_play,"lime_al_source_play");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_source_playv,"lime_al_source_playv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_source_stop,"lime_al_source_stop");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_source_stopv,"lime_al_source_stopv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_source_rewind,"lime_al_source_rewind");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_source_rewindv,"lime_al_source_rewindv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_source_pause,"lime_al_source_pause");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_source_pausev,"lime_al_source_pausev");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_source_queue_buffers,"lime_al_source_queue_buffers");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_source_unqueue_buffers,"lime_al_source_unqueue_buffers");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_source3f,"lime_al_source3f");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_source3i,"lime_al_source3i");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_sourcef,"lime_al_sourcef");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_sourcefv,"lime_al_sourcefv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_sourcei,"lime_al_sourcei");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_sourceiv,"lime_al_sourceiv");
	HX_MARK_MEMBER_NAME(AL_obj::lime_al_speed_of_sound,"lime_al_speed_of_sound");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AL_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AL_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(AL_obj::FALSE,"FALSE");
	HX_VISIT_MEMBER_NAME(AL_obj::TRUE,"TRUE");
	HX_VISIT_MEMBER_NAME(AL_obj::SOURCE_RELATIVE,"SOURCE_RELATIVE");
	HX_VISIT_MEMBER_NAME(AL_obj::CONE_INNER_ANGLE,"CONE_INNER_ANGLE");
	HX_VISIT_MEMBER_NAME(AL_obj::CONE_OUTER_ANGLE,"CONE_OUTER_ANGLE");
	HX_VISIT_MEMBER_NAME(AL_obj::PITCH,"PITCH");
	HX_VISIT_MEMBER_NAME(AL_obj::POSITION,"POSITION");
	HX_VISIT_MEMBER_NAME(AL_obj::DIRECTION,"DIRECTION");
	HX_VISIT_MEMBER_NAME(AL_obj::VELOCITY,"VELOCITY");
	HX_VISIT_MEMBER_NAME(AL_obj::LOOPING,"LOOPING");
	HX_VISIT_MEMBER_NAME(AL_obj::BUFFER,"BUFFER");
	HX_VISIT_MEMBER_NAME(AL_obj::GAIN,"GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::MIN_GAIN,"MIN_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::MAX_GAIN,"MAX_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::ORIENTATION,"ORIENTATION");
	HX_VISIT_MEMBER_NAME(AL_obj::SOURCE_STATE,"SOURCE_STATE");
	HX_VISIT_MEMBER_NAME(AL_obj::INITIAL,"INITIAL");
	HX_VISIT_MEMBER_NAME(AL_obj::PLAYING,"PLAYING");
	HX_VISIT_MEMBER_NAME(AL_obj::PAUSED,"PAUSED");
	HX_VISIT_MEMBER_NAME(AL_obj::STOPPED,"STOPPED");
	HX_VISIT_MEMBER_NAME(AL_obj::BUFFERS_QUEUED,"BUFFERS_QUEUED");
	HX_VISIT_MEMBER_NAME(AL_obj::BUFFERS_PROCESSED,"BUFFERS_PROCESSED");
	HX_VISIT_MEMBER_NAME(AL_obj::REFERENCE_DISTANCE,"REFERENCE_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::ROLLOFF_FACTOR,"ROLLOFF_FACTOR");
	HX_VISIT_MEMBER_NAME(AL_obj::CONE_OUTER_GAIN,"CONE_OUTER_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::MAX_DISTANCE,"MAX_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::SEC_OFFSET,"SEC_OFFSET");
	HX_VISIT_MEMBER_NAME(AL_obj::SAMPLE_OFFSET,"SAMPLE_OFFSET");
	HX_VISIT_MEMBER_NAME(AL_obj::BYTE_OFFSET,"BYTE_OFFSET");
	HX_VISIT_MEMBER_NAME(AL_obj::SOURCE_TYPE,"SOURCE_TYPE");
	HX_VISIT_MEMBER_NAME(AL_obj::STATIC,"STATIC");
	HX_VISIT_MEMBER_NAME(AL_obj::STREAMING,"STREAMING");
	HX_VISIT_MEMBER_NAME(AL_obj::UNDETERMINED,"UNDETERMINED");
	HX_VISIT_MEMBER_NAME(AL_obj::FORMAT_MONO8,"FORMAT_MONO8");
	HX_VISIT_MEMBER_NAME(AL_obj::FORMAT_MONO16,"FORMAT_MONO16");
	HX_VISIT_MEMBER_NAME(AL_obj::FORMAT_STEREO8,"FORMAT_STEREO8");
	HX_VISIT_MEMBER_NAME(AL_obj::FORMAT_STEREO16,"FORMAT_STEREO16");
	HX_VISIT_MEMBER_NAME(AL_obj::FREQUENCY,"FREQUENCY");
	HX_VISIT_MEMBER_NAME(AL_obj::BITS,"BITS");
	HX_VISIT_MEMBER_NAME(AL_obj::CHANNELS,"CHANNELS");
	HX_VISIT_MEMBER_NAME(AL_obj::SIZE,"SIZE");
	HX_VISIT_MEMBER_NAME(AL_obj::NO_ERROR,"NO_ERROR");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_NAME,"INVALID_NAME");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_VISIT_MEMBER_NAME(AL_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_VISIT_MEMBER_NAME(AL_obj::VENDOR,"VENDOR");
	HX_VISIT_MEMBER_NAME(AL_obj::VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(AL_obj::RENDERER,"RENDERER");
	HX_VISIT_MEMBER_NAME(AL_obj::EXTENSIONS,"EXTENSIONS");
	HX_VISIT_MEMBER_NAME(AL_obj::DOPPLER_FACTOR,"DOPPLER_FACTOR");
	HX_VISIT_MEMBER_NAME(AL_obj::SPEED_OF_SOUND,"SPEED_OF_SOUND");
	HX_VISIT_MEMBER_NAME(AL_obj::DOPPLER_VELOCITY,"DOPPLER_VELOCITY");
	HX_VISIT_MEMBER_NAME(AL_obj::DISTANCE_MODEL,"DISTANCE_MODEL");
	HX_VISIT_MEMBER_NAME(AL_obj::INVERSE_DISTANCE,"INVERSE_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::INVERSE_DISTANCE_CLAMPED,"INVERSE_DISTANCE_CLAMPED");
	HX_VISIT_MEMBER_NAME(AL_obj::LINEAR_DISTANCE,"LINEAR_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::LINEAR_DISTANCE_CLAMPED,"LINEAR_DISTANCE_CLAMPED");
	HX_VISIT_MEMBER_NAME(AL_obj::EXPONENT_DISTANCE,"EXPONENT_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::EXPONENT_DISTANCE_CLAMPED,"EXPONENT_DISTANCE_CLAMPED");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_buffer_data,"lime_al_buffer_data");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_bufferf,"lime_al_bufferf");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_buffer3f,"lime_al_buffer3f");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_bufferfv,"lime_al_bufferfv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_bufferi,"lime_al_bufferi");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_buffer3i,"lime_al_buffer3i");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_bufferiv,"lime_al_bufferiv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_delete_buffer,"lime_al_delete_buffer");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_delete_buffers,"lime_al_delete_buffers");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_delete_source,"lime_al_delete_source");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_delete_sources,"lime_al_delete_sources");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_disable,"lime_al_disable");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_distance_model,"lime_al_distance_model");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_doppler_factor,"lime_al_doppler_factor");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_doppler_velocity,"lime_al_doppler_velocity");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_enable,"lime_al_enable");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_gen_source,"lime_al_gen_source");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_gen_sources,"lime_al_gen_sources");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_gen_buffer,"lime_al_gen_buffer");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_gen_buffers,"lime_al_gen_buffers");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_buffer3f,"lime_al_get_buffer3f");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_buffer3i,"lime_al_get_buffer3i");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_bufferf,"lime_al_get_bufferf");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_bufferfv,"lime_al_get_bufferfv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_bufferi,"lime_al_get_bufferi");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_bufferiv,"lime_al_get_bufferiv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_boolean,"lime_al_get_boolean");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_booleanv,"lime_al_get_booleanv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_double,"lime_al_get_double");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_doublev,"lime_al_get_doublev");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_enum_value,"lime_al_get_enum_value");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_error,"lime_al_get_error");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_float,"lime_al_get_float");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_floatv,"lime_al_get_floatv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_integer,"lime_al_get_integer");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_integerv,"lime_al_get_integerv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_listenerf,"lime_al_get_listenerf");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_listener3f,"lime_al_get_listener3f");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_listenerfv,"lime_al_get_listenerfv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_listeneri,"lime_al_get_listeneri");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_listener3i,"lime_al_get_listener3i");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_listeneriv,"lime_al_get_listeneriv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_proc_address,"lime_al_get_proc_address");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_source3f,"lime_al_get_source3f");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_source3i,"lime_al_get_source3i");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_sourcef,"lime_al_get_sourcef");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_sourcefv,"lime_al_get_sourcefv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_sourcei,"lime_al_get_sourcei");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_sourceiv,"lime_al_get_sourceiv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_get_string,"lime_al_get_string");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_is_buffer,"lime_al_is_buffer");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_is_enabled,"lime_al_is_enabled");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_is_extension_present,"lime_al_is_extension_present");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_is_source,"lime_al_is_source");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_listener3f,"lime_al_listener3f");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_listener3i,"lime_al_listener3i");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_listenerf,"lime_al_listenerf");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_listenerfv,"lime_al_listenerfv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_listeneri,"lime_al_listeneri");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_listeneriv,"lime_al_listeneriv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_source_play,"lime_al_source_play");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_source_playv,"lime_al_source_playv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_source_stop,"lime_al_source_stop");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_source_stopv,"lime_al_source_stopv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_source_rewind,"lime_al_source_rewind");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_source_rewindv,"lime_al_source_rewindv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_source_pause,"lime_al_source_pause");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_source_pausev,"lime_al_source_pausev");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_source_queue_buffers,"lime_al_source_queue_buffers");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_source_unqueue_buffers,"lime_al_source_unqueue_buffers");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_source3f,"lime_al_source3f");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_source3i,"lime_al_source3i");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_sourcef,"lime_al_sourcef");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_sourcefv,"lime_al_sourcefv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_sourcei,"lime_al_sourcei");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_sourceiv,"lime_al_sourceiv");
	HX_VISIT_MEMBER_NAME(AL_obj::lime_al_speed_of_sound,"lime_al_speed_of_sound");
};

#endif

hx::Class AL_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79"),
	HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37"),
	HX_HCSTRING("SOURCE_RELATIVE","\xf0","\xf3","\x84","\xfe"),
	HX_HCSTRING("CONE_INNER_ANGLE","\x4e","\xa1","\xd7","\x93"),
	HX_HCSTRING("CONE_OUTER_ANGLE","\xf3","\xe1","\xbf","\xcc"),
	HX_HCSTRING("PITCH","\xa0","\xf3","\x8e","\x40"),
	HX_HCSTRING("POSITION","\xa9","\x30","\x80","\x24"),
	HX_HCSTRING("DIRECTION","\x1f","\xd2","\x98","\x0b"),
	HX_HCSTRING("VELOCITY","\x1d","\x92","\x83","\x78"),
	HX_HCSTRING("LOOPING","\xde","\x50","\x51","\xa0"),
	HX_HCSTRING("BUFFER","\x00","\x69","\x17","\x83"),
	HX_HCSTRING("GAIN","\x7f","\xb8","\x1f","\x2f"),
	HX_HCSTRING("MIN_GAIN","\xac","\x29","\xd2","\x21"),
	HX_HCSTRING("MAX_GAIN","\x5a","\x0f","\xb8","\xd4"),
	HX_HCSTRING("ORIENTATION","\xb0","\xfa","\x3a","\xd4"),
	HX_HCSTRING("SOURCE_STATE","\x4d","\xe8","\x1e","\xab"),
	HX_HCSTRING("INITIAL","\x64","\xe4","\x72","\x4b"),
	HX_HCSTRING("PLAYING","\x4e","\xe3","\xeb","\x09"),
	HX_HCSTRING("PAUSED","\xae","\xec","\x06","\xa2"),
	HX_HCSTRING("STOPPED","\xed","\xa5","\x35","\xc3"),
	HX_HCSTRING("BUFFERS_QUEUED","\x5f","\x78","\xce","\x71"),
	HX_HCSTRING("BUFFERS_PROCESSED","\x42","\x9d","\x62","\xac"),
	HX_HCSTRING("REFERENCE_DISTANCE","\x89","\xd5","\xce","\x9a"),
	HX_HCSTRING("ROLLOFF_FACTOR","\xbc","\x10","\x98","\x56"),
	HX_HCSTRING("CONE_OUTER_GAIN","\x3f","\xda","\x8d","\xe3"),
	HX_HCSTRING("MAX_DISTANCE","\x90","\x83","\xbb","\xa5"),
	HX_HCSTRING("SEC_OFFSET","\xe1","\x5d","\xa3","\xac"),
	HX_HCSTRING("SAMPLE_OFFSET","\x48","\x82","\xac","\xb4"),
	HX_HCSTRING("BYTE_OFFSET","\x2a","\xdf","\x43","\x36"),
	HX_HCSTRING("SOURCE_TYPE","\xde","\xff","\x00","\xdf"),
	HX_HCSTRING("STATIC","\xae","\x88","\x7e","\xb8"),
	HX_HCSTRING("STREAMING","\x42","\x38","\x7b","\xb1"),
	HX_HCSTRING("UNDETERMINED","\x0a","\xed","\x9d","\x50"),
	HX_HCSTRING("FORMAT_MONO8","\x6d","\x40","\x81","\x7a"),
	HX_HCSTRING("FORMAT_MONO16","\x10","\x19","\x97","\xb6"),
	HX_HCSTRING("FORMAT_STEREO8","\xb8","\x19","\x58","\xda"),
	HX_HCSTRING("FORMAT_STEREO16","\x65","\x61","\xbe","\x32"),
	HX_HCSTRING("FREQUENCY","\x7c","\xf2","\x42","\xb7"),
	HX_HCSTRING("BITS","\x06","\xc3","\xd7","\x2b"),
	HX_HCSTRING("CHANNELS","\x50","\x3a","\x74","\xc4"),
	HX_HCSTRING("SIZE","\xc1","\x68","\x14","\x37"),
	HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f"),
	HX_HCSTRING("INVALID_NAME","\xf3","\x7b","\x59","\x19"),
	HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13"),
	HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0"),
	HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29"),
	HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1"),
	HX_HCSTRING("VENDOR","\x88","\x91","\x19","\x51"),
	HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc"),
	HX_HCSTRING("RENDERER","\x43","\x55","\x61","\x0c"),
	HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b"),
	HX_HCSTRING("DOPPLER_FACTOR","\xe0","\x6d","\x21","\x56"),
	HX_HCSTRING("SPEED_OF_SOUND","\x5f","\x3f","\x54","\xba"),
	HX_HCSTRING("DOPPLER_VELOCITY","\x6e","\xe1","\x7d","\x1d"),
	HX_HCSTRING("DISTANCE_MODEL","\xbf","\x9b","\x1a","\x00"),
	HX_HCSTRING("INVERSE_DISTANCE","\x04","\x89","\x17","\x1d"),
	HX_HCSTRING("INVERSE_DISTANCE_CLAMPED","\x7f","\x1a","\x32","\x28"),
	HX_HCSTRING("LINEAR_DISTANCE","\x0f","\xb8","\xc7","\x14"),
	HX_HCSTRING("LINEAR_DISTANCE_CLAMPED","\x8a","\xcc","\x88","\xb2"),
	HX_HCSTRING("EXPONENT_DISTANCE","\x45","\x4a","\xec","\xc8"),
	HX_HCSTRING("EXPONENT_DISTANCE_CLAMPED","\xc0","\x84","\x7b","\x57"),
	HX_HCSTRING("bufferData","\x4a","\xbf","\x73","\x93"),
	HX_HCSTRING("buffer3f","\xd3","\x29","\xfe","\xac"),
	HX_HCSTRING("buffer3i","\xd6","\x29","\xfe","\xac"),
	HX_HCSTRING("bufferf","\x66","\xa3","\x90","\xb1"),
	HX_HCSTRING("bufferfv","\x50","\x56","\xfe","\xac"),
	HX_HCSTRING("bufferi","\x69","\xa3","\x90","\xb1"),
	HX_HCSTRING("bufferiv","\xed","\x58","\xfe","\xac"),
	HX_HCSTRING("deleteBuffer","\x8b","\xe3","\x2c","\x37"),
	HX_HCSTRING("deleteBuffers","\x88","\x36","\x1a","\x10"),
	HX_HCSTRING("deleteSource","\x66","\xd7","\xc9","\x98"),
	HX_HCSTRING("deleteSources","\x4d","\xa2","\xd2","\x17"),
	HX_HCSTRING("disable","\xe8","\x69","\x58","\xb1"),
	HX_HCSTRING("distanceModel","\x34","\x40","\xe1","\xd3"),
	HX_HCSTRING("dopplerFactor","\xdd","\x2d","\x05","\x6f"),
	HX_HCSTRING("dopplerVelocity","\xab","\x76","\xcf","\x06"),
	HX_HCSTRING("enable","\x83","\xae","\x87","\xf8"),
	HX_HCSTRING("genSource","\x8b","\x71","\x07","\xb5"),
	HX_HCSTRING("genSources","\x88","\xe8","\x7b","\xb1"),
	HX_HCSTRING("genBuffer","\xb0","\x7d","\x6a","\x53"),
	HX_HCSTRING("genBuffers","\xc3","\x7c","\xc3","\xa9"),
	HX_HCSTRING("getBoolean","\xb2","\x70","\x60","\xcd"),
	HX_HCSTRING("getBooleanv","\x84","\x2b","\x02","\xe7"),
	HX_HCSTRING("getBuffer3f","\x89","\xec","\xf1","\xd2"),
	HX_HCSTRING("getBuffer3i","\x8c","\xec","\xf1","\xd2"),
	HX_HCSTRING("getBufferf","\x70","\x29","\xf2","\x00"),
	HX_HCSTRING("getBufferfv","\x06","\x19","\xf2","\xd2"),
	HX_HCSTRING("getBufferi","\x73","\x29","\xf2","\x00"),
	HX_HCSTRING("getBufferiv","\xa3","\x1b","\xf2","\xd2"),
	HX_HCSTRING("getDouble","\x47","\xb4","\x21","\xaf"),
	HX_HCSTRING("getDoublev","\x4f","\x0a","\x5c","\x8e"),
	HX_HCSTRING("getEnumValue","\x3a","\x9d","\x5d","\x37"),
	HX_HCSTRING("getError","\x52","\xdb","\x00","\xd3"),
	HX_HCSTRING("getErrorString","\xc3","\xc1","\x3b","\x87"),
	HX_HCSTRING("getFloat","\x26","\xd5","\x6d","\x62"),
	HX_HCSTRING("getFloatv","\x90","\xac","\xac","\xbd"),
	HX_HCSTRING("getInteger","\xc8","\x43","\x7d","\x66"),
	HX_HCSTRING("getIntegerv","\xae","\x0b","\x1e","\x47"),
	HX_HCSTRING("getListener3f","\x7d","\x8e","\x7c","\x85"),
	HX_HCSTRING("getListener3i","\x80","\x8e","\x7c","\x85"),
	HX_HCSTRING("getListenerf","\xfc","\x01","\xe5","\x02"),
	HX_HCSTRING("getListenerfv","\xfa","\xba","\x7c","\x85"),
	HX_HCSTRING("getListeneri","\xff","\x01","\xe5","\x02"),
	HX_HCSTRING("getListeneriv","\x97","\xbd","\x7c","\x85"),
	HX_HCSTRING("getProcAddress","\xc8","\xe3","\xa1","\x89"),
	HX_HCSTRING("getSource3f","\x24","\xcd","\x97","\x8c"),
	HX_HCSTRING("getSourcef","\x35","\x95","\xaa","\x08"),
	HX_HCSTRING("getSource3i","\x27","\xcd","\x97","\x8c"),
	HX_HCSTRING("getSourcefv","\xa1","\xf9","\x97","\x8c"),
	HX_HCSTRING("getSourcei","\x38","\x95","\xaa","\x08"),
	HX_HCSTRING("getSourceiv","\x3e","\xfc","\x97","\x8c"),
	HX_HCSTRING("getString","\x07","\xb2","\x86","\x8d"),
	HX_HCSTRING("isBuffer","\x8a","\x58","\xfe","\x28"),
	HX_HCSTRING("isEnabled","\xb7","\x81","\x2f","\x82"),
	HX_HCSTRING("isExtensionPresent","\x46","\xf9","\x2a","\xb4"),
	HX_HCSTRING("isSource","\x65","\x4c","\x9b","\x8a"),
	HX_HCSTRING("listener3f","\x47","\x32","\x0a","\x29"),
	HX_HCSTRING("listener3i","\x4a","\x32","\x0a","\x29"),
	HX_HCSTRING("listenerf","\x72","\x65","\x8e","\xf3"),
	HX_HCSTRING("listenerfv","\xc4","\x5e","\x0a","\x29"),
	HX_HCSTRING("listeneri","\x75","\x65","\x8e","\xf3"),
	HX_HCSTRING("listeneriv","\x61","\x61","\x0a","\x29"),
	HX_HCSTRING("source3f","\x6e","\x0a","\xa4","\x66"),
	HX_HCSTRING("source3i","\x71","\x0a","\xa4","\x66"),
	HX_HCSTRING("sourcef","\x2b","\x0f","\x49","\xb9"),
	HX_HCSTRING("sourcefv","\xeb","\x36","\xa4","\x66"),
	HX_HCSTRING("sourcei","\x2e","\x0f","\x49","\xb9"),
	HX_HCSTRING("sourceiv","\x88","\x39","\xa4","\x66"),
	HX_HCSTRING("sourcePlay","\x6f","\x14","\xbe","\x72"),
	HX_HCSTRING("sourcePlayv","\x27","\xcd","\x93","\xf3"),
	HX_HCSTRING("sourceStop","\x7d","\xd6","\xbf","\x74"),
	HX_HCSTRING("sourceStopv","\x59","\xd7","\x1b","\xb3"),
	HX_HCSTRING("sourceRewind","\x36","\xe5","\x26","\x01"),
	HX_HCSTRING("sourceRewindv","\x80","\xaa","\xe1","\x00"),
	HX_HCSTRING("sourcePause","\x1b","\x9c","\x5d","\xec"),
	HX_HCSTRING("sourcePausev","\xfb","\xfb","\x8a","\xe5"),
	HX_HCSTRING("sourceQueueBuffer","\x56","\x70","\x65","\x56"),
	HX_HCSTRING("sourceQueueBuffers","\x5d","\xdb","\x5c","\x42"),
	HX_HCSTRING("sourceUnqueueBuffer","\xdd","\x29","\x95","\x2e"),
	HX_HCSTRING("sourceUnqueueBuffers","\xf6","\x77","\xef","\x93"),
	HX_HCSTRING("speedOfSound","\x71","\xe7","\x21","\x0a"),
	HX_HCSTRING("lime_al_buffer_data","\x9f","\x3d","\x30","\xe4"),
	HX_HCSTRING("lime_al_bufferf","\xfc","\xc8","\x9c","\xee"),
	HX_HCSTRING("lime_al_buffer3f","\x7d","\xe7","\x92","\xda"),
	HX_HCSTRING("lime_al_bufferfv","\xfa","\x13","\x93","\xda"),
	HX_HCSTRING("lime_al_bufferi","\xff","\xc8","\x9c","\xee"),
	HX_HCSTRING("lime_al_buffer3i","\x80","\xe7","\x92","\xda"),
	HX_HCSTRING("lime_al_bufferiv","\x97","\x16","\x93","\xda"),
	HX_HCSTRING("lime_al_delete_buffer","\xea","\xb3","\x0d","\x56"),
	HX_HCSTRING("lime_al_delete_buffers","\x49","\xb9","\xef","\xf5"),
	HX_HCSTRING("lime_al_delete_source","\xc5","\xa7","\xaa","\xb7"),
	HX_HCSTRING("lime_al_delete_sources","\x0e","\x25","\xa8","\xfd"),
	HX_HCSTRING("lime_al_disable","\x7e","\x8f","\x64","\xee"),
	HX_HCSTRING("lime_al_distance_model","\x09","\x2d","\x9c","\x2e"),
	HX_HCSTRING("lime_al_doppler_factor","\xea","\xb2","\x5f","\x1d"),
	HX_HCSTRING("lime_al_doppler_velocity","\xf8","\x18","\x9f","\xe4"),
	HX_HCSTRING("lime_al_enable","\xad","\xcd","\xb6","\x64"),
	HX_HCSTRING("lime_al_gen_source","\x14","\x70","\x09","\x16"),
	HX_HCSTRING("lime_al_gen_sources","\xdf","\xa1","\x38","\x32"),
	HX_HCSTRING("lime_al_gen_buffer","\x39","\x7c","\x6c","\xb4"),
	HX_HCSTRING("lime_al_gen_buffers","\x1a","\x36","\x80","\x2a"),
	HX_HCSTRING("lime_al_get_buffer3f","\x86","\xb8","\x6d","\x87"),
	HX_HCSTRING("lime_al_get_buffer3i","\x89","\xb8","\x6d","\x87"),
	HX_HCSTRING("lime_al_get_bufferf","\x13","\xac","\x28","\x1c"),
	HX_HCSTRING("lime_al_get_bufferfv","\x03","\xe5","\x6d","\x87"),
	HX_HCSTRING("lime_al_get_bufferi","\x16","\xac","\x28","\x1c"),
	HX_HCSTRING("lime_al_get_bufferiv","\xa0","\xe7","\x6d","\x87"),
	HX_HCSTRING("lime_al_get_boolean","\x55","\xf3","\x96","\xe8"),
	HX_HCSTRING("lime_al_get_booleanv","\x81","\xf7","\x7d","\x9b"),
	HX_HCSTRING("lime_al_get_double","\x04","\x97","\xd1","\x6d"),
	HX_HCSTRING("lime_al_get_doublev","\xf2","\x8c","\x92","\xa9"),
	HX_HCSTRING("lime_al_get_enum_value","\xe6","\xc9","\xe4","\x87"),
	HX_HCSTRING("lime_al_get_error","\x35","\x5f","\x64","\x6b"),
	HX_HCSTRING("lime_al_get_float","\x09","\x59","\xd1","\xfa"),
	HX_HCSTRING("lime_al_get_floatv","\x4d","\x8f","\x5c","\x7c"),
	HX_HCSTRING("lime_al_get_integer","\x6b","\xc6","\xb3","\x81"),
	HX_HCSTRING("lime_al_get_integerv","\xab","\xd7","\x99","\xfb"),
	HX_HCSTRING("lime_al_get_listenerf","\x5f","\xb3","\xbb","\x3a"),
	HX_HCSTRING("lime_al_get_listener3f","\xba","\x13","\x81","\x29"),
	HX_HCSTRING("lime_al_get_listenerfv","\x37","\x40","\x81","\x29"),
	HX_HCSTRING("lime_al_get_listeneri","\x62","\xb3","\xbb","\x3a"),
	HX_HCSTRING("lime_al_get_listener3i","\xbd","\x13","\x81","\x29"),
	HX_HCSTRING("lime_al_get_listeneriv","\xd4","\x42","\x81","\x29"),
	HX_HCSTRING("lime_al_get_proc_address","\xfe","\x7c","\x3d","\x26"),
	HX_HCSTRING("lime_al_get_source3f","\x21","\x99","\x13","\x41"),
	HX_HCSTRING("lime_al_get_source3i","\x24","\x99","\x13","\x41"),
	HX_HCSTRING("lime_al_get_sourcef","\xd8","\x17","\xe1","\x23"),
	HX_HCSTRING("lime_al_get_sourcefv","\x9e","\xc5","\x13","\x41"),
	HX_HCSTRING("lime_al_get_sourcei","\xdb","\x17","\xe1","\x23"),
	HX_HCSTRING("lime_al_get_sourceiv","\x3b","\xc8","\x13","\x41"),
	HX_HCSTRING("lime_al_get_string","\xc4","\x94","\x36","\x4c"),
	HX_HCSTRING("lime_al_is_buffer","\x0b","\x5b","\x4a","\x2a"),
	HX_HCSTRING("lime_al_is_enabled","\x16","\xb0","\x65","\xa3"),
	HX_HCSTRING("lime_al_is_extension_present","\xd0","\x16","\x00","\xef"),
	HX_HCSTRING("lime_al_is_source","\xe6","\x4e","\xe7","\x8b"),
	HX_HCSTRING("lime_al_listener3f","\x71","\x2e","\x89","\x73"),
	HX_HCSTRING("lime_al_listener3i","\x74","\x2e","\x89","\x73"),
	HX_HCSTRING("lime_al_listenerf","\x88","\x9c","\x1f","\xa8"),
	HX_HCSTRING("lime_al_listenerfv","\xee","\x5a","\x89","\x73"),
	HX_HCSTRING("lime_al_listeneri","\x8b","\x9c","\x1f","\xa8"),
	HX_HCSTRING("lime_al_listeneriv","\x8b","\x5d","\x89","\x73"),
	HX_HCSTRING("lime_al_source_play","\xae","\x47","\xe1","\x7d"),
	HX_HCSTRING("lime_al_source_playv","\x08","\x71","\x3d","\xa7"),
	HX_HCSTRING("lime_al_source_stop","\xbc","\x09","\xe3","\x7f"),
	HX_HCSTRING("lime_al_source_stopv","\x3a","\x7b","\xc5","\x66"),
	HX_HCSTRING("lime_al_source_rewind","\x35","\xa6","\xec","\x81"),
	HX_HCSTRING("lime_al_source_rewindv","\xa1","\xc8","\x24","\x2d"),
	HX_HCSTRING("lime_al_source_pause","\xfc","\x3f","\x07","\xa0"),
	HX_HCSTRING("lime_al_source_pausev","\xfa","\xbc","\x50","\x66"),
	HX_HCSTRING("lime_al_source_queue_buffers","\x8b","\xe2","\x2d","\x54"),
	HX_HCSTRING("lime_al_source_unqueue_buffers","\x12","\x06","\xe2","\x64"),
	HX_HCSTRING("lime_al_source3f","\x18","\xc8","\x38","\x94"),
	HX_HCSTRING("lime_al_source3i","\x1b","\xc8","\x38","\x94"),
	HX_HCSTRING("lime_al_sourcef","\xc1","\x34","\x55","\xf6"),
	HX_HCSTRING("lime_al_sourcefv","\x95","\xf4","\x38","\x94"),
	HX_HCSTRING("lime_al_sourcei","\xc4","\x34","\x55","\xf6"),
	HX_HCSTRING("lime_al_sourceiv","\x32","\xf7","\x38","\x94"),
	HX_HCSTRING("lime_al_speed_of_sound","\x89","\xb0","\xa8","\x8a"),
	::String(null()) };

void AL_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.audio.openal.AL","\x93","\xcf","\xaa","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AL_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AL_obj >;
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

void AL_obj::__boot()
{
	NONE= (int)0;
	FALSE= (int)0;
	TRUE= (int)1;
	SOURCE_RELATIVE= (int)514;
	CONE_INNER_ANGLE= (int)4097;
	CONE_OUTER_ANGLE= (int)4098;
	PITCH= (int)4099;
	POSITION= (int)4100;
	DIRECTION= (int)4101;
	VELOCITY= (int)4102;
	LOOPING= (int)4103;
	BUFFER= (int)4105;
	GAIN= (int)4106;
	MIN_GAIN= (int)4109;
	MAX_GAIN= (int)4110;
	ORIENTATION= (int)4111;
	SOURCE_STATE= (int)4112;
	INITIAL= (int)4113;
	PLAYING= (int)4114;
	PAUSED= (int)4115;
	STOPPED= (int)4116;
	BUFFERS_QUEUED= (int)4117;
	BUFFERS_PROCESSED= (int)4118;
	REFERENCE_DISTANCE= (int)4128;
	ROLLOFF_FACTOR= (int)4129;
	CONE_OUTER_GAIN= (int)4130;
	MAX_DISTANCE= (int)4131;
	SEC_OFFSET= (int)4132;
	SAMPLE_OFFSET= (int)4133;
	BYTE_OFFSET= (int)4134;
	SOURCE_TYPE= (int)4135;
	STATIC= (int)4136;
	STREAMING= (int)4137;
	UNDETERMINED= (int)4144;
	FORMAT_MONO8= (int)4352;
	FORMAT_MONO16= (int)4353;
	FORMAT_STEREO8= (int)4354;
	FORMAT_STEREO16= (int)4355;
	FREQUENCY= (int)8193;
	BITS= (int)8194;
	CHANNELS= (int)8195;
	SIZE= (int)8196;
	NO_ERROR= (int)0;
	INVALID_NAME= (int)40961;
	INVALID_ENUM= (int)40962;
	INVALID_VALUE= (int)40963;
	INVALID_OPERATION= (int)40964;
	OUT_OF_MEMORY= (int)40965;
	VENDOR= (int)45057;
	VERSION= (int)45058;
	RENDERER= (int)45059;
	EXTENSIONS= (int)45060;
	DOPPLER_FACTOR= (int)49152;
	SPEED_OF_SOUND= (int)49155;
	DOPPLER_VELOCITY= (int)49153;
	DISTANCE_MODEL= (int)53248;
	INVERSE_DISTANCE= (int)53249;
	INVERSE_DISTANCE_CLAMPED= (int)53250;
	LINEAR_DISTANCE= (int)53251;
	LINEAR_DISTANCE_CLAMPED= (int)53252;
	EXPONENT_DISTANCE= (int)53253;
	EXPONENT_DISTANCE_CLAMPED= (int)53254;
	lime_al_buffer_data= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_buffer_data","\x9f","\x3d","\x30","\xe4"),(int)5,null());
	lime_al_bufferf= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_bufferf","\xfc","\xc8","\x9c","\xee"),(int)3,null());
	lime_al_buffer3f= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_buffer3f","\x7d","\xe7","\x92","\xda"),(int)5,null());
	lime_al_bufferfv= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_bufferfv","\xfa","\x13","\x93","\xda"),(int)3,null());
	lime_al_bufferi= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_bufferi","\xff","\xc8","\x9c","\xee"),(int)3,null());
	lime_al_buffer3i= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_buffer3i","\x80","\xe7","\x92","\xda"),(int)5,null());
	lime_al_bufferiv= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_bufferiv","\x97","\x16","\x93","\xda"),(int)3,null());
	lime_al_delete_buffer= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_delete_buffer","\xea","\xb3","\x0d","\x56"),(int)1,null());
	lime_al_delete_buffers= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_delete_buffers","\x49","\xb9","\xef","\xf5"),(int)2,null());
	lime_al_delete_source= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_delete_source","\xc5","\xa7","\xaa","\xb7"),(int)1,null());
	lime_al_delete_sources= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_delete_sources","\x0e","\x25","\xa8","\xfd"),(int)2,null());
	lime_al_disable= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_disable","\x7e","\x8f","\x64","\xee"),(int)1,null());
	lime_al_distance_model= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_distance_model","\x09","\x2d","\x9c","\x2e"),(int)1,null());
	lime_al_doppler_factor= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_doppler_factor","\xea","\xb2","\x5f","\x1d"),(int)1,null());
	lime_al_doppler_velocity= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_doppler_velocity","\xf8","\x18","\x9f","\xe4"),(int)1,null());
	lime_al_enable= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_enable","\xad","\xcd","\xb6","\x64"),(int)1,null());
	lime_al_gen_source= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_gen_source","\x14","\x70","\x09","\x16"),(int)0,null());
	lime_al_gen_sources= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_gen_sources","\xdf","\xa1","\x38","\x32"),(int)1,null());
	lime_al_gen_buffer= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_gen_buffer","\x39","\x7c","\x6c","\xb4"),(int)0,null());
	lime_al_gen_buffers= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_gen_buffers","\x1a","\x36","\x80","\x2a"),(int)1,null());
	lime_al_get_buffer3f= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_buffer3f","\x86","\xb8","\x6d","\x87"),(int)2,null());
	lime_al_get_buffer3i= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_buffer3i","\x89","\xb8","\x6d","\x87"),(int)2,null());
	lime_al_get_bufferf= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_bufferf","\x13","\xac","\x28","\x1c"),(int)2,null());
	lime_al_get_bufferfv= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_bufferfv","\x03","\xe5","\x6d","\x87"),(int)3,null());
	lime_al_get_bufferi= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_bufferi","\x16","\xac","\x28","\x1c"),(int)2,null());
	lime_al_get_bufferiv= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_bufferiv","\xa0","\xe7","\x6d","\x87"),(int)3,null());
	lime_al_get_boolean= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_boolean","\x55","\xf3","\x96","\xe8"),(int)1,null());
	lime_al_get_booleanv= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_booleanv","\x81","\xf7","\x7d","\x9b"),(int)2,null());
	lime_al_get_double= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_double","\x04","\x97","\xd1","\x6d"),(int)1,null());
	lime_al_get_doublev= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_doublev","\xf2","\x8c","\x92","\xa9"),(int)2,null());
	lime_al_get_enum_value= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_enum_value","\xe6","\xc9","\xe4","\x87"),(int)1,null());
	lime_al_get_error= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_error","\x35","\x5f","\x64","\x6b"),(int)0,null());
	lime_al_get_float= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_float","\x09","\x59","\xd1","\xfa"),(int)1,null());
	lime_al_get_floatv= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_floatv","\x4d","\x8f","\x5c","\x7c"),(int)2,null());
	lime_al_get_integer= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_integer","\x6b","\xc6","\xb3","\x81"),(int)1,null());
	lime_al_get_integerv= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_integerv","\xab","\xd7","\x99","\xfb"),(int)2,null());
	lime_al_get_listenerf= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_listenerf","\x5f","\xb3","\xbb","\x3a"),(int)1,null());
	lime_al_get_listener3f= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_listener3f","\xba","\x13","\x81","\x29"),(int)1,null());
	lime_al_get_listenerfv= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_listenerfv","\x37","\x40","\x81","\x29"),(int)2,null());
	lime_al_get_listeneri= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_listeneri","\x62","\xb3","\xbb","\x3a"),(int)1,null());
	lime_al_get_listener3i= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_listener3i","\xbd","\x13","\x81","\x29"),(int)1,null());
	lime_al_get_listeneriv= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_listeneriv","\xd4","\x42","\x81","\x29"),(int)2,null());
	lime_al_get_proc_address= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_proc_address","\xfe","\x7c","\x3d","\x26"),(int)1,null());
	lime_al_get_source3f= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_source3f","\x21","\x99","\x13","\x41"),(int)2,null());
	lime_al_get_source3i= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_source3i","\x24","\x99","\x13","\x41"),(int)2,null());
	lime_al_get_sourcef= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_sourcef","\xd8","\x17","\xe1","\x23"),(int)2,null());
	lime_al_get_sourcefv= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_sourcefv","\x9e","\xc5","\x13","\x41"),(int)2,null());
	lime_al_get_sourcei= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_sourcei","\xdb","\x17","\xe1","\x23"),(int)2,null());
	lime_al_get_sourceiv= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_sourceiv","\x3b","\xc8","\x13","\x41"),(int)3,null());
	lime_al_get_string= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_get_string","\xc4","\x94","\x36","\x4c"),(int)1,null());
	lime_al_is_buffer= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_is_buffer","\x0b","\x5b","\x4a","\x2a"),(int)1,null());
	lime_al_is_enabled= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_is_enabled","\x16","\xb0","\x65","\xa3"),(int)1,null());
	lime_al_is_extension_present= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_is_extension_present","\xd0","\x16","\x00","\xef"),(int)1,null());
	lime_al_is_source= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_is_source","\xe6","\x4e","\xe7","\x8b"),(int)1,null());
	lime_al_listener3f= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_listener3f","\x71","\x2e","\x89","\x73"),(int)4,null());
	lime_al_listener3i= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_listener3i","\x74","\x2e","\x89","\x73"),(int)4,null());
	lime_al_listenerf= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_listenerf","\x88","\x9c","\x1f","\xa8"),(int)2,null());
	lime_al_listenerfv= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_listenerfv","\xee","\x5a","\x89","\x73"),(int)2,null());
	lime_al_listeneri= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_listeneri","\x8b","\x9c","\x1f","\xa8"),(int)2,null());
	lime_al_listeneriv= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_listeneriv","\x8b","\x5d","\x89","\x73"),(int)2,null());
	lime_al_source_play= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_source_play","\xae","\x47","\xe1","\x7d"),(int)1,null());
	lime_al_source_playv= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_source_playv","\x08","\x71","\x3d","\xa7"),(int)2,null());
	lime_al_source_stop= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_source_stop","\xbc","\x09","\xe3","\x7f"),(int)1,null());
	lime_al_source_stopv= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_source_stopv","\x3a","\x7b","\xc5","\x66"),(int)2,null());
	lime_al_source_rewind= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_source_rewind","\x35","\xa6","\xec","\x81"),(int)1,null());
	lime_al_source_rewindv= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_source_rewindv","\xa1","\xc8","\x24","\x2d"),(int)2,null());
	lime_al_source_pause= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_source_pause","\xfc","\x3f","\x07","\xa0"),(int)1,null());
	lime_al_source_pausev= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_source_pausev","\xfa","\xbc","\x50","\x66"),(int)2,null());
	lime_al_source_queue_buffers= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_source_queue_buffers","\x8b","\xe2","\x2d","\x54"),(int)3,null());
	lime_al_source_unqueue_buffers= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_source_unqueue_buffers","\x12","\x06","\xe2","\x64"),(int)2,null());
	lime_al_source3f= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_source3f","\x18","\xc8","\x38","\x94"),(int)5,null());
	lime_al_source3i= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_source3i","\x1b","\xc8","\x38","\x94"),(int)5,null());
	lime_al_sourcef= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_sourcef","\xc1","\x34","\x55","\xf6"),(int)3,null());
	lime_al_sourcefv= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_sourcefv","\x95","\xf4","\x38","\x94"),(int)3,null());
	lime_al_sourcei= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_sourcei","\xc4","\x34","\x55","\xf6"),(int)3,null());
	lime_al_sourceiv= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_sourceiv","\x32","\xf7","\x38","\x94"),(int)3,null());
	lime_al_speed_of_sound= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_al_speed_of_sound","\x89","\xb0","\xa8","\x8a"),(int)1,null());
}

} // end namespace lime
} // end namespace audio
} // end namespace openal
