
//
// This is example code from Chapter 12.3 "A first example" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "Simple_window.h"    // get access to our window library
#include "Graph.h"            // get access to our graphics library facilities
#include "Arc.h"            // get access to our graphics library facilities
#include "Box.h"            // get access to our graphics library facilities

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
        //Graph_lib::Arc arc(Point{ 100,200 }, 100, 200, 30, 154);
        //arc.set_color(Color::blue);
        //win.attach(arc);

        //win.wait_for_button();       // give control to the display engine
        /* End of Exercise 13.1 */

        /* Exercise 13.2 */
        Graph_lib::Box b(Point{ 110,110 }, 400, 200, 30);
        b.set_color(Color::black);
        b.set_fill_color(Color::magenta);
        //b.set_fill_color(Color::invisible);
        win.attach(b);
        //Graph_lib::Box b2(Point{ 210,110 }, 100, 200, 10);
        //b2.set_color(Color::yellow);
        //win.attach(b2);
        //Graph_lib::Arc arc2{ Point{250,250}, 50, 50, 90,180 };
        //arc2.set_color(Color::dark_green);
        //win.attach(arc2);

        win.wait_for_button();       // give control to the display engine
        /* End of Exercise 13.1 */


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
