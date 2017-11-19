#include <ros/ros.h>

class Core
{
public:
	Core();
	~Core();
	int coreV;
	int calltoCore(int);
};