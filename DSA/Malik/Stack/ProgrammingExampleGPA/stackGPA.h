#include "stackImp.h"
#include <iostream>
#include <cstring>
#include <iomanip>
#include <fstream>
using namespace std;


class stackGPA : public stackImp
{
	
	public:
		stackGPA(int size);
		void push(string name);
		void printNames();
		~stackGPA();
		

	private:
		string *listName;

};


