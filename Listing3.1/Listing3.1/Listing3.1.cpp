// Listing3.1.cpp : Using variables to store numbers and the results of their multiplications
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	cout << "this program will help you multiply two numbers" << endl;
	cout << "enter the first number: " << endl;
	int FirstNumber = 0;
	cin >> FirstNumber;

	cout << "enter the second number: " << endl;
	int SecondNumber = 0;
	cin >> SecondNumber;
	//multiply two numbers, store the resule in a varible
	int multiplicationResult = FirstNumber * SecondNumber;
	//display the result:
	cout << FirstNumber << " x " << SecondNumber;
	cout << " = " << multiplicationResult << endl;

    return 0;
}

