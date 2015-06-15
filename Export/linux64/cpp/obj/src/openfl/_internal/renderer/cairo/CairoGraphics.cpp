#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_DrawCommand
#include <openfl/display/DrawCommand.h>
#endif
#ifndef INCLUDED_openfl_display_GradientType
#include <openfl/display/GradientType.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InterpolationMethod
#include <openfl/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl_display_SpreadMethod
#include <openfl/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_display_TriangleCulling
#include <openfl/display/TriangleCulling.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoGraphics_obj::__construct()
{
	return null();
}

//CairoGraphics_obj::~CairoGraphics_obj() { }

Dynamic CairoGraphics_obj::__CreateEmpty() { return  new CairoGraphics_obj; }
hx::ObjectPtr< CairoGraphics_obj > CairoGraphics_obj::__new()
{  hx::ObjectPtr< CairoGraphics_obj > _result_ = new CairoGraphics_obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoGraphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoGraphics_obj > _result_ = new CairoGraphics_obj();
	_result_->__construct();
	return _result_;}

Float CairoGraphics_obj::SIN45;

Float CairoGraphics_obj::TAN22;

::openfl::geom::Rectangle CairoGraphics_obj::bounds;

::lime::graphics::cairo::Cairo CairoGraphics_obj::cairo;

Array< ::Dynamic > CairoGraphics_obj::fillCommands;

Dynamic CairoGraphics_obj::fillPattern;

::openfl::geom::Matrix CairoGraphics_obj::fillPatternMatrix;

::openfl::display::Graphics CairoGraphics_obj::graphics;

bool CairoGraphics_obj::hasFill;

bool CairoGraphics_obj::hasStroke;

::openfl::geom::Matrix CairoGraphics_obj::inversePendingMatrix;

::openfl::geom::Matrix CairoGraphics_obj::pendingMatrix;

Array< ::Dynamic > CairoGraphics_obj::strokeCommands;

Dynamic CairoGraphics_obj::strokePattern;

::openfl::display::BitmapData CairoGraphics_obj::bitmapFill;

bool CairoGraphics_obj::bitmapRepeat;

Void CairoGraphics_obj::endFill( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","endFill",0x21233e02,"openfl._internal.renderer.cairo.CairoGraphics.endFill","openfl/_internal/renderer/cairo/CairoGraphics.hx",53,0x744ae94c)
		HX_STACK_LINE(55)
		::lime::graphics::cairo::Cairo tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		tmp->newPath();
		HX_STACK_LINE(56)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::playCommands(::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands,false);
		HX_STACK_LINE(57)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands = Array_obj< ::Dynamic >::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,endFill,(void))

Void CairoGraphics_obj::endStroke( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","endStroke",0xaaf640f7,"openfl._internal.renderer.cairo.CairoGraphics.endStroke","openfl/_internal/renderer/cairo/CairoGraphics.hx",61,0x744ae94c)
		HX_STACK_LINE(63)
		::lime::graphics::cairo::Cairo tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		tmp->newPath();
		HX_STACK_LINE(64)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::playCommands(::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands,true);
		HX_STACK_LINE(65)
		::lime::graphics::cairo::Cairo tmp1 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		tmp1->closePath();
		HX_STACK_LINE(66)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands = Array_obj< ::Dynamic >::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,endStroke,(void))

Void CairoGraphics_obj::drawRoundRect( Float x,Float y,Float width,Float height,Float rx,Float ry){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","drawRoundRect",0xa42fd4f2,"openfl._internal.renderer.cairo.CairoGraphics.drawRoundRect","openfl/_internal/renderer/cairo/CairoGraphics.hx",70,0x744ae94c)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(rx,"rx")
		HX_STACK_ARG(ry,"ry")
		HX_STACK_LINE(72)
		bool tmp = (ry == (int)-1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		if ((tmp)){
			HX_STACK_LINE(72)
			ry = rx;
		}
		HX_STACK_LINE(74)
		hx::MultEq(rx,((Float)0.5));
		HX_STACK_LINE(75)
		hx::MultEq(ry,((Float)0.5));
		HX_STACK_LINE(77)
		Float tmp1 = rx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		Float tmp2 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		if ((tmp3)){
			HX_STACK_LINE(77)
			Float tmp4 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(77)
			rx = tmp4;
		}
		HX_STACK_LINE(78)
		Float tmp4 = ry;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(78)
		Float tmp5 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(78)
		bool tmp6 = (tmp4 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(78)
		if ((tmp6)){
			HX_STACK_LINE(78)
			Float tmp7 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(78)
			ry = tmp7;
		}
		HX_STACK_LINE(80)
		Float tmp7 = (x + width);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(80)
		Float xe = tmp7;		HX_STACK_VAR(xe,"xe");
		HX_STACK_LINE(81)
		Float tmp8 = (y + height);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(81)
		Float ye = tmp8;		HX_STACK_VAR(ye,"ye");
		HX_STACK_LINE(82)
		Float tmp9 = rx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(82)
		Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(82)
		Float tmp11 = rx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(82)
		Float tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::SIN45;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(82)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(82)
		Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(82)
		Float cx1 = tmp14;		HX_STACK_VAR(cx1,"cx1");
		HX_STACK_LINE(83)
		Float tmp15 = rx;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(83)
		Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(83)
		Float tmp17 = rx;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(83)
		Float tmp18 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::TAN22;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(83)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(83)
		Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(83)
		Float cx2 = tmp20;		HX_STACK_VAR(cx2,"cx2");
		HX_STACK_LINE(84)
		Float tmp21 = ry;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(84)
		Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(84)
		Float tmp23 = ry;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(84)
		Float tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::SIN45;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(84)
		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(84)
		Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(84)
		Float cy1 = tmp26;		HX_STACK_VAR(cy1,"cy1");
		HX_STACK_LINE(85)
		Float tmp27 = ry;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(85)
		Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(85)
		Float tmp29 = ry;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(85)
		Float tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::TAN22;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(85)
		Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(85)
		Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(85)
		Float cy2 = tmp32;		HX_STACK_VAR(cy2,"cy2");
		HX_STACK_LINE(87)
		::lime::graphics::cairo::Cairo tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(87)
		Float tmp34 = xe;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(87)
		Float tmp35 = (ye - ry);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(87)
		tmp33->moveTo(tmp34,tmp35);
		HX_STACK_LINE(88)
		Float tmp36 = xe;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(88)
		Float tmp37 = (ye + cy2);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(88)
		Float tmp38 = (xe + cx1);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(88)
		Float tmp39 = (ye + cy1);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(88)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp36,tmp37,tmp38,tmp39);
		HX_STACK_LINE(89)
		Float tmp40 = (xe + cx2);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(89)
		Float tmp41 = ye;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(89)
		Float tmp42 = (xe - rx);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(89)
		Float tmp43 = ye;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(89)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp40,tmp41,tmp42,tmp43);
		HX_STACK_LINE(90)
		::lime::graphics::cairo::Cairo tmp44 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(90)
		Float tmp45 = (x + rx);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(90)
		Float tmp46 = ye;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(90)
		tmp44->lineTo(tmp45,tmp46);
		HX_STACK_LINE(91)
		Float tmp47 = (x - cx2);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(91)
		Float tmp48 = ye;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(91)
		Float tmp49 = (x - cx1);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(91)
		Float tmp50 = (ye + cy1);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(91)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp47,tmp48,tmp49,tmp50);
		HX_STACK_LINE(92)
		Float tmp51 = x;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(92)
		Float tmp52 = (ye + cy2);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(92)
		Float tmp53 = x;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(92)
		Float tmp54 = (ye - ry);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(92)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp51,tmp52,tmp53,tmp54);
		HX_STACK_LINE(93)
		::lime::graphics::cairo::Cairo tmp55 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(93)
		Float tmp56 = x;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(93)
		Float tmp57 = (y + ry);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(93)
		tmp55->lineTo(tmp56,tmp57);
		HX_STACK_LINE(94)
		Float tmp58 = x;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(94)
		Float tmp59 = (y - cy2);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(94)
		Float tmp60 = (x - cx1);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(94)
		Float tmp61 = (y - cy1);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(94)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp58,tmp59,tmp60,tmp61);
		HX_STACK_LINE(95)
		Float tmp62 = (x - cx2);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(95)
		Float tmp63 = y;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(95)
		Float tmp64 = (x + rx);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(95)
		Float tmp65 = y;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(95)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp62,tmp63,tmp64,tmp65);
		HX_STACK_LINE(96)
		::lime::graphics::cairo::Cairo tmp66 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(96)
		Float tmp67 = (xe - rx);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(96)
		Float tmp68 = y;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(96)
		tmp66->lineTo(tmp67,tmp68);
		HX_STACK_LINE(97)
		Float tmp69 = (xe + cx2);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(97)
		Float tmp70 = y;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(97)
		Float tmp71 = (xe + cx1);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(97)
		Float tmp72 = (y - cy1);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(97)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp69,tmp70,tmp71,tmp72);
		HX_STACK_LINE(98)
		Float tmp73 = xe;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(98)
		Float tmp74 = (y - cy2);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(98)
		Float tmp75 = xe;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(98)
		Float tmp76 = (y + ry);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(98)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp73,tmp74,tmp75,tmp76);
		HX_STACK_LINE(99)
		::lime::graphics::cairo::Cairo tmp77 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(99)
		Float tmp78 = xe;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(99)
		Float tmp79 = (ye - ry);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(99)
		tmp77->lineTo(tmp78,tmp79);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoGraphics_obj,drawRoundRect,(void))

bool CairoGraphics_obj::isCCW( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","isCCW",0x5353f111,"openfl._internal.renderer.cairo.CairoGraphics.isCCW","openfl/_internal/renderer/cairo/CairoGraphics.hx",104,0x744ae94c)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(x3,"x3")
	HX_STACK_ARG(y3,"y3")
	HX_STACK_LINE(106)
	Float tmp = (x2 - x1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	Float tmp1 = (y3 - y1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(106)
	Float tmp3 = (y2 - y1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(106)
	Float tmp4 = (x3 - x1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(106)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(106)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(106)
	bool tmp7 = (tmp6 < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(106)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoGraphics_obj,isCCW,return )

Dynamic CairoGraphics_obj::normalizeUVT( Array< Float > uvt,hx::Null< bool >  __o_skipT){
bool skipT = __o_skipT.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","normalizeUVT",0xc9c604e2,"openfl._internal.renderer.cairo.CairoGraphics.normalizeUVT","openfl/_internal/renderer/cairo/CairoGraphics.hx",111,0x744ae94c)
	HX_STACK_ARG(uvt,"uvt")
	HX_STACK_ARG(skipT,"skipT")
{
		HX_STACK_LINE(113)
		Float tmp = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		Float max = tmp;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(114)
		Float tmp1 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		Float tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(115)
		int tmp3 = uvt->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(115)
		int len = tmp3;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(117)
			int tmp4 = (len + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(117)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(117)
			while((true)){
				HX_STACK_LINE(117)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(117)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(117)
				if ((tmp6)){
					HX_STACK_LINE(117)
					break;
				}
				HX_STACK_LINE(117)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(117)
				int t = tmp7;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(119)
				bool tmp8 = skipT;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(119)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(119)
				if ((tmp8)){
					HX_STACK_LINE(119)
					int tmp10 = hx::Mod(t,(int)3);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(119)
					int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(119)
					tmp9 = (tmp11 == (int)0);
				}
				else{
					HX_STACK_LINE(119)
					tmp9 = false;
				}
				HX_STACK_LINE(119)
				if ((tmp9)){
					HX_STACK_LINE(121)
					continue;
				}
				HX_STACK_LINE(125)
				int tmp10 = (t - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(125)
				Float tmp11 = uvt->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(125)
				tmp2 = ((Dynamic)(tmp11));
				HX_STACK_LINE(127)
				bool tmp12 = (max < tmp2);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(127)
				if ((tmp12)){
					HX_STACK_LINE(129)
					max = tmp2;
				}
			}
		}
		HX_STACK_LINE(135)
		Array< Float > tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			Array< Float > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(135)
			this1 = Array_obj< Float >::__new()->__SetSizeExact(null());
			HX_STACK_LINE(135)
			tmp4 = this1;
		}
		HX_STACK_LINE(135)
		Array< Float > result = tmp4;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(137)
			int tmp5 = (len + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(137)
			int _g = tmp5;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(137)
			while((true)){
				HX_STACK_LINE(137)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(137)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(137)
				if ((tmp7)){
					HX_STACK_LINE(137)
					break;
				}
				HX_STACK_LINE(137)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(137)
				int t = tmp8;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(139)
				bool tmp9 = skipT;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(139)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(139)
				if ((tmp9)){
					HX_STACK_LINE(139)
					int tmp11 = hx::Mod(t,(int)3);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(139)
					int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(139)
					tmp10 = (tmp12 == (int)0);
				}
				else{
					HX_STACK_LINE(139)
					tmp10 = false;
				}
				HX_STACK_LINE(139)
				if ((tmp10)){
					HX_STACK_LINE(141)
					continue;
				}
				HX_STACK_LINE(145)
				int tmp11 = (t - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(145)
				Float tmp12 = uvt->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(145)
				Dynamic tmp13 = ((Dynamic)(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(145)
				Float tmp14 = max;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(145)
				Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(145)
				result->push(tmp15);
			}
		}
		struct _Function_1_1{
			inline static Dynamic Block( Array< Float > &result,Float &max){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/cairo/CairoGraphics.hx",149,0x744ae94c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , max,false);
					__result->Add(HX_HCSTRING("uvt","\xf3","\x2e","\x59","\x00") , result,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(149)
		Dynamic tmp5 = _Function_1_1::Block(result,max);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(149)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,normalizeUVT,return )

Dynamic CairoGraphics_obj::createGradientPattern( ::openfl::display::GradientType type,cpp::ArrayBase colors,cpp::ArrayBase alphas,cpp::ArrayBase ratios,::openfl::geom::Matrix matrix,::openfl::display::SpreadMethod spreadMethod,::openfl::display::InterpolationMethod interpolationMethod,Dynamic focalPointRatio){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","createGradientPattern",0x9888a3a8,"openfl._internal.renderer.cairo.CairoGraphics.createGradientPattern","openfl/_internal/renderer/cairo/CairoGraphics.hx",153,0x744ae94c)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(alphas,"alphas")
	HX_STACK_ARG(ratios,"ratios")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(spreadMethod,"spreadMethod")
	HX_STACK_ARG(interpolationMethod,"interpolationMethod")
	HX_STACK_ARG(focalPointRatio,"focalPointRatio")
	HX_STACK_LINE(155)
	Dynamic pattern = null();		HX_STACK_VAR(pattern,"pattern");
	HX_STACK_LINE(157)
	switch( (int)(type->__Index())){
		case (int)0: {
			HX_STACK_LINE(161)
			bool tmp = (matrix == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(161)
			if ((tmp)){
				HX_STACK_LINE(161)
				::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(161)
				matrix = tmp1;
			}
			HX_STACK_LINE(163)
			::openfl::geom::Point tmp1 = ::openfl::geom::Point_obj::__new(((Float)1638.4),(int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(163)
			::openfl::geom::Point tmp2 = matrix->transformPoint(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(163)
			::openfl::geom::Point point = tmp2;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(165)
			Float tmp3 = matrix->tx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(165)
			::openfl::display::Graphics tmp4 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(165)
			Float tmp5 = tmp4->__bounds->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(165)
			Float tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(165)
			Float x = tmp6;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(166)
			Float tmp7 = matrix->ty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(166)
			::openfl::display::Graphics tmp8 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(166)
			Float tmp9 = tmp8->__bounds->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(166)
			Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(166)
			Float y = tmp10;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(168)
			Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(168)
			Float tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(168)
			Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(168)
			Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(168)
			Float tmp15 = (point->x - matrix->tx);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(168)
			Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(168)
			Dynamic tmp17 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRadial(tmp11,tmp12,(int)0,tmp13,tmp14,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(168)
			pattern = tmp17;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(172)
			bool tmp = (matrix == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(172)
			if ((tmp)){
				HX_STACK_LINE(172)
				::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(172)
				matrix = tmp1;
			}
			HX_STACK_LINE(174)
			::openfl::geom::Point tmp1 = ::openfl::geom::Point_obj::__new(((Float)-819.2),(int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(174)
			::openfl::geom::Point tmp2 = matrix->transformPoint(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(174)
			::openfl::geom::Point point1 = tmp2;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(175)
			::openfl::geom::Point tmp3 = ::openfl::geom::Point_obj::__new(((Float)819.2),(int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(175)
			::openfl::geom::Point tmp4 = matrix->transformPoint(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(175)
			::openfl::geom::Point point2 = tmp4;		HX_STACK_VAR(point2,"point2");
			HX_STACK_LINE(177)
			::openfl::display::Graphics tmp5 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(177)
			Float tmp6 = tmp5->__bounds->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(177)
			hx::AddEq(point1->x,tmp6);
			HX_STACK_LINE(178)
			::openfl::display::Graphics tmp7 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(178)
			Float tmp8 = tmp7->__bounds->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(178)
			hx::AddEq(point2->x,tmp8);
			HX_STACK_LINE(179)
			::openfl::display::Graphics tmp9 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(179)
			Float tmp10 = tmp9->__bounds->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(179)
			hx::AddEq(point1->y,tmp10);
			HX_STACK_LINE(180)
			::openfl::display::Graphics tmp11 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(180)
			Float tmp12 = tmp11->__bounds->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(180)
			hx::AddEq(point2->y,tmp12);
			HX_STACK_LINE(182)
			Float tmp13 = point1->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(182)
			Float tmp14 = point1->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(182)
			Float tmp15 = point2->x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(182)
			Float tmp16 = point2->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(182)
			Dynamic tmp17 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createLinear(tmp13,tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(182)
			pattern = tmp17;
		}
		;break;
	}
	HX_STACK_LINE(186)
	{
		HX_STACK_LINE(186)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(186)
		int _g = colors->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(186)
		while((true)){
			HX_STACK_LINE(186)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(186)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(186)
			if ((tmp1)){
				HX_STACK_LINE(186)
				break;
			}
			HX_STACK_LINE(186)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(186)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(188)
			Dynamic tmp3 = colors->__GetItem(i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(188)
			int rgb = tmp3;		HX_STACK_VAR(rgb,"rgb");
			HX_STACK_LINE(189)
			Dynamic tmp4 = alphas->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(189)
			Float alpha = tmp4;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(190)
			int tmp5 = (int(rgb) & int((int)16711680));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(190)
			int tmp6 = hx::UShr(tmp5,(int)16);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(190)
			Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(190)
			Float r = tmp7;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(191)
			int tmp8 = (int(rgb) & int((int)65280));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(191)
			int tmp9 = hx::UShr(tmp8,(int)8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(191)
			Float tmp10 = (Float(tmp9) / Float((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(191)
			Float g = tmp10;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(192)
			int tmp11 = (int(rgb) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(192)
			Float tmp12 = (Float(tmp11) / Float((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(192)
			Float b = tmp12;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(194)
			Dynamic tmp13 = ratios->__GetItem(i);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(194)
			Float tmp14 = (Float(tmp13) / Float((int)255));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(194)
			Float ratio = tmp14;		HX_STACK_VAR(ratio,"ratio");
			HX_STACK_LINE(195)
			bool tmp15 = (ratio < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(195)
			if ((tmp15)){
				HX_STACK_LINE(195)
				ratio = (int)0;
			}
			HX_STACK_LINE(196)
			bool tmp16 = (ratio > (int)1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(196)
			if ((tmp16)){
				HX_STACK_LINE(196)
				ratio = (int)1;
			}
			HX_STACK_LINE(198)
			Dynamic tmp17 = pattern;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(198)
			Float tmp18 = ratio;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(198)
			Float tmp19 = r;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(198)
			Float tmp20 = g;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(198)
			Float tmp21 = b;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(198)
			Float tmp22 = alpha;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(198)
			::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::addColorStopRGBA(tmp17,tmp18,tmp19,tmp20,tmp21,tmp22);
		}
	}
	HX_STACK_LINE(202)
	Dynamic tmp = pattern;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	::lime::math::Matrix3 tmp1 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::get_matrix(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(202)
	::lime::math::Matrix3 mat = tmp1;		HX_STACK_VAR(mat,"mat");
	HX_STACK_LINE(204)
	::openfl::geom::Rectangle tmp2 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(204)
	mat->tx = tmp2->x;
	HX_STACK_LINE(205)
	::openfl::geom::Rectangle tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(205)
	mat->ty = tmp3->y;
	HX_STACK_LINE(207)
	Dynamic tmp4 = pattern;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(207)
	::lime::math::Matrix3 tmp5 = mat;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(207)
	::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(tmp4,tmp5);
	HX_STACK_LINE(209)
	Dynamic tmp6 = pattern;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(209)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(CairoGraphics_obj,createGradientPattern,return )

Dynamic CairoGraphics_obj::createImagePattern( ::openfl::display::BitmapData bitmapFill,::openfl::geom::Matrix matrix,bool bitmapRepeat){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","createImagePattern",0x42487dcd,"openfl._internal.renderer.cairo.CairoGraphics.createImagePattern","openfl/_internal/renderer/cairo/CairoGraphics.hx",214,0x744ae94c)
	HX_STACK_ARG(bitmapFill,"bitmapFill")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(bitmapRepeat,"bitmapRepeat")
	HX_STACK_LINE(216)
	Dynamic tmp = bitmapFill->getSurface(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(216)
	Dynamic tmp1 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(216)
	Dynamic pattern = tmp1;		HX_STACK_VAR(pattern,"pattern");
	HX_STACK_LINE(218)
	bool tmp2 = bitmapRepeat;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(218)
	if ((tmp2)){
		HX_STACK_LINE(220)
		Dynamic tmp3 = pattern;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(220)
		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_extend(tmp3,(int)1);
	}
	HX_STACK_LINE(224)
	::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix = matrix;
	HX_STACK_LINE(226)
	Dynamic tmp3 = pattern;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(226)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoGraphics_obj,createImagePattern,return )

Void CairoGraphics_obj::closePath( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","closePath",0x6dffa481,"openfl._internal.renderer.cairo.CairoGraphics.closePath","openfl/_internal/renderer/cairo/CairoGraphics.hx",229,0x744ae94c)
		HX_STACK_LINE(231)
		Dynamic tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		if ((tmp1)){
			HX_STACK_LINE(232)
			return null();
		}
		HX_STACK_LINE(234)
		::lime::graphics::cairo::Cairo tmp2 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(234)
		tmp2->closePath();
		HX_STACK_LINE(235)
		::lime::graphics::cairo::Cairo tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(235)
		Dynamic tmp4 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(235)
		tmp3->set_source(tmp4);
		HX_STACK_LINE(236)
		::lime::graphics::cairo::Cairo tmp5 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(236)
		tmp5->strokePreserve();
		HX_STACK_LINE(237)
		::lime::graphics::cairo::Cairo tmp6 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(237)
		tmp6->newPath();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,closePath,(void))

Void CairoGraphics_obj::playCommands( Array< ::Dynamic > commands,hx::Null< bool >  __o_stroke){
bool stroke = __o_stroke.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","playCommands",0xcc85aa58,"openfl._internal.renderer.cairo.CairoGraphics.playCommands","openfl/_internal/renderer/cairo/CairoGraphics.hx",240,0x744ae94c)
	HX_STACK_ARG(commands,"commands")
	HX_STACK_ARG(stroke,"stroke")
{
		HX_STACK_LINE(242)
		::openfl::display::Graphics tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds = tmp->__bounds;
		HX_STACK_LINE(244)
		::openfl::geom::Rectangle tmp1 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(244)
		Float offsetX = tmp1->x;		HX_STACK_VAR(offsetX,"offsetX");
		HX_STACK_LINE(245)
		::openfl::geom::Rectangle tmp2 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(245)
		Float offsetY = tmp2->y;		HX_STACK_VAR(offsetY,"offsetY");
		HX_STACK_LINE(247)
		Float positionX = ((Float)0.0);		HX_STACK_VAR(positionX,"positionX");
		HX_STACK_LINE(248)
		Float positionY = ((Float)0.0);		HX_STACK_VAR(positionY,"positionY");
		HX_STACK_LINE(250)
		bool closeGap = false;		HX_STACK_VAR(closeGap,"closeGap");
		HX_STACK_LINE(251)
		Float startX = ((Float)0.0);		HX_STACK_VAR(startX,"startX");
		HX_STACK_LINE(252)
		Float startY = ((Float)0.0);		HX_STACK_VAR(startY,"startY");
		HX_STACK_LINE(254)
		::lime::graphics::cairo::Cairo tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(254)
		tmp3->set_fillRule((int)1);
		HX_STACK_LINE(255)
		::lime::graphics::cairo::Cairo tmp4 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(255)
		tmp4->set_antialias((int)3);
		HX_STACK_LINE(257)
		bool hasPath = false;		HX_STACK_VAR(hasPath,"hasPath");
		HX_STACK_LINE(259)
		{
			HX_STACK_LINE(259)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(259)
			while((true)){
				HX_STACK_LINE(259)
				bool tmp5 = (_g < commands->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(259)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(259)
				if ((tmp6)){
					HX_STACK_LINE(259)
					break;
				}
				HX_STACK_LINE(259)
				::openfl::display::DrawCommand tmp7 = commands->__get(_g).StaticCast< ::openfl::display::DrawCommand >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(259)
				::openfl::display::DrawCommand command = tmp7;		HX_STACK_VAR(command,"command");
				HX_STACK_LINE(259)
				++(_g);
				HX_STACK_LINE(261)
				int _switch_1 = (command->__Index());
				if (  ( _switch_1==(int)3)){
					HX_STACK_LINE(261)
					Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(261)
					Float y = tmp8;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(261)
					Float tmp9 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(261)
					Float x = tmp9;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(261)
					Float tmp10 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(261)
					Float cy2 = tmp10;		HX_STACK_VAR(cy2,"cy2");
					HX_STACK_LINE(261)
					Float tmp11 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(261)
					Float cx2 = tmp11;		HX_STACK_VAR(cx2,"cx2");
					HX_STACK_LINE(261)
					Float tmp12 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(261)
					Float cy1 = tmp12;		HX_STACK_VAR(cy1,"cy1");
					HX_STACK_LINE(261)
					Float tmp13 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(261)
					Float cx1 = tmp13;		HX_STACK_VAR(cx1,"cx1");
					HX_STACK_LINE(263)
					{
						HX_STACK_LINE(265)
						hasPath = true;
						HX_STACK_LINE(266)
						::lime::graphics::cairo::Cairo tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(266)
						Float tmp15 = (cx1 - offsetX);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(266)
						Float tmp16 = (cy1 - offsetY);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(266)
						Float tmp17 = (cx2 - offsetX);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(266)
						Float tmp18 = (cy2 - offsetY);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(266)
						Float tmp19 = (x - offsetX);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(266)
						Float tmp20 = (y - offsetY);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(266)
						tmp14->curveTo(tmp15,tmp16,tmp17,tmp18,tmp19,tmp20);
					}
				}
				else if (  ( _switch_1==(int)4)){
					HX_STACK_LINE(261)
					Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(261)
					Float y = tmp8;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(261)
					Float tmp9 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(261)
					Float x = tmp9;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(261)
					Float tmp10 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(261)
					Float cy = tmp10;		HX_STACK_VAR(cy,"cy");
					HX_STACK_LINE(261)
					Float tmp11 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(261)
					Float cx = tmp11;		HX_STACK_VAR(cx,"cx");
					HX_STACK_LINE(268)
					{
						HX_STACK_LINE(270)
						hasPath = true;
						HX_STACK_LINE(271)
						Float tmp12 = (cx - offsetX);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(271)
						Float tmp13 = (cy - offsetY);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(271)
						Float tmp14 = (x - offsetX);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(271)
						Float tmp15 = (y - offsetY);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(271)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp12,tmp13,tmp14,tmp15);
					}
				}
				else if (  ( _switch_1==(int)5)){
					HX_STACK_LINE(261)
					Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(261)
					Float radius = tmp8;		HX_STACK_VAR(radius,"radius");
					HX_STACK_LINE(261)
					Float tmp9 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(261)
					Float y = tmp9;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(261)
					Float tmp10 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(261)
					Float x = tmp10;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(273)
					{
						HX_STACK_LINE(275)
						hasPath = true;
						HX_STACK_LINE(276)
						::lime::graphics::cairo::Cairo tmp11 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(276)
						Float tmp12 = (x - offsetX);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(276)
						Float tmp13 = radius;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(276)
						Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(276)
						Float tmp15 = (y - offsetY);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(276)
						tmp11->moveTo(tmp14,tmp15);
						HX_STACK_LINE(277)
						::lime::graphics::cairo::Cairo tmp16 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(277)
						Float tmp17 = (x - offsetX);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(277)
						Float tmp18 = (y - offsetY);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(277)
						Float tmp19 = radius;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(277)
						Float tmp20 = ::Math_obj::PI;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(277)
						Float tmp21 = (tmp20 * (int)2);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(277)
						tmp16->arc(tmp17,tmp18,tmp19,(int)0,tmp21);
					}
				}
				else if (  ( _switch_1==(int)7)){
					HX_STACK_LINE(261)
					Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(261)
					Float height = tmp8;		HX_STACK_VAR(height,"height");
					HX_STACK_LINE(261)
					Float tmp9 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(261)
					Float width = tmp9;		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(261)
					Float tmp10 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(261)
					Float y = tmp10;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(261)
					Float tmp11 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(261)
					Float x = tmp11;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(279)
					{
						HX_STACK_LINE(281)
						hasPath = true;
						HX_STACK_LINE(282)
						::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(282)
						Float tmp13 = (x - offsetX);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(282)
						Float tmp14 = (y - offsetY);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(282)
						Float tmp15 = width;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(282)
						Float tmp16 = height;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(282)
						tmp12->rectangle(tmp13,tmp14,tmp15,tmp16);
					}
				}
				else if (  ( _switch_1==(int)6)){
					HX_STACK_LINE(261)
					Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(261)
					Float height = tmp8;		HX_STACK_VAR(height,"height");
					HX_STACK_LINE(261)
					Float tmp9 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(261)
					Float width = tmp9;		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(261)
					Float tmp10 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(261)
					Float y = tmp10;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(261)
					Float tmp11 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(261)
					Float x = tmp11;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(284)
					{
						HX_STACK_LINE(286)
						hasPath = true;
						HX_STACK_LINE(288)
						hx::SubEq(x,offsetX);
						HX_STACK_LINE(289)
						hx::SubEq(y,offsetY);
						HX_STACK_LINE(291)
						Float kappa = ((Float).5522848);		HX_STACK_VAR(kappa,"kappa");
						HX_STACK_LINE(292)
						Float tmp12 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(292)
						Float tmp13 = kappa;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(292)
						Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(292)
						Float ox = tmp14;		HX_STACK_VAR(ox,"ox");
						HX_STACK_LINE(293)
						Float tmp15 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(293)
						Float tmp16 = kappa;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(293)
						Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(293)
						Float oy = tmp17;		HX_STACK_VAR(oy,"oy");
						HX_STACK_LINE(294)
						Float tmp18 = (x + width);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(294)
						Float xe = tmp18;		HX_STACK_VAR(xe,"xe");
						HX_STACK_LINE(295)
						Float tmp19 = (y + height);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(295)
						Float ye = tmp19;		HX_STACK_VAR(ye,"ye");
						HX_STACK_LINE(296)
						Float tmp20 = x;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(296)
						Float tmp21 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(296)
						Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(296)
						Float xm = tmp22;		HX_STACK_VAR(xm,"xm");
						HX_STACK_LINE(297)
						Float tmp23 = y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(297)
						Float tmp24 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(297)
						Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(297)
						Float ym = tmp25;		HX_STACK_VAR(ym,"ym");
						HX_STACK_LINE(299)
						::lime::graphics::cairo::Cairo tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(299)
						Float tmp27 = x;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(299)
						Float tmp28 = ym;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(299)
						tmp26->moveTo(tmp27,tmp28);
						HX_STACK_LINE(300)
						::lime::graphics::cairo::Cairo tmp29 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(300)
						Float tmp30 = x;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(300)
						Float tmp31 = (ym - oy);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(300)
						Float tmp32 = (xm - ox);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(300)
						Float tmp33 = y;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(300)
						Float tmp34 = xm;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(300)
						Float tmp35 = y;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(300)
						tmp29->curveTo(tmp30,tmp31,tmp32,tmp33,tmp34,tmp35);
						HX_STACK_LINE(301)
						::lime::graphics::cairo::Cairo tmp36 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(301)
						Float tmp37 = (xm + ox);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(301)
						Float tmp38 = y;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(301)
						Float tmp39 = xe;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(301)
						Float tmp40 = (ym - oy);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(301)
						Float tmp41 = xe;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(301)
						Float tmp42 = ym;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(301)
						tmp36->curveTo(tmp37,tmp38,tmp39,tmp40,tmp41,tmp42);
						HX_STACK_LINE(302)
						::lime::graphics::cairo::Cairo tmp43 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(302)
						Float tmp44 = xe;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(302)
						Float tmp45 = (ym + oy);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(302)
						Float tmp46 = (xm + ox);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(302)
						Float tmp47 = ye;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(302)
						Float tmp48 = xm;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(302)
						Float tmp49 = ye;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(302)
						tmp43->curveTo(tmp44,tmp45,tmp46,tmp47,tmp48,tmp49);
						HX_STACK_LINE(303)
						::lime::graphics::cairo::Cairo tmp50 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(303)
						Float tmp51 = (xm - ox);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(303)
						Float tmp52 = ye;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(303)
						Float tmp53 = x;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(303)
						Float tmp54 = (ym + oy);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(303)
						Float tmp55 = x;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(303)
						Float tmp56 = ym;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(303)
						tmp50->curveTo(tmp51,tmp52,tmp53,tmp54,tmp55,tmp56);
					}
				}
				else if (  ( _switch_1==(int)8)){
					HX_STACK_LINE(261)
					Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(261)
					Float ry = tmp8;		HX_STACK_VAR(ry,"ry");
					HX_STACK_LINE(261)
					Float tmp9 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(261)
					Float rx = tmp9;		HX_STACK_VAR(rx,"rx");
					HX_STACK_LINE(261)
					Float tmp10 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(261)
					Float height = tmp10;		HX_STACK_VAR(height,"height");
					HX_STACK_LINE(261)
					Float tmp11 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(261)
					Float width = tmp11;		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(261)
					Float tmp12 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(261)
					Float y = tmp12;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(261)
					Float tmp13 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(261)
					Float x = tmp13;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(305)
					{
						HX_STACK_LINE(307)
						hasPath = true;
						HX_STACK_LINE(308)
						Float tmp14 = (x - offsetX);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(308)
						Float tmp15 = (y - offsetY);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(308)
						Float tmp16 = width;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(308)
						Float tmp17 = height;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(308)
						Float tmp18 = rx;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(308)
						Float tmp19 = ry;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(308)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::drawRoundRect(tmp14,tmp15,tmp16,tmp17,tmp18,tmp19);
					}
				}
				else if (  ( _switch_1==(int)15)){
					HX_STACK_LINE(261)
					Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(261)
					Float y = tmp8;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(261)
					Float tmp9 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(261)
					Float x = tmp9;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(310)
					{
						HX_STACK_LINE(312)
						hasPath = true;
						HX_STACK_LINE(313)
						::lime::graphics::cairo::Cairo tmp10 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(313)
						Float tmp11 = (x - offsetX);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(313)
						Float tmp12 = (y - offsetY);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(313)
						tmp10->lineTo(tmp11,tmp12);
						HX_STACK_LINE(315)
						positionX = x;
						HX_STACK_LINE(316)
						positionY = y;
					}
				}
				else if (  ( _switch_1==(int)16)){
					HX_STACK_LINE(261)
					Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(261)
					Float y = tmp8;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(261)
					Float tmp9 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(261)
					Float x = tmp9;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(318)
					{
						HX_STACK_LINE(320)
						::lime::graphics::cairo::Cairo tmp10 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(320)
						Float tmp11 = (x - offsetX);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(320)
						Float tmp12 = (y - offsetY);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(320)
						tmp10->moveTo(tmp11,tmp12);
						HX_STACK_LINE(322)
						positionX = x;
						HX_STACK_LINE(323)
						positionY = y;
						HX_STACK_LINE(325)
						closeGap = true;
						HX_STACK_LINE(326)
						startX = x;
						HX_STACK_LINE(327)
						startY = y;
					}
				}
				else if (  ( _switch_1==(int)12)){
					HX_STACK_LINE(261)
					Dynamic tmp8 = (::openfl::display::DrawCommand(command))->__Param(7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(261)
					Dynamic miterLimit = tmp8;		HX_STACK_VAR(miterLimit,"miterLimit");
					HX_STACK_LINE(261)
					::openfl::display::JointStyle tmp9 = (::openfl::display::DrawCommand(command))->__Param(6);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(261)
					::openfl::display::JointStyle joints = tmp9;		HX_STACK_VAR(joints,"joints");
					HX_STACK_LINE(261)
					::openfl::display::CapsStyle tmp10 = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(261)
					::openfl::display::CapsStyle caps = tmp10;		HX_STACK_VAR(caps,"caps");
					HX_STACK_LINE(261)
					::openfl::display::LineScaleMode tmp11 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(261)
					::openfl::display::LineScaleMode scaleMode = tmp11;		HX_STACK_VAR(scaleMode,"scaleMode");
					HX_STACK_LINE(261)
					Dynamic tmp12 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(261)
					Dynamic pixelHinting = tmp12;		HX_STACK_VAR(pixelHinting,"pixelHinting");
					HX_STACK_LINE(261)
					Dynamic tmp13 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(261)
					Dynamic alpha = tmp13;		HX_STACK_VAR(alpha,"alpha");
					HX_STACK_LINE(261)
					Dynamic tmp14 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(261)
					Dynamic color = tmp14;		HX_STACK_VAR(color,"color");
					HX_STACK_LINE(261)
					Dynamic tmp15 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(261)
					Dynamic thickness = tmp15;		HX_STACK_VAR(thickness,"thickness");
					HX_STACK_LINE(329)
					{
						HX_STACK_LINE(331)
						bool tmp16 = stroke;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(331)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(331)
						if ((tmp16)){
							HX_STACK_LINE(331)
							tmp17 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;
						}
						else{
							HX_STACK_LINE(331)
							tmp17 = false;
						}
						HX_STACK_LINE(331)
						if ((tmp17)){
							HX_STACK_LINE(332)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::closePath();
						}
						HX_STACK_LINE(334)
						::lime::graphics::cairo::Cairo tmp18 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(334)
						Float tmp19 = (positionX - offsetX);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(334)
						Float tmp20 = (positionY - offsetY);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(334)
						tmp18->moveTo(tmp19,tmp20);
						HX_STACK_LINE(336)
						bool tmp21 = (thickness == null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(336)
						if ((tmp21)){
							HX_STACK_LINE(338)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = false;
						}
						else{
							HX_STACK_LINE(342)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = true;
							HX_STACK_LINE(344)
							::lime::graphics::cairo::Cairo tmp22 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(344)
							Dynamic tmp23 = thickness;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(344)
							tmp22->set_lineWidth(tmp23);
							HX_STACK_LINE(346)
							bool tmp24 = (joints == null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(346)
							if ((tmp24)){
								HX_STACK_LINE(348)
								::lime::graphics::cairo::Cairo tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(348)
								tmp25->set_lineJoin((int)1);
							}
							else{
								HX_STACK_LINE(352)
								::lime::graphics::cairo::Cairo tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(352)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(352)
								switch( (int)(joints->__Index())){
									case (int)0: {
										HX_STACK_LINE(354)
										tmp26 = (int)0;
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(355)
										tmp26 = (int)2;
									}
									;break;
									default: {
										HX_STACK_LINE(356)
										tmp26 = (int)1;
									}
								}
								HX_STACK_LINE(352)
								tmp25->set_lineJoin(tmp26);
							}
							HX_STACK_LINE(362)
							bool tmp25 = (caps == null());		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(362)
							if ((tmp25)){
								HX_STACK_LINE(364)
								::lime::graphics::cairo::Cairo tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(364)
								tmp26->set_lineCap((int)1);
							}
							else{
								HX_STACK_LINE(368)
								::lime::graphics::cairo::Cairo tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(368)
								int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(368)
								switch( (int)(caps->__Index())){
									case (int)0: {
										HX_STACK_LINE(370)
										tmp27 = (int)0;
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(371)
										tmp27 = (int)2;
									}
									;break;
									default: {
										HX_STACK_LINE(372)
										tmp27 = (int)1;
									}
								}
								HX_STACK_LINE(368)
								tmp26->set_lineCap(tmp27);
							}
							HX_STACK_LINE(378)
							::lime::graphics::cairo::Cairo tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(378)
							bool tmp27 = (miterLimit == null());		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(378)
							Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(378)
							if ((tmp27)){
								HX_STACK_LINE(378)
								tmp28 = (int)3;
							}
							else{
								HX_STACK_LINE(378)
								tmp28 = miterLimit;
							}
							HX_STACK_LINE(378)
							tmp26->set_miterLimit(tmp28);
							HX_STACK_LINE(380)
							bool tmp29 = (color != null());		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(380)
							if ((tmp29)){
								HX_STACK_LINE(382)
								int tmp30 = (int(color) & int((int)16711680));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(382)
								int tmp31 = hx::UShr(tmp30,(int)16);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(382)
								Float tmp32 = (Float(tmp31) / Float((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(382)
								Float r = tmp32;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(383)
								int tmp33 = (int(color) & int((int)65280));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(383)
								int tmp34 = hx::UShr(tmp33,(int)8);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(383)
								Float tmp35 = (Float(tmp34) / Float((int)255));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(383)
								Float g = tmp35;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(384)
								int tmp36 = (int(color) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(384)
								Float tmp37 = (Float(tmp36) / Float((int)255));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(384)
								Float b = tmp37;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(387)
								Dynamic tmp38 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(387)
								bool tmp39 = (tmp38 != null());		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(387)
								if ((tmp39)){
									HX_STACK_LINE(388)
									Dynamic tmp40 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(388)
									::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(tmp40);
								}
								HX_STACK_LINE(391)
								bool tmp40 = (alpha == (int)1);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(391)
								bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(391)
								bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(391)
								if ((tmp41)){
									HX_STACK_LINE(391)
									tmp42 = (alpha == null());
								}
								else{
									HX_STACK_LINE(391)
									tmp42 = true;
								}
								HX_STACK_LINE(391)
								if ((tmp42)){
									HX_STACK_LINE(393)
									Float tmp43 = r;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(393)
									Float tmp44 = g;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(393)
									Float tmp45 = b;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(393)
									Dynamic tmp46 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGB(tmp43,tmp44,tmp45);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(393)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = tmp46;
								}
								else{
									HX_STACK_LINE(397)
									Float tmp43 = r;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(397)
									Float tmp44 = g;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(397)
									Float tmp45 = b;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(397)
									Dynamic tmp46 = alpha;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(397)
									Dynamic tmp47 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGBA(tmp43,tmp44,tmp45,tmp46);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(397)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = tmp47;
								}
							}
						}
					}
				}
				else if (  ( _switch_1==(int)14)){
					HX_STACK_LINE(261)
					Dynamic tmp8 = (::openfl::display::DrawCommand(command))->__Param(7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(261)
					Dynamic focalPointRatio = tmp8;		HX_STACK_VAR(focalPointRatio,"focalPointRatio");
					HX_STACK_LINE(261)
					::openfl::display::InterpolationMethod tmp9 = (::openfl::display::DrawCommand(command))->__Param(6);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(261)
					::openfl::display::InterpolationMethod interpolationMethod = tmp9;		HX_STACK_VAR(interpolationMethod,"interpolationMethod");
					HX_STACK_LINE(261)
					::openfl::display::SpreadMethod tmp10 = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(261)
					::openfl::display::SpreadMethod spreadMethod = tmp10;		HX_STACK_VAR(spreadMethod,"spreadMethod");
					HX_STACK_LINE(261)
					::openfl::geom::Matrix tmp11 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(261)
					::openfl::geom::Matrix matrix = tmp11;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(261)
					cpp::ArrayBase ratios = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(ratios,"ratios");
					HX_STACK_LINE(261)
					cpp::ArrayBase alphas = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(alphas,"alphas");
					HX_STACK_LINE(261)
					cpp::ArrayBase colors = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(colors,"colors");
					HX_STACK_LINE(261)
					::openfl::display::GradientType tmp12 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(261)
					::openfl::display::GradientType type = tmp12;		HX_STACK_VAR(type,"type");
					HX_STACK_LINE(402)
					{
						HX_STACK_LINE(404)
						bool tmp13 = stroke;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(404)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(404)
						if ((tmp13)){
							HX_STACK_LINE(404)
							tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;
						}
						else{
							HX_STACK_LINE(404)
							tmp14 = false;
						}
						HX_STACK_LINE(404)
						if ((tmp14)){
							HX_STACK_LINE(405)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::closePath();
						}
						HX_STACK_LINE(408)
						Dynamic tmp15 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(408)
						bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(408)
						if ((tmp16)){
							HX_STACK_LINE(409)
							Dynamic tmp17 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(409)
							::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(tmp17);
						}
						HX_STACK_LINE(412)
						::lime::graphics::cairo::Cairo tmp17 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(412)
						Float tmp18 = (positionX - offsetX);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(412)
						Float tmp19 = (positionY - offsetY);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(412)
						tmp17->moveTo(tmp18,tmp19);
						HX_STACK_LINE(414)
						::openfl::display::GradientType tmp20 = type;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(414)
						::openfl::geom::Matrix tmp21 = matrix;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(414)
						::openfl::display::SpreadMethod tmp22 = spreadMethod;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(414)
						::openfl::display::InterpolationMethod tmp23 = interpolationMethod;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(414)
						Dynamic tmp24 = focalPointRatio;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(414)
						Dynamic tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createGradientPattern(tmp20,colors,alphas,ratios,tmp21,tmp22,tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(414)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = tmp25;
						HX_STACK_LINE(416)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = true;
					}
				}
				else if (  ( _switch_1==(int)13)){
					HX_STACK_LINE(261)
					bool tmp8 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(261)
					bool smooth = tmp8;		HX_STACK_VAR(smooth,"smooth");
					HX_STACK_LINE(261)
					bool tmp9 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(261)
					bool repeat = tmp9;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(261)
					::openfl::geom::Matrix tmp10 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(261)
					::openfl::geom::Matrix matrix = tmp10;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(261)
					::openfl::display::BitmapData tmp11 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(261)
					::openfl::display::BitmapData bitmap = tmp11;		HX_STACK_VAR(bitmap,"bitmap");
					HX_STACK_LINE(418)
					{
						HX_STACK_LINE(420)
						bool tmp12 = stroke;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(420)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(420)
						if ((tmp12)){
							HX_STACK_LINE(420)
							tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;
						}
						else{
							HX_STACK_LINE(420)
							tmp13 = false;
						}
						HX_STACK_LINE(420)
						if ((tmp13)){
							HX_STACK_LINE(421)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::closePath();
						}
						HX_STACK_LINE(424)
						Dynamic tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(424)
						bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(424)
						if ((tmp15)){
							HX_STACK_LINE(425)
							Dynamic tmp16 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(425)
							::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(tmp16);
						}
						HX_STACK_LINE(428)
						::lime::graphics::cairo::Cairo tmp16 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(428)
						Float tmp17 = (positionX - offsetX);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(428)
						Float tmp18 = (positionY - offsetY);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(428)
						tmp16->moveTo(tmp17,tmp18);
						HX_STACK_LINE(430)
						::openfl::display::BitmapData tmp19 = bitmap;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(430)
						::openfl::geom::Matrix tmp20 = matrix;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(430)
						bool tmp21 = repeat;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(430)
						Dynamic tmp22 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createImagePattern(tmp19,tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(430)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = tmp22;
						HX_STACK_LINE(432)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = true;
					}
				}
				else if (  ( _switch_1==(int)0)){
					HX_STACK_LINE(261)
					bool tmp8 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(261)
					bool smooth = tmp8;		HX_STACK_VAR(smooth,"smooth");
					HX_STACK_LINE(261)
					bool tmp9 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(261)
					bool repeat = tmp9;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(261)
					::openfl::geom::Matrix tmp10 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(261)
					::openfl::geom::Matrix matrix = tmp10;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(261)
					::openfl::display::BitmapData tmp11 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(261)
					::openfl::display::BitmapData bitmap = tmp11;		HX_STACK_VAR(bitmap,"bitmap");
					HX_STACK_LINE(434)
					{
						HX_STACK_LINE(436)
						Dynamic tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(436)
						bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(436)
						if ((tmp13)){
							HX_STACK_LINE(438)
							Dynamic tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(438)
							::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(tmp14);
						}
						HX_STACK_LINE(442)
						::openfl::display::BitmapData tmp14 = bitmap;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(442)
						::openfl::geom::Matrix tmp15 = matrix;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(442)
						bool tmp16 = repeat;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(442)
						Dynamic tmp17 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createImagePattern(tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(442)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = tmp17;
						HX_STACK_LINE(444)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = bitmap;
						HX_STACK_LINE(445)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapRepeat = repeat;
						HX_STACK_LINE(447)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = true;
					}
				}
				else if (  ( _switch_1==(int)1)){
					HX_STACK_LINE(261)
					Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(261)
					Float alpha = tmp8;		HX_STACK_VAR(alpha,"alpha");
					HX_STACK_LINE(261)
					int tmp9 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(261)
					int rgb = tmp9;		HX_STACK_VAR(rgb,"rgb");
					HX_STACK_LINE(449)
					{
						HX_STACK_LINE(451)
						bool tmp10 = (alpha < ((Float)0.005));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(451)
						if ((tmp10)){
							HX_STACK_LINE(453)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
						}
						else{
							HX_STACK_LINE(457)
							Dynamic tmp11 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(457)
							bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(457)
							if ((tmp12)){
								HX_STACK_LINE(459)
								Dynamic tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(459)
								::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(tmp13);
								HX_STACK_LINE(460)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix = null();
							}
							HX_STACK_LINE(464)
							int tmp13 = (int(rgb) & int((int)16711680));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(464)
							int tmp14 = hx::UShr(tmp13,(int)16);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(464)
							Float tmp15 = (Float(tmp14) / Float((int)255));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(464)
							int tmp16 = (int(rgb) & int((int)65280));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(464)
							int tmp17 = hx::UShr(tmp16,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(464)
							Float tmp18 = (Float(tmp17) / Float((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(464)
							int tmp19 = (int(rgb) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(464)
							Float tmp20 = (Float(tmp19) / Float((int)255));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(464)
							Float tmp21 = alpha;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(464)
							Dynamic tmp22 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGBA(tmp15,tmp18,tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(464)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = tmp22;
							HX_STACK_LINE(465)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = true;
						}
						HX_STACK_LINE(469)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
					}
				}
				else if (  ( _switch_1==(int)2)){
					HX_STACK_LINE(261)
					Dynamic tmp8 = (::openfl::display::DrawCommand(command))->__Param(7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(261)
					Dynamic focalPointRatio = tmp8;		HX_STACK_VAR(focalPointRatio,"focalPointRatio");
					HX_STACK_LINE(261)
					::openfl::display::InterpolationMethod tmp9 = (::openfl::display::DrawCommand(command))->__Param(6);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(261)
					::openfl::display::InterpolationMethod interpolationMethod = tmp9;		HX_STACK_VAR(interpolationMethod,"interpolationMethod");
					HX_STACK_LINE(261)
					::openfl::display::SpreadMethod tmp10 = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(261)
					::openfl::display::SpreadMethod spreadMethod = tmp10;		HX_STACK_VAR(spreadMethod,"spreadMethod");
					HX_STACK_LINE(261)
					::openfl::geom::Matrix tmp11 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(261)
					::openfl::geom::Matrix matrix = tmp11;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(261)
					cpp::ArrayBase ratios = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(ratios,"ratios");
					HX_STACK_LINE(261)
					cpp::ArrayBase alphas = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(alphas,"alphas");
					HX_STACK_LINE(261)
					cpp::ArrayBase colors = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(colors,"colors");
					HX_STACK_LINE(261)
					::openfl::display::GradientType tmp12 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(261)
					::openfl::display::GradientType type = tmp12;		HX_STACK_VAR(type,"type");
					HX_STACK_LINE(472)
					{
						HX_STACK_LINE(474)
						Dynamic tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(474)
						bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(474)
						if ((tmp14)){
							HX_STACK_LINE(476)
							Dynamic tmp15 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(476)
							::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(tmp15);
							HX_STACK_LINE(477)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix = null();
						}
						HX_STACK_LINE(481)
						::openfl::display::GradientType tmp15 = type;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(481)
						::openfl::geom::Matrix tmp16 = matrix;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(481)
						::openfl::display::SpreadMethod tmp17 = spreadMethod;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(481)
						::openfl::display::InterpolationMethod tmp18 = interpolationMethod;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(481)
						Dynamic tmp19 = focalPointRatio;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(481)
						Dynamic tmp20 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createGradientPattern(tmp15,colors,alphas,ratios,tmp16,tmp17,tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(481)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = tmp20;
						HX_STACK_LINE(483)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = true;
						HX_STACK_LINE(484)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
					}
				}
				else if (  ( _switch_1==(int)10)){
					HX_STACK_LINE(261)
					::openfl::display::TriangleCulling tmp8 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(261)
					::openfl::display::TriangleCulling culling = tmp8;		HX_STACK_VAR(culling,"culling");
					HX_STACK_LINE(261)
					Array< Float > tmp9 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(261)
					Array< Float > uvtData = tmp9;		HX_STACK_VAR(uvtData,"uvtData");
					HX_STACK_LINE(261)
					Array< int > tmp10 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(261)
					Array< int > indices = tmp10;		HX_STACK_VAR(indices,"indices");
					HX_STACK_LINE(261)
					Array< Float > tmp11 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(261)
					Array< Float > vertices = tmp11;		HX_STACK_VAR(vertices,"vertices");
					HX_STACK_LINE(486)
					{
						HX_STACK_LINE(488)
						Array< Float > v = vertices;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(489)
						Array< int > ind = indices;		HX_STACK_VAR(ind,"ind");
						HX_STACK_LINE(490)
						Array< Float > uvt = uvtData;		HX_STACK_VAR(uvt,"uvt");
						HX_STACK_LINE(491)
						::openfl::display::BitmapData tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(491)
						bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(491)
						bool colorFill = tmp13;		HX_STACK_VAR(colorFill,"colorFill");
						HX_STACK_LINE(493)
						bool tmp14 = colorFill;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(493)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(493)
						if ((tmp14)){
							HX_STACK_LINE(493)
							tmp15 = (uvt != null());
						}
						else{
							HX_STACK_LINE(493)
							tmp15 = false;
						}
						HX_STACK_LINE(493)
						if ((tmp15)){
							HX_STACK_LINE(495)
							break;
						}
						HX_STACK_LINE(498)
						int width = (int)0;		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(499)
						int height = (int)0;		HX_STACK_VAR(height,"height");
						HX_STACK_LINE(501)
						bool tmp16 = colorFill;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(501)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(501)
						if ((tmp17)){
							HX_STACK_LINE(505)
							bool tmp18 = (uvtData == null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(505)
							if ((tmp18)){
								HX_STACK_LINE(507)
								Array< Float > tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(507)
								{
									HX_STACK_LINE(507)
									Array< Float > this1;		HX_STACK_VAR(this1,"this1");
									HX_STACK_LINE(507)
									this1 = Array_obj< Float >::__new()->__SetSizeExact(null());
									HX_STACK_LINE(507)
									tmp19 = this1;
								}
								HX_STACK_LINE(507)
								uvtData = tmp19;
								HX_STACK_LINE(509)
								{
									HX_STACK_LINE(509)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(509)
									int tmp20 = v->length;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(509)
									Float tmp21 = (Float(tmp20) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(509)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(509)
									int _g1 = tmp22;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(509)
									while((true)){
										HX_STACK_LINE(509)
										bool tmp23 = (_g2 < _g1);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(509)
										bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(509)
										if ((tmp24)){
											HX_STACK_LINE(509)
											break;
										}
										HX_STACK_LINE(509)
										int tmp25 = (_g2)++;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(509)
										int i = tmp25;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(511)
										int tmp26 = (i * (int)2);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(511)
										Float tmp27 = v->__get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(511)
										Dynamic tmp28 = ((Dynamic)(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(511)
										::openfl::display::BitmapData tmp29 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(511)
										int tmp30 = tmp29->width;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(511)
										Float tmp31 = (Float(tmp28) / Float(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(511)
										uvtData->push(tmp31);
										HX_STACK_LINE(512)
										int tmp32 = (i * (int)2);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(512)
										int tmp33 = (tmp32 + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(512)
										Float tmp34 = v->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(512)
										Dynamic tmp35 = ((Dynamic)(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(512)
										::openfl::display::BitmapData tmp36 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(512)
										int tmp37 = tmp36->height;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(512)
										Float tmp38 = (Float(tmp35) / Float(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(512)
										uvtData->push(tmp38);
									}
								}
							}
							HX_STACK_LINE(518)
							int tmp19 = uvtData->length;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(518)
							int tmp20 = v->length;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(518)
							bool tmp21 = (tmp19 != tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(518)
							bool skipT = tmp21;		HX_STACK_VAR(skipT,"skipT");
							HX_STACK_LINE(519)
							Array< Float > tmp22 = uvtData;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(519)
							bool tmp23 = skipT;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(519)
							Dynamic tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::normalizeUVT(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(519)
							Dynamic normalizedUVT = tmp24;		HX_STACK_VAR(normalizedUVT,"normalizedUVT");
							HX_STACK_LINE(520)
							Float maxUVT = normalizedUVT->__Field(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"), hx::paccDynamic );		HX_STACK_VAR(maxUVT,"maxUVT");
							HX_STACK_LINE(521)
							uvt = normalizedUVT->__Field(HX_HCSTRING("uvt","\xf3","\x2e","\x59","\x00"), hx::paccDynamic );
							HX_STACK_LINE(523)
							bool tmp25 = (maxUVT > (int)1);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(523)
							if ((tmp25)){
								HX_STACK_LINE(524)
								::openfl::geom::Rectangle tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(524)
								Float tmp27 = tmp26->width;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(524)
								int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(524)
								width = tmp28;
								HX_STACK_LINE(525)
								::openfl::geom::Rectangle tmp29 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(525)
								Float tmp30 = tmp29->height;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(525)
								int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(525)
								height = tmp31;
							}
							else{
								HX_STACK_LINE(530)
								::openfl::display::BitmapData tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(530)
								width = tmp26->width;
								HX_STACK_LINE(531)
								::openfl::display::BitmapData tmp27 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(531)
								height = tmp27->height;
							}
						}
						HX_STACK_LINE(536)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(537)
						int tmp18 = ind->length;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(537)
						int l = tmp18;		HX_STACK_VAR(l,"l");
						HX_STACK_LINE(539)
						int a;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(539)
						int b;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(539)
						int c;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(540)
						int iax;		HX_STACK_VAR(iax,"iax");
						HX_STACK_LINE(540)
						int iay;		HX_STACK_VAR(iay,"iay");
						HX_STACK_LINE(540)
						int ibx;		HX_STACK_VAR(ibx,"ibx");
						HX_STACK_LINE(540)
						int iby;		HX_STACK_VAR(iby,"iby");
						HX_STACK_LINE(540)
						int icx;		HX_STACK_VAR(icx,"icx");
						HX_STACK_LINE(540)
						int icy;		HX_STACK_VAR(icy,"icy");
						HX_STACK_LINE(541)
						Float x1;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(541)
						Float y1;		HX_STACK_VAR(y1,"y1");
						HX_STACK_LINE(541)
						Float x2;		HX_STACK_VAR(x2,"x2");
						HX_STACK_LINE(541)
						Float y2;		HX_STACK_VAR(y2,"y2");
						HX_STACK_LINE(541)
						Float x3;		HX_STACK_VAR(x3,"x3");
						HX_STACK_LINE(541)
						Float y3;		HX_STACK_VAR(y3,"y3");
						HX_STACK_LINE(542)
						Float uvx1;		HX_STACK_VAR(uvx1,"uvx1");
						HX_STACK_LINE(542)
						Float uvy1;		HX_STACK_VAR(uvy1,"uvy1");
						HX_STACK_LINE(542)
						Float uvx2;		HX_STACK_VAR(uvx2,"uvx2");
						HX_STACK_LINE(542)
						Float uvy2;		HX_STACK_VAR(uvy2,"uvy2");
						HX_STACK_LINE(542)
						Float uvx3;		HX_STACK_VAR(uvx3,"uvx3");
						HX_STACK_LINE(542)
						Float uvy3;		HX_STACK_VAR(uvy3,"uvy3");
						HX_STACK_LINE(543)
						Float denom;		HX_STACK_VAR(denom,"denom");
						HX_STACK_LINE(544)
						Float t1;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(544)
						Float t2;		HX_STACK_VAR(t2,"t2");
						HX_STACK_LINE(544)
						Float t3;		HX_STACK_VAR(t3,"t3");
						HX_STACK_LINE(544)
						Float t4;		HX_STACK_VAR(t4,"t4");
						HX_STACK_LINE(545)
						Float dx;		HX_STACK_VAR(dx,"dx");
						HX_STACK_LINE(545)
						Float dy;		HX_STACK_VAR(dy,"dy");
						HX_STACK_LINE(547)
						::lime::graphics::cairo::Cairo tmp19 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(547)
						tmp19->set_antialias((int)1);
						HX_STACK_LINE(549)
						while((true)){
							HX_STACK_LINE(549)
							bool tmp20 = (i < l);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(549)
							bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(549)
							if ((tmp21)){
								HX_STACK_LINE(549)
								break;
							}
							HX_STACK_LINE(551)
							a = i;
							HX_STACK_LINE(552)
							int tmp22 = (i + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(552)
							b = tmp22;
							HX_STACK_LINE(553)
							int tmp23 = (i + (int)2);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(553)
							c = tmp23;
							HX_STACK_LINE(555)
							int tmp24 = ind->__get(a);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(555)
							Dynamic tmp25 = ((Dynamic)(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(555)
							int tmp26 = (tmp25 * (int)2);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(555)
							iax = tmp26;
							HX_STACK_LINE(556)
							int tmp27 = ind->__get(a);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(556)
							Dynamic tmp28 = ((Dynamic)(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(556)
							int tmp29 = (tmp28 * (int)2);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(556)
							int tmp30 = (tmp29 + (int)1);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(556)
							iay = tmp30;
							HX_STACK_LINE(557)
							int tmp31 = ind->__get(b);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(557)
							Dynamic tmp32 = ((Dynamic)(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(557)
							int tmp33 = (tmp32 * (int)2);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(557)
							ibx = tmp33;
							HX_STACK_LINE(558)
							int tmp34 = ind->__get(b);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(558)
							Dynamic tmp35 = ((Dynamic)(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(558)
							int tmp36 = (tmp35 * (int)2);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(558)
							int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(558)
							iby = tmp37;
							HX_STACK_LINE(559)
							int tmp38 = ind->__get(c);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(559)
							Dynamic tmp39 = ((Dynamic)(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(559)
							int tmp40 = (tmp39 * (int)2);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(559)
							icx = tmp40;
							HX_STACK_LINE(560)
							int tmp41 = ind->__get(c);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(560)
							Dynamic tmp42 = ((Dynamic)(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(560)
							int tmp43 = (tmp42 * (int)2);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(560)
							int tmp44 = (tmp43 + (int)1);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(560)
							icy = tmp44;
							HX_STACK_LINE(562)
							Float tmp45 = v->__get(iax);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(562)
							x1 = ((Dynamic)(tmp45));
							HX_STACK_LINE(563)
							Float tmp46 = v->__get(iay);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(563)
							y1 = ((Dynamic)(tmp46));
							HX_STACK_LINE(564)
							Float tmp47 = v->__get(ibx);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(564)
							x2 = ((Dynamic)(tmp47));
							HX_STACK_LINE(565)
							Float tmp48 = v->__get(iby);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(565)
							y2 = ((Dynamic)(tmp48));
							HX_STACK_LINE(566)
							Float tmp49 = v->__get(icx);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(566)
							x3 = ((Dynamic)(tmp49));
							HX_STACK_LINE(567)
							Float tmp50 = v->__get(icy);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(567)
							y3 = ((Dynamic)(tmp50));
							HX_STACK_LINE(569)
							switch( (int)(culling->__Index())){
								case (int)2: {
									HX_STACK_LINE(573)
									Float tmp51 = (x2 - x1);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(573)
									Float tmp52 = (y3 - y1);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(573)
									Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(573)
									Float tmp54 = (y2 - y1);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(573)
									Float tmp55 = (x3 - x1);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(573)
									Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(573)
									Float tmp57 = (tmp53 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(573)
									bool tmp58 = (tmp57 < (int)0);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(573)
									bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(573)
									if ((tmp59)){
										HX_STACK_LINE(575)
										hx::AddEq(i,(int)3);
										HX_STACK_LINE(576)
										continue;
									}
								}
								;break;
								case (int)0: {
									HX_STACK_LINE(582)
									Float tmp51 = (x2 - x1);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(582)
									Float tmp52 = (y3 - y1);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(582)
									Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(582)
									Float tmp54 = (y2 - y1);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(582)
									Float tmp55 = (x3 - x1);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(582)
									Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(582)
									Float tmp57 = (tmp53 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(582)
									bool tmp58 = (tmp57 < (int)0);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(582)
									if ((tmp58)){
										HX_STACK_LINE(584)
										hx::AddEq(i,(int)3);
										HX_STACK_LINE(585)
										continue;
									}
								}
								;break;
								default: {
								}
							}
							HX_STACK_LINE(593)
							bool tmp51 = colorFill;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(593)
							if ((tmp51)){
								HX_STACK_LINE(595)
								::lime::graphics::cairo::Cairo tmp52 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(595)
								tmp52->newPath();
								HX_STACK_LINE(596)
								::lime::graphics::cairo::Cairo tmp53 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(596)
								Float tmp54 = x1;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(596)
								Float tmp55 = y1;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(596)
								tmp53->moveTo(tmp54,tmp55);
								HX_STACK_LINE(597)
								::lime::graphics::cairo::Cairo tmp56 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(597)
								Float tmp57 = x2;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(597)
								Float tmp58 = y2;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(597)
								tmp56->lineTo(tmp57,tmp58);
								HX_STACK_LINE(598)
								::lime::graphics::cairo::Cairo tmp59 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(598)
								Float tmp60 = x3;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(598)
								Float tmp61 = y3;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(598)
								tmp59->lineTo(tmp60,tmp61);
								HX_STACK_LINE(599)
								::lime::graphics::cairo::Cairo tmp62 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(599)
								tmp62->closePath();
								HX_STACK_LINE(600)
								::lime::graphics::cairo::Cairo tmp63 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(600)
								tmp63->fillPreserve();
								HX_STACK_LINE(601)
								hx::AddEq(i,(int)3);
								HX_STACK_LINE(602)
								continue;
							}
							HX_STACK_LINE(606)
							::lime::graphics::cairo::Cairo tmp52 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(606)
							tmp52->identityMatrix();
							HX_STACK_LINE(609)
							::lime::graphics::cairo::Cairo tmp53 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(609)
							tmp53->newPath();
							HX_STACK_LINE(610)
							::lime::graphics::cairo::Cairo tmp54 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(610)
							Float tmp55 = x1;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(610)
							Float tmp56 = y1;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(610)
							tmp54->moveTo(tmp55,tmp56);
							HX_STACK_LINE(611)
							::lime::graphics::cairo::Cairo tmp57 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(611)
							Float tmp58 = x2;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(611)
							Float tmp59 = y2;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(611)
							tmp57->lineTo(tmp58,tmp59);
							HX_STACK_LINE(612)
							::lime::graphics::cairo::Cairo tmp60 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(612)
							Float tmp61 = x3;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(612)
							Float tmp62 = y3;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(612)
							tmp60->lineTo(tmp61,tmp62);
							HX_STACK_LINE(613)
							::lime::graphics::cairo::Cairo tmp63 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(613)
							tmp63->closePath();
							HX_STACK_LINE(616)
							Float tmp64 = uvt->__get(iax);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(616)
							Dynamic tmp65 = ((Dynamic)(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(616)
							int tmp66 = width;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(616)
							Float tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(616)
							uvx1 = tmp67;
							HX_STACK_LINE(617)
							Float tmp68 = uvt->__get(ibx);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(617)
							Dynamic tmp69 = ((Dynamic)(tmp68));		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(617)
							int tmp70 = width;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(617)
							Float tmp71 = (tmp69 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(617)
							uvx2 = tmp71;
							HX_STACK_LINE(618)
							Float tmp72 = uvt->__get(icx);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(618)
							Dynamic tmp73 = ((Dynamic)(tmp72));		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(618)
							int tmp74 = width;		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(618)
							Float tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(618)
							uvx3 = tmp75;
							HX_STACK_LINE(619)
							Float tmp76 = uvt->__get(iay);		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(619)
							Dynamic tmp77 = ((Dynamic)(tmp76));		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(619)
							int tmp78 = height;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(619)
							Float tmp79 = (tmp77 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(619)
							uvy1 = tmp79;
							HX_STACK_LINE(620)
							Float tmp80 = uvt->__get(iby);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(620)
							Dynamic tmp81 = ((Dynamic)(tmp80));		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(620)
							int tmp82 = height;		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(620)
							Float tmp83 = (tmp81 * tmp82);		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(620)
							uvy2 = tmp83;
							HX_STACK_LINE(621)
							Float tmp84 = uvt->__get(icy);		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(621)
							Dynamic tmp85 = ((Dynamic)(tmp84));		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(621)
							int tmp86 = height;		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(621)
							Float tmp87 = (tmp85 * tmp86);		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(621)
							uvy3 = tmp87;
							HX_STACK_LINE(623)
							Float tmp88 = uvx1;		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(623)
							Float tmp89 = (uvy3 - uvy2);		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(623)
							Float tmp90 = (tmp88 * tmp89);		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(623)
							Float tmp91 = (uvx2 * uvy3);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(623)
							Float tmp92 = (tmp90 - tmp91);		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(623)
							Float tmp93 = (uvx3 * uvy2);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(623)
							Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(623)
							Float tmp95 = (uvx2 - uvx3);		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(623)
							Float tmp96 = uvy1;		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(623)
							Float tmp97 = (tmp95 * tmp96);		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(623)
							Float tmp98 = (tmp94 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(623)
							denom = tmp98;
							HX_STACK_LINE(625)
							bool tmp99 = (denom == (int)0);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(625)
							if ((tmp99)){
								HX_STACK_LINE(627)
								hx::AddEq(i,(int)3);
								HX_STACK_LINE(628)
								continue;
							}
							HX_STACK_LINE(632)
							Float tmp100 = uvy1;		HX_STACK_VAR(tmp100,"tmp100");
							HX_STACK_LINE(632)
							Float tmp101 = (x3 - x2);		HX_STACK_VAR(tmp101,"tmp101");
							HX_STACK_LINE(632)
							Float tmp102 = (tmp100 * tmp101);		HX_STACK_VAR(tmp102,"tmp102");
							HX_STACK_LINE(632)
							Float tmp103 = (uvy2 * x3);		HX_STACK_VAR(tmp103,"tmp103");
							HX_STACK_LINE(632)
							Float tmp104 = (tmp102 - tmp103);		HX_STACK_VAR(tmp104,"tmp104");
							HX_STACK_LINE(632)
							Float tmp105 = (uvy3 * x2);		HX_STACK_VAR(tmp105,"tmp105");
							HX_STACK_LINE(632)
							Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
							HX_STACK_LINE(632)
							Float tmp107 = (uvy2 - uvy3);		HX_STACK_VAR(tmp107,"tmp107");
							HX_STACK_LINE(632)
							Float tmp108 = x1;		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(632)
							Float tmp109 = (tmp107 * tmp108);		HX_STACK_VAR(tmp109,"tmp109");
							HX_STACK_LINE(632)
							Float tmp110 = (tmp106 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(632)
							Float tmp111 = -(tmp110);		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(632)
							Float tmp112 = denom;		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(632)
							Float tmp113 = (Float(tmp111) / Float(tmp112));		HX_STACK_VAR(tmp113,"tmp113");
							HX_STACK_LINE(632)
							t1 = tmp113;
							HX_STACK_LINE(633)
							Float tmp114 = (uvy2 * y3);		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(633)
							Float tmp115 = uvy1;		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(633)
							Float tmp116 = (y2 - y3);		HX_STACK_VAR(tmp116,"tmp116");
							HX_STACK_LINE(633)
							Float tmp117 = (tmp115 * tmp116);		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(633)
							Float tmp118 = (tmp114 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
							HX_STACK_LINE(633)
							Float tmp119 = (uvy3 * y2);		HX_STACK_VAR(tmp119,"tmp119");
							HX_STACK_LINE(633)
							Float tmp120 = (tmp118 - tmp119);		HX_STACK_VAR(tmp120,"tmp120");
							HX_STACK_LINE(633)
							Float tmp121 = (uvy3 - uvy2);		HX_STACK_VAR(tmp121,"tmp121");
							HX_STACK_LINE(633)
							Float tmp122 = y1;		HX_STACK_VAR(tmp122,"tmp122");
							HX_STACK_LINE(633)
							Float tmp123 = (tmp121 * tmp122);		HX_STACK_VAR(tmp123,"tmp123");
							HX_STACK_LINE(633)
							Float tmp124 = (tmp120 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
							HX_STACK_LINE(633)
							Float tmp125 = denom;		HX_STACK_VAR(tmp125,"tmp125");
							HX_STACK_LINE(633)
							Float tmp126 = (Float(tmp124) / Float(tmp125));		HX_STACK_VAR(tmp126,"tmp126");
							HX_STACK_LINE(633)
							t2 = tmp126;
							HX_STACK_LINE(634)
							Float tmp127 = uvx1;		HX_STACK_VAR(tmp127,"tmp127");
							HX_STACK_LINE(634)
							Float tmp128 = (x3 - x2);		HX_STACK_VAR(tmp128,"tmp128");
							HX_STACK_LINE(634)
							Float tmp129 = (tmp127 * tmp128);		HX_STACK_VAR(tmp129,"tmp129");
							HX_STACK_LINE(634)
							Float tmp130 = (uvx2 * x3);		HX_STACK_VAR(tmp130,"tmp130");
							HX_STACK_LINE(634)
							Float tmp131 = (tmp129 - tmp130);		HX_STACK_VAR(tmp131,"tmp131");
							HX_STACK_LINE(634)
							Float tmp132 = (uvx3 * x2);		HX_STACK_VAR(tmp132,"tmp132");
							HX_STACK_LINE(634)
							Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
							HX_STACK_LINE(634)
							Float tmp134 = (uvx2 - uvx3);		HX_STACK_VAR(tmp134,"tmp134");
							HX_STACK_LINE(634)
							Float tmp135 = x1;		HX_STACK_VAR(tmp135,"tmp135");
							HX_STACK_LINE(634)
							Float tmp136 = (tmp134 * tmp135);		HX_STACK_VAR(tmp136,"tmp136");
							HX_STACK_LINE(634)
							Float tmp137 = (tmp133 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
							HX_STACK_LINE(634)
							Float tmp138 = denom;		HX_STACK_VAR(tmp138,"tmp138");
							HX_STACK_LINE(634)
							Float tmp139 = (Float(tmp137) / Float(tmp138));		HX_STACK_VAR(tmp139,"tmp139");
							HX_STACK_LINE(634)
							t3 = tmp139;
							HX_STACK_LINE(635)
							Float tmp140 = (uvx2 * y3);		HX_STACK_VAR(tmp140,"tmp140");
							HX_STACK_LINE(635)
							Float tmp141 = uvx1;		HX_STACK_VAR(tmp141,"tmp141");
							HX_STACK_LINE(635)
							Float tmp142 = (y2 - y3);		HX_STACK_VAR(tmp142,"tmp142");
							HX_STACK_LINE(635)
							Float tmp143 = (tmp141 * tmp142);		HX_STACK_VAR(tmp143,"tmp143");
							HX_STACK_LINE(635)
							Float tmp144 = (tmp140 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
							HX_STACK_LINE(635)
							Float tmp145 = (uvx3 * y2);		HX_STACK_VAR(tmp145,"tmp145");
							HX_STACK_LINE(635)
							Float tmp146 = (tmp144 - tmp145);		HX_STACK_VAR(tmp146,"tmp146");
							HX_STACK_LINE(635)
							Float tmp147 = (uvx3 - uvx2);		HX_STACK_VAR(tmp147,"tmp147");
							HX_STACK_LINE(635)
							Float tmp148 = y1;		HX_STACK_VAR(tmp148,"tmp148");
							HX_STACK_LINE(635)
							Float tmp149 = (tmp147 * tmp148);		HX_STACK_VAR(tmp149,"tmp149");
							HX_STACK_LINE(635)
							Float tmp150 = (tmp146 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
							HX_STACK_LINE(635)
							Float tmp151 = -(tmp150);		HX_STACK_VAR(tmp151,"tmp151");
							HX_STACK_LINE(635)
							Float tmp152 = denom;		HX_STACK_VAR(tmp152,"tmp152");
							HX_STACK_LINE(635)
							Float tmp153 = (Float(tmp151) / Float(tmp152));		HX_STACK_VAR(tmp153,"tmp153");
							HX_STACK_LINE(635)
							t4 = tmp153;
							HX_STACK_LINE(636)
							Float tmp154 = uvx1;		HX_STACK_VAR(tmp154,"tmp154");
							HX_STACK_LINE(636)
							Float tmp155 = (uvy3 * x2);		HX_STACK_VAR(tmp155,"tmp155");
							HX_STACK_LINE(636)
							Float tmp156 = (uvy2 * x3);		HX_STACK_VAR(tmp156,"tmp156");
							HX_STACK_LINE(636)
							Float tmp157 = (tmp155 - tmp156);		HX_STACK_VAR(tmp157,"tmp157");
							HX_STACK_LINE(636)
							Float tmp158 = (tmp154 * tmp157);		HX_STACK_VAR(tmp158,"tmp158");
							HX_STACK_LINE(636)
							Float tmp159 = uvy1;		HX_STACK_VAR(tmp159,"tmp159");
							HX_STACK_LINE(636)
							Float tmp160 = (uvx2 * x3);		HX_STACK_VAR(tmp160,"tmp160");
							HX_STACK_LINE(636)
							Float tmp161 = (uvx3 * x2);		HX_STACK_VAR(tmp161,"tmp161");
							HX_STACK_LINE(636)
							Float tmp162 = (tmp160 - tmp161);		HX_STACK_VAR(tmp162,"tmp162");
							HX_STACK_LINE(636)
							Float tmp163 = (tmp159 * tmp162);		HX_STACK_VAR(tmp163,"tmp163");
							HX_STACK_LINE(636)
							Float tmp164 = (tmp158 + tmp163);		HX_STACK_VAR(tmp164,"tmp164");
							HX_STACK_LINE(636)
							Float tmp165 = (uvx3 * uvy2);		HX_STACK_VAR(tmp165,"tmp165");
							HX_STACK_LINE(636)
							Float tmp166 = (uvx2 * uvy3);		HX_STACK_VAR(tmp166,"tmp166");
							HX_STACK_LINE(636)
							Float tmp167 = (tmp165 - tmp166);		HX_STACK_VAR(tmp167,"tmp167");
							HX_STACK_LINE(636)
							Float tmp168 = x1;		HX_STACK_VAR(tmp168,"tmp168");
							HX_STACK_LINE(636)
							Float tmp169 = (tmp167 * tmp168);		HX_STACK_VAR(tmp169,"tmp169");
							HX_STACK_LINE(636)
							Float tmp170 = (tmp164 + tmp169);		HX_STACK_VAR(tmp170,"tmp170");
							HX_STACK_LINE(636)
							Float tmp171 = denom;		HX_STACK_VAR(tmp171,"tmp171");
							HX_STACK_LINE(636)
							Float tmp172 = (Float(tmp170) / Float(tmp171));		HX_STACK_VAR(tmp172,"tmp172");
							HX_STACK_LINE(636)
							dx = tmp172;
							HX_STACK_LINE(637)
							Float tmp173 = uvx1;		HX_STACK_VAR(tmp173,"tmp173");
							HX_STACK_LINE(637)
							Float tmp174 = (uvy3 * y2);		HX_STACK_VAR(tmp174,"tmp174");
							HX_STACK_LINE(637)
							Float tmp175 = (uvy2 * y3);		HX_STACK_VAR(tmp175,"tmp175");
							HX_STACK_LINE(637)
							Float tmp176 = (tmp174 - tmp175);		HX_STACK_VAR(tmp176,"tmp176");
							HX_STACK_LINE(637)
							Float tmp177 = (tmp173 * tmp176);		HX_STACK_VAR(tmp177,"tmp177");
							HX_STACK_LINE(637)
							Float tmp178 = uvy1;		HX_STACK_VAR(tmp178,"tmp178");
							HX_STACK_LINE(637)
							Float tmp179 = (uvx2 * y3);		HX_STACK_VAR(tmp179,"tmp179");
							HX_STACK_LINE(637)
							Float tmp180 = (uvx3 * y2);		HX_STACK_VAR(tmp180,"tmp180");
							HX_STACK_LINE(637)
							Float tmp181 = (tmp179 - tmp180);		HX_STACK_VAR(tmp181,"tmp181");
							HX_STACK_LINE(637)
							Float tmp182 = (tmp178 * tmp181);		HX_STACK_VAR(tmp182,"tmp182");
							HX_STACK_LINE(637)
							Float tmp183 = (tmp177 + tmp182);		HX_STACK_VAR(tmp183,"tmp183");
							HX_STACK_LINE(637)
							Float tmp184 = (uvx3 * uvy2);		HX_STACK_VAR(tmp184,"tmp184");
							HX_STACK_LINE(637)
							Float tmp185 = (uvx2 * uvy3);		HX_STACK_VAR(tmp185,"tmp185");
							HX_STACK_LINE(637)
							Float tmp186 = (tmp184 - tmp185);		HX_STACK_VAR(tmp186,"tmp186");
							HX_STACK_LINE(637)
							Float tmp187 = y1;		HX_STACK_VAR(tmp187,"tmp187");
							HX_STACK_LINE(637)
							Float tmp188 = (tmp186 * tmp187);		HX_STACK_VAR(tmp188,"tmp188");
							HX_STACK_LINE(637)
							Float tmp189 = (tmp183 + tmp188);		HX_STACK_VAR(tmp189,"tmp189");
							HX_STACK_LINE(637)
							Float tmp190 = denom;		HX_STACK_VAR(tmp190,"tmp190");
							HX_STACK_LINE(637)
							Float tmp191 = (Float(tmp189) / Float(tmp190));		HX_STACK_VAR(tmp191,"tmp191");
							HX_STACK_LINE(637)
							dy = tmp191;
							HX_STACK_LINE(639)
							::lime::math::Matrix3 tmp192 = ::lime::math::Matrix3_obj::__new(t1,t2,t3,t4,dx,dy);		HX_STACK_VAR(tmp192,"tmp192");
							HX_STACK_LINE(639)
							::lime::math::Matrix3 matrix = tmp192;		HX_STACK_VAR(matrix,"matrix");
							HX_STACK_LINE(640)
							::lime::graphics::cairo::Cairo tmp193 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp193,"tmp193");
							HX_STACK_LINE(640)
							::lime::math::Matrix3 tmp194 = matrix;		HX_STACK_VAR(tmp194,"tmp194");
							HX_STACK_LINE(640)
							tmp193->set_matrix(tmp194);
							HX_STACK_LINE(641)
							::lime::graphics::cairo::Cairo tmp195 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp195,"tmp195");
							HX_STACK_LINE(641)
							Dynamic tmp196 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp196,"tmp196");
							HX_STACK_LINE(641)
							tmp195->set_source(tmp196);
							HX_STACK_LINE(642)
							::lime::graphics::cairo::Cairo tmp197 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp197,"tmp197");
							HX_STACK_LINE(642)
							tmp197->fill();
							HX_STACK_LINE(644)
							hx::AddEq(i,(int)3);
						}
					}
				}
				else if (  ( _switch_1==(int)9)){
					HX_STACK_LINE(261)
					int tmp8 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(261)
					int count = tmp8;		HX_STACK_VAR(count,"count");
					HX_STACK_LINE(261)
					int tmp9 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(261)
					int flags = tmp9;		HX_STACK_VAR(flags,"flags");
					HX_STACK_LINE(261)
					bool tmp10 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(261)
					bool smooth = tmp10;		HX_STACK_VAR(smooth,"smooth");
					HX_STACK_LINE(261)
					Array< Float > tileData = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tileData,"tileData");
					HX_STACK_LINE(261)
					::openfl::display::Tilesheet tmp11 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(261)
					::openfl::display::Tilesheet sheet = tmp11;		HX_STACK_VAR(sheet,"sheet");
					HX_STACK_LINE(647)
					{
						HX_STACK_LINE(649)
						int tmp12 = (int(flags) & int((int)1));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(649)
						bool tmp13 = (tmp12 > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(649)
						bool useScale = tmp13;		HX_STACK_VAR(useScale,"useScale");
						HX_STACK_LINE(650)
						int tmp14 = (int(flags) & int((int)2));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(650)
						bool tmp15 = (tmp14 > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(650)
						bool useRotation = tmp15;		HX_STACK_VAR(useRotation,"useRotation");
						HX_STACK_LINE(651)
						int tmp16 = (int(flags) & int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(651)
						bool tmp17 = (tmp16 > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(651)
						bool useTransform = tmp17;		HX_STACK_VAR(useTransform,"useTransform");
						HX_STACK_LINE(652)
						int tmp18 = (int(flags) & int((int)4));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(652)
						bool tmp19 = (tmp18 > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(652)
						bool useRGB = tmp19;		HX_STACK_VAR(useRGB,"useRGB");
						HX_STACK_LINE(653)
						int tmp20 = (int(flags) & int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(653)
						bool tmp21 = (tmp20 > (int)0);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(653)
						bool useAlpha = tmp21;		HX_STACK_VAR(useAlpha,"useAlpha");
						HX_STACK_LINE(654)
						int tmp22 = (int(flags) & int((int)32));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(654)
						bool tmp23 = (tmp22 > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(654)
						bool useRect = tmp23;		HX_STACK_VAR(useRect,"useRect");
						HX_STACK_LINE(655)
						int tmp24 = (int(flags) & int((int)64));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(655)
						bool tmp25 = (tmp24 > (int)0);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(655)
						bool useOrigin = tmp25;		HX_STACK_VAR(useOrigin,"useOrigin");
						HX_STACK_LINE(656)
						int tmp26 = (int(flags) & int((int)65536));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(656)
						bool tmp27 = (tmp26 > (int)0);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(656)
						bool useBlendAdd = tmp27;		HX_STACK_VAR(useBlendAdd,"useBlendAdd");
						HX_STACK_LINE(658)
						bool tmp28 = useTransform;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(658)
						if ((tmp28)){
							HX_STACK_LINE(658)
							useScale = false;
							HX_STACK_LINE(658)
							useRotation = false;
						}
						HX_STACK_LINE(660)
						int scaleIndex = (int)0;		HX_STACK_VAR(scaleIndex,"scaleIndex");
						HX_STACK_LINE(661)
						int rotationIndex = (int)0;		HX_STACK_VAR(rotationIndex,"rotationIndex");
						HX_STACK_LINE(662)
						int rgbIndex = (int)0;		HX_STACK_VAR(rgbIndex,"rgbIndex");
						HX_STACK_LINE(663)
						int alphaIndex = (int)0;		HX_STACK_VAR(alphaIndex,"alphaIndex");
						HX_STACK_LINE(664)
						int transformIndex = (int)0;		HX_STACK_VAR(transformIndex,"transformIndex");
						HX_STACK_LINE(666)
						int numValues = (int)3;		HX_STACK_VAR(numValues,"numValues");
						HX_STACK_LINE(668)
						bool tmp29 = useRect;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(668)
						if ((tmp29)){
							HX_STACK_LINE(668)
							bool tmp30 = useOrigin;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(668)
							int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(668)
							if ((tmp30)){
								HX_STACK_LINE(668)
								tmp31 = (int)8;
							}
							else{
								HX_STACK_LINE(668)
								tmp31 = (int)6;
							}
							HX_STACK_LINE(668)
							numValues = tmp31;
						}
						HX_STACK_LINE(669)
						bool tmp30 = useScale;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(669)
						if ((tmp30)){
							HX_STACK_LINE(669)
							scaleIndex = numValues;
							HX_STACK_LINE(669)
							(numValues)++;
						}
						HX_STACK_LINE(670)
						bool tmp31 = useRotation;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(670)
						if ((tmp31)){
							HX_STACK_LINE(670)
							rotationIndex = numValues;
							HX_STACK_LINE(670)
							(numValues)++;
						}
						HX_STACK_LINE(671)
						bool tmp32 = useTransform;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(671)
						if ((tmp32)){
							HX_STACK_LINE(671)
							transformIndex = numValues;
							HX_STACK_LINE(671)
							hx::AddEq(numValues,(int)4);
						}
						HX_STACK_LINE(672)
						bool tmp33 = useRGB;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(672)
						if ((tmp33)){
							HX_STACK_LINE(672)
							rgbIndex = numValues;
							HX_STACK_LINE(672)
							hx::AddEq(numValues,(int)3);
						}
						HX_STACK_LINE(673)
						bool tmp34 = useAlpha;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(673)
						if ((tmp34)){
							HX_STACK_LINE(673)
							alphaIndex = numValues;
							HX_STACK_LINE(673)
							(numValues)++;
						}
						HX_STACK_LINE(675)
						int totalCount = tileData->length;		HX_STACK_VAR(totalCount,"totalCount");
						HX_STACK_LINE(676)
						bool tmp35 = (count >= (int)0);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(676)
						bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(676)
						if ((tmp35)){
							HX_STACK_LINE(676)
							tmp36 = (totalCount > count);
						}
						else{
							HX_STACK_LINE(676)
							tmp36 = false;
						}
						HX_STACK_LINE(676)
						if ((tmp36)){
							HX_STACK_LINE(676)
							totalCount = count;
						}
						HX_STACK_LINE(677)
						Float tmp37 = (Float(totalCount) / Float(numValues));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(677)
						int tmp38 = ::Std_obj::_int(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(677)
						int itemCount = tmp38;		HX_STACK_VAR(itemCount,"itemCount");
						HX_STACK_LINE(678)
						int index = (int)0;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(680)
						::openfl::geom::Rectangle rect = null();		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(681)
						::openfl::geom::Point center = null();		HX_STACK_VAR(center,"center");
						HX_STACK_LINE(682)
						int previousTileID = (int)-1;		HX_STACK_VAR(previousTileID,"previousTileID");
						HX_STACK_LINE(684)
						Dynamic surface;		HX_STACK_VAR(surface,"surface");
						HX_STACK_LINE(685)
						sheet->__bitmap->__sync();
						HX_STACK_LINE(686)
						Dynamic tmp39 = sheet->__bitmap->getSurface(null());		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(686)
						surface = tmp39;
						HX_STACK_LINE(688)
						bool tmp40 = useBlendAdd;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(688)
						if ((tmp40)){
							HX_STACK_LINE(689)
							::lime::graphics::cairo::Cairo tmp41 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(689)
							tmp41->set_operator((int)12);
						}
						HX_STACK_LINE(692)
						while((true)){
							HX_STACK_LINE(692)
							bool tmp41 = (index < totalCount);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(692)
							bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(692)
							if ((tmp42)){
								HX_STACK_LINE(692)
								break;
							}
							HX_STACK_LINE(702)
							int tmp43 = (index + (int)2);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(702)
							Float tmp44 = tileData->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(702)
							int tmp45 = ::Std_obj::_int(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(702)
							int i = tmp45;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(705)
							bool tmp46 = useRect;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(705)
							bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(705)
							int tmp48;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(705)
							if ((tmp47)){
								HX_STACK_LINE(705)
								tmp48 = i;
							}
							else{
								HX_STACK_LINE(705)
								tmp48 = (int)-1;
							}
							HX_STACK_LINE(705)
							int tileID = tmp48;		HX_STACK_VAR(tileID,"tileID");
							HX_STACK_LINE(707)
							bool tmp49 = useRect;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(707)
							bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(707)
							bool tmp51 = !(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(707)
							bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(707)
							if ((tmp51)){
								HX_STACK_LINE(707)
								tmp52 = (tileID != previousTileID);
							}
							else{
								HX_STACK_LINE(707)
								tmp52 = false;
							}
							HX_STACK_LINE(707)
							if ((tmp52)){
								HX_STACK_LINE(709)
								::openfl::geom::Rectangle tmp53 = sheet->__tileRects->__get(tileID).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(709)
								rect = tmp53;
								HX_STACK_LINE(710)
								::openfl::geom::Point tmp54 = sheet->__centerPoints->__get(tileID).StaticCast< ::openfl::geom::Point >();		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(710)
								center = tmp54;
								HX_STACK_LINE(712)
								previousTileID = tileID;
							}
							else{
								HX_STACK_LINE(714)
								bool tmp53 = useRect;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(714)
								if ((tmp53)){
									HX_STACK_LINE(716)
									rect = sheet->__rectTile;
									HX_STACK_LINE(717)
									int tmp54 = (index + (int)2);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(717)
									Float tmp55 = tileData->__get(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(717)
									int tmp56 = (index + (int)3);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(717)
									Float tmp57 = tileData->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(717)
									int tmp58 = (index + (int)4);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(717)
									Float tmp59 = tileData->__get(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(717)
									int tmp60 = (index + (int)5);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(717)
									Float tmp61 = tileData->__get(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(717)
									rect->setTo(tmp55,tmp57,tmp59,tmp61);
									HX_STACK_LINE(718)
									center = sheet->__point;
									HX_STACK_LINE(720)
									bool tmp62 = useOrigin;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(720)
									if ((tmp62)){
										HX_STACK_LINE(722)
										int tmp63 = (index + (int)6);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(722)
										Float tmp64 = tileData->__get(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(722)
										center->x = tmp64;
										HX_STACK_LINE(722)
										int tmp65 = (index + (int)7);		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(722)
										Float tmp66 = tileData->__get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(722)
										center->y = tmp66;
									}
									else{
										HX_STACK_LINE(726)
										center->x = (int)0;
										HX_STACK_LINE(726)
										center->y = (int)0;
									}
								}
							}
							HX_STACK_LINE(732)
							bool tmp53 = (rect != null());		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(732)
							bool tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(732)
							bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(732)
							if ((tmp54)){
								HX_STACK_LINE(732)
								tmp55 = (rect->width > (int)0);
							}
							else{
								HX_STACK_LINE(732)
								tmp55 = false;
							}
							HX_STACK_LINE(732)
							bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(732)
							bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(732)
							if ((tmp56)){
								HX_STACK_LINE(732)
								tmp57 = (rect->height > (int)0);
							}
							else{
								HX_STACK_LINE(732)
								tmp57 = false;
							}
							HX_STACK_LINE(732)
							bool tmp58;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(732)
							if ((tmp57)){
								HX_STACK_LINE(732)
								tmp58 = (center != null());
							}
							else{
								HX_STACK_LINE(732)
								tmp58 = false;
							}
							HX_STACK_LINE(732)
							if ((tmp58)){
								HX_STACK_LINE(736)
								::lime::graphics::cairo::Cairo tmp59 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(736)
								tmp59->identityMatrix();
								HX_STACK_LINE(738)
								bool tmp60 = useTransform;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(738)
								if ((tmp60)){
									HX_STACK_LINE(739)
									int tmp61 = (index + transformIndex);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(739)
									Float tmp62 = tileData->__get(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(739)
									int tmp63 = (index + transformIndex);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(739)
									int tmp64 = (tmp63 + (int)1);		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(739)
									Float tmp65 = tileData->__get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(739)
									int tmp66 = (index + transformIndex);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(739)
									int tmp67 = (tmp66 + (int)2);		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(739)
									Float tmp68 = tileData->__get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(739)
									int tmp69 = (index + transformIndex);		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(739)
									int tmp70 = (tmp69 + (int)3);		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(739)
									Float tmp71 = tileData->__get(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(739)
									::lime::math::Matrix3 tmp72 = ::lime::math::Matrix3_obj::__new(tmp62,tmp65,tmp68,tmp71,(int)0,(int)0);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(739)
									::lime::math::Matrix3 matrix = tmp72;		HX_STACK_VAR(matrix,"matrix");
									HX_STACK_LINE(740)
									::lime::graphics::cairo::Cairo tmp73 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(740)
									::lime::math::Matrix3 tmp74 = matrix;		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(740)
									tmp73->set_matrix(tmp74);
								}
								HX_STACK_LINE(743)
								::lime::graphics::cairo::Cairo tmp61 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(743)
								Float tmp62 = tileData->__get(index);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(743)
								int tmp63 = (index + (int)1);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(743)
								Float tmp64 = tileData->__get(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(743)
								tmp61->translate(tmp62,tmp64);
								HX_STACK_LINE(746)
								bool tmp65 = useRotation;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(746)
								if ((tmp65)){
									HX_STACK_LINE(747)
									::lime::graphics::cairo::Cairo tmp66 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(747)
									int tmp67 = (index + rotationIndex);		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(747)
									Float tmp68 = tileData->__get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(747)
									tmp66->rotate(tmp68);
								}
								HX_STACK_LINE(750)
								bool tmp66 = useScale;		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(750)
								if ((tmp66)){
									HX_STACK_LINE(751)
									int tmp67 = (index + scaleIndex);		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(751)
									Float tmp68 = tileData->__get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(751)
									Float scale = tmp68;		HX_STACK_VAR(scale,"scale");
									HX_STACK_LINE(752)
									::lime::graphics::cairo::Cairo tmp69 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(752)
									Float tmp70 = scale;		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(752)
									Float tmp71 = scale;		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(752)
									tmp69->scale(tmp70,tmp71);
								}
								HX_STACK_LINE(755)
								::lime::graphics::cairo::Cairo tmp67 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(755)
								Dynamic tmp68 = surface;		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(755)
								tmp67->setSourceSurface(tmp68,(int)0,(int)0);
								HX_STACK_LINE(757)
								bool tmp69 = useAlpha;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(757)
								if ((tmp69)){
									HX_STACK_LINE(758)
									::lime::graphics::cairo::Cairo tmp70 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(758)
									int tmp71 = (index + alphaIndex);		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(758)
									Float tmp72 = tileData->__get(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(758)
									tmp70->paintWithAlpha(tmp72);
								}
								else{
									HX_STACK_LINE(760)
									::lime::graphics::cairo::Cairo tmp70 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(760)
									tmp70->paint();
								}
							}
							HX_STACK_LINE(767)
							hx::AddEq(index,numValues);
						}
						HX_STACK_LINE(771)
						bool tmp41 = useBlendAdd;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(771)
						if ((tmp41)){
							HX_STACK_LINE(772)
							::lime::graphics::cairo::Cairo tmp42 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(772)
							tmp42->set_operator((int)2);
						}
					}
				}
				else  {
				}
;
;
			}
		}
		HX_STACK_LINE(781)
		bool tmp5 = hasPath;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(781)
		if ((tmp5)){
			HX_STACK_LINE(784)
			bool tmp6 = stroke;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(784)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(784)
			if ((tmp6)){
				HX_STACK_LINE(784)
				tmp7 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;
			}
			else{
				HX_STACK_LINE(784)
				tmp7 = false;
			}
			HX_STACK_LINE(784)
			if ((tmp7)){
				HX_STACK_LINE(786)
				bool tmp8 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(786)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(786)
				if ((tmp8)){
					HX_STACK_LINE(786)
					tmp9 = closeGap;
				}
				else{
					HX_STACK_LINE(786)
					tmp9 = false;
				}
				HX_STACK_LINE(786)
				if ((tmp9)){
					HX_STACK_LINE(788)
					::lime::graphics::cairo::Cairo tmp10 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(788)
					Float tmp11 = (startX - offsetX);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(788)
					Float tmp12 = (startY - offsetY);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(788)
					tmp10->lineTo(tmp11,tmp12);
				}
				HX_STACK_LINE(792)
				::lime::graphics::cairo::Cairo tmp10 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(792)
				Dynamic tmp11 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(792)
				tmp10->set_source(tmp11);
				HX_STACK_LINE(793)
				::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(793)
				tmp12->strokePreserve();
			}
			HX_STACK_LINE(797)
			bool tmp8 = stroke;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(797)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(797)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(797)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(797)
			if ((tmp10)){
				HX_STACK_LINE(797)
				tmp11 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill;
			}
			else{
				HX_STACK_LINE(797)
				tmp11 = false;
			}
			HX_STACK_LINE(797)
			if ((tmp11)){
				HX_STACK_LINE(799)
				::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(799)
				::openfl::geom::Rectangle tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(799)
				Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(799)
				Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(799)
				::openfl::geom::Rectangle tmp16 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(799)
				Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(799)
				Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(799)
				tmp12->translate(tmp15,tmp18);
				HX_STACK_LINE(801)
				::openfl::geom::Matrix tmp19 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(801)
				bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(801)
				if ((tmp20)){
					HX_STACK_LINE(803)
					::openfl::geom::Matrix tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(803)
					{
						HX_STACK_LINE(803)
						::openfl::geom::Matrix tmp22 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(803)
						::openfl::geom::Matrix _this = tmp22;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(803)
						tmp21 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
					}
					HX_STACK_LINE(803)
					::openfl::geom::Matrix matrix = tmp21;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(804)
					matrix->invert();
					HX_STACK_LINE(806)
					::openfl::geom::Matrix tmp22 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(806)
					bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(806)
					if ((tmp23)){
						HX_STACK_LINE(808)
						::openfl::geom::Matrix tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(808)
						matrix->concat(tmp24);
					}
					HX_STACK_LINE(812)
					Dynamic tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(812)
					::lime::math::Matrix3 tmp25 = matrix->__toMatrix3();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(812)
					::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(tmp24,tmp25);
				}
				HX_STACK_LINE(816)
				::lime::graphics::cairo::Cairo tmp21 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(816)
				Dynamic tmp22 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(816)
				tmp21->set_source(tmp22);
				HX_STACK_LINE(818)
				::openfl::geom::Matrix tmp23 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(818)
				bool tmp24 = (tmp23 != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(818)
				if ((tmp24)){
					HX_STACK_LINE(820)
					::lime::graphics::cairo::Cairo tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(820)
					::openfl::geom::Matrix tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(820)
					::lime::math::Matrix3 tmp27 = tmp26->__toMatrix3();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(820)
					tmp25->transform(tmp27);
					HX_STACK_LINE(821)
					::lime::graphics::cairo::Cairo tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(821)
					tmp28->fillPreserve();
					HX_STACK_LINE(822)
					::lime::graphics::cairo::Cairo tmp29 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(822)
					::openfl::geom::Matrix tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::inversePendingMatrix;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(822)
					::lime::math::Matrix3 tmp31 = tmp30->__toMatrix3();		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(822)
					tmp29->transform(tmp31);
				}
				else{
					HX_STACK_LINE(826)
					::lime::graphics::cairo::Cairo tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(826)
					tmp25->fillPreserve();
				}
				HX_STACK_LINE(830)
				::lime::graphics::cairo::Cairo tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(830)
				::openfl::geom::Rectangle tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(830)
				Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(830)
				::openfl::geom::Rectangle tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(830)
				Float tmp29 = tmp28->y;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(830)
				tmp25->translate(tmp27,tmp29);
				HX_STACK_LINE(831)
				::lime::graphics::cairo::Cairo tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(831)
				tmp30->closePath();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,playCommands,(void))

Void CairoGraphics_obj::quadraticCurveTo( Float cx,Float cy,Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","quadraticCurveTo",0x01a3b18e,"openfl._internal.renderer.cairo.CairoGraphics.quadraticCurveTo","openfl/_internal/renderer/cairo/CairoGraphics.hx",837,0x744ae94c)
		HX_STACK_ARG(cx,"cx")
		HX_STACK_ARG(cy,"cy")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(839)
		::lime::math::Vector2 current = null();		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(841)
		::lime::graphics::cairo::Cairo tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(841)
		bool tmp1 = tmp->get_hasCurrentPoint();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(841)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(841)
		if ((tmp2)){
			HX_STACK_LINE(843)
			::lime::graphics::cairo::Cairo tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(843)
			Float tmp4 = cx;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(843)
			Float tmp5 = cy;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(843)
			tmp3->moveTo(tmp4,tmp5);
			HX_STACK_LINE(844)
			::lime::math::Vector2 tmp6 = ::lime::math::Vector2_obj::__new(cx,cy);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(844)
			current = tmp6;
		}
		else{
			HX_STACK_LINE(848)
			::lime::graphics::cairo::Cairo tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(848)
			::lime::math::Vector2 tmp4 = tmp3->get_currentPoint();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(848)
			current = tmp4;
		}
		HX_STACK_LINE(852)
		Float tmp3 = current->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(852)
		Float tmp4 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(852)
		Float tmp5 = (cx - current->x);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(852)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(852)
		Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(852)
		Float cx1 = tmp7;		HX_STACK_VAR(cx1,"cx1");
		HX_STACK_LINE(853)
		Float tmp8 = current->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(853)
		Float tmp9 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(853)
		Float tmp10 = (cy - current->y);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(853)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(853)
		Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(853)
		Float cy1 = tmp12;		HX_STACK_VAR(cy1,"cy1");
		HX_STACK_LINE(854)
		Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(854)
		Float tmp14 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(854)
		Float tmp15 = (cx - x);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(854)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(854)
		Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(854)
		Float cx2 = tmp17;		HX_STACK_VAR(cx2,"cx2");
		HX_STACK_LINE(855)
		Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(855)
		Float tmp19 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(855)
		Float tmp20 = (cy - y);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(855)
		Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(855)
		Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(855)
		Float cy2 = tmp22;		HX_STACK_VAR(cy2,"cy2");
		HX_STACK_LINE(857)
		::lime::graphics::cairo::Cairo tmp23 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(857)
		Float tmp24 = cx1;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(857)
		Float tmp25 = cy1;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(857)
		Float tmp26 = cx2;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(857)
		Float tmp27 = cy2;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(857)
		Float tmp28 = x;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(857)
		Float tmp29 = y;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(857)
		tmp23->curveTo(tmp24,tmp25,tmp26,tmp27,tmp28,tmp29);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoGraphics_obj,quadraticCurveTo,(void))

Void CairoGraphics_obj::render( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","render",0x3c3e61d2,"openfl._internal.renderer.cairo.CairoGraphics.render","openfl/_internal/renderer/cairo/CairoGraphics.hx",862,0x744ae94c)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(865)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics = graphics;
		HX_STACK_LINE(867)
		bool tmp = graphics->__dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(867)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(867)
		if ((tmp1)){
			HX_STACK_LINE(867)
			return null();
		}
		HX_STACK_LINE(869)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds = graphics->__bounds;
		HX_STACK_LINE(871)
		bool tmp2 = graphics->__visible;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(871)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(871)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(871)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(871)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(871)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(871)
		if ((tmp6)){
			HX_STACK_LINE(871)
			int tmp8 = graphics->__commands->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(871)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(871)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(871)
			tmp7 = (tmp10 == (int)0);
		}
		else{
			HX_STACK_LINE(871)
			tmp7 = true;
		}
		HX_STACK_LINE(871)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(871)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(871)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(871)
		if ((tmp9)){
			HX_STACK_LINE(871)
			::openfl::geom::Rectangle tmp11 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(871)
			::openfl::geom::Rectangle tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(871)
			::openfl::geom::Rectangle tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(871)
			tmp10 = (tmp13 == null());
		}
		else{
			HX_STACK_LINE(871)
			tmp10 = true;
		}
		HX_STACK_LINE(871)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(871)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(871)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(871)
		if ((tmp12)){
			HX_STACK_LINE(871)
			::openfl::geom::Rectangle tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(871)
			::openfl::geom::Rectangle tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(871)
			::openfl::geom::Rectangle tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(871)
			Float tmp17 = tmp16->width;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(871)
			tmp13 = (tmp17 == (int)0);
		}
		else{
			HX_STACK_LINE(871)
			tmp13 = true;
		}
		HX_STACK_LINE(871)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(871)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(871)
		if ((tmp14)){
			HX_STACK_LINE(871)
			::openfl::geom::Rectangle tmp16 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(871)
			::openfl::geom::Rectangle tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(871)
			Float tmp18 = tmp17->height;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(871)
			tmp15 = (tmp18 == (int)0);
		}
		else{
			HX_STACK_LINE(871)
			tmp15 = true;
		}
		HX_STACK_LINE(871)
		if ((tmp15)){
			HX_STACK_LINE(873)
			bool tmp16 = (graphics->__cairo != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(873)
			if ((tmp16)){
				HX_STACK_LINE(875)
				graphics->__cairo->destroy();
				HX_STACK_LINE(876)
				graphics->__cairo = null();
			}
		}
		else{
			HX_STACK_LINE(882)
			bool tmp16 = (graphics->__cairo != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(882)
			if ((tmp16)){
				HX_STACK_LINE(884)
				Dynamic tmp17 = graphics->__cairo->get_target();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(884)
				Dynamic surface = tmp17;		HX_STACK_VAR(surface,"surface");
				HX_STACK_LINE(886)
				::openfl::geom::Rectangle tmp18 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(886)
				Float tmp19 = tmp18->width;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(886)
				Dynamic tmp20 = surface;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(886)
				int tmp21 = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::get_width(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(886)
				bool tmp22 = (tmp19 != tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(886)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(886)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(886)
				if ((tmp23)){
					HX_STACK_LINE(886)
					::openfl::geom::Rectangle tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(886)
					::openfl::geom::Rectangle tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(886)
					Float tmp27 = tmp26->height;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(886)
					Dynamic tmp28 = surface;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(886)
					Dynamic tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(886)
					int tmp30 = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::get_height(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(886)
					int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(886)
					tmp24 = (tmp27 != tmp31);
				}
				else{
					HX_STACK_LINE(886)
					tmp24 = true;
				}
				HX_STACK_LINE(886)
				if ((tmp24)){
					HX_STACK_LINE(888)
					graphics->__cairo->destroy();
					HX_STACK_LINE(889)
					graphics->__cairo = null();
				}
			}
			HX_STACK_LINE(895)
			bool tmp17 = (graphics->__cairo == null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(895)
			if ((tmp17)){
				HX_STACK_LINE(897)
				::openfl::geom::Rectangle tmp18 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(897)
				Float tmp19 = tmp18->width;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(897)
				int tmp20 = ::Math_obj::ceil(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(897)
				::openfl::geom::Rectangle tmp21 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(897)
				Float tmp22 = tmp21->height;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(897)
				int tmp23 = ::Math_obj::ceil(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(897)
				::openfl::display::BitmapData tmp24 = ::openfl::display::BitmapData_obj::__new(tmp20,tmp23,true,null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(897)
				::openfl::display::BitmapData bitmap = tmp24;		HX_STACK_VAR(bitmap,"bitmap");
				HX_STACK_LINE(898)
				::lime::graphics::Image tmp25 = bitmap->__image;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(898)
				Dynamic tmp26 = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::fromImage(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(898)
				Dynamic surface = tmp26;		HX_STACK_VAR(surface,"surface");
				HX_STACK_LINE(899)
				::lime::graphics::cairo::Cairo tmp27 = ::lime::graphics::cairo::Cairo_obj::__new(surface);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(899)
				graphics->__cairo = tmp27;
				HX_STACK_LINE(900)
				Dynamic tmp28 = surface;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(900)
				::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::destroy(tmp28);
				HX_STACK_LINE(902)
				bitmap->__bgra = true;
				HX_STACK_LINE(904)
				graphics->__bitmap = bitmap;
			}
			HX_STACK_LINE(908)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo = graphics->__cairo;
			HX_STACK_LINE(910)
			::lime::graphics::cairo::Cairo tmp18 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(910)
			tmp18->set_operator((int)1);
			HX_STACK_LINE(911)
			::lime::graphics::cairo::Cairo tmp19 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(911)
			tmp19->setSourceRGBA((int)1,(int)1,(int)1,(int)0);
			HX_STACK_LINE(912)
			::lime::graphics::cairo::Cairo tmp20 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(912)
			tmp20->paint();
			HX_STACK_LINE(913)
			::lime::graphics::cairo::Cairo tmp21 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(913)
			tmp21->set_operator((int)2);
			HX_STACK_LINE(915)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(916)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(918)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
			HX_STACK_LINE(919)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = false;
			HX_STACK_LINE(921)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = null();
			HX_STACK_LINE(922)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = null();
			HX_STACK_LINE(924)
			{
				HX_STACK_LINE(924)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(924)
				Array< ::Dynamic > _g1 = graphics->__commands;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(924)
				while((true)){
					HX_STACK_LINE(924)
					bool tmp22 = (_g < _g1->length);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(924)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(924)
					if ((tmp23)){
						HX_STACK_LINE(924)
						break;
					}
					HX_STACK_LINE(924)
					::openfl::display::DrawCommand tmp24 = _g1->__get(_g).StaticCast< ::openfl::display::DrawCommand >();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(924)
					::openfl::display::DrawCommand command = tmp24;		HX_STACK_VAR(command,"command");
					HX_STACK_LINE(924)
					++(_g);
					HX_STACK_LINE(926)
					switch( (int)(command->__Index())){
						case (int)3: case (int)4: case (int)15: case (int)16: {
							HX_STACK_LINE(930)
							::openfl::display::DrawCommand tmp25 = command;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(930)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands->push(tmp25);
							HX_STACK_LINE(931)
							::openfl::display::DrawCommand tmp26 = command;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(931)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands->push(tmp26);
						}
						;break;
						case (int)11: {
							HX_STACK_LINE(935)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
							HX_STACK_LINE(936)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
							HX_STACK_LINE(937)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
							HX_STACK_LINE(938)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
						}
						;break;
						case (int)12: case (int)14: case (int)13: {
							HX_STACK_LINE(942)
							::openfl::display::DrawCommand tmp25 = command;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(942)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands->push(tmp25);
						}
						;break;
						case (int)0: case (int)1: case (int)2: {
							HX_STACK_LINE(946)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
							HX_STACK_LINE(947)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
							HX_STACK_LINE(949)
							::openfl::display::DrawCommand tmp25 = command;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(949)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands->push(tmp25);
							HX_STACK_LINE(950)
							::openfl::display::DrawCommand tmp26 = command;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(950)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands->push(tmp26);
						}
						;break;
						case (int)5: case (int)6: case (int)7: case (int)8: {
							HX_STACK_LINE(954)
							::openfl::display::DrawCommand tmp25 = command;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(954)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands->push(tmp25);
							HX_STACK_LINE(955)
							::openfl::display::DrawCommand tmp26 = command;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(955)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands->push(tmp26);
						}
						;break;
						case (int)9: case (int)10: {
							HX_STACK_LINE(959)
							::openfl::display::DrawCommand tmp25 = command;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(959)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands->push(tmp25);
						}
						;break;
						default: {
							HX_STACK_LINE(963)
							::openfl::Lib_obj::notImplemented(HX_HCSTRING("CairoGraphics","\x53","\xfd","\x12","\x0a"));
						}
					}
				}
			}
			HX_STACK_LINE(969)
			int tmp22 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands->length;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(969)
			bool tmp23 = (tmp22 > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(969)
			if ((tmp23)){
				HX_STACK_LINE(971)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
			}
			HX_STACK_LINE(975)
			int tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands->length;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(975)
			bool tmp25 = (tmp24 > (int)0);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(975)
			if ((tmp25)){
				HX_STACK_LINE(977)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
			}
		}
		HX_STACK_LINE(983)
		::lime::graphics::Image tmp16 = graphics->__bitmap->__image;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(983)
		tmp16->dirty = true;
		HX_STACK_LINE(984)
		graphics->set___dirty(false);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,render,(void))

Void CairoGraphics_obj::renderMask( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","renderMask",0x2ed81fde,"openfl._internal.renderer.cairo.CairoGraphics.renderMask","openfl/_internal/renderer/cairo/CairoGraphics.hx",991,0x744ae94c)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(993)
		int tmp = graphics->__commands->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(993)
		bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(993)
		if ((tmp1)){
			HX_STACK_LINE(995)
			::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
			HX_STACK_LINE(997)
			Float positionX = ((Float)0.0);		HX_STACK_VAR(positionX,"positionX");
			HX_STACK_LINE(998)
			Float positionY = ((Float)0.0);		HX_STACK_VAR(positionY,"positionY");
			HX_STACK_LINE(1000)
			int offsetX = (int)0;		HX_STACK_VAR(offsetX,"offsetX");
			HX_STACK_LINE(1001)
			int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
			HX_STACK_LINE(1003)
			{
				HX_STACK_LINE(1003)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1003)
				Array< ::Dynamic > _g1 = graphics->__commands;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1003)
				while((true)){
					HX_STACK_LINE(1003)
					bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1003)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1003)
					if ((tmp3)){
						HX_STACK_LINE(1003)
						break;
					}
					HX_STACK_LINE(1003)
					::openfl::display::DrawCommand tmp4 = _g1->__get(_g).StaticCast< ::openfl::display::DrawCommand >();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1003)
					::openfl::display::DrawCommand command = tmp4;		HX_STACK_VAR(command,"command");
					HX_STACK_LINE(1003)
					++(_g);
					HX_STACK_LINE(1005)
					switch( (int)(command->__Index())){
						case (int)3: {
							HX_STACK_LINE(1005)
							Float tmp5 = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1005)
							Float y = tmp5;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1005)
							Float tmp6 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1005)
							Float x = tmp6;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1005)
							Float tmp7 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1005)
							Float cy2 = tmp7;		HX_STACK_VAR(cy2,"cy2");
							HX_STACK_LINE(1005)
							Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1005)
							Float cy1 = tmp8;		HX_STACK_VAR(cy1,"cy1");
							HX_STACK_LINE(1005)
							Float tmp9 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1005)
							Float cx2 = tmp9;		HX_STACK_VAR(cx2,"cx2");
							HX_STACK_LINE(1005)
							Float tmp10 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1005)
							Float cx1 = tmp10;		HX_STACK_VAR(cx1,"cx1");
							HX_STACK_LINE(1007)
							{
								HX_STACK_LINE(1009)
								Float tmp11 = (cx1 - offsetX);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1009)
								Float tmp12 = (cy1 - offsetY);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1009)
								Float tmp13 = (cx2 - offsetX);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1009)
								Float tmp14 = (cy2 - offsetY);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1009)
								Float tmp15 = (x - offsetX);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1009)
								Float tmp16 = (y - offsetY);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1009)
								cairo->curveTo(tmp11,tmp12,tmp13,tmp14,tmp15,tmp16);
								HX_STACK_LINE(1010)
								positionX = x;
								HX_STACK_LINE(1011)
								positionY = y;
							}
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(1005)
							Float tmp5 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1005)
							Float y = tmp5;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1005)
							Float tmp6 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1005)
							Float x = tmp6;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1005)
							Float tmp7 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1005)
							Float cy = tmp7;		HX_STACK_VAR(cy,"cy");
							HX_STACK_LINE(1005)
							Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1005)
							Float cx = tmp8;		HX_STACK_VAR(cx,"cx");
							HX_STACK_LINE(1013)
							{
								HX_STACK_LINE(1015)
								Float tmp9 = (cx - offsetX);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1015)
								Float tmp10 = (cy - offsetY);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1015)
								Float tmp11 = (x - offsetX);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1015)
								Float tmp12 = (y - offsetY);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1015)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp9,tmp10,tmp11,tmp12);
								HX_STACK_LINE(1016)
								positionX = x;
								HX_STACK_LINE(1017)
								positionY = y;
							}
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(1005)
							Float tmp5 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1005)
							Float radius = tmp5;		HX_STACK_VAR(radius,"radius");
							HX_STACK_LINE(1005)
							Float tmp6 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1005)
							Float y = tmp6;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1005)
							Float tmp7 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1005)
							Float x = tmp7;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1019)
							{
								HX_STACK_LINE(1021)
								Float tmp8 = (x - offsetX);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1021)
								Float tmp9 = (y - offsetY);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1021)
								Float tmp10 = radius;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1021)
								Float tmp11 = ::Math_obj::PI;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1021)
								Float tmp12 = (tmp11 * (int)2);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1021)
								cairo->arc(tmp8,tmp9,tmp10,(int)0,tmp12);
							}
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(1005)
							Float tmp5 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1005)
							Float height = tmp5;		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(1005)
							Float tmp6 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1005)
							Float width = tmp6;		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(1005)
							Float tmp7 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1005)
							Float y = tmp7;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1005)
							Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1005)
							Float x = tmp8;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1023)
							{
								HX_STACK_LINE(1025)
								hx::SubEq(x,offsetX);
								HX_STACK_LINE(1026)
								hx::SubEq(y,offsetY);
								HX_STACK_LINE(1028)
								Float kappa = ((Float).5522848);		HX_STACK_VAR(kappa,"kappa");
								HX_STACK_LINE(1029)
								Float tmp9 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1029)
								Float tmp10 = kappa;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1029)
								Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1029)
								Float ox = tmp11;		HX_STACK_VAR(ox,"ox");
								HX_STACK_LINE(1030)
								Float tmp12 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1030)
								Float tmp13 = kappa;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1030)
								Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1030)
								Float oy = tmp14;		HX_STACK_VAR(oy,"oy");
								HX_STACK_LINE(1031)
								Float tmp15 = (x + width);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1031)
								Float xe = tmp15;		HX_STACK_VAR(xe,"xe");
								HX_STACK_LINE(1032)
								Float tmp16 = (y + height);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1032)
								Float ye = tmp16;		HX_STACK_VAR(ye,"ye");
								HX_STACK_LINE(1033)
								Float tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1033)
								Float tmp18 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1033)
								Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1033)
								Float xm = tmp19;		HX_STACK_VAR(xm,"xm");
								HX_STACK_LINE(1034)
								Float tmp20 = y;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1034)
								Float tmp21 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1034)
								Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1034)
								Float ym = tmp22;		HX_STACK_VAR(ym,"ym");
								HX_STACK_LINE(1038)
								Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1038)
								Float tmp24 = ym;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1038)
								cairo->moveTo(tmp23,tmp24);
								HX_STACK_LINE(1039)
								Float tmp25 = x;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1039)
								Float tmp26 = (ym - oy);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1039)
								Float tmp27 = (xm - ox);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1039)
								Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1039)
								Float tmp29 = xm;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1039)
								Float tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1039)
								cairo->curveTo(tmp25,tmp26,tmp27,tmp28,tmp29,tmp30);
								HX_STACK_LINE(1040)
								Float tmp31 = (xm + ox);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1040)
								Float tmp32 = y;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1040)
								Float tmp33 = xe;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1040)
								Float tmp34 = (ym - oy);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1040)
								Float tmp35 = xe;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1040)
								Float tmp36 = ym;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1040)
								cairo->curveTo(tmp31,tmp32,tmp33,tmp34,tmp35,tmp36);
								HX_STACK_LINE(1041)
								Float tmp37 = xe;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1041)
								Float tmp38 = (ym + oy);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1041)
								Float tmp39 = (xm + ox);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1041)
								Float tmp40 = ye;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1041)
								Float tmp41 = xm;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1041)
								Float tmp42 = ye;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1041)
								cairo->curveTo(tmp37,tmp38,tmp39,tmp40,tmp41,tmp42);
								HX_STACK_LINE(1042)
								Float tmp43 = (xm - ox);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(1042)
								Float tmp44 = ye;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1042)
								Float tmp45 = x;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1042)
								Float tmp46 = (ym + oy);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1042)
								Float tmp47 = x;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(1042)
								Float tmp48 = ym;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(1042)
								cairo->curveTo(tmp43,tmp44,tmp45,tmp46,tmp47,tmp48);
							}
						}
						;break;
						case (int)7: {
							HX_STACK_LINE(1005)
							Float tmp5 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1005)
							Float height = tmp5;		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(1005)
							Float tmp6 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1005)
							Float width = tmp6;		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(1005)
							Float tmp7 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1005)
							Float y = tmp7;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1005)
							Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1005)
							Float x = tmp8;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1045)
							{
								HX_STACK_LINE(1047)
								Float tmp9 = (x - offsetX);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1047)
								Float tmp10 = (y - offsetY);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1047)
								Float tmp11 = width;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1047)
								Float tmp12 = height;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1047)
								cairo->rectangle(tmp9,tmp10,tmp11,tmp12);
							}
						}
						;break;
						case (int)8: {
							HX_STACK_LINE(1005)
							Float tmp5 = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1005)
							Float ry = tmp5;		HX_STACK_VAR(ry,"ry");
							HX_STACK_LINE(1005)
							Float tmp6 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1005)
							Float rx = tmp6;		HX_STACK_VAR(rx,"rx");
							HX_STACK_LINE(1005)
							Float tmp7 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1005)
							Float height = tmp7;		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(1005)
							Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1005)
							Float width = tmp8;		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(1005)
							Float tmp9 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1005)
							Float y = tmp9;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1005)
							Float tmp10 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1005)
							Float x = tmp10;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1049)
							{
								HX_STACK_LINE(1051)
								Float tmp11 = (x - offsetX);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1051)
								Float tmp12 = (y - offsetY);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1051)
								Float tmp13 = width;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1051)
								Float tmp14 = height;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1051)
								Float tmp15 = rx;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1051)
								Float tmp16 = ry;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1051)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::drawRoundRect(tmp11,tmp12,tmp13,tmp14,tmp15,tmp16);
							}
						}
						;break;
						case (int)15: {
							HX_STACK_LINE(1005)
							Float tmp5 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1005)
							Float y = tmp5;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1005)
							Float tmp6 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1005)
							Float x = tmp6;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1053)
							{
								HX_STACK_LINE(1055)
								Float tmp7 = (x - offsetX);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1055)
								Float tmp8 = (y - offsetY);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1055)
								cairo->lineTo(tmp7,tmp8);
								HX_STACK_LINE(1056)
								positionX = x;
								HX_STACK_LINE(1057)
								positionY = y;
							}
						}
						;break;
						case (int)16: {
							HX_STACK_LINE(1005)
							Float tmp5 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1005)
							Float y = tmp5;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1005)
							Float tmp6 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1005)
							Float x = tmp6;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1059)
							{
								HX_STACK_LINE(1061)
								Float tmp7 = (x - offsetX);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1061)
								Float tmp8 = (y - offsetY);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1061)
								cairo->moveTo(tmp7,tmp8);
								HX_STACK_LINE(1062)
								positionX = x;
								HX_STACK_LINE(1063)
								positionY = y;
							}
						}
						;break;
						default: {
						}
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,renderMask,(void))


CairoGraphics_obj::CairoGraphics_obj()
{
}

bool CairoGraphics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { outValue = SIN45; return true;  }
		if (HX_FIELD_EQ(inName,"TAN22") ) { outValue = TAN22; return true;  }
		if (HX_FIELD_EQ(inName,"cairo") ) { outValue = cairo; return true;  }
		if (HX_FIELD_EQ(inName,"isCCW") ) { outValue = isCCW_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { outValue = bounds; return true;  }
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasFill") ) { outValue = hasFill; return true;  }
		if (HX_FIELD_EQ(inName,"endFill") ) { outValue = endFill_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { outValue = graphics; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStroke") ) { outValue = hasStroke; return true;  }
		if (HX_FIELD_EQ(inName,"endStroke") ) { outValue = endStroke_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"closePath") ) { outValue = closePath_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapFill") ) { outValue = bitmapFill; return true;  }
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fillPattern") ) { outValue = fillPattern; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fillCommands") ) { outValue = fillCommands; return true;  }
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { outValue = bitmapRepeat; return true;  }
		if (HX_FIELD_EQ(inName,"normalizeUVT") ) { outValue = normalizeUVT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"playCommands") ) { outValue = playCommands_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { outValue = pendingMatrix; return true;  }
		if (HX_FIELD_EQ(inName,"strokePattern") ) { outValue = strokePattern; return true;  }
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { outValue = drawRoundRect_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { outValue = strokeCommands; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"quadraticCurveTo") ) { outValue = quadraticCurveTo_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fillPatternMatrix") ) { outValue = fillPatternMatrix; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createImagePattern") ) { outValue = createImagePattern_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { outValue = inversePendingMatrix; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createGradientPattern") ) { outValue = createGradientPattern_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &CairoGraphics_obj::SIN45,HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa")},
	{hx::fsFloat,(void *) &CairoGraphics_obj::TAN22,HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(void *) &CairoGraphics_obj::bounds,HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(void *) &CairoGraphics_obj::cairo,HX_HCSTRING("cairo","\x88","\x30","\x19","\x41")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &CairoGraphics_obj::fillCommands,HX_HCSTRING("fillCommands","\x6b","\xf6","\xc9","\xc2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoGraphics_obj::fillPattern,HX_HCSTRING("fillPattern","\x0d","\x86","\x12","\x35")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &CairoGraphics_obj::fillPatternMatrix,HX_HCSTRING("fillPatternMatrix","\x2e","\xb8","\xae","\x97")},
	{hx::fsObject /*::openfl::display::Graphics*/ ,(void *) &CairoGraphics_obj::graphics,HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")},
	{hx::fsBool,(void *) &CairoGraphics_obj::hasFill,HX_HCSTRING("hasFill","\xfd","\xee","\xff","\x12")},
	{hx::fsBool,(void *) &CairoGraphics_obj::hasStroke,HX_HCSTRING("hasStroke","\xb2","\x66","\x1d","\x52")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &CairoGraphics_obj::inversePendingMatrix,HX_HCSTRING("inversePendingMatrix","\x28","\x14","\x8c","\xbb")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &CairoGraphics_obj::pendingMatrix,HX_HCSTRING("pendingMatrix","\xf8","\x9d","\x96","\xb5")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &CairoGraphics_obj::strokeCommands,HX_HCSTRING("strokeCommands","\xa0","\x98","\x2a","\x67")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoGraphics_obj::strokePattern,HX_HCSTRING("strokePattern","\x78","\xe1","\x21","\x7e")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(void *) &CairoGraphics_obj::bitmapFill,HX_HCSTRING("bitmapFill","\x12","\x2e","\x19","\x35")},
	{hx::fsBool,(void *) &CairoGraphics_obj::bitmapRepeat,HX_HCSTRING("bitmapRepeat","\xaa","\x38","\x9c","\x11")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::TAN22,"TAN22");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bounds,"bounds");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::cairo,"cairo");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillCommands,"fillCommands");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillPattern,"fillPattern");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillPatternMatrix,"fillPatternMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::graphics,"graphics");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hasFill,"hasFill");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hasStroke,"hasStroke");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::strokeCommands,"strokeCommands");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::strokePattern,"strokePattern");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bitmapFill,"bitmapFill");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bitmapRepeat,"bitmapRepeat");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::TAN22,"TAN22");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bounds,"bounds");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::cairo,"cairo");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillCommands,"fillCommands");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillPattern,"fillPattern");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillPatternMatrix,"fillPatternMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::graphics,"graphics");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hasFill,"hasFill");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hasStroke,"hasStroke");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::strokeCommands,"strokeCommands");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::strokePattern,"strokePattern");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bitmapFill,"bitmapFill");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bitmapRepeat,"bitmapRepeat");
};

#endif

hx::Class CairoGraphics_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa"),
	HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"),
	HX_HCSTRING("fillCommands","\x6b","\xf6","\xc9","\xc2"),
	HX_HCSTRING("fillPattern","\x0d","\x86","\x12","\x35"),
	HX_HCSTRING("fillPatternMatrix","\x2e","\xb8","\xae","\x97"),
	HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"),
	HX_HCSTRING("hasFill","\xfd","\xee","\xff","\x12"),
	HX_HCSTRING("hasStroke","\xb2","\x66","\x1d","\x52"),
	HX_HCSTRING("inversePendingMatrix","\x28","\x14","\x8c","\xbb"),
	HX_HCSTRING("pendingMatrix","\xf8","\x9d","\x96","\xb5"),
	HX_HCSTRING("strokeCommands","\xa0","\x98","\x2a","\x67"),
	HX_HCSTRING("strokePattern","\x78","\xe1","\x21","\x7e"),
	HX_HCSTRING("bitmapFill","\x12","\x2e","\x19","\x35"),
	HX_HCSTRING("bitmapRepeat","\xaa","\x38","\x9c","\x11"),
	HX_HCSTRING("endFill","\xfe","\x87","\xe0","\x25"),
	HX_HCSTRING("endStroke","\xf3","\x01","\x17","\x51"),
	HX_HCSTRING("drawRoundRect","\xee","\xc3","\xaa","\xe2"),
	HX_HCSTRING("isCCW","\x0d","\x84","\x49","\xc1"),
	HX_HCSTRING("normalizeUVT","\x66","\x09","\x2f","\x47"),
	HX_HCSTRING("createGradientPattern","\xa4","\xee","\x44","\xf6"),
	HX_HCSTRING("createImagePattern","\x51","\xbd","\x5d","\xfb"),
	HX_HCSTRING("closePath","\x7d","\x65","\x20","\x14"),
	HX_HCSTRING("playCommands","\xdc","\xae","\xee","\x49"),
	HX_HCSTRING("quadraticCurveTo","\x12","\x48","\xc3","\x82"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderMask","\x62","\x3b","\x60","\xe5"),
	::String(null()) };

void CairoGraphics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoGraphics","\x72","\x72","\xef","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoGraphics_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoGraphics_obj >;
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

void CairoGraphics_obj::__boot()
{
	SIN45= ((Float)0.70710678118654752440084436210485);
	TAN22= ((Float)0.4142135623730950488016887242097);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo
