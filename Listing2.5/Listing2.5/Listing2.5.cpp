// Listing2.5.cpp : using the return value of a function
//

#include "stdafx.h"
#include<iostream>
using namespace std;
//
int DemoConsoleOutput()
{
	cout << "this is a simple string literal" << endl;
	cout << "writing number five: " << 5 << endl;
	cout << "performing division 10/5=" << 10 / 5 << endl;
	cout << "pi when approcomiated is 22/7" << endl;
	return 0;

}
int main()
{
    return DemoConsoleOutput();
}

