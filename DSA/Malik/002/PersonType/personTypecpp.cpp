#include "personType.h"

/*personType::personType()
{
	
};*/





personType::personType(string firstName, string lastName)
{

	this->firstName = firstName;
	this->lastName = lastName;

}

void personType::setName(string firstName, string lastName)
{
	this->firstName = firstName;
	this->lastName = lastName;
};

string personType::getFirstName()
{
	return this->firstName;
};

string personType::getLastName()
{
	return this->lastName;
};

personType& personType::setFirstName(string firstName)
{
	this->firstName = firstName;
	return *this;
}

personType& personType::setLastName(string lastName)
{
	this->lastName = lastName;
	return *this;
};

void personType::print()
{
	cout << "The first name: " << this->getFirstName() << endl;
	cout << "The Last name: " << this->getLastName() << endl;
};



