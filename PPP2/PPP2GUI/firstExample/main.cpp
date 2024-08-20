
//
// This is example code from Chapter 12.3 "A first example" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "Simple_window.h"    // get access to our window library
#include "Graph.h"            // get access to our graphics library facilities
#include "./Smiley/Smiley.h"



//------------------------------------------------------------------------------

int main()
try
{
    {
        //using namespace Graph_lib;   // our graphics facilities are in Graph_lib

        Point tl(10, 10);           // to become top left  corner of window

        Simple_window win(tl, 800, 600, "Canvas");    // make a simple window
        
        Smiley s{ Point{200,200}, 100, 20, 60,30 };
        s.set_color(Color::red);
        s.set_fill_color(Color::blue);
        win.attach(s);


        win.wait_for_button();

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
