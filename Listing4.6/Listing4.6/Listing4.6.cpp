// Listing4.6.cpp : a risky application using C-style string and user input

#include "stdafx.h"
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	cout << "enter a word not longer than 20 characters: " << endl;
	char userInput[21] = { '\0' };
	cin >> userInput;
	cout << "input:" << userInput << endl;
	cout<< "length of your input is: " << strlen(userInput) << endl;
    return 0;
}

