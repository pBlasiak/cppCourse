#ifndef D1_CLASS
#define D1_CLASS

#include "../B1/B1.h"

namespace Drill14
{
class D1 :
    public B1
{
public:

    void vf() override
    {
        std::cout << "D1::vf()" << std::endl;
    }

    void f() 
    {
        std::cout << "D1::f()" << std::endl;
    }
};

}

#endif // !D1_CLASS


