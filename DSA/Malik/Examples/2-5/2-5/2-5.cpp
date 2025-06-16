#include <iostream>
using namespace std;
#include "RectangleType.h"


int main()
{
    //RectangleType r1(2.3, 2.4);
    //r1.print();

   // cout << "The area: " << r1.area() << endl;




    RectangleType myRectangle(23, 45); //Line 6
    RectangleType yourRectangle; //Line 7
    cout << "Line 8: myRectangle: " << myRectangle
        << endl; //Line 8
    cout << "Line 9: Enter the length and width "
        << "of a rectangle: "; //Line 9
    cin >> yourRectangle; //Line 10
    cout << endl; //Line 11
    cout << "Line 12: yourRectangle: "
        << yourRectangle << endl; //Line 12
    cout << "Line 13: myRectangle + yourRectangle: "
        << myRectangle + yourRectangle << endl; //Line 13
    cout << "Line 14: myRectangle * yourRectangle: "
        << myRectangle * yourRectangle << endl;
}

