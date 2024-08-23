#include "HatSmiley.h"

Graph_lib::HatSmiley::HatSmiley(Point c, int faceRadius, int eyeradius, int mouthWidth,
	int mouthHeight, int hatWidth, int hatHeight)
	: Smiley{c, faceRadius, eyeradius, mouthWidth, mouthHeight},
	hat_{ Point{c.x-hatWidth/2,c.y-radius()-eyeRadius()}, hatWidth, hatHeight} 
{
	hat_.set_color(Color::black);
	hat_.set_fill_color(Color::black);
}

void Graph_lib::HatSmiley::draw_lines() const
{
	Smiley::draw_lines();

	hat_.draw_lines();

}

