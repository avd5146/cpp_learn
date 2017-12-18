/*
 *  File name : pointer.cpp
 *
 *      Author: Ankur Dalal
 *  Created on: Dec 17, 2017 @ 4:29:29 AM
 *
 *
 *  Copyright (C) 2017 by AVD Corp. DO NOT MISUSE.
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
 *  Copyright (c) 2017, AVD Corp.
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

using namespace std;

class Pointer
{
public:
	Pointer(int a);
	~Pointer();
	void func1();
	void func2();
	int *pVal;
};

Pointer::Pointer(int a)
{
	pVal = &a ;
}

Pointer::~Pointer()
{

}

void Pointer::func1()
{
	cout<<pVal<<endl;
	cout<<*pVal<<endl;
}
int main()
{
	Pointer p(10);
	p.func1();
	return 0;
}
