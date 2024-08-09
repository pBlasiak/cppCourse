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
		Graph_lib::rotate(rb, corner_, angle_);
		Graph_lib::rotate(ht,corner_,angle_);
	}
	add(rb);
	add(ht);
}

void Graph_lib::RightTriangle::rotate(const Point& c, const double a)
{
	for (int i = 0; i < number_of_points(); ++i)
	{
		Point p{ point(i) };
		Graph_lib::rotate(p, c, a);
		set_point(i, p);
	}
}

