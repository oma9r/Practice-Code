#include "rectangle.h"

class box : public rectangle 
{
    //attributes 
    double height;
    public: 
    void setDimenstion(double l,double w,double h);
    double get_height();
    void set_height(double h);
    double area();
    double volume();
    void print();
    box();
    box(double l,double w,double h);
};