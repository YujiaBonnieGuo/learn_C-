// Listing3.2.cpp : Demostratrating the scope of the b=varibles
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void MultiplyNumbers()
{
	cout << "enter the first number: ";
	int FirstNumber = 0;
	cin >> FirstNumber;

	cout << "enter the second number: ";
	int secondnumber = 0;
	cin >> secondnumber;

	int multiplicationresult = FirstNumber * secondnumber;
	cout << FirstNumber << " x " << secondnumber;
	cout << " = " << multiplicationresult << endl;
}


int main()
{
	cout << "this program will help you multiply two numbers" << endl;
	//call thee function that does all the work
	MultiplyNumbers();
    return 0;
}

