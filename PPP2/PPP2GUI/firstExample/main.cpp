
//
// This is example code from Chapter 12.3 "A first example" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "Simple_window.h"    // get access to our window library
#include "Graph.h"            // get access to our graphics library facilities

//------------------------------------------------------------------------------

using namespace Graph_lib;   // our graphics facilities are in Graph_lib

int main ()
try
{ 
    Point tl(100,100);     // top-left corner of our window

    Simple_window win(tl,600,400,"Canvas");
    // screen coordinate tl for top-left corner
    // window size(600*400)
    // title: Canvas
    win.wait_for_button(); // Display!
} 
catch(exception&) {
    // some error reporting
    return 1;
}
catch(...) {
    // some more error reporting
    return 2;
}


//------------------------------------------------------------------------------
