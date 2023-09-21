#ifndef ARC_H
#define ARC_H

#include "Graph.h"

namespace Graph_lib
{
class Arc :
    public Shape
{
private:

    //- Center coordinates
    Point center_;

    //- Width
    int w_;

    //- Height
    int h_;

    //- Start angle at 3 o'clock 
    //  in degrees
    double a1_;

    //- End angle in degrees
    double a2_;

public:
    Arc(Point c, int w, int h, double a1, double a2)
        : center_{ c }, w_{ w }, h_{ h }, a1_{ a1 }, a2_{ a2 }
    {
		add(Point{ c.x - w, c.y - h });
    }

}; 
} // end namespace Graph_lib

#endif // !ARC_H
