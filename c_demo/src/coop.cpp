#include "c_demo/coop.h"
#include "c_demo/core.h"

Coop::Coop()
{
	coopV = 1;
	vec.push_back(1);
}
Coop::~Coop()
{

}
void Coop::printCoop()
{
	std::cout<<coopV<<std::endl;
	Core core;
	int b = core.calltoCore(5);
	std::cout<<b<<std::endl;
}