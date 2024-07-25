#include "LabeledBox.h"

Graph_lib::LabeledBox::LabeledBox
(
	Point ltc, int w, int h, int r, const string& l
)
    : Box{ ltc,w,h,r }, label_{center(),l}
{
	centerLabel();
}

void Graph_lib::LabeledBox::draw_lines() const
{
	Box::draw_lines();
	label_.draw();
}

void Graph_lib::LabeledBox::centerLabel()
{
	int w( fl_width(label_.label().c_str()) );
	int h(fl_size());
	label_.move(-w / 2,h / 2); 
}
