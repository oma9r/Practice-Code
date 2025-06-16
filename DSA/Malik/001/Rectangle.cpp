#include "Rectangle.h"
#include <iostream>
using namespace std;

void Rectangle::setDimension(double l,double w)
{
   length = l;
   width = w;
};

double Rectangle::area() const
{
    return length * width;
};

