/*
 *  File name : inherit.cpp
 *
 *      Author: Ankur Dalal
 *  Created on: Dec 17, 2017 @ 2:11:35 AM
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

#include "c_demo/coop.h"

using namespace std;

class Inherit : public Coop{
public:
	Inherit(); // Does not work without this
	~Inherit();
	Coop coop; // object must be linked from the CMakeLists.txt

};

Inherit::Inherit() // Does not work without this
{

}

Inherit::~Inherit() // Does not work without this
{

}

int main()
{
	Inherit inh;
	cout<<inh.coopV<<endl;
	return 0;
}
