#ifndef HATSMILEY_H
#define HATSMILEY_H

#include "../Smiley/Smiley.h"

namespace Graph_lib
{
class HatSmiley :
    public Smiley
{
private: 

    //- Hat width
    int hatWidth_;

    //- Hat heigth
    int hatHeight_;

public:

    HatSmiley(Point c, int faceRadius, int eyeRadius, int mouthWidth, int mouthHeight,
        int hatWidth, int hatHeigth);
};

}
#endif // !HATSMILEY_H


