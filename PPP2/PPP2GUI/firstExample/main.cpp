
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

    Point tl(100,100);           // to become top left  corner of window

    Simple_window win(tl,800,1000,"Chapter 13 - Drill");    // make a simple window

    constexpr int squareWidth = 100;
    Vector_ref<Graph_lib::Rectangle> recs;
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            recs.push_back(new Graph_lib::Rectangle{Point{i * squareWidth,j * squareWidth}, squareWidth,squareWidth});
            if (i == j)
            {
                recs[recs.size() - 1].set_fill_color(Color::dark_red);
            }
            win.attach(recs[recs.size()-1]);
        }
    }
    // 4
    Image im1{ Point{300,0}, "Chopin.jpg"};
    Image im2{ Point{100,300}, "Chopin.jpg"};
    Image im3{ Point{600,300}, "Chopin.jpg"};
    win.attach(im1);
    win.attach(im2);
    win.attach(im3);

    // 5
    int s = 50;
    Image im4{ Point{s,0}, "FCB.jpg"};
    win.attach(im4);

    for (int i = 0; i < 3; s+=100,++i)
    {
        im4.move(s, 0);
        win.wait_for_button();       // give control to the display engine 
    }
}

//------------------------------------------------------------------------------
