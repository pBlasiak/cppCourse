#ifndef BOX_H
#define BOX_H

#include "Graph.h"

namespace Graph_lib
{
    class Box :
        public Shape
    {
    private:

        //- Left top corner
        Point ltc_;

        //- Width
        int w_;

        //- Height
        int h_;

        //- Radius of a corner
        int r_;

    public:
        Box(Point lc, int w, int h, int r);

        // it has to be defined to be drawn
        void draw_lines() const override;

        //- Returns left top corner
        Point ltc() const { return ltc_; }

        //- Returns width
        int width() const { return w_; }

        //- Returns height
        int height() const { return h_; }

        //- Returns radius
        int radius() const { return r_; }

        //- Returns center of a box
        Point center() const
        {
            return Point{ ltc_.x + w_ / 2, ltc_.y + h_ / 2 };
        }
    };
}

#endif // !BOX_H


