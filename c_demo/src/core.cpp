#include <c_demo/core.h>
#include <c_demo/cortex.h>
#include <c_demo/coop.h>

Core::Core()
{
	coreV = 2;
}
Core::~Core()
{

}
int Core::calltoCore(int& a) // TODO pass by reference
{
	std::cout<<coreV<<std::endl;
	std::cout<<(a+10)<<std::endl;
	
	Coop coop;
	std::cout<<(coop.coopV)<<std::endl;
	
	Cortex cortex;
	cortex.calltoCortex();
	return (2*a);
}
