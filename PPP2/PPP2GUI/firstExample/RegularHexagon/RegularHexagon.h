#pragma once
#include "../Graph.h"

namespace Graph_lib
{
class RegularHexagon :
    public Polygon
{
private:

    //- Center 
    Point c_;

    //- Length of a side
    int side_;

public:

    RegularHexagon(Point c, int side);

    //void draw_lines() const override;

    //- Returns center
    Point center() const { return c_; }

    //- Returns side length
    int side() const { return side_; }
};

}

