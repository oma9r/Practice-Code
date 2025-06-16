#include <iostream>
using namespace std; 
#include "rectangle.h"

void rectangle::setDimenstion(double l, double w)
{
    if(l>=0) rectangle::length = l;
    else rectangle::length = 0;
    if(w>=0)rectangle::width = w;
    else rectangle::width = 0;
};

double rectangle::get_length()
{
    return rectangle::length;
};

double rectangle::get_width()
{
    return rectangle::width;
};

void rectangle::set_length(double l)
{
    rectangle::length = l;
};

void rectangle::set_width(double w)
{
    rectangle::width = w;
};

double rectangle::area()
{
    return rectangle::length * rectangle::width;
};

double rectangle::perimeter()
{
    return 2*(rectangle::length + rectangle::width);
};

void rectangle::print()
{
    cout << "the length" << rectangle::length << endl;
    cout << "the width" << rectangle::width << endl;
}

rectangle::rectangle()      //default constructor 
{
    length = width = 0;
};

rectangle::rectangle(double l,double w) //constructor with parameters
{
    length = l;
    width = w;
};




