#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
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
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BucketDataType
#include <openfl/_internal/renderer/opengl/utils/BucketDataType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BucketMode
#include <openfl/_internal/renderer/opengl/utils/BucketMode.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLBucket
#include <openfl/_internal/renderer/opengl/utils/GLBucket.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLBucketData
#include <openfl/_internal/renderer/opengl/utils/GLBucketData.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicType
#include <openfl/_internal/renderer/opengl/utils/GraphicType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicsRenderer
#include <openfl/_internal/renderer/opengl/utils/GraphicsRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexArray
#include <openfl/_internal/renderer/opengl/utils/VertexArray.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexAttribute
#include <openfl/_internal/renderer/opengl/utils/VertexAttribute.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void GLBucket_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLBucket","new",0x3de45b22,"openfl._internal.renderer.opengl.utils.GLBucket.new","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1263,0xd295150c)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(1293)
	this->uploadTileBuffer = true;
	HX_STACK_LINE(1283)
	this->textureSmooth = true;
	HX_STACK_LINE(1282)
	this->textureRepeat = false;
	HX_STACK_LINE(1277)
	this->lines = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(1276)
	this->fills = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(1272)
	this->fillIndex = (int)-1;
	HX_STACK_LINE(1297)
	this->gl = gl;
	HX_STACK_LINE(1299)
	this->color = Array_obj< Float >::__new().Add((int)0).Add((int)0).Add((int)0);
	HX_STACK_LINE(1300)
	this->lastIndex = (int)0;
	HX_STACK_LINE(1301)
	this->alpha = (int)1;
	HX_STACK_LINE(1302)
	this->dirty = true;
	HX_STACK_LINE(1304)
	this->mode = ::openfl::_internal::renderer::opengl::utils::BucketMode_obj::Fill;
	HX_STACK_LINE(1306)
	::openfl::geom::Matrix tmp = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1306)
	this->textureMatrix = tmp;
	HX_STACK_LINE(1307)
	::openfl::geom::Point tmp1 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1307)
	this->textureTL = tmp1;
	HX_STACK_LINE(1308)
	::openfl::geom::Point tmp2 = ::openfl::geom::Point_obj::__new((int)1,(int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1308)
	this->textureBR = tmp2;
}
;
	return null();
}

//GLBucket_obj::~GLBucket_obj() { }

Dynamic GLBucket_obj::__CreateEmpty() { return  new GLBucket_obj; }
hx::ObjectPtr< GLBucket_obj > GLBucket_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< GLBucket_obj > _result_ = new GLBucket_obj();
	_result_->__construct(gl);
	return _result_;}

Dynamic GLBucket_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLBucket_obj > _result_ = new GLBucket_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::openfl::_internal::renderer::opengl::utils::GLBucketData GLBucket_obj::getData( ::openfl::_internal::renderer::opengl::utils::BucketDataType type){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLBucket","getData",0x5a4019a2,"openfl._internal.renderer.opengl.utils.GLBucket.getData","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1311,0xd295150c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(1312)
	Array< ::Dynamic > data;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(1313)
	switch( (int)(type->__Index())){
		case (int)1: {
			HX_STACK_LINE(1315)
			data = this->fills;
		}
		;break;
		default: {
			HX_STACK_LINE(1317)
			data = this->lines;
		}
	}
	HX_STACK_LINE(1319)
	::openfl::_internal::renderer::opengl::utils::GLBucketData result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(1320)
	bool remove = false;		HX_STACK_VAR(remove,"remove");
	HX_STACK_LINE(1321)
	{
		HX_STACK_LINE(1321)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1321)
		while((true)){
			HX_STACK_LINE(1321)
			bool tmp = (_g < data->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1321)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1321)
			if ((tmp1)){
				HX_STACK_LINE(1321)
				break;
			}
			HX_STACK_LINE(1321)
			::openfl::_internal::renderer::opengl::utils::GLBucketData tmp2 = data->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucketData >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1321)
			::openfl::_internal::renderer::opengl::utils::GLBucketData d = tmp2;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(1321)
			++(_g);
			HX_STACK_LINE(1322)
			bool tmp3 = d->available;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1322)
			if ((tmp3)){
				HX_STACK_LINE(1323)
				result = d;
				HX_STACK_LINE(1324)
				remove = true;
				HX_STACK_LINE(1325)
				break;
			}
		}
	}
	HX_STACK_LINE(1329)
	bool tmp = (result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1329)
	if ((tmp)){
		HX_STACK_LINE(1330)
		::lime::graphics::GLRenderContext tmp1 = this->gl;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1330)
		::openfl::_internal::renderer::opengl::utils::GLBucketData tmp2 = ::openfl::_internal::renderer::opengl::utils::GLBucketData_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1330)
		result = tmp2;
	}
	HX_STACK_LINE(1333)
	result->available = false;
	HX_STACK_LINE(1334)
	result->parent = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(1335)
	result->type = type;
	HX_STACK_LINE(1337)
	bool tmp1 = remove;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1337)
	if ((tmp1)){
		HX_STACK_LINE(1337)
		::openfl::_internal::renderer::opengl::utils::GLBucketData tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1337)
		data->remove(tmp2);
	}
	HX_STACK_LINE(1338)
	::openfl::_internal::renderer::opengl::utils::GLBucketData tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1338)
	data->push(tmp2);
	HX_STACK_LINE(1340)
	switch( (int)(type->__Index())){
		case (int)1: {
			HX_STACK_LINE(1342)
			::openfl::_internal::renderer::opengl::utils::BucketMode tmp3 = this->mode;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1342)
			::openfl::_internal::renderer::opengl::utils::BucketMode _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1342)
			switch( (int)(_g->__Index())){
				case (int)1: case (int)2: {
					HX_STACK_LINE(1344)
					result->vertexArray->attributes = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::fillVertexAttributes;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(1347)
					result->vertexArray->attributes = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::drawTrianglesVertexAttributes->copy();
					HX_STACK_LINE(1348)
					::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp4 = result->vertexArray->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1348)
					::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp5 = tmp4->copy();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1348)
					result->vertexArray->attributes[(int)2] = tmp5;
				}
				;break;
				default: {
				}
			}
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(1352)
			result->vertexArray->attributes = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::primitiveVertexAttributes;
		}
		;break;
	}
	HX_STACK_LINE(1357)
	::openfl::_internal::renderer::opengl::utils::GLBucketData tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1357)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(GLBucket_obj,getData,return )

Void GLBucket_obj::optimize( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLBucket","optimize",0x868fc2db,"openfl._internal.renderer.opengl.utils.GLBucket.optimize","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1360,0xd295150c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1360)
		::openfl::_internal::renderer::opengl::utils::GLBucket _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1430)
		{
			HX_STACK_LINE(1430)
			Array< ::Dynamic > data = this->lines;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1430)
			bool tmp = (data->length > (int)1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1430)
			if ((tmp)){
				HX_STACK_LINE(1430)
				Array< ::Dynamic > result = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(1430)
				::openfl::_internal::renderer::opengl::utils::GLBucketData tmp1 = null();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1430)
				::openfl::_internal::renderer::opengl::utils::GLBucketData last = null();		HX_STACK_VAR(last,"last");
				HX_STACK_LINE(1430)
				int idx = (int)0;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(1430)
				int vi = (int)0;		HX_STACK_VAR(vi,"vi");
				HX_STACK_LINE(1430)
				int ii = (int)0;		HX_STACK_VAR(ii,"ii");
				HX_STACK_LINE(1430)
				int before = data->length;		HX_STACK_VAR(before,"before");
				HX_STACK_LINE(1430)
				{
					HX_STACK_LINE(1430)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1430)
					while((true)){
						HX_STACK_LINE(1430)
						bool tmp2 = (_g1 < data->length);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1430)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1430)
						if ((tmp3)){
							HX_STACK_LINE(1430)
							break;
						}
						HX_STACK_LINE(1430)
						::openfl::_internal::renderer::opengl::utils::GLBucketData tmp4 = data->__get(_g1).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucketData >();		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1430)
						::openfl::_internal::renderer::opengl::utils::GLBucketData d = tmp4;		HX_STACK_VAR(d,"d");
						HX_STACK_LINE(1430)
						++(_g1);
						HX_STACK_LINE(1430)
						bool tmp5 = d->available;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1430)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1430)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1430)
						bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1430)
						if ((tmp7)){
							HX_STACK_LINE(1430)
							tmp8 = d->rawVerts;
						}
						else{
							HX_STACK_LINE(1430)
							tmp8 = true;
						}
						HX_STACK_LINE(1430)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1430)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1430)
						if ((tmp9)){
							HX_STACK_LINE(1430)
							tmp10 = d->rawIndices;
						}
						else{
							HX_STACK_LINE(1430)
							tmp10 = true;
						}
						HX_STACK_LINE(1430)
						if ((tmp10)){
							HX_STACK_LINE(1430)
							bool tmp11 = (tmp1 != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1430)
							if ((tmp11)){
								HX_STACK_LINE(1430)
								::openfl::_internal::renderer::opengl::utils::GLBucketData tmp12 = tmp1;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1430)
								result->push(tmp12);
								HX_STACK_LINE(1430)
								tmp1 = null();
							}
							HX_STACK_LINE(1430)
							::openfl::_internal::renderer::opengl::utils::GLBucketData tmp12 = d;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1430)
							result->push(tmp12);
							HX_STACK_LINE(1430)
							last = d;
							HX_STACK_LINE(1430)
							continue;
						}
						HX_STACK_LINE(1430)
						bool tmp11 = (last == null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1430)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1430)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1430)
						if ((tmp12)){
							HX_STACK_LINE(1430)
							tmp13 = (last->drawMode == d->drawMode);
						}
						else{
							HX_STACK_LINE(1430)
							tmp13 = true;
						}
						HX_STACK_LINE(1430)
						if ((tmp13)){
							HX_STACK_LINE(1430)
							bool tmp14 = (tmp1 == null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1430)
							if ((tmp14)){
								HX_STACK_LINE(1430)
								tmp1 = d;
							}
							else{
								HX_STACK_LINE(1430)
								int tmp15 = tmp1->verts->length;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1430)
								vi = tmp15;
								HX_STACK_LINE(1430)
								int tmp16 = tmp1->indices->length;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1430)
								ii = tmp16;
								HX_STACK_LINE(1430)
								{
									HX_STACK_LINE(1430)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1430)
									int tmp17 = d->verts->length;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1430)
									int _g11 = tmp17;		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(1430)
									while((true)){
										HX_STACK_LINE(1430)
										bool tmp18 = (_g2 < _g11);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1430)
										bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1430)
										if ((tmp19)){
											HX_STACK_LINE(1430)
											break;
										}
										HX_STACK_LINE(1430)
										int tmp20 = (_g2)++;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1430)
										int j = tmp20;		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(1430)
										int tmp21 = (j + vi);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1430)
										Float tmp22 = d->verts->__get(j);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1430)
										tmp1->verts[tmp21] = tmp22;
									}
								}
								HX_STACK_LINE(1430)
								{
									HX_STACK_LINE(1430)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1430)
									int tmp17 = d->indices->length;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1430)
									int _g11 = tmp17;		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(1430)
									while((true)){
										HX_STACK_LINE(1430)
										bool tmp18 = (_g2 < _g11);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1430)
										bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1430)
										if ((tmp19)){
											HX_STACK_LINE(1430)
											break;
										}
										HX_STACK_LINE(1430)
										int tmp20 = (_g2)++;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1430)
										int j = tmp20;		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(1430)
										int tmp21 = (j + ii);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1430)
										int tmp22 = d->indices->__get(j);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1430)
										int tmp23 = idx;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1430)
										int tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1430)
										tmp1->indices[tmp21] = tmp24;
									}
								}
							}
							HX_STACK_LINE(1430)
							int tmp15 = tmp1->indices->length;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1430)
							int tmp16 = (tmp15 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1430)
							int tmp17 = tmp1->indices->__get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1430)
							int tmp18 = (tmp17 + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1430)
							idx = tmp18;
							HX_STACK_LINE(1430)
							last = d;
						}
						else{
							HX_STACK_LINE(1430)
							bool tmp14 = (tmp1 != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1430)
							if ((tmp14)){
								HX_STACK_LINE(1430)
								::openfl::_internal::renderer::opengl::utils::GLBucketData tmp15 = tmp1;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1430)
								result->push(tmp15);
								HX_STACK_LINE(1430)
								tmp1 = null();
							}
							HX_STACK_LINE(1430)
							::openfl::_internal::renderer::opengl::utils::GLBucketData tmp15 = d;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1430)
							result->push(tmp15);
							HX_STACK_LINE(1430)
							last = d;
							HX_STACK_LINE(1430)
							continue;
						}
					}
				}
				HX_STACK_LINE(1430)
				bool tmp2 = (result->length == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1430)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1430)
				if ((tmp2)){
					HX_STACK_LINE(1430)
					tmp3 = (tmp1 != null());
				}
				else{
					HX_STACK_LINE(1430)
					tmp3 = false;
				}
				HX_STACK_LINE(1430)
				if ((tmp3)){
					HX_STACK_LINE(1430)
					::openfl::_internal::renderer::opengl::utils::GLBucketData tmp4 = tmp1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1430)
					result->push(tmp4);
				}
				HX_STACK_LINE(1430)
				bool tmp4 = (result->length > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1430)
				if ((tmp4)){
					HX_STACK_LINE(1430)
					switch( (int)(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Line->__Index())){
						case (int)1: {
							HX_STACK_LINE(1430)
							_g->fills = result;
						}
						;break;
						default: {
							HX_STACK_LINE(1430)
							_g->lines = result;
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLBucket_obj,optimize,(void))

Void GLBucket_obj::reset( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLBucket","reset",0x11a28911,"openfl._internal.renderer.opengl.utils.GLBucket.reset","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1436,0xd295150c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1437)
		{
			HX_STACK_LINE(1437)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1437)
			Array< ::Dynamic > _g1 = this->fills;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1437)
			while((true)){
				HX_STACK_LINE(1437)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(1437)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1437)
				if ((tmp1)){
					HX_STACK_LINE(1437)
					break;
				}
				HX_STACK_LINE(1437)
				::openfl::_internal::renderer::opengl::utils::GLBucketData tmp2 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucketData >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1437)
				::openfl::_internal::renderer::opengl::utils::GLBucketData fill = tmp2;		HX_STACK_VAR(fill,"fill");
				HX_STACK_LINE(1437)
				++(_g);
				HX_STACK_LINE(1438)
				fill->reset();
			}
		}
		HX_STACK_LINE(1441)
		{
			HX_STACK_LINE(1441)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1441)
			Array< ::Dynamic > _g1 = this->lines;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1441)
			while((true)){
				HX_STACK_LINE(1441)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(1441)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1441)
				if ((tmp1)){
					HX_STACK_LINE(1441)
					break;
				}
				HX_STACK_LINE(1441)
				::openfl::_internal::renderer::opengl::utils::GLBucketData tmp2 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucketData >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1441)
				::openfl::_internal::renderer::opengl::utils::GLBucketData line = tmp2;		HX_STACK_VAR(line,"line");
				HX_STACK_LINE(1441)
				++(_g);
				HX_STACK_LINE(1442)
				line->reset();
			}
		}
		HX_STACK_LINE(1445)
		this->fillIndex = (int)-1;
		HX_STACK_LINE(1446)
		this->uploadTileBuffer = true;
		HX_STACK_LINE(1447)
		this->graphicType = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLBucket_obj,reset,(void))

Void GLBucket_obj::uploadTile( int x,int y,int w,int h){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLBucket","uploadTile",0x0772874d,"openfl._internal.renderer.opengl.utils.GLBucket.uploadTile","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1450,0xd295150c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(1452)
		::lime::graphics::opengl::GLBuffer tmp = this->tileBuffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1452)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1452)
		if ((tmp1)){
			HX_STACK_LINE(1453)
			int tmp2 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1453)
			Dynamic tmp3 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1453)
			::lime::graphics::opengl::GLBuffer tmp4 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1453)
			this->tileBuffer = tmp4;
		}
		HX_STACK_LINE(1457)
		this->tile = Array_obj< int >::__new().Add(x).Add(y).Add((int)0).Add((int)0).Add(w).Add(y).Add((int)1).Add((int)0).Add(x).Add(h).Add((int)0).Add((int)1).Add(w).Add(h).Add((int)1).Add((int)1);
		HX_STACK_LINE(1464)
		::lime::utils::Int16Array tmp2 = ::lime::utils::Int16Array_obj::__new(this->tile,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1464)
		this->glTile = tmp2;
		HX_STACK_LINE(1466)
		{
			HX_STACK_LINE(1466)
			::lime::graphics::opengl::GLBuffer tmp3 = this->tileBuffer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1466)
			::lime::graphics::opengl::GLBuffer buffer = tmp3;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(1466)
			{
				HX_STACK_LINE(1466)
				::lime::graphics::GLRenderContext tmp4 = this->gl;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1466)
				int tmp5 = tmp4->ARRAY_BUFFER;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1466)
				bool tmp6 = (buffer == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1466)
				int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1466)
				if ((tmp6)){
					HX_STACK_LINE(1466)
					tmp7 = (int)0;
				}
				else{
					HX_STACK_LINE(1466)
					tmp7 = buffer->id;
				}
				HX_STACK_LINE(1466)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp5,tmp7);
			}
		}
		HX_STACK_LINE(1467)
		{
			HX_STACK_LINE(1467)
			::lime::utils::Int16Array tmp3 = this->glTile;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1467)
			::lime::utils::ArrayBufferView data = tmp3;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1467)
			{
				HX_STACK_LINE(1467)
				::lime::graphics::GLRenderContext tmp4 = this->gl;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1467)
				int tmp5 = tmp4->ARRAY_BUFFER;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1467)
				::lime::utils::ByteArray tmp6 = data->getByteBuffer();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1467)
				int tmp7 = data->getStart();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1467)
				int tmp8 = data->getLength();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1467)
				::lime::graphics::GLRenderContext tmp9 = this->gl;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1467)
				int tmp10 = tmp9->STATIC_DRAW;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1467)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(tmp5,tmp6,tmp7,tmp8,tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLBucket_obj,uploadTile,(void))

Void GLBucket_obj::upload( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLBucket","upload",0xe076e47f,"openfl._internal.renderer.opengl.utils.GLBucket.upload","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1471,0xd295150c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1473)
		::openfl::_internal::renderer::opengl::utils::BucketMode tmp = this->mode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1473)
		bool tmp1 = (tmp != ::openfl::_internal::renderer::opengl::utils::BucketMode_obj::Line);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1473)
		if ((tmp1)){
			HX_STACK_LINE(1474)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1474)
			Array< ::Dynamic > _g1 = this->fills;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1474)
			while((true)){
				HX_STACK_LINE(1474)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1474)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1474)
				if ((tmp3)){
					HX_STACK_LINE(1474)
					break;
				}
				HX_STACK_LINE(1474)
				::openfl::_internal::renderer::opengl::utils::GLBucketData tmp4 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucketData >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1474)
				::openfl::_internal::renderer::opengl::utils::GLBucketData fill = tmp4;		HX_STACK_VAR(fill,"fill");
				HX_STACK_LINE(1474)
				++(_g);
				HX_STACK_LINE(1475)
				bool tmp5 = fill->available;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1475)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1475)
				if ((tmp6)){
					HX_STACK_LINE(1476)
					fill->upload();
				}
			}
		}
		HX_STACK_LINE(1481)
		{
			HX_STACK_LINE(1481)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1481)
			Array< ::Dynamic > _g1 = this->lines;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1481)
			while((true)){
				HX_STACK_LINE(1481)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1481)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1481)
				if ((tmp3)){
					HX_STACK_LINE(1481)
					break;
				}
				HX_STACK_LINE(1481)
				::openfl::_internal::renderer::opengl::utils::GLBucketData tmp4 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucketData >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1481)
				::openfl::_internal::renderer::opengl::utils::GLBucketData line = tmp4;		HX_STACK_VAR(line,"line");
				HX_STACK_LINE(1481)
				++(_g);
				HX_STACK_LINE(1482)
				bool tmp5 = line->available;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1482)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1482)
				if ((tmp6)){
					HX_STACK_LINE(1483)
					line->upload();
				}
			}
		}
		HX_STACK_LINE(1487)
		this->dirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLBucket_obj,upload,(void))


GLBucket_obj::GLBucket_obj()
{
}

void GLBucket_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLBucket);
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(graphicType,"graphicType");
	HX_MARK_MEMBER_NAME(lastIndex,"lastIndex");
	HX_MARK_MEMBER_NAME(fillIndex,"fillIndex");
	HX_MARK_MEMBER_NAME(mode,"mode");
	HX_MARK_MEMBER_NAME(fills,"fills");
	HX_MARK_MEMBER_NAME(lines,"lines");
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(textureMatrix,"textureMatrix");
	HX_MARK_MEMBER_NAME(textureRepeat,"textureRepeat");
	HX_MARK_MEMBER_NAME(textureSmooth,"textureSmooth");
	HX_MARK_MEMBER_NAME(textureTL,"textureTL");
	HX_MARK_MEMBER_NAME(textureBR,"textureBR");
	HX_MARK_MEMBER_NAME(overrideMatrix,"overrideMatrix");
	HX_MARK_MEMBER_NAME(tileBuffer,"tileBuffer");
	HX_MARK_MEMBER_NAME(glTile,"glTile");
	HX_MARK_MEMBER_NAME(tile,"tile");
	HX_MARK_MEMBER_NAME(uploadTileBuffer,"uploadTileBuffer");
	HX_MARK_END_CLASS();
}

void GLBucket_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(graphicType,"graphicType");
	HX_VISIT_MEMBER_NAME(lastIndex,"lastIndex");
	HX_VISIT_MEMBER_NAME(fillIndex,"fillIndex");
	HX_VISIT_MEMBER_NAME(mode,"mode");
	HX_VISIT_MEMBER_NAME(fills,"fills");
	HX_VISIT_MEMBER_NAME(lines,"lines");
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(textureMatrix,"textureMatrix");
	HX_VISIT_MEMBER_NAME(textureRepeat,"textureRepeat");
	HX_VISIT_MEMBER_NAME(textureSmooth,"textureSmooth");
	HX_VISIT_MEMBER_NAME(textureTL,"textureTL");
	HX_VISIT_MEMBER_NAME(textureBR,"textureBR");
	HX_VISIT_MEMBER_NAME(overrideMatrix,"overrideMatrix");
	HX_VISIT_MEMBER_NAME(tileBuffer,"tileBuffer");
	HX_VISIT_MEMBER_NAME(glTile,"glTile");
	HX_VISIT_MEMBER_NAME(tile,"tile");
	HX_VISIT_MEMBER_NAME(uploadTileBuffer,"uploadTileBuffer");
}

Dynamic GLBucket_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { return mode; }
		if (HX_FIELD_EQ(inName,"tile") ) { return tile; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"fills") ) { return fills; }
		if (HX_FIELD_EQ(inName,"lines") ) { return lines; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return bitmap; }
		if (HX_FIELD_EQ(inName,"glTile") ) { return glTile; }
		if (HX_FIELD_EQ(inName,"upload") ) { return upload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"optimize") ) { return optimize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastIndex") ) { return lastIndex; }
		if (HX_FIELD_EQ(inName,"fillIndex") ) { return fillIndex; }
		if (HX_FIELD_EQ(inName,"textureTL") ) { return textureTL; }
		if (HX_FIELD_EQ(inName,"textureBR") ) { return textureBR; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileBuffer") ) { return tileBuffer; }
		if (HX_FIELD_EQ(inName,"uploadTile") ) { return uploadTile_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"graphicType") ) { return graphicType; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textureMatrix") ) { return textureMatrix; }
		if (HX_FIELD_EQ(inName,"textureRepeat") ) { return textureRepeat; }
		if (HX_FIELD_EQ(inName,"textureSmooth") ) { return textureSmooth; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"overrideMatrix") ) { return overrideMatrix; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uploadTileBuffer") ) { return uploadTileBuffer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLBucket_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::BucketMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tile") ) { tile=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fills") ) { fills=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lines") ) { lines=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glTile") ) { glTile=inValue.Cast< ::lime::utils::Int16Array >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastIndex") ) { lastIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fillIndex") ) { fillIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textureTL") ) { textureTL=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textureBR") ) { textureBR=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileBuffer") ) { tileBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"graphicType") ) { graphicType=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::GraphicType >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textureMatrix") ) { textureMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textureRepeat") ) { textureRepeat=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textureSmooth") ) { textureSmooth=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"overrideMatrix") ) { overrideMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uploadTileBuffer") ) { uploadTileBuffer=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GLBucket_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void GLBucket_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	outFields->push(HX_HCSTRING("graphicType","\x82","\xed","\xef","\x86"));
	outFields->push(HX_HCSTRING("lastIndex","\xdc","\xc8","\xc1","\x0a"));
	outFields->push(HX_HCSTRING("fillIndex","\x8f","\xc1","\xbb","\x8c"));
	outFields->push(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"));
	outFields->push(HX_HCSTRING("fills","\x90","\xe4","\x98","\x00"));
	outFields->push(HX_HCSTRING("lines","\xff","\xdd","\x01","\x75"));
	outFields->push(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"));
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("textureMatrix","\x7c","\x09","\xe0","\x4e"));
	outFields->push(HX_HCSTRING("textureRepeat","\x96","\x6a","\x94","\x99"));
	outFields->push(HX_HCSTRING("textureSmooth","\x69","\xdb","\x82","\x9a"));
	outFields->push(HX_HCSTRING("textureTL","\x13","\x3f","\x49","\xaf"));
	outFields->push(HX_HCSTRING("textureBR","\x6b","\x2f","\x49","\xaf"));
	outFields->push(HX_HCSTRING("overrideMatrix","\xad","\x8d","\xa9","\xb9"));
	outFields->push(HX_HCSTRING("tileBuffer","\xce","\x92","\x2b","\x35"));
	outFields->push(HX_HCSTRING("glTile","\xf3","\xc7","\xde","\x95"));
	outFields->push(HX_HCSTRING("tile","\x2e","\xcb","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("uploadTileBuffer","\x2f","\x4c","\xf5","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(GLBucket_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(GLBucket_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsFloat,(int)offsetof(GLBucket_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsBool,(int)offsetof(GLBucket_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::GraphicType*/ ,(int)offsetof(GLBucket_obj,graphicType),HX_HCSTRING("graphicType","\x82","\xed","\xef","\x86")},
	{hx::fsInt,(int)offsetof(GLBucket_obj,lastIndex),HX_HCSTRING("lastIndex","\xdc","\xc8","\xc1","\x0a")},
	{hx::fsInt,(int)offsetof(GLBucket_obj,fillIndex),HX_HCSTRING("fillIndex","\x8f","\xc1","\xbb","\x8c")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::BucketMode*/ ,(int)offsetof(GLBucket_obj,mode),HX_HCSTRING("mode","\x63","\xd3","\x60","\x48")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GLBucket_obj,fills),HX_HCSTRING("fills","\x90","\xe4","\x98","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GLBucket_obj,lines),HX_HCSTRING("lines","\xff","\xdd","\x01","\x75")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(GLBucket_obj,bitmap),HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1")},
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(int)offsetof(GLBucket_obj,texture),HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(GLBucket_obj,textureMatrix),HX_HCSTRING("textureMatrix","\x7c","\x09","\xe0","\x4e")},
	{hx::fsBool,(int)offsetof(GLBucket_obj,textureRepeat),HX_HCSTRING("textureRepeat","\x96","\x6a","\x94","\x99")},
	{hx::fsBool,(int)offsetof(GLBucket_obj,textureSmooth),HX_HCSTRING("textureSmooth","\x69","\xdb","\x82","\x9a")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(GLBucket_obj,textureTL),HX_HCSTRING("textureTL","\x13","\x3f","\x49","\xaf")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(GLBucket_obj,textureBR),HX_HCSTRING("textureBR","\x6b","\x2f","\x49","\xaf")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(GLBucket_obj,overrideMatrix),HX_HCSTRING("overrideMatrix","\xad","\x8d","\xa9","\xb9")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(GLBucket_obj,tileBuffer),HX_HCSTRING("tileBuffer","\xce","\x92","\x2b","\x35")},
	{hx::fsObject /*::lime::utils::Int16Array*/ ,(int)offsetof(GLBucket_obj,glTile),HX_HCSTRING("glTile","\xf3","\xc7","\xde","\x95")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(GLBucket_obj,tile),HX_HCSTRING("tile","\x2e","\xcb","\xfc","\x4c")},
	{hx::fsBool,(int)offsetof(GLBucket_obj,uploadTileBuffer),HX_HCSTRING("uploadTileBuffer","\x2f","\x4c","\xf5","\x02")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("graphicType","\x82","\xed","\xef","\x86"),
	HX_HCSTRING("lastIndex","\xdc","\xc8","\xc1","\x0a"),
	HX_HCSTRING("fillIndex","\x8f","\xc1","\xbb","\x8c"),
	HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"),
	HX_HCSTRING("fills","\x90","\xe4","\x98","\x00"),
	HX_HCSTRING("lines","\xff","\xdd","\x01","\x75"),
	HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"),
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("textureMatrix","\x7c","\x09","\xe0","\x4e"),
	HX_HCSTRING("textureRepeat","\x96","\x6a","\x94","\x99"),
	HX_HCSTRING("textureSmooth","\x69","\xdb","\x82","\x9a"),
	HX_HCSTRING("textureTL","\x13","\x3f","\x49","\xaf"),
	HX_HCSTRING("textureBR","\x6b","\x2f","\x49","\xaf"),
	HX_HCSTRING("overrideMatrix","\xad","\x8d","\xa9","\xb9"),
	HX_HCSTRING("tileBuffer","\xce","\x92","\x2b","\x35"),
	HX_HCSTRING("glTile","\xf3","\xc7","\xde","\x95"),
	HX_HCSTRING("tile","\x2e","\xcb","\xfc","\x4c"),
	HX_HCSTRING("uploadTileBuffer","\x2f","\x4c","\xf5","\x02"),
	HX_HCSTRING("getData","\xe0","\x05","\xe6","\x14"),
	HX_HCSTRING("optimize","\xdd","\x8c","\x18","\x1d"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("uploadTile","\xcf","\x55","\x43","\xe9"),
	HX_HCSTRING("upload","\x01","\xca","\x59","\x8c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLBucket_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLBucket_obj::__mClass,"__mClass");
};

#endif

hx::Class GLBucket_obj::__mClass;

void GLBucket_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.GLBucket","\x30","\xe2","\x53","\x47");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &GLBucket_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLBucket_obj >;
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
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
