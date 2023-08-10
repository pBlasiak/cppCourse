
//
// This is example code from Chapter 12.3 "A first example" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "Simple_window.h"    // get access to our window library
#include "Graph.h"            // get access to our graphics library facilities

//------------------------------------------------------------------------------

using namespace Graph_lib;

//------------------------------------------------------------------------------

// first version
int main ()
try
{ 
    Point tl(100,100);          // top-left corner of our window

    Simple_window win(tl,600,400,"Canvas");
    // screen coordinate tl for top-left corner
    // window size(600*400)
    // title: Canvas

    Axis xa(Axis::x, Point(20,300), 280, 10, "x axis"); // make an Axis
    // an axis is a kind of Shape
    // Axis::x means horizontal
    // starting at (20,300)
    // 280 pixels long
    // 10 "notches"
    // label the axis "x axis"
    win.attach(xa);             // attach xa to the window, win
    win.set_label("Canvas #2"); // re-label the window
    win.wait_for_button();      // Display!
} 
catch(exception& e) {
    // some error reporting
    return 1;
}
catch(...) {
    // some more error reporting
    return 2;
}

// second version
//int main ()
//try
//{ 
//    Point tl(100,100);                   // top-left corner of our window
//
//    Simple_window win(tl,600,400,"Canvas");
//    // screen coordinate tl for top-left corner
//    // window size(600*400)
//    // title: Canvas
//
//    Axis xa(Axis::x, Point(20,300), 280, 10, "x axis"); // make an Axis
//    // an axis is a kind of Shape
//    // Axis::x means horizontal
//    // starting at (20,300)
//    // 280 pixels long
//    // 10 "notches"
//    // label the axis "x axis"
//    win.attach(xa);                      // attach xa to the window, win
//
//    Axis ya(Axis::y, Point(20,300), 280, 10, "y axis");
//    ya.set_color(Color::cyan);           // choose a color
//    ya.label.set_color(Color::dark_red); // choose a color for the text
//    win.attach(ya);
//    win.set_label("Canvas #3");
//    win.wait_for_button();               // Display!
//} 
//catch(exception& e) {
//    // some error reporting
//    return 1;
//}
//catch(...) {
//    // some more error reporting
//    return 2;
//}

//------------------------------------------------------------------------------
