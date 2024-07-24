
//
// This is example code from Chapter 12.3 "A first example" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "Simple_window.h"    // get access to our window library
#include "Graph.h"            // get access to our graphics library facilities
#include "Arc.h"            // get access to our graphics library facilities
#include "Box.h"            // get access to our graphics library facilities
#include "Arrow/Arrow.h"            // get access to our graphics library facilities

//------------------------------------------------------------------------------

int main()
try
{
    {
        //using namespace Graph_lib;   // our graphics facilities are in Graph_lib

        Point tl(100, 100);           // to become top left  corner of window

        Simple_window win(tl, 600, 400, "Canvas");    // make a simple window

        /* EXERCISE 13.1 */
        // class Arc was implemented using fl_arc
        //Graph_lib::Arc arc(Point{ 100,200 }, 100, 200, 30, 154);
        //arc.set_color(Color::blue);
        //win.attach(arc);

        //win.wait_for_button();       // give control to the display engine
        /* End of EXERCISE 13.1 */

        /* EXERCISE 13.2 */
        //Graph_lib::Box b(Point{ 110,110 }, 400, 200, 30);
        //b.set_color(Color::black);
        //b.set_fill_color(Color::magenta);
        ////b.set_fill_color(Color::invisible);
        //win.attach(b);

        //win.wait_for_button();       // give control to the display engine
        /* End of EXERCISE 13.2 */

        /* EXERCISE 13.3 - Line with arrowhead */
        // na razie niedokonczone, zostawiam na pozniej
        //Graph_lib::Arrow a1{ Point{110,110}, Point{210,300} };
        //a1.set_color(Color::blue);

        //win.attach(a1);

        //win.wait_for_button();       // give control to the display engine
        /* End of EXERCISE 13.3 */

        /* EXERCISE 13.4 - Line with arrowhead */
        // na razie niedokonczone, zostawiam na pozniej
        Graph_lib::Rectangle r{ Point{210,110}, 56, 30};
        r.set_color(Color::blue);
        Mark mn{ n(r), 'x' };
        mn.set_color(Color::red);
        Mark mw{ w(r), 'x' };
        mw.set_color(Color::dark_yellow);
        Mark me{ e(r), 'x' };
        me.set_color(Color::yellow);
        Mark ms{ s(r), 'x' };
        ms.set_color(Color::dark_cyan);
        Mark mnw{ nw(r), 'x' };
        Mark mne{ ne(r), 'x' };
        mne.set_color(Color::green);
        Mark msw{ sw(r), 'x' };
        msw.set_color(Color::magenta);
        Mark mse{ se(r), 'x' };
        mse.set_color(Color::dark_red);
        Mark mcenter{ center(r), 'x' };
        mcenter.set_color(Color::white);
 
        win.attach(r);
        win.attach(mn);
        win.attach(mw);
        win.attach(me);
        win.attach(ms);
        win.attach(mnw);
        win.attach(mne);
        win.attach(msw);
        win.attach(mse);
        win.attach(mcenter);

        win.wait_for_button();       // give control to the display engine
        /* End of EXERCISE 13.4 */
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
