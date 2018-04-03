/*
 *  File name : linkedList1.cpp
 *
 *      Author: Ankur Dalal
 *  Created on: Dec 19, 2017 @ 4:22:51 AM
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

class List
{
public:
	List();
	~List();
	void saxpy();
	void crap(List&);
	string str(List&); // defines a method. not able to init. weird
	string s = ""; // defines string.

	struct list1
	{
		int a;
	}lobj;
	list1 l_obj;

	struct Node
	{
		char data;
		Node* next;
	};
};

List::List()
{
	l_obj.a = 0;
	lobj.a = 11;
}

List::~List()
{

}

string List::str(List& list)
{
	string myString("");
	Node fName,mName,lName;
	int i = 0;
	char ch[10];
	while(i<3)
	{
		cout<<"Enter text \n";
		cin>>ch;
		myString +=ch;
		i++;
	}
	return myString;
}

void List::crap(List& list)
{
	//List::l_obj.a = 1; // Does not work. Dont know why.
	List::list1 l_obj;
	cout<<"a = "<<l_obj.a<<'\n'; // TODO look into this.
	l_obj.a = 10;
	cout<<"a = "<<l_obj.a<<'\n';
	list.l_obj.a = 1; // Weird. this is not working.
	cout<<"a = "<<list.l_obj.a<<'\n';
}

void List::saxpy()
{
	int N = 1<<20;
	float *x, *y, *d_x, *d_y;
	x = (float*)malloc(N*sizeof(float));
	y = (float*)malloc(N*sizeof(float));
	for (int i = 0; i < N; i++)
	{
		x[i] = 1.0f;
		y[i] = 2.0f;
		y[i] = 2*x[i] + y[i];
	}

	float maxError = 0.0f;
	for (int i = 0; i < N; i++)
	{
		maxError = max(maxError, abs(y[i]-4.0f));
	}
	printf("Max error: %f\n", maxError);
}

int main()
{
	List list;
	//list.crap(list);
	cout<<list.str(list)<<'\n';
	list.saxpy();
//	amazing. i forgot return and still works fine.
}
