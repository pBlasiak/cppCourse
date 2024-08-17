#ifndef D2_CLASS
#define D2_CLASS

#include "../D1/D1.h"

namespace Drill14
{
class D2 :
    public D1
{
public:

    void pvf() override
    {
        std::cout << "D2::pvf()" << std::endl;
    }
};

}


#endif // !D2_CLASS


