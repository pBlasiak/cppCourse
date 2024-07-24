#ifndef ARROW_H
#define ARROW_H
#include "../Graph.h"

namespace Graph_lib
{
    class Arrow :
        public Shape
    {
    private:

        //- Starting point
        Point s_;

        //- End point
        Point e_;

        //- Lengthe of arrow head, in m
        double headLength_;

        //- Angle of arrow, in deg
        double angle_;

    public:

        //- Construct using start and end point and angle
        Arrow(Point s, Point e, double hl = 20, double angle = 30);

        // it has to be defined to be drawn
        void draw_lines() const override;

        //- Returns total length of arrow
        int totLength() const;

        //- Returns starting point
        Point start() const { return s_; }

        //- Returns ending point
        Point end() const { return e_; }

        //- Returns length of arrow head
        double headLength() const { return headLength_; }

        //- Returns angle of arrow
        double angle() const { return angle_; }
    };
#endif // ARROW_H
}
