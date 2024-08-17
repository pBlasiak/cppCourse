
//
// This is example code from Chapter 12.3 "A first example" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

//#include "Simple_window.h"    // get access to our window library
#include "Graph.h"            // get access to our graphics library facilities
#include "./Drill14/B1/B1.h"
#include "./Drill14/D1/D1.h"
#include "./Drill14/D2/D2.h"

//------------------------------------------------------------------------------

int main()
try
{
    {
        //using namespace Graph_lib;   // our graphics facilities are in Graph_lib

        //Point tl(10, 10);           // to become top left  corner of window

        //Simple_window win(tl, 800, 600, "Canvas");    // make a simple window

        //win.wait_for_button();

        //Drill14::B1 b1;
        //b1.f();
        //b1.vf();
        //std::cout << std::endl;

        //Drill14::D1 d1;
        //d1.f();
        //d1.vf();
        //std::cout << std::endl;

        //Drill14::B1& b1ref{ d1 };
        //b1ref.f();
        //b1ref.vf();
        //std::cout << std::endl;

        Drill14::D2 d2;
        d2.f();
        d2.vf();
        d2.pvf();
        std::cout << std::endl;
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
