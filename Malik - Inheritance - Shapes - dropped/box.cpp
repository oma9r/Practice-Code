#pragma once
#include <iostream>
#include "box.h"
using namespace std;


void box::setDimenstion(double l,double w,double h)
    {
        rectangle::setDimenstion(l,w);
        if(h>=0)
        {
            box::height = h;
        }
        else
        {
            box::height = 0;
        }
    };

double box::get_height()
    {
       return box::height;
    }

void box::set_height(double h)
{
    height = h;
};

double box::area()
{
    return (4*rectangle::area() + 2*(box::height * box::get_width())) ;
};

double box::volume()
{
    return box::height * box::get_length() * box::get_width();
};

void box::print()
{
    rectangle::print();
    cout << "The height" << box::height << endl;
};

box::box()
{
    box::rectangle();
    box::height = 0;
};

box::box(double l,double w,double h):rectangle(w,l) //:rectangle(w,l) this is a legal syntax...
{
    //box::rectangle(l,w); //it's legal too
    box::height = h;
}