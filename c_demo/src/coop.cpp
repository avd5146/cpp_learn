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
	int temp = 5;
	int b = core.calltoCore(coopV); // Remember -can not accept value directly as passing by ref. It has to be a variable.
	std::cout<<b<<std::endl;
}
