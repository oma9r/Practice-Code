#include "rectangleType.h"

void rectangleType::setDimension(double l,double w)
   {
       
          length = l;
          width = w;
    };

double rectangleType::getLength()const
   {
       
        return length;
    };

double rectangleType::getWidth()const
   {
      return width;
    }

double rectangleType::area()const
   {
       return length*width;
   }

double rectangleType::perimeter()const
  {
        return 2*(length+width);
   }

void rectangleType::print() const
  {

      cout << "The Length: " << length << endl << "The Width: " << width << endl << "The area: " << area() << endl << "The Perimeter: " << perimeter() << endl;

  };

rectangleType rectangleType::operator+(const rectangleType& rectangle)const
  {
      rectangleType tempRect;

       tempRect.length = length + rectangle.length;
       tempRect.width = width + rectangle.width;

       return tempRect;
  };


rectangleType rectangleType::operator*(const rectangleType& rectangle)const
  {
   
     rectangleType tempRect;

     tempRect.length = length * rectangle.length;
     tempRect.width = width * rectangle.width;

     return tempRect;
   };

bool rectangleType::operator==(const rectangleType& rectangle)const
   {
       return (length == rectangle.length && width == rectangle.width);
    }

bool rectangleType::operator!=(const rectangleType& rectangle)const
   {
       return(length != rectangle.length || width != rectangle.width);
    };


 rectangleType::rectangleType()
   {
        length = 0;
        width = 0;
    }

  rectangleType::rectangleType(double l, double w)
     {

          length = l;
          width = w;
      }

   ostream& operator<< (ostream& osObject, const rectangleType& rectangle)
        {
           osObject << "Length = " << rectangle.length << "; Width = " << rectangle.width;
           return osObject;
        };

       istream& operator>>(istream& isObject, rectangleType& rectangle)
        {
           isObject >> rectangle.length >> rectangle.width;
           
           return isObject;
        };


     


 

