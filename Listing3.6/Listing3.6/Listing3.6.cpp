// Listing3.6.cpp : Using the auto keyword and relying on the compiler's compiler's type-inference capabilities

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	auto coinFilppedHeads = true;
	auto largeNumber = 2500000000000;
	cout << "coinFilppedHeads= " << coinFilppedHeads;
	cout << ", sizeof(coinFilppedHeads)= " << sizeof(coinFilppedHeads) << endl;
	cout << "largeNumber = "<< largeNumber;
	cout << ", size of largeNumber= " << sizeof(largeNumber) << endl;
    return 0;
}

