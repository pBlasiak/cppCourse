#ifndef IMMOBILE_CIRCLE_H
#define IMMOBILE_CIRCLE_H

#include "../Graph.h"

namespace Graph_lib
{
class ImmobileCircle :
    public Circle
{
private:

    void move(int dx, int dy) override {}

public:
    ImmobileCircle(Point ltc, int r) : Circle{ltc,r} {}
};

}

#endif // !IMMOBILE_CIRCLE_H



