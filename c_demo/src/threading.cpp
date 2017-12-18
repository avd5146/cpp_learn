/*
 *  File name : threading.cpp
 *
 *      Author: Ankur Dalal
 *  Created on: Dec 17, 2017 @ 3:07:49 AM
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
#include <thread>
#include <mutex>
#include <chrono>

using namespace std;
mutex m1;
int c1=0,c2=0;

int func1(int n,char ch)
{
	m1.lock();				// if not used, stuff from 2 calls can get mixed
	//while(c1<n)			// if while is used, behaves weird. loop may execute for previous number of time
	for (c1=0;c1<n;c1++)
	{
		cout<<n; //c1++;
	}
	cout<<endl;
	//m1.unlock();
	cout<<"sleeping for "<<n<<endl;
	std::this_thread::sleep_for(std::chrono::seconds(n));
	m1.unlock(); // placement is important.
	return 1;
}

double func2()
{
	while(c2<20)
	{
	cout<<'a'<<endl; c2++;
	}
	return 0.1;
}

int main()
{

	std::thread t1(func1,10,'*');
	std::thread t2(func1,5,'#');
	t1.join();
	//t1.detach();
	t2.join();

	return 0;
}


// mutex example
//#include <iostream>       // std::cout
//#include <thread>         // std::thread
//#include <mutex>          // std::mutex
//
//std::mutex mtx;           // mutex for critical section
//
//void print_block (int n, char c) {
//  // critical section (exclusive access to std::cout signaled by locking mtx):
//  mtx.lock();
//  for (int i=0; i<n; ++i) { std::cout << c; }
//  std::cout << '\n';
//  mtx.unlock();
//}
//
//int main ()
//{
//  std::thread th1 (print_block,50,'*');
//  std::thread th2 (print_block,5,'$');
//
//  th1.join();
//  th2.join();
//
//  return 0;
//}
