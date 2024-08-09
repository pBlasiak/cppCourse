#include "RightTriangle.h"

Graph_lib::RightTriangle::RightTriangle
(
	Point c, int w, int h, double a
)
	: corner_{ c }, w_{ w }, h_{ h }, angle_{ a }
{
	add(corner_);
	Point rb{ Point{corner_.x + w,corner_.y} };
	Point ht{ Point{corner_.x,corner_.y - h} };
	if (angle_ != 0)
	{
		rotate(rb,corner_,angle_);
		rotate(ht,corner_,angle_);
	}
	add(rb);
	add(ht);
}

