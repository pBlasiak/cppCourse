#ifndef B1_CLASS
#define B1_CLASS

#include <iostream>

namespace Drill14
{
class B1
{
public:

	virtual void pvf() = 0;

	virtual void vf()
	{
		std::cout << "B1::vf()" << std::endl;
	}

	void f()
	{
		std::cout << "B1:f()" << std::endl;
	}
}; 

}


#endif // !B1_CLASS


