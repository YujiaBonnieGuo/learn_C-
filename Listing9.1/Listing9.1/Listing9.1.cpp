// Listing9.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
class Human
{
public:
	string name;
	int age;
	void IntroduceSelf()
	{
		cout << "i am " + name << "and i am ";
		cout << age << " years old " << endl;

	}
};
int main()
{
	Human firstman;
	firstman.name = "Adam";
	firstman.age = 30;
	
	Human firstwoman;
	cout << "enter your name: " << endl;
	firstwoman.name = "/n";
	cin>>firstwoman.name;
	cout << "enter your age: " << endl;
	firstwoman.age =0;
	cin >> firstwoman.age;
	firstman.IntroduceSelf();
	firstwoman.IntroduceSelf();
	
   getchar();
   return 0;
}

