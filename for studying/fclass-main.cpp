#include <iostream> 
#include "fclass.h"
#include <math.h> 
using namespace std;

int main()
{

    fclass ob1,ob2;
    int x, y;
    cout << "please add your data" << endl;
    cin >> x >> y;

    ob1.set_fun(x, y);
    cout << "the area is: " << ob1.get_area() << endl;
    cout << "the pri is: " << ob1.get_pri() << endl;

    cout << "well done,now add your second inputs: " << endl;

    cin >> x >> y;
    ob2.set_fun(x, y);
    cout << "the area is: " << ob2.get_area() << endl;
    cout << "the pri is: " << ob2.get_pri() << endl;

    int zz;

    cin >> zz;

    zz = abs(zz);
    cout << zz << endl;

    return 0;
}