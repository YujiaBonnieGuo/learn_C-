// Listing4.7.cpp : using std::string to initialize,store user input,copy,concatenate
// and determine the length of a string

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;


int main()
{
	string greetString("hello std::string!");
	cout << greetString << endl;

	cout << "enter a line of text: " << endl;
	string FirstLine;
	getline(cin, FirstLine);

	cout << "enter a line of text: " << endl;
	string secondtLine;
	getline(cin, secondtLine);

	cout << "results of concatenation: " << endl;
	string concatString = FirstLine + " " + secondtLine;
	cout << concatString << endl;
	
	cout << "copy of cancatenated string: " << endl;
	string aCopy;
	aCopy = concatString;
	cout << aCopy << endl;

	cout << "Length of concat string: " << concatString.length() << endl;
	
    return 0;
}

