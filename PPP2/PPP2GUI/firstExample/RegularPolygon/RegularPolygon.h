#pragma once
#include "../Graph.h"

namespace Graph_lib
{
    class RegularPolygon :
        public Polygon
    {
    private:

        //- Center
        Point c_;

        //- Number of sides
        int nSides_;

        //- Distance from center to a corner
        int centerToCornerDist_;

        //- Internal angle, deg
        double angle_;

        //- Side length
        int side_;

        //- Calculates internal angle, deg
        void calcInternalAngle();

        //- Calculates side length, m
        void calcSide();

        // Function for conversion
        double angleToRadians(double degree) const
        {
            double pi = 3.14159265359;
            return (degree * (pi / 180));
        }

        //- Returns point obtained by rotation 
        // of a reference point
        Point rotatePoint(const Point& refP) const;

    public:

        //- Construct from center, number of sides
        //  and the distance from the center to a corner
        RegularPolygon(Point c, int n, int d);

        //- Returns center of regular polygon
        Point center() const { return c_; }

        //- Returns number of sides
        int nSides() const { return nSides_; }

        //- Returns internal angle
        int internalAngle() const { return angle_; } 

        //- Returns length of a side
        int side() const { return side_; } 

    };

}

