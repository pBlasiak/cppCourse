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
    };
}

#endif // !BOX_H


