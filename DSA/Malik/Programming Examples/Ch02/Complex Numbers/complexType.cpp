#include "complexType.h"

ostream& operator<<(ostream& oObject, const complexType& complex)
{
	oObject << "( " << complex.realPart << " , " << complex.imaginaryPart << " )" << endl;

	return oObject;
};

istream& operator>>(istream& iObject, const complexType& complex)
{
	char ch;

	iObject >> ch >> complex.realPart >> ch >> complex.imaginaryPart >> ch;
	return iObject;
};

bool complexType::operator==(const complexType& otherComplex)const
{
	return(this->realPart == otherComplex.realPart && imaginaryPart == otherComplex.imaginaryPart);

};

complexType::complexType(double real, double imag)
{
	realPart = real;
	imaginaryPart = imag;
};

void complexType::setComplex(const double& real, const double& imag)
{
	realPart = real;
	imaginaryPart = imag;
};

void complexType::getComplex(double& real, double& imag) const
{
	real = realPart;
	imag = imaginaryPart;
};

complexType complexType::operator+(const complexType& otherComplex)const
{
	complexType temp;
	temp.realPart = realPart + otherComplex.realPart;
	temp.imaginaryPart = imaginaryPart + otherComplex.imaginaryPart;

	return temp;
};

complexType complexType::operator*(const complexType& otherComplex)const
{
	complexType temp;
	temp.realPart = (realPart * otherComplex.realPart) - (imaginaryPart * otherComplex.imaginaryPart);
	temp.imaginaryPart = (realPart * otherComplex.imaginaryPart) + (imaginaryPart * otherComplex.realPart);

	return temp;
};



