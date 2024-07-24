#include "Arrow.h"

Graph_lib::Arrow::Arrow(Point s, Point e, double hl, double angle)
	: s_{ s }, e_{ e }, headLength_{hl}, angle_{ angle }
{
	if (headLength_ > 0.5*totLength()) 
	{
		error("Length of arrow head is large."); 
	}
	if (angle_ <0 || angle_ < 15 || angle_ > 90) 
	{
		error("Angle has to be positive number in degrees between 15 and 90."); 
	}
	add(s_);
	add(e_);
	cout << "Total length of arrow is " << totLength() << endl;
}

void Graph_lib::Arrow::draw_lines() const
{
	Mark s{ s_,'s'};
	Mark e{ e_,'e'};
	s.draw();
	e.draw();

	Line l{ s_,e_ };
	l.draw();

	//intersection
	int x(e_.x-headLength_*(e_.x-s_.x)/totLength());
	int y(e_.y-headLength_*(e_.y-s_.y)/totLength());
	Mark in{ Point{x,y},'x'};
	in.draw();
}

inline int Graph_lib::Arrow::totLength() const
{
	int dx{ e_.x - s_.x };
	int dy{ e_.y - s_.y };
	return sqrt(dx * dx + dy * dy);
}
