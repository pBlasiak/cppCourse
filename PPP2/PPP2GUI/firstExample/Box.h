#ifndef BOX_H
#define BOX_H

#include "Graph.h"

namespace Graph_lib
{
    class Box :
        public Rectangle
    {
    private:

        //- Left top corner
        Point ltc_;

        //- Radius of a corner
        int r_;

    public:
        Box(Point lc, int ww, int hh, int r);

        // it has to be defined to be drawn
        void draw_lines() const override;

        //- Returns left top corner
        Point ltc() const { return ltc_; }

        //- Returns radius
        int radius() const { return r_; }

        //- Returns center of a box
        Point center() const
        {
            return Point{ ltc_.x + width() / 2, ltc_.y + height() / 2 };
        }
    };
}

#endif // !BOX_H


