#include <iostream> 
using namespace std;

class rectangleType
 {
   public:
     void setDimension(double l, double w);
     double getLength() const;
     double getWidth() const;
     double area() const;
     double perimeter() const;
     void print() const;

      rectangleType operator+(const rectangleType&)const;
      rectangleType operator*(const rectangleType&)const;
      

      bool operator==(const rectangleType&) const;
      
      bool operator!=(const rectangleType&)const;

      rectangleType();
      rectangleType(double l,double w);

      friend ostream& operator<< (ostream& osObject, const rectangleType&);

      friend istream& operator>>(istream& isObject, rectangleType&);

   private: 
             double length;
             double width;
  };