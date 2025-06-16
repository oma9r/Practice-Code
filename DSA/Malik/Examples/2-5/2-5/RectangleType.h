#pragma once
#include <iostream>
using namespace std;

class RectangleType
{
      public: 
          void setDimension(double l, double w);
          double getLength() const;
          double getWidth() const;
          double area() const;
          double perimeter() const;
          void print() const;
          
      //constructors

          RectangleType operator+(const RectangleType&) const;

          RectangleType operator* (const RectangleType&) const;

          bool operator==(const RectangleType&) const;
          bool operator!=(const RectangleType&) const;
          friend ostream& operator<<(ostream&, const RectangleType&);
          friend istream& operator>>(istream&, RectangleType&);

          RectangleType();

          RectangleType(double l, double w);

      private: 
              double length;
              double width;


};