#include "RegularHexagon.h"

Graph_lib::RegularHexagon::RegularHexagon(Point c, int side)
	: c_{ c }, side_{ side }
{
	//add(c_);
	add(Point( c_.x + side_, c_.y ));
	add(Point( c_.x + side_/2, c_.y+0.5*side_*sqrt(3)));
	add(Point( c_.x - side_/2, c_.y+0.5*side_*sqrt(3)));
	add(Point( c_.x - side_, c_.y));
	add(Point( c_.x - side_/2, c_.y-0.5*side_*sqrt(3)));
	add(Point( c_.x + side_/2, c_.y-0.5*side_*sqrt(3))); 
}
