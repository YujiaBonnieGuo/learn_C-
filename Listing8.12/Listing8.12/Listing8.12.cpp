// Listing8.12.cpp : Defines the entry point for the console application.
//accessing elements in an array using the deference operator(*) and using the array opeater([]) with a pointer

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	const int ARRAY_LEN = 5;
		//static array of 5 integers , initialized
		int myNumber[ARRAY_LEN] = { 24,-1,365,-999,2011 };

		//pointer initialized to first element in array
		int*pointToNums = myNumber;
		cout << "display array using pointer syntax,operator*" << endl;
		for (int index = 0; index < ARRAY_LEN; ++index)
			cout << "element " << index << " = " <<* (myNumber + index) << endl;
		
		cout << "display array using ptr with array syntax,operator[] " << endl;
		for (int index = 0; index < ARRAY_LEN; ++index)
			cout << "element" << index << " = " << pointToNums[index] << endl;
    return 0;
}

