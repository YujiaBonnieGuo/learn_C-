// Listing9.2.cpp : Defines the entry point for the console application.
//a model of class human where the true age is abstracted from the user and a younger age is reported

#include "stdafx.h"
#include<iostream>

using namespace std;

class human
{
private:
	//private member data:
	int age;
public:
	void setage(int inputage)
	{
		age = inputage;
	}
	//human lies about his/her age(if over 30)
	int getage()
	{
		if (age > 30)
			return(age - 2);
		else
			return age;
	}

};

int main()
{
	human firstman;
	firstman.setage(35);

		human firstwoman;
		firstwoman.setage(22);
		
		cout << "age of firstman: " << firstman.getage() << endl;
		cout << "age of firstwoman: " << firstwoman.getage() << endl;
    return 0;
}

