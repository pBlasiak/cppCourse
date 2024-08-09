#pragma once
#include "../Graph.h"

namespace Graph_lib
{
    class RightTriangle :
        public Polygon
    {
    private:

        //- Point near the right angle
        Point corner_;

        //- Width of the base
        int w_;

        //- Height
        int h_;

        //- Angle between base and X axis, deg
        double angle_;

    public:

        //- Construct from corner, width, height and angle
        //  between base and X axis 
        RightTriangle(Point c, int w, int h, double a = 0);

        //- Returns point near the right angle
        const Point& corner() const { return corner_; }

        //- Returns width
        int width() const { return w_; }

        //- Returns height
        int height() const { return h_; }

        //- Returns angle between the base and X axis
        double angle() const { return angle_; }

        //- Rotates triangle around center by angle 
        void rotate(const Point& center, const double angle);

    };

}

