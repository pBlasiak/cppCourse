#include "HatSmiley.h"

Graph_lib::HatSmiley::HatSmiley(Point c, int faceRadius, int eyeRadius, int mouthWidth,
	int mouthHeight, int hatWidth, int hatHeight)
	: Smiley{c, faceRadius, eyeRadius, mouthWidth, mouthHeight},
	hatWidth_{hatWidth}, hatHeight_{hatHeight} {}

