#include "Arc.h"
void Graph_lib::Arc::draw_lines() const
{
	fl_arc(center_.x, center_.y, w_, h_, a1_, a2_);
}
