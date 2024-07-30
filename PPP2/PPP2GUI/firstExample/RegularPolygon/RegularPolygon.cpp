#include "RegularPolygon.h"

void Graph_lib::RegularPolygon::calcInternalAngle()
{
	angle_ = 180.0-360.0 / nSides_;
}

void Graph_lib::RegularPolygon::calcSide()
{
	side_ = 2 * centerToCornerDist_ * cos(angleToRadians(angle_ / 2));
}

Graph_lib::Point Graph_lib::RegularPolygon::rotatePoint(const Point& refP) const
{
	double phi(360.0 / nSides_);
	// bez round wychodzi przekrzywiona figura
	const int x(round((refP.x - c_.x) * cos(angleToRadians(phi)) + (refP.y - c_.y) * sin(angleToRadians(phi)) + c_.x));
	const int y(round(- (refP.x - c_.x) * sin(angleToRadians(phi)) + (refP.y - c_.y) * cos(angleToRadians(phi)) + c_.y));
	//cout << "angle = " << phi << ", x = " << x << ", y = " << y << endl;
	return Point{ x,y }; 
}

Graph_lib::RegularPolygon::RegularPolygon
(
	Point c, int n, int d
)
	: c_{ c }, nSides_{ n }, centerToCornerDist_{ d }
{
	if (n < 3) error("Incorrect regular polygon: number of sides less than 3!");

	calcInternalAngle();
	//cout << "Internal angle is equal to " << angle_ << endl;
	calcSide();
	//cout << "Side length is equal to " << side_ << endl;

	// the first point is always bottom right
	// the last point has always the same y coordinate 
	// as the first one
	const int x0(c_.x + side_ / 2);
	const int y0(c_.y + centerToCornerDist_ * sin(angleToRadians((angle_ / 2))));
	const Point p0{ x0,y0 };
	add(p0);
	for (int i = 1; i < nSides_; ++i)
	{
		//cout << "Rotated point x" << i-1 << " = " << point(i-1).x << ", y" << i-1 << " = " << point(i-1).y << endl;
		add(rotatePoint(point(i - 1)));
	} 
	//for (int i = 0; i < nSides_; ++i)
	//{
	//	cout << "x" << i << " = " << point(i).x << ", y" << i << " = " << point(i).y << endl;
	//} 
}
