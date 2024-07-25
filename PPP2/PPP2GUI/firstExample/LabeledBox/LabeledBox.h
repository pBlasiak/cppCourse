#ifndef LABELEDBOX_H
#define LABELEDBOX_H    

#include "../Box.h"

namespace Graph_lib
{
    class LabeledBox :
        public Box
    {
    private:
        Text label_;

        //- Centering label in a box
        void centerLabel();

    public:
        LabeledBox(Point ltc, int w, int h, int r, const string& l);

        void draw_lines() const override;

        //- Returns const label
        const Text& label() const
        {
            return label_;
        }

        //- Returns label
        Text& label() 
        {
            return label_;
        }

        //- Returns center of a box
        Point center() const
        {
            return Point{ ltc().x + width() / 2, ltc().y + height() / 2 };
        }
    };

}

#endif // !LABELEDBOX_H