#ifndef D22_CLASS
#define D22_CLASS

#include "../B2/B2.h"
#include<iostream>
#include<string>

namespace Drill14
{
class D22 :
    public B2
{
private:

    int label_;

public:

    D22(int s)
        : label_{s} {}

    void pvf() override
    {
        std::cout << "Label int is: " << label_ << std::endl;
    }

   
};

}
#endif // !D22_CLASS


