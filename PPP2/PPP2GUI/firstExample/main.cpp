
//
// This is example code from Chapter 12.3 "A first example" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "Simple_window.h"    // get access to our window library
#include "Graph.h"            // get access to our graphics library facilities
#include "Arc.h"            // get access to our graphics library facilities
#include "Box.h"            // get access to our graphics library facilities
#include "Arrow/Arrow.h"            // get access to our graphics library facilities
#include "LabeledBox/LabeledBox.h"            // get access to our graphics library facilities
#include "RegularHexagon/RegularHexagon.h"            // get access to our graphics library facilities
#include "RegularPolygon/RegularPolygon.h"            // get access to our graphics library facilities

//------------------------------------------------------------------------------

int main()
try
{
    {
        //using namespace Graph_lib;   // our graphics facilities are in Graph_lib

        Point tl(10, 10);           // to become top left  corner of window

        Simple_window win(tl, 800, 600, "Canvas");    // make a simple window

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

        /* EXERCISE 13.4 - Connection points of a rectangle */
        //Graph_lib::Rectangle r{ Point{210,110}, 56, 30};
        //r.set_color(Color::blue);
        //Mark mn{ n(r), 'x' };
        //mn.set_color(Color::red);
        //Mark mw{ w(r), 'x' };
        //mw.set_color(Color::dark_yellow);
        //Mark me{ e(r), 'x' };
        //me.set_color(Color::yellow);
        //Mark ms{ s(r), 'x' };
        //ms.set_color(Color::dark_cyan);
        //Mark mnw{ nw(r), 'x' };
        //Mark mne{ ne(r), 'x' };
        //mne.set_color(Color::green);
        //Mark msw{ sw(r), 'x' };
        //msw.set_color(Color::magenta);
        //Mark mse{ se(r), 'x' };
        //mse.set_color(Color::dark_red);
        //Mark mcenter{ center(r), 'x' };
        //mcenter.set_color(Color::white);
 
        //win.attach(r);
        //win.attach(mn);
        //win.attach(mw);
        //win.attach(me);
        //win.attach(ms);
        //win.attach(mnw);
        //win.attach(mne);
        //win.attach(msw);
        //win.attach(mse);
        //win.attach(mcenter);

        //win.wait_for_button();       // give control to the display engine
        /* End of EXERCISE 13.4 */



        /* EXERCISE 13.5 - Connection points of a circle and elipse */
        // nie zrobione

        //win.wait_for_button();       // give control to the display engine
        /* End of EXERCISE 13.5 */


        /* EXERCISE 13.6 - Class diagram */
        //Graph_lib::LabeledBox window{ Point{40,20}, 100, 40, 5, "Window" };
        //window.set_fill_color(Color::dark_green);
        //window.label().set_font(Font::times_bold);

        //Graph_lib::LabeledBox simpleWindow{ Point{20,100}, 140, 40, 5, "Simple_window" };
        //simpleWindow.set_fill_color(Color::dark_green);
        //simpleWindow.label().set_font(Font::times_bold);

        //Arrow a1{ s(window), n(simpleWindow) };

        //Graph_lib::LabeledBox lineStyle{ Point{310,20}, 100, 40, 5, "Line_style" };
        //lineStyle.set_fill_color(Color::dark_green);
        //lineStyle.label().set_font(Font::times_bold);

        //Graph_lib::LabeledBox color{ Point{610,20}, 100, 40, 5, "Color" };
        //color.set_fill_color(Color::dark_green);
        //color.label().set_font(Font::times_bold);

        //Graph_lib::LabeledBox shape{ Point{310,100}, 100, 40, 5, "Shape" };
        //shape.set_fill_color(Color::dark_green);
        //shape.label().set_font(Font::times_bold);

        //Graph_lib::LabeledBox point{ Point{610,100}, 100, 40, 5, "Point" };
        //point.set_fill_color(Color::dark_green);
        //point.label().set_font(Font::times_bold);

        //Graph_lib::LabeledBox line{ Point{20,180}, 80, 40, 5, "Line" };
        //line.set_fill_color(Color::dark_green);
        //line.label().set_font(Font::times_bold);

        //Graph_lib::LabeledBox lines{ Point{120,180}, 80, 40, 5, "Lines" };
        //lines.set_fill_color(Color::dark_green);
        //lines.label().set_font(Font::times_bold);

        //Graph_lib::LabeledBox polygon{ Point{220,180}, 80, 40, 5, "Polygon" };
        //polygon.set_fill_color(Color::dark_green);
        //polygon.label().set_font(Font::times_bold);

        //Graph_lib::LabeledBox axis{ Point{320,180}, 80, 40, 5, "Axis" };
        //axis.set_fill_color(Color::dark_green);
        //axis.label().set_font(Font::times_bold);

        //Graph_lib::LabeledBox rectangle{ Point{420,180}, 80, 40, 5, "Rectangle" };
        //rectangle.set_fill_color(Color::dark_green);
        //rectangle.label().set_font(Font::times_bold);

        //Graph_lib::LabeledBox text{ Point{520,180}, 80, 40, 5, "Text" };
        //text.set_fill_color(Color::dark_green);
        //text.label().set_font(Font::times_bold);

        //Graph_lib::LabeledBox image{ Point{620,180}, 80, 40, 5, "Image" };
        //image.set_fill_color(Color::dark_green);
        //image.label().set_font(Font::times_bold);

        //Arrow a2{ s(shape), n(line) };
        //Arrow a3{ s(shape), n(lines) };
        //Arrow a4{ s(shape), n(polygon) };
        //Arrow a5{ s(shape), n(axis) };
        //Arrow a6{ s(shape), n(rectangle) };
        //Arrow a7{ s(shape), n(text) };
        //Arrow a8{ s(shape), n(image) };

        //win.attach(window);
        //win.attach(simpleWindow);
        //win.attach(lineStyle);
        //win.attach(color);
        //win.attach(shape);
        //win.attach(point);
        //win.attach(line);
        //win.attach(lines);
        //win.attach(polygon);
        //win.attach(axis);
        //win.attach(rectangle);
        //win.attach(text);
        //win.attach(image);

        //win.attach(a1);
        //win.attach(a2);
        //win.attach(a3);
        //win.attach(a4);
        //win.attach(a5);
        //win.attach(a6);
        //win.attach(a7);
        //win.attach(a8);
 
        //win.wait_for_button();       // give control to the display engine
        /* End of EXERCISE 13.6 */


        /* EXERCISE 13.7 - RGB chart */
        // rozwiazanie z https://github.com/bewuethr/stroustrup-ppp/blob/main/chapter13/chapter13_ex07.cpp

        //using namespace Graph_lib;

        //Point tl(200,50);
        //Simple_window win(tl,1200,800,"RGB chart");
        //Vector_ref<Graph_lib::Rectangle> rects;

        //for (int i1 = 0; i1<4; ++i1) {
        //    for (int i2 = 0; i2<4; ++i2) {
        //        for (int j = 0; j<16; ++j) {
        //            for (int k = 0; k<16; ++k) {
        //                rects.push_back(new Graph_lib::Rectangle(Point(16*12*i1+12*k,16*12*i2+12*j),12,12));
        //                rects[rects.size()-1].set_fill_color(fl_rgb_color(15*(4*i1+i2),15*j,15*k));
        //                rects[rects.size()-1].set_color(Color(Color::black,Color::invisible));
        //                win.attach(rects[rects.size()-1]);
        //            }
        //        }
        //    }
        //}
        //win.wait_for_button();

        //for (int i = 0; i<rects.size(); ++i)
        //    win.detach(rects[i]);

        //const int box_h = 22;
        //const int box_w = 88;
        //Vector_ref<Graph_lib::Rectangle> boxes;
        //Vector_ref<Text> labels;

        //for (int i = 0; i<6; ++i) {
        //    for (int j = 0; j<6; ++j) {
        //        for (int k = 0; k<6; ++k) {
        //            boxes.push_back(new Graph_lib::Rectangle(Point(k*box_w,i*6*box_h+j*box_h),box_w,box_h));
        //            boxes[boxes.size()-1].set_fill_color(fl_rgb_color(51*i,51*j,51*k));
        //            boxes[boxes.size()-1].set_color(Color(Color::black,Color::invisible));
        //            win.attach(boxes[boxes.size()-1]);
        //            ostringstream oss;
        //            oss << hex << uppercase << setfill('0') << left <<
        //                setw(2) << 51*i << setw(2) << 51*j << setw(2) << 51*k;
        //            labels.push_back(new Text(Point(k*box_w+20,i*6*box_h+j*box_h+16),oss.str().c_str()));
        //            if (j<=2) labels[labels.size()-1].set_color(Color::white);
        //            win.attach(labels[labels.size()-1]);
        //        }
        //    }
        //}
        //win.wait_for_button();

        /* End of EXERCISE 13.7 */


        /* EXERCISE 13.8 - Regular_hexagon */
        //Graph_lib::RegularHexagon rh{ Point{200,200}, 60 };
        //rh.set_color(Color::red);

        //win.attach(rh);

        //win.wait_for_button();
        /* End of EXERCISE 13.8 */

        /* EXERCISE 13.9 - Regular_hexagon tile */
        //Graph_lib::Vector_ref<RegularHexagon> rhs;
        //constexpr int side{ 30 };
        //int dy{ 100 };
        //int yini{ 100 };
        //for (int j = 0; j < 8; ++j)
        //{
        //    int dx{ 100 };
        //    for (int i = 0; i < 8; ++i)
        //    {
        //        (i % 2) == 0 ? dy = yini : dy = yini + 0.5 * side * sqrt(3);
        //        rhs.push_back(new Graph_lib::RegularHexagon{ Point{dx,dy}, side });
        //        rhs[rhs.size() - 1].set_color(Color(i));
        //        win.attach(rhs[rhs.size() - 1]);
        //        dx += 1.5 * side;
        //    }
        //    yini+= side*sqrt(3);
        //}
        //win.wait_for_button();
        /* End of EXERCISE 13.9 */


        /* EXERCISE 13.10 - RegularPolygon */
        //Graph_lib::RegularPolygon rp{ Point{200,200}, 9, 100 };
        //rp.set_color(Color::blue);
        //win.attach(rp);

	    //Vector_ref<Mark> marks;
	    //for (int i = 0; i < rp.nSides(); ++i)
	    //{
        //    cout << "Point " << i << " (" << rp.point(i).x << ", " << rp.point(i).y << ")" << endl;
	    //	string n( to_string(i) );
	    //	const char* nn{ n.c_str() };
	    //	marks.push_back(new Mark{ rp.point(i), *nn });
	    //	win.attach(marks[marks.size() - 1]); 
	    //}
        //marks.push_back(new Mark{ rp.center(),'c' });
	    //win.attach(marks[marks.size() - 1]); 

        //win.wait_for_button();
        /* End of EXERCISE 13.10 */


        /* EXERCISE 13.11 - Draw ellipse */
        Graph_lib::Ellipse e1{ Point{200,200}, 150, 100 };
        e1.set_color(Color::dark_red);
        Graph_lib::Mark f1{ e1.focus1(),'1' };
        f1.set_color(Color::dark_red);
        Graph_lib::Mark f2{ e1.focus2(),'2' };
        f2.set_color(Color::dark_red);
        Graph_lib::Ellipse e2{ Point{200,200}, 200, 150 };
        e2.set_color(Color::dark_blue);
        Graph_lib::Mark f3{ e2.focus1(),'3' };
        f1.set_color(Color::dark_blue);
        Graph_lib::Mark f4{ e2.focus2(),'4' };
        f2.set_color(Color::dark_blue);

        // rownanie elipsy o srodku w (h,k)
        // ((x-h)^2)/a^2 +((y-k)^2)/b^2 = 1
        const int h{ e1.center().x };
        const int k{ e1.center().y };
        const int x1{ h+20 };
        double a( e1.major() );
        double b( e1.minor() );
        double A{b*b*(1-(x1-h)*(x1-h)/a/a)};
        const int y1((k - sqrt(A)));
        Graph_lib::Mark p{ Point{x1,y1},'p' };
        Graph_lib::Line l1{ e1.focus1(),Point{x1,y1} };
        l1.set_color(Color::cyan);
        Graph_lib::Line l2{ e1.focus2(),Point{x1,y1} };
        l2.set_color(Color::dark_magenta);

        win.attach(e1);
        win.attach(e2);
        win.attach(f1);
        win.attach(f2);
        win.attach(f3);
        win.attach(f4);
        win.attach(p);
        win.attach(l1);
        win.attach(l2);

        win.wait_for_button();
        /* End of EXERCISE 13.11 */
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
