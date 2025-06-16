// 2-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "classFriend.h"
using namespace std;

int main()
{
    classFriend c1;
    int x;
    cout << "1 - setting inital value: " << endl; 
    cout << "         Enter the x value: " << endl;
    cin >> x;
    c1.setX(x);
    c1.print();
    cout << "=============" << endl;

    cout << "2 - setting the change: " << endl;
    friendFunc(c1);
    cout << "=============" << endl;

    cout << "3 - setting 3rd value: " << endl;
    cout << "         Enter the x value: " << endl;
    cin >> x;
    c1.setX(x);
    c1.print();
    cout << "=============" << endl;

    cout << "4 - setting the change: " << endl;
    friendFunc(c1);
    cout << "=============" << endl;


}


