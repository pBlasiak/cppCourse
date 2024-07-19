
//
// This is example code from Chapter 12.3 "A first example" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "Simple_window.h"    // get access to our window library
#include "Graph.h"            // get access to our graphics library facilities
#include "Arc.h"            // get access to our graphics library facilities

//------------------------------------------------------------------------------

int main()
try
{
    {
        //using namespace Graph_lib;   // our graphics facilities are in Graph_lib

        Point tl(100, 100);           // to become top left  corner of window

        Simple_window win(tl, 600, 400, "Canvas");    // make a simple window

        /* Exercise 13.1 */
        // class Arc was implemented using fl_arc
        Graph_lib::Arc arc(Point{ 100,200 }, 100, 200, 30, 154);
        arc.set_color(Color::blue);
        win.attach(arc);
        /* End of Exercise 13.1 */

        win.wait_for_button();       // give control to the display engine
    }
}
catch (exception& e) {
    std::cout << e.what() << std::endl;
    return 1;
}
catch (...) {
    // some more error reporting
    return 2;
}

//------------------------------------------------------------------------------
