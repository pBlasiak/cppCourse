#include "Smiley.h"
#include "../Arc.h"

Graph_lib::Smiley::Smiley(Point c, int faceRadius, int eyeRadius, int mouthWidth, int mouthHeight)
	: Circle{c, faceRadius}, eyeRadius_{ eyeRadius }, 
	mouthWidth_{ mouthWidth }, mouthHeight_{ mouthHeight }
{
	if (radius() <= 2 * eyeRadius_)
	{
		error("Face radius has to be minimum twice larger than eye radius.");
	}
	if ((mouthWidth_ > radius()) || (mouthHeight_>radius()))
	{
		error("Mouth width and height cannot be larger than face radius.");
	}
}

void Graph_lib::Smiley::draw_lines() const
{
	Circle face{ center(),radius()};
	//face.set_fill_color(Color::blue);
	face.draw_lines();
	Circle leftEye{ Point{center().x - 2 * eyeRadius_, center().y - 2 * eyeRadius_}, eyeRadius_};
	leftEye.draw_lines();
	Circle righEye{ Point{center().x + 2 * eyeRadius_, center().y - 2 * eyeRadius_}, eyeRadius_}; 
	righEye.draw_lines();
	//Ellipse mouth{ Point{center().x, center().y+2*eyeRadius_},mouthWidth_,mouthHeight_};
	Arc mouth{ Point{center().x-mouthWidth_/2, center().y+eyeRadius_},mouthWidth_,mouthHeight_, 180,360};
	mouth.draw_lines();
}
