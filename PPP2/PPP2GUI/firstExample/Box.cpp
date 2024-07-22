#include "Box.h"
#include "Arc.h"

Graph_lib::Box::Box(Point ltc, int w, int h, int r)
	: ltc_{ltc}, w_ { w }, h_{ h }, r_{ r }
{
	if ((w_ <= 0) || (h_ <= 0) || (r_ <= 0))
	{
		error("Dimensions of a box have to be positive numbers.");
	}
	if ((2*r_ > h_) || (2*r_ > w_))
	{
		error("Round radius has to be less than half of height or width of a Box.");
	}
	add(ltc);
}

void Graph_lib::Box::draw_lines() const
{
	Arc alt{ltc_, 2*r_, 2*r_, 90, 180 }; // arc left top
	alt.draw();
	Line llv{ Point{ltc_.x, ltc_.y+r_}, Point{ltc_.x, ltc_.y + h_ - r_} }; // line left vertical
	llv.draw();
	Arc alb{ Point{llv.point(1).x,llv.point(1).y - r_}, 2 * r_, 2 * r_, 180, 270 };
	alb.draw();
	Line lbh{ Point{alb.ltc().x + r_,alb.ltc().y + 2*r_}, Point{alb.ltc().x+w_-r_, alb.ltc().y+2*r_}};
	lbh.draw();
	//Mark mc{ lbh.point(1),'x'};
	//mc.draw();
	Arc arb{ Point{lbh.point(1).x-r_,lbh.point(1).y - 2*r_},2 * r_,2 * r_,270, 360 };
	arb.draw();
	Line lrv{ Point{llv.point(1).x + w_,llv.point(1).y}, Point{llv.point(0).x+w_, llv.point(0).y}};
	lrv.draw();
	Arc art{ Point{lbh.point(1).x-r_, lbh.point(1).y - h_},2 * r_,2 * r_,0,90 };
	art.draw();
	Line lth{ Point{lbh.point(1).x,lbh.point(1).y - h_}, Point{lbh.point(0).x, lbh.point(0).y - h_} };
	lth.draw();

	if (fill_color().visibility()) {	// fill
		fl_color(fill_color().as_int());
		fl_pie(alt.ltc().x, alt.ltc().y, 2*r_, 2*r_, 90, 180);
		fl_pie(alb.ltc().x, alb.ltc().y, 2*r_, 2*r_, 180, 270);
		fl_pie(arb.ltc().x, arb.ltc().y, 2*r_, 2*r_, 270, 360);
		fl_pie(art.ltc().x, art.ltc().y, 2*r_, 2*r_, 0, 90);
		fl_rectf(alt.ltc().x, alt.ltc().y+r_, w_, h_-2*r_);
		fl_rectf(alt.ltc().x+r_, alt.ltc().y, w_-2*r_, h_);
		fl_color(color().as_int());	// reset color
	}

	if (color().visibility()) {	// edge on top of fill
		fl_color(color().as_int());
		alt.draw();
		llv.draw();
		alb.draw();
		lbh.draw();
		arb.draw();
		lrv.draw();
		art.draw();
		lth.draw();
	}
}
