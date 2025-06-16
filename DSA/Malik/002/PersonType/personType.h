#pragma once
#include <iostream>
#include <string>
using namespace std;

class personType
{
private: 
	string firstName;
	string lastName;
public: 
	//personType();
	personType(string firstName = "", string lastName = "");
	void setName(string firstName, string lastName);
	string getFirstName();
	string getLastName();
	personType& setFirstName(string firstName);
	personType& setLastName(string lastName);
	void print();
};