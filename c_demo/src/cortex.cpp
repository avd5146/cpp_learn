#include <c_demo/cortex.h>

Cortex::Cortex()
{
	cortexV = 3;
}
Cortex::~Cortex()
{

}
void Cortex::calltoCortex()
{
	std::cout<<cortexV<<std::endl;
}