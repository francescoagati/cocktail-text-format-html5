#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLProgram
#include <lime/graphics/opengl/GLProgram.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLShader
#include <lime/graphics/opengl/GLShader.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_Float32Array
#include <lime/utils/Float32Array.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexArray
#include <openfl/_internal/renderer/opengl/utils/VertexArray.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexAttribute
#include <openfl/_internal/renderer/opengl/utils/VertexAttribute.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace shaders2{

Void Shader_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","new",0xad7101bd,"openfl._internal.renderer.opengl.shaders2.Shader.new","openfl/_internal/renderer/opengl/shaders2/Shader.hx",10,0x6ac2be14)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	struct _Function_1_1{
		inline static ::haxe::ds::StringMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/shaders2/Shader.hx",19,0x6ac2be14)
			{
				HX_STACK_LINE(19)
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(19)
				::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(19)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(19)
	this->uniforms = _Function_1_1::Block();
	struct _Function_1_2{
		inline static ::haxe::ds::StringMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/shaders2/Shader.hx",18,0x6ac2be14)
			{
				HX_STACK_LINE(18)
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(18)
				::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(18)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(18)
	this->attributes = _Function_1_2::Block();
	HX_STACK_LINE(26)
	int tmp = (::openfl::_internal::renderer::opengl::shaders2::Shader_obj::UID)++;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	this->ID = tmp;
	HX_STACK_LINE(27)
	this->gl = gl;
	HX_STACK_LINE(29)
	this->program = null();
}
;
	return null();
}

//Shader_obj::~Shader_obj() { }

Dynamic Shader_obj::__CreateEmpty() { return  new Shader_obj; }
hx::ObjectPtr< Shader_obj > Shader_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< Shader_obj > _result_ = new Shader_obj();
	_result_->__construct(gl);
	return _result_;}

Dynamic Shader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shader_obj > _result_ = new Shader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Shader_obj::init( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","init",0x12293b13,"openfl._internal.renderer.opengl.shaders2.Shader.init","openfl/_internal/renderer/opengl/shaders2/Shader.hx",32,0x6ac2be14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		::lime::graphics::GLRenderContext tmp = this->gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		::lime::graphics::opengl::GLProgram tmp1 = ::openfl::_internal::renderer::opengl::shaders2::Shader_obj::compileProgram(tmp,this->vertexSrc,this->fragmentSrc);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		this->program = tmp1;
		HX_STACK_LINE(34)
		{
			HX_STACK_LINE(34)
			::lime::graphics::opengl::GLProgram tmp2 = this->program;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(34)
			::lime::graphics::opengl::GLProgram program = tmp2;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(34)
			{
				HX_STACK_LINE(34)
				bool tmp3 = (program == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(34)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(34)
				if ((tmp3)){
					HX_STACK_LINE(34)
					tmp4 = (int)0;
				}
				else{
					HX_STACK_LINE(34)
					tmp4 = program->id;
				}
				HX_STACK_LINE(34)
				::lime::graphics::opengl::GL_obj::lime_gl_use_program(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,init,(void))

Void Shader_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","destroy",0x52d3d0d7,"openfl._internal.renderer.opengl.shaders2.Shader.destroy","openfl/_internal/renderer/opengl/shaders2/Shader.hx",37,0x6ac2be14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		::lime::graphics::opengl::GLProgram tmp = this->program;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		if ((tmp1)){
			HX_STACK_LINE(39)
			::lime::graphics::opengl::GLProgram tmp2 = this->program;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(39)
			::lime::graphics::opengl::GLProgram program = tmp2;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(39)
			{
				HX_STACK_LINE(39)
				Dynamic tmp3 = program->id;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(39)
				::lime::graphics::opengl::GL_obj::lime_gl_delete_program(tmp3);
				HX_STACK_LINE(39)
				program->invalidate();
			}
		}
		HX_STACK_LINE(42)
		this->attributes = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,destroy,(void))

int Shader_obj::getAttribLocation( ::String attribute){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","getAttribLocation",0x2bea14f2,"openfl._internal.renderer.opengl.shaders2.Shader.getAttribLocation","openfl/_internal/renderer/opengl/shaders2/Shader.hx",45,0x6ac2be14)
	HX_STACK_THIS(this)
	HX_STACK_ARG(attribute,"attribute")
	HX_STACK_LINE(46)
	::lime::graphics::opengl::GLProgram tmp = this->program;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	if ((tmp1)){
		HX_STACK_LINE(47)
		HX_STACK_DO_THROW(HX_HCSTRING("Shader isn't initialized","\x8a","\xbf","\x62","\x0e"));
	}
	HX_STACK_LINE(49)
	::haxe::ds::StringMap tmp2 = this->attributes;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	::String tmp3 = attribute;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(49)
	bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(49)
	if ((tmp4)){
		HX_STACK_LINE(50)
		::haxe::ds::StringMap tmp5 = this->attributes;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		::String tmp6 = attribute;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(50)
		Dynamic tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(50)
		Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(50)
		return tmp8;
	}
	else{
		HX_STACK_LINE(52)
		::lime::graphics::opengl::GLProgram tmp5 = this->program;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		Dynamic tmp6 = tmp5->id;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		::String tmp7 = attribute;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(52)
		int tmp8 = ::lime::graphics::opengl::GL_obj::lime_gl_get_attrib_location(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(52)
		int location = tmp8;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(53)
		::haxe::ds::StringMap tmp9 = this->attributes;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(53)
		::String tmp10 = attribute;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(53)
		int tmp11 = location;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(53)
		tmp9->set(tmp10,tmp11);
		HX_STACK_LINE(54)
		int tmp12 = location;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(54)
		return tmp12;
	}
	HX_STACK_LINE(49)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,getAttribLocation,return )

int Shader_obj::getUniformLocation( ::String uniform){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","getUniformLocation",0x7fb53ed6,"openfl._internal.renderer.opengl.shaders2.Shader.getUniformLocation","openfl/_internal/renderer/opengl/shaders2/Shader.hx",58,0x6ac2be14)
	HX_STACK_THIS(this)
	HX_STACK_ARG(uniform,"uniform")
	HX_STACK_LINE(59)
	::lime::graphics::opengl::GLProgram tmp = this->program;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	if ((tmp1)){
		HX_STACK_LINE(60)
		HX_STACK_DO_THROW(HX_HCSTRING("Shader isn't initialized","\x8a","\xbf","\x62","\x0e"));
	}
	HX_STACK_LINE(62)
	::haxe::ds::StringMap tmp2 = this->uniforms;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	::String tmp3 = uniform;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(62)
	bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(62)
	if ((tmp4)){
		HX_STACK_LINE(63)
		::haxe::ds::StringMap tmp5 = this->uniforms;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(63)
		::String tmp6 = uniform;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(63)
		Dynamic tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(63)
		Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(63)
		return tmp8;
	}
	else{
		HX_STACK_LINE(65)
		::lime::graphics::opengl::GLProgram tmp5 = this->program;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(65)
		Dynamic tmp6 = tmp5->id;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(65)
		::String tmp7 = uniform;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(65)
		int tmp8 = ::lime::graphics::opengl::GL_obj::lime_gl_get_uniform_location(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(65)
		int location = tmp8;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(66)
		::haxe::ds::StringMap tmp9 = this->uniforms;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(66)
		::String tmp10 = uniform;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(66)
		int tmp11 = location;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(66)
		tmp9->set(tmp10,tmp11);
		HX_STACK_LINE(67)
		int tmp12 = location;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(67)
		return tmp12;
	}
	HX_STACK_LINE(62)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,getUniformLocation,return )

Void Shader_obj::enableVertexAttribute( ::openfl::_internal::renderer::opengl::utils::VertexAttribute attribute,int stride,int offset){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","enableVertexAttribute",0x3cb9d972,"openfl._internal.renderer.opengl.shaders2.Shader.enableVertexAttribute","openfl/_internal/renderer/opengl/shaders2/Shader.hx",71,0x6ac2be14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attribute,"attribute")
		HX_STACK_ARG(stride,"stride")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_LINE(73)
		::String tmp = attribute->name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		int tmp1 = this->getAttribLocation(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		int location = tmp1;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			int tmp2 = location;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(74)
			::lime::graphics::opengl::GL_obj::lime_gl_enable_vertex_attrib_array(tmp2);
		}
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			int tmp2 = location;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(75)
			int tmp3 = attribute->components;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(75)
			int tmp4 = attribute->type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(75)
			bool tmp5 = attribute->normalized;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(75)
			int tmp6 = stride;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(75)
			int tmp7 = (offset * (int)4);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(75)
			::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib_pointer(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Shader_obj,enableVertexAttribute,(void))

Void Shader_obj::disableVertexAttribute( ::openfl::_internal::renderer::opengl::utils::VertexAttribute attribute,hx::Null< bool >  __o_setDefault){
bool setDefault = __o_setDefault.Default(true);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","disableVertexAttribute",0xb20b27d3,"openfl._internal.renderer.opengl.shaders2.Shader.disableVertexAttribute","openfl/_internal/renderer/opengl/shaders2/Shader.hx",78,0x6ac2be14)
	HX_STACK_THIS(this)
	HX_STACK_ARG(attribute,"attribute")
	HX_STACK_ARG(setDefault,"setDefault")
{
		HX_STACK_LINE(79)
		::String tmp = attribute->name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		int tmp1 = this->getAttribLocation(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(79)
		int location = tmp1;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			int tmp2 = location;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(80)
			::lime::graphics::opengl::GL_obj::lime_gl_disable_vertex_attrib_array(tmp2);
		}
		HX_STACK_LINE(81)
		bool tmp2 = setDefault;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		if ((tmp2)){
			HX_STACK_LINE(82)
			int _g = attribute->components;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(82)
			int tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(82)
			switch( (int)(tmp3)){
				case (int)1: {
					HX_STACK_LINE(84)
					::lime::utils::Float32Array tmp4 = attribute->defaultValue->subarray((int)0,(int)1);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(84)
					::lime::utils::Float32Array values = tmp4;		HX_STACK_VAR(values,"values");
					HX_STACK_LINE(84)
					{
						HX_STACK_LINE(84)
						int tmp5 = location;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(84)
						::lime::utils::ByteArray tmp6 = values->getByteBuffer();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(84)
						::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib1fv(tmp5,tmp6);
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(86)
					::lime::utils::Float32Array tmp4 = attribute->defaultValue->subarray((int)0,(int)2);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(86)
					::lime::utils::Float32Array values = tmp4;		HX_STACK_VAR(values,"values");
					HX_STACK_LINE(86)
					{
						HX_STACK_LINE(86)
						int tmp5 = location;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(86)
						::lime::utils::ByteArray tmp6 = values->getByteBuffer();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(86)
						::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib2fv(tmp5,tmp6);
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(88)
					::lime::utils::Float32Array tmp4 = attribute->defaultValue->subarray((int)0,(int)3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(88)
					::lime::utils::Float32Array values = tmp4;		HX_STACK_VAR(values,"values");
					HX_STACK_LINE(88)
					{
						HX_STACK_LINE(88)
						int tmp5 = location;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(88)
						::lime::utils::ByteArray tmp6 = values->getByteBuffer();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(88)
						::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib3fv(tmp5,tmp6);
					}
				}
				;break;
				default: {
					HX_STACK_LINE(90)
					::lime::utils::Float32Array tmp4 = attribute->defaultValue->subarray((int)0,(int)4);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(90)
					::lime::utils::Float32Array values = tmp4;		HX_STACK_VAR(values,"values");
					HX_STACK_LINE(90)
					{
						HX_STACK_LINE(90)
						int tmp5 = location;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(90)
						::lime::utils::ByteArray tmp6 = values->getByteBuffer();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(90)
						::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib4fv(tmp5,tmp6);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,disableVertexAttribute,(void))

Void Shader_obj::bindVertexArray( ::openfl::_internal::renderer::opengl::utils::VertexArray va){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","bindVertexArray",0x3a7531b5,"openfl._internal.renderer.opengl.shaders2.Shader.bindVertexArray","openfl/_internal/renderer/opengl/shaders2/Shader.hx",95,0x6ac2be14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(va,"va")
		HX_STACK_LINE(96)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(97)
		int tmp = va->get_stride();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		int stride = tmp;		HX_STACK_VAR(stride,"stride");
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(99)
			Array< ::Dynamic > _g1 = va->attributes;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(99)
			while((true)){
				HX_STACK_LINE(99)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(99)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(99)
				if ((tmp2)){
					HX_STACK_LINE(99)
					break;
				}
				HX_STACK_LINE(99)
				::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp3 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(99)
				::openfl::_internal::renderer::opengl::utils::VertexAttribute attribute = tmp3;		HX_STACK_VAR(attribute,"attribute");
				HX_STACK_LINE(99)
				++(_g);
				HX_STACK_LINE(100)
				bool tmp4 = attribute->enabled;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(100)
				if ((tmp4)){
					HX_STACK_LINE(101)
					::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp5 = attribute;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(101)
					int tmp6 = stride;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(101)
					int tmp7 = offset;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(101)
					this->enableVertexAttribute(tmp5,tmp6,tmp7);
					HX_STACK_LINE(102)
					int tmp8 = attribute->components;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(102)
					int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(102)
					{
						HX_STACK_LINE(102)
						int _g2 = attribute->type;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(102)
						int tmp10 = _g2;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(102)
						switch( (int)(tmp10)){
							case (int)5120: case (int)5121: {
								HX_STACK_LINE(102)
								tmp9 = (int)1;
							}
							;break;
							case (int)5122: case (int)5123: {
								HX_STACK_LINE(102)
								tmp9 = (int)2;
							}
							;break;
							default: {
								HX_STACK_LINE(102)
								tmp9 = (int)4;
							}
						}
					}
					HX_STACK_LINE(102)
					int tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(102)
					Float tmp11 = (Float(tmp10) / Float((int)4));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(102)
					int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(102)
					hx::AddEq(offset,tmp12);
				}
				else{
					HX_STACK_LINE(104)
					::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp5 = attribute;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(104)
					this->disableVertexAttribute(tmp5,true);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,bindVertexArray,(void))

Void Shader_obj::unbindVertexArray( ::openfl::_internal::renderer::opengl::utils::VertexArray va){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","unbindVertexArray",0xe5df88bc,"openfl._internal.renderer.opengl.shaders2.Shader.unbindVertexArray","openfl/_internal/renderer/opengl/shaders2/Shader.hx",110,0x6ac2be14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(va,"va")
		HX_STACK_LINE(110)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(110)
		Array< ::Dynamic > _g1 = va->attributes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(110)
		while((true)){
			HX_STACK_LINE(110)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(110)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(110)
			if ((tmp1)){
				HX_STACK_LINE(110)
				break;
			}
			HX_STACK_LINE(110)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp2 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(110)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute attribute = tmp2;		HX_STACK_VAR(attribute,"attribute");
			HX_STACK_LINE(110)
			++(_g);
			HX_STACK_LINE(111)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp3 = attribute;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(111)
			this->disableVertexAttribute(tmp3,false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,unbindVertexArray,(void))

int Shader_obj::UID;

::lime::graphics::opengl::GLProgram Shader_obj::compileProgram( ::lime::graphics::GLRenderContext gl,Array< ::String > vertexSrc,Array< ::String > fragmentSrc){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","compileProgram",0x7a6c7314,"openfl._internal.renderer.opengl.shaders2.Shader.compileProgram","openfl/_internal/renderer/opengl/shaders2/Shader.hx",116,0x6ac2be14)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_ARG(vertexSrc,"vertexSrc")
	HX_STACK_ARG(fragmentSrc,"fragmentSrc")
	HX_STACK_LINE(117)
	::lime::graphics::GLRenderContext tmp = gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	int tmp1 = gl->VERTEX_SHADER;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(117)
	::lime::graphics::opengl::GLShader tmp2 = ::openfl::_internal::renderer::opengl::shaders2::Shader_obj::compileShader(tmp,vertexSrc,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(117)
	::lime::graphics::opengl::GLShader vertexShader = tmp2;		HX_STACK_VAR(vertexShader,"vertexShader");
	HX_STACK_LINE(118)
	::lime::graphics::GLRenderContext tmp3 = gl;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(118)
	int tmp4 = gl->FRAGMENT_SHADER;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(118)
	::lime::graphics::opengl::GLShader tmp5 = ::openfl::_internal::renderer::opengl::shaders2::Shader_obj::compileShader(tmp3,fragmentSrc,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(118)
	::lime::graphics::opengl::GLShader fragmentShader = tmp5;		HX_STACK_VAR(fragmentShader,"fragmentShader");
	HX_STACK_LINE(119)
	int tmp6 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(119)
	Dynamic tmp7 = ::lime::graphics::opengl::GL_obj::lime_gl_create_program();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(119)
	::lime::graphics::opengl::GLProgram tmp8 = ::lime::graphics::opengl::GLProgram_obj::__new(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(119)
	::lime::graphics::opengl::GLProgram program = tmp8;		HX_STACK_VAR(program,"program");
	HX_STACK_LINE(121)
	bool tmp9 = (vertexShader != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(121)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(121)
	if ((tmp9)){
		HX_STACK_LINE(121)
		tmp10 = (fragmentShader != null());
	}
	else{
		HX_STACK_LINE(121)
		tmp10 = false;
	}
	HX_STACK_LINE(121)
	if ((tmp10)){
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			::lime::graphics::opengl::GLShader tmp11 = vertexShader;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(122)
			program->attach(tmp11);
			HX_STACK_LINE(122)
			Dynamic tmp12 = program->id;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(122)
			Dynamic tmp13 = vertexShader->id;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(122)
			::lime::graphics::opengl::GL_obj::lime_gl_attach_shader(tmp12,tmp13);
		}
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			::lime::graphics::opengl::GLShader tmp11 = fragmentShader;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(123)
			program->attach(tmp11);
			HX_STACK_LINE(123)
			Dynamic tmp12 = program->id;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(123)
			Dynamic tmp13 = fragmentShader->id;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(123)
			::lime::graphics::opengl::GL_obj::lime_gl_attach_shader(tmp12,tmp13);
		}
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			Dynamic tmp11 = program->id;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(124)
			::lime::graphics::opengl::GL_obj::lime_gl_link_program(tmp11);
		}
		HX_STACK_LINE(126)
		Dynamic tmp11 = program->id;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(126)
		int tmp12 = gl->LINK_STATUS;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(126)
		int tmp13 = ::lime::graphics::opengl::GL_obj::lime_gl_get_program_parameter(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(126)
		bool tmp14 = (tmp13 == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(126)
		if ((tmp14)){
			HX_STACK_LINE(127)
			Dynamic tmp15 = hx::SourceInfo(HX_HCSTRING("Shader.hx","\x99","\xa8","\x0b","\xd1"),127,HX_HCSTRING("openfl._internal.renderer.opengl.shaders2.Shader","\x4b","\x5f","\x8c","\x18"),HX_HCSTRING("compileProgram","\x51","\x31","\xe3","\x15"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(127)
			::haxe::Log_obj::trace(HX_HCSTRING("Could not initialize shaders","\x2a","\xef","\x6b","\xc0"),tmp15);
		}
	}
	HX_STACK_LINE(131)
	::lime::graphics::opengl::GLProgram tmp11 = program;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(131)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Shader_obj,compileProgram,return )

::lime::graphics::opengl::GLShader Shader_obj::compileShader( ::lime::graphics::GLRenderContext gl,Array< ::String > shaderSrc,int type){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","compileShader",0x5163d895,"openfl._internal.renderer.opengl.shaders2.Shader.compileShader","openfl/_internal/renderer/opengl/shaders2/Shader.hx",134,0x6ac2be14)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_ARG(shaderSrc,"shaderSrc")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(135)
	::String tmp = shaderSrc->join(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	::String src = tmp;		HX_STACK_VAR(src,"src");
	HX_STACK_LINE(136)
	int tmp1 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(136)
	int tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(136)
	Dynamic tmp3 = ::lime::graphics::opengl::GL_obj::lime_gl_create_shader(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(136)
	::lime::graphics::opengl::GLShader tmp4 = ::lime::graphics::opengl::GLShader_obj::__new(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(136)
	::lime::graphics::opengl::GLShader shader = tmp4;		HX_STACK_VAR(shader,"shader");
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		Dynamic tmp5 = shader->id;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(137)
		::String tmp6 = src;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(137)
		::lime::graphics::opengl::GL_obj::lime_gl_shader_source(tmp5,tmp6);
	}
	HX_STACK_LINE(138)
	{
		HX_STACK_LINE(138)
		Dynamic tmp5 = shader->id;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(138)
		::lime::graphics::opengl::GL_obj::lime_gl_compile_shader(tmp5);
	}
	HX_STACK_LINE(140)
	Dynamic tmp5 = shader->id;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(140)
	int tmp6 = gl->COMPILE_STATUS;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(140)
	int tmp7 = ::lime::graphics::opengl::GL_obj::lime_gl_get_shader_parameter(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(140)
	bool tmp8 = (tmp7 == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(140)
	if ((tmp8)){
		HX_STACK_LINE(141)
		Dynamic tmp9 = shader->id;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(141)
		::String tmp10 = ::lime::graphics::opengl::GL_obj::lime_gl_get_shader_info_log(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(141)
		Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Shader.hx","\x99","\xa8","\x0b","\xd1"),141,HX_HCSTRING("openfl._internal.renderer.opengl.shaders2.Shader","\x4b","\x5f","\x8c","\x18"),HX_HCSTRING("compileShader","\xf8","\x70","\xb2","\xda"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(141)
		::haxe::Log_obj::trace(tmp10,tmp11);
		HX_STACK_LINE(142)
		return null();
	}
	HX_STACK_LINE(145)
	::lime::graphics::opengl::GLShader tmp9 = shader;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(145)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Shader_obj,compileShader,return )


Shader_obj::Shader_obj()
{
}

void Shader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shader);
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(vertexSrc,"vertexSrc");
	HX_MARK_MEMBER_NAME(fragmentSrc,"fragmentSrc");
	HX_MARK_MEMBER_NAME(attributes,"attributes");
	HX_MARK_MEMBER_NAME(uniforms,"uniforms");
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_MEMBER_NAME(program,"program");
	HX_MARK_END_CLASS();
}

void Shader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(vertexSrc,"vertexSrc");
	HX_VISIT_MEMBER_NAME(fragmentSrc,"fragmentSrc");
	HX_VISIT_MEMBER_NAME(attributes,"attributes");
	HX_VISIT_MEMBER_NAME(uniforms,"uniforms");
	HX_VISIT_MEMBER_NAME(ID,"ID");
	HX_VISIT_MEMBER_NAME(program,"program");
}

Dynamic Shader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		if (HX_FIELD_EQ(inName,"ID") ) { return ID; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { return program; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uniforms") ) { return uniforms; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"vertexSrc") ) { return vertexSrc; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attributes") ) { return attributes; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fragmentSrc") ) { return fragmentSrc; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bindVertexArray") ) { return bindVertexArray_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getAttribLocation") ) { return getAttribLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"unbindVertexArray") ) { return unbindVertexArray_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getUniformLocation") ) { return getUniformLocation_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"enableVertexAttribute") ) { return enableVertexAttribute_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"disableVertexAttribute") ) { return disableVertexAttribute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Shader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"UID") ) { outValue = UID; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"compileShader") ) { outValue = compileShader_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"compileProgram") ) { outValue = compileProgram_dyn(); return true;  }
	}
	return false;
}

Dynamic Shader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { program=inValue.Cast< ::lime::graphics::opengl::GLProgram >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uniforms") ) { uniforms=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"vertexSrc") ) { vertexSrc=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attributes") ) { attributes=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fragmentSrc") ) { fragmentSrc=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Shader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"UID") ) { UID=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Shader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("vertexSrc","\xe0","\xb9","\x2b","\x29"));
	outFields->push(HX_HCSTRING("fragmentSrc","\xf4","\xc0","\x3b","\xa4"));
	outFields->push(HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97"));
	outFields->push(HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02"));
	outFields->push(HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00"));
	outFields->push(HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(Shader_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Shader_obj,vertexSrc),HX_HCSTRING("vertexSrc","\xe0","\xb9","\x2b","\x29")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Shader_obj,fragmentSrc),HX_HCSTRING("fragmentSrc","\xf4","\xc0","\x3b","\xa4")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Shader_obj,attributes),HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Shader_obj,uniforms),HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02")},
	{hx::fsInt,(int)offsetof(Shader_obj,ID),HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00")},
	{hx::fsObject /*::lime::graphics::opengl::GLProgram*/ ,(int)offsetof(Shader_obj,program),HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Shader_obj::UID,HX_HCSTRING("UID","\x70","\xbf","\x40","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("vertexSrc","\xe0","\xb9","\x2b","\x29"),
	HX_HCSTRING("fragmentSrc","\xf4","\xc0","\x3b","\xa4"),
	HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97"),
	HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02"),
	HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00"),
	HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("getAttribLocation","\xd5","\x1a","\x10","\x5d"),
	HX_HCSTRING("getUniformLocation","\x93","\x5f","\xd4","\x4f"),
	HX_HCSTRING("enableVertexAttribute","\xd5","\x0c","\xbc","\xad"),
	HX_HCSTRING("disableVertexAttribute","\x10","\xeb","\xf5","\x22"),
	HX_HCSTRING("bindVertexArray","\xd8","\xe8","\xe4","\xa6"),
	HX_HCSTRING("unbindVertexArray","\x9f","\x8e","\x05","\x17"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Shader_obj::UID,"UID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Shader_obj::UID,"UID");
};

#endif

hx::Class Shader_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("UID","\x70","\xbf","\x40","\x00"),
	HX_HCSTRING("compileProgram","\x51","\x31","\xe3","\x15"),
	HX_HCSTRING("compileShader","\xf8","\x70","\xb2","\xda"),
	::String(null()) };

void Shader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.shaders2.Shader","\x4b","\x5f","\x8c","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Shader_obj::__GetStatic;
	__mClass->mSetStaticField = &Shader_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Shader_obj >;
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

void Shader_obj::__boot()
{
	UID= (int)0;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace shaders2
