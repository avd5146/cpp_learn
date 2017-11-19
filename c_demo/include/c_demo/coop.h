#include <ros/ros.h>
#include <vector>

class Coop
{
public:
	int coopV; 
	Coop();
	~Coop();
	void printCoop();
	std::vector<int> vec;
};