// Listing3.9.cpp : using enumerated valued to indicate carfinal wind directions(基本风向)
//

#include "stdafx.h"
#include<iostream>
using namespace std;
enum CardinalDirections
{
	North=25,
	South,
	East,
	West
};

int main()
{
	cout << "Displaying directions nad their symbolic values: " << endl;
	cout << "North: " << North << endl;
	cout << "South: " << South << endl;
	cout << "East: " << East << endl;
	cout << "West: " << West << endl;
    return 0;
}

