// Listing3.8.cpp : using constexpr to caculate pi
//

#include "stdafx.h"
#include<iostream>
using namespace std;
constexpr double getpi() { return 22.0 / 7; }
constexpr double twicepi() { return 2 * getpi(); }


int main()
{
	const double pi = 22.0 / 7;
	cout << "constant pi contains value" << pi << endl;
	cout << "constexpr getpi() returns value" << getpi() << endl;
	cout << "constexpr teicepi() returns value" << twicepi() << endl;
    return 0;
}

