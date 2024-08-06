#include "RightTriangle.h"

Graph_lib::RightTriangle::RightTriangle
(
	Point c, int w, int h, double a
)
	: corner_{ c }, w_{ w }, h_{ h }, angle_{ a }
{
	add(corner_);
}
