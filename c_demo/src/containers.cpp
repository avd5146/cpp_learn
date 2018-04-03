/*
 *  File name : containers.cpp
 *
 *      Author: Ankur Dalal
 *  Created on: Jan 28, 2018 @ 7:37:42 PM
 *
 *
 *  Copyright (C) 2018 by AVD Corp. DO NOT MISUSE.
 * 
 * 
 * Description: Description about the file goes 
 *				here.
 * 		  Note: Any special instructions for
 *				using the file goes here.
 */

/*********************************************************************
 * Software License Agreement 
 *
 *  Copyright (c) 2018, AVD Corp.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are not permitted 
 *
 *  This software is provided by AVD Corp.
 *  Redistribution and use in source and binary forms are not permitted.
 *  Use by authorised group permitted provided that the above copyright 
 *  notice and this paragraph are duplicated in all such forms
 *  and that any documentation, advertising materials, and other
 *  materials related to such distribution and use acknowledge
 *  that the software was developed by AVD Corp.
 *  The name AVD Corp. may not be used to endorse or promote
 *  products derived from this software without specific
 *  prior written permission.
 *  All rights reserved. Ankur Dalal.
*********************************************************************/

#include <ros/ros.h>

#include <queue>

using namespace std;

class Containers
{
public:
	std::queue<char> name;
	char* disp();
};

char* Containers::disp()
{
	char name[5];
	cout<<"Enter text : "<<endl;
	for (int i = 0; i < 5; i++)
	{
		cin>>name[i];
	}
	return name;
}

int main()
{
	Containers container;
	container.disp();
	//container.name(container.disp());
}
