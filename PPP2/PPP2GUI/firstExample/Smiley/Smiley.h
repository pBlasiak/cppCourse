#ifndef SMILEY_H
#define SMILEY_H

#include "../Graph.h"

namespace Graph_lib
{

class Smiley :
    public Circle
{
private:

    //- Radius of eye
    int eyeRadius_;

    //- Mouth width
    int mouthWidth_;

    //- Mouth height
    int mouthHeight_;

public:

    //- Construct from face and eye radius
    //  width and height of mouth
    Smiley(Point center, int faceRadius, int eyeRadius, int mouthWidth, int mouthHeight);

    //- Draws siley face
    void draw_lines() const override;

    //- Returns eye radius
    int eyeRadius() const
    {
        return eyeRadius_;
    }
};
}

#endif // !SMILEY_H


