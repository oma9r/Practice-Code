#include "classFriend.h";
using namespace std;
#include <iostream>


void classFriend::print()
{
	cout << "In class classFriend: x =  " << this->x << endl;
};

void classFriend::setX(int a)
{
	this->x = a;
};

void friendFunc(classFriend object1)
{
	classFriend local2ob;

	cout << "The x of object1 before: " << object1.x << endl;

	local2ob.x = 45;

	cout << "line 20, the friend function can access the private member variable of local2ob x =  " << local2ob.x << endl;

	object1.x = 88;

	cout << "line 26, the friend function can access the x member private variable of Object1, x = " << object1.x << endl;
}

