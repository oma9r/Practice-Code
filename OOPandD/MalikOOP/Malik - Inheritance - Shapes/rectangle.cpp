#include <iostream> 
using namespace std;
#include "rectangle.h"

void rectangle::setDimension(double l,double w)
{
    if(l>=0)
    {
        rectangle::length = l;
    }
    else
    {
        rectangle::length = 0;
    }

    if(w>=0)
    {
        rectangle::width = w;
    }
    else
    {
        rectangle::width = 0;
    }
};

double rectangle::get_length()
{
    return length;
};

double rectangle::get_width()
{
    return width;
};

double rectangle::area()
{
    return (rectangle::length * rectangle::width);
};

double rectangle::perimeter()
{
    return 2 * (rectangle::length + rectangle::width);
};

void rectangle::print()
{
    cout << "The length" << rectangle::length << endl;
    cout << "The width" << rectangle::width << endl;

};

rectangle::rectangle()
{
    rectangle::length = rectangle::width = 0;
};

rectangle::rectangle(double l,double w)
{
    rectangle::setDimension(l,w);
};


