#ifndef D21_CLASS
#define D21_CLASS

#include "../B2/B2.h"
#include<iostream>
#include<string>

namespace Drill14
{
class D21 :
    public B2
{
private:

    std::string label_;

public:

    D21(const std::string& s)
        : label_{s} {}

    void pvf() override
    {
        std::cout << "Label is: " << label_ << std::endl;
    }

   
};

}
#endif // !D21_CLASS


