#ifndef HATSMILEY_H
#define HATSMILEY_H

#include "../Smiley/Smiley.h"

namespace Graph_lib
{
class HatSmiley :
    public Smiley
{
private: 

    //- Hat
    Rectangle hat_;

public:

    HatSmiley(Point c, int faceRadius, int eyeRadius, int mouthWidth, int mouthHeight,
        int hatWidth, int hatHeigth);

    void draw_lines() const override;

};

}
#endif // !HATSMILEY_H


