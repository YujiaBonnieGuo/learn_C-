// Listing4.3.cpp : Accessing Elements in a Multidimensional Array
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int threeRowsThreeColumns[3][3] = \
	{ {-501, 205, 2016}, { 989,101,206 }, { 303,456,596 }};
	cout << "roe 0: " << threeRowsThreeColumns[0][0] << " "\
		<< threeRowsThreeColumns[0][1] << " "\
		<< threeRowsThreeColumns[0][2] << endl;

	cout << "roe 1: " << threeRowsThreeColumns[1][0] << " "\
		<< threeRowsThreeColumns[1][1] << " "\
		<< threeRowsThreeColumns[1][2] << endl;

	cout << "roe 2: " << threeRowsThreeColumns[2][0] << " "\
		<< threeRowsThreeColumns[2][1] << " "\
		<< threeRowsThreeColumns[2][2] << endl;
    return 0;
}

