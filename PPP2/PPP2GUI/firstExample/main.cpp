
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
    //Point tl(10,10);           // to become top left  corner of window

    //Simple_window win(tl,800,800,"Ex. 1");    // make a simple window

    //Graph_lib::Polygon poly;                // make a shape (a polygon)

    //poly.add(Point(550,450));    // add a point
    //poly.add(Point(455,519));    // add another point
    //poly.add(Point(491,631));    // add a third point 
    //poly.add(Point(609,631));    // add a fourth point 
    //poly.add(Point(645,519));    // add a fifth point 

    //poly.set_color(Color::blue);  // adjust properties of poly

    //win.attach (poly);           // connect poly to the window

    //win.wait_for_button();       // give control to the display engine

    // Ex. 2
    //Point tl(10,10);           // to become top left  corner of window

    //Simple_window win(tl,800,800,"Ex. 2");    // make a simple window

    //Graph_lib::Polygon poly;                // make a shape (a polygon)

    //poly.add(Point(30,30));    // add a point
    //poly.add(Point(130,30));    // add another point
    //poly.add(Point(130,300));    // add another point
    //poly.add(Point(30,300));    // add another point

    //poly.set_color(Color::red);  // adjust properties of poly

    //Graph_lib::Rectangle rec(Point(150, 190), 299, 34);
    //rec.set_color(Color::blue);

    //win.attach (poly);           // connect poly to the window
    //win.attach (rec);            // connect rec to the window

    //win.wait_for_button();       // give control to the display engine


    // Ex. 3
    //Point tl(10,10);           // to become top left  corner of window

    //Simple_window win(tl,800,800,"Ex. 3");    // make a simple window

    //Graph_lib::Rectangle rec(Point(150, 190), 100, 30);
    //rec.set_color(Color::dark_blue);

    //Text t(Point(160, 210), "Witaj C++");
    //t.set_color(Color::dark_red);

    //win.attach (rec);            // connect rec to the window
    //win.attach(t);

    //win.wait_for_button();       // give control to the display engine

    // Ex. 4
    //Point tl(10,10);           // to become top left  corner of window

    //Simple_window win(tl,800,800,"Ex. 4");    // make a simple window

    //Text t1(Point(160, 210), "P");
    //t1.set_color(Color::dark_red);
    //t1.set_font_size(150);
    //t1.set_font(Font::helvetica_bold);

    //Text t2(Point(290, 210), "B");
    //t2.set_color(Color::dark_green);
    //t2.set_font_size(150);
    //t2.set_font(Font::helvetica_bold);

    //win.attach(t1);
    //win.attach(t2);

    //win.wait_for_button();       // give control to the display engine


    // Ex. 5
    //Point tl(10,10);           // to become top left  corner of window

    //Simple_window win(tl,800,800,"Ex. 5");    // make a simple window

    //Graph_lib::Rectangle s1(Point(100, 100), 50, 50);
    //s1.set_fill_color(Color::white);
    //Graph_lib::Rectangle s2(Point(149, 100), 50, 50);
    //s2.set_fill_color(Color::red);
    //Graph_lib::Rectangle s3(Point(198, 100), 50, 50);
    //s3.set_fill_color(Color::white);
    //Graph_lib::Rectangle s4(Point(100, 149), 50, 50);
    //s4.set_fill_color(Color::red);
    //Graph_lib::Rectangle s5(Point(149, 149), 50, 50);
    //s5.set_fill_color(Color::white);
    //Graph_lib::Rectangle s6(Point(198, 149), 50, 50);
    //s6.set_fill_color(Color::red);
    //Graph_lib::Rectangle s7(Point(100, 198), 50, 50);
    //s7.set_fill_color(Color::white);
    //Graph_lib::Rectangle s8(Point(149, 198), 50, 50);
    //s8.set_fill_color(Color::red);
    //Graph_lib::Rectangle s9(Point(198, 198), 50, 50);
    //s9.set_fill_color(Color::white);

    //win.attach(s1);
    //win.attach(s2);
    //win.attach(s3);
    //win.attach(s4);
    //win.attach(s5);
    //win.attach(s6);
    //win.attach(s7);
    //win.attach(s8);
    //win.attach(s9);

    //win.wait_for_button();       // give control to the display engine

    // Ex. 6
    Point tl(10,10);           // to become top left  corner of window

    Simple_window win(tl,800,800,"Ex. 6");    // make a simple window


    win.attach(s1);

    win.wait_for_button();       // give control to the display engine
}

//------------------------------------------------------------------------------
