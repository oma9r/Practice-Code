#include "RectangleType.h"


void RectangleType::setDimension(double l, double w)
{
    this->length = l;
    this->width = w;
};

double RectangleType::getLength() const
{
    return this->length;
}

double RectangleType::getWidth() const
{
    return this->width;
}

double RectangleType::area() const
{
    return this->length * this->width;
};

double RectangleType::perimeter() const
{
    return 2 * (this->length + this->width);
};

void RectangleType::print() const
{
    cout << "The length: " << RectangleType::getLength() << "\nThe width: "
        << RectangleType::getWidth() << "\nThe area: " << RectangleType::area()
        << "\nThe perimeter: " << RectangleType::perimeter() << endl;
};


RectangleType RectangleType::operator+(const RectangleType& rectangle) const
{
    RectangleType temp;

    temp.length = length + rectangle.length;
    temp.width = width + rectangle.width;

    return temp;

};

RectangleType RectangleType::operator*(const RectangleType& rectangle) const
{
    RectangleType temp;

    temp.length = length * rectangle.length;
    temp.width = width * rectangle.width;

    return temp;
};

bool RectangleType::operator==(const RectangleType& rectangle) const
{
    return (length == rectangle.length && width == rectangle.width);
};

bool RectangleType::operator!=(const RectangleType& rectangle) const
{
    return(length != rectangle.length && width != rectangle.width);
};


RectangleType::RectangleType()
{
    this->width = this->length = 0;
};

RectangleType::RectangleType(double l, double w)
{
    this->length = l;
    this->width = w;
};


ostream& operator<<(ostream& osObject, const RectangleType& rectangle)
{
    osObject << "Length = " << rectangle.length << "\nWidth = " << rectangle.width << endl;

    return osObject;
}

istream& operator>>(istream& iObject, RectangleType& rectangle)
{
    iObject >> rectangle.length >> rectangle.width;
    return iObject;
}




