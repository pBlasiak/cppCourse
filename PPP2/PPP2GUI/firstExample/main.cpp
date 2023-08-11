
//
// This is example code from Chapter 12.3 "A first example" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "Simple_window.h"    // get access to our window library
#include "Graph.h"            // get access to our graphics library facilities

//------------------------------------------------------------------------------

int main()
{
    using namespace Graph_lib;   // our graphics facilities are in Graph_lib

    // Ex. 1
    Point tl(10,10);           // to become top left  corner of window

    Simple_window win(tl,800,800,"Ex. 1");    // make a simple window

    Graph_lib::Polygon poly;                // make a shape (a polygon)

    poly.add(Point(550,450));    // add a point
    poly.add(Point(455,519));    // add another point
    poly.add(Point(491,631));    // add a third point 
    poly.add(Point(609,631));    // add a fourth point 
    poly.add(Point(645,519));    // add a fifth point 

    poly.set_color(Color::blue);  // adjust properties of poly

    win.attach (poly);           // connect poly to the window

    win.wait_for_button();       // give control to the display engine
}

//------------------------------------------------------------------------------
