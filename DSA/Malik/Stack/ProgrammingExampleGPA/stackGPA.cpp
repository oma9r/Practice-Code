#include "stackGPA.h"
using namespace std;


stackGPA::stackGPA(int size)
{
	this->initilize(size);
	listName = new string [size];
}


void stackGPA::push(string name)
{
		if(isFull()) cout << "The list is full, we can't add something..." << endl;
		
		else
		{
			//list[currentValue] = GPA;
			listName[currentValue] = name;
			++currentValue;
		}
};

void stackGPA::printNames()
{
	cout << "List of names with the highest GPA: "<< endl;
		for(int i=currentValue - 1; i >-1;i--)
		{
			cout << listName[i] << endl;
		}
};

stackGPA::~stackGPA()
{
	delete [] listName;
	this->currentValue = 0;
};