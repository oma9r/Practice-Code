//#include <iostream>

class rectangle
{
    public: 
    void setDimenstion(double l,double w);
    double get_length();
    double get_width();
    void set_length(double l);
    void set_width(double w);
    double area();
    double perimeter();
    void print();
    rectangle();
    rectangle(double l,double w);
    private: 
    double width,length;
};