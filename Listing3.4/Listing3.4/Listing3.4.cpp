// Listing3.4.cpp : Demonstrating the III-Effects of Signed nad Unsigned Integer
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	unsigned short uShortValue = 65535;
	cout << "increamenting unsigned short" << uShortValue << "gives: ";
	cout << ++uShortValue << endl;

	short signedShort = 32767;
	cout << "increamenting signed short " << signedShort << "gives: ";
	cout << ++signedShort << endl;
	return 0;
}

