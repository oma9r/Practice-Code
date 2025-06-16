#pragma once
#include <string>
using namespace std;

class order
{
private: 
	int id;
    char *name;
public: 
	
	order();                   //default constructor
	order(int choose);
	void set_id(int id1);
	int get_id();
	void print();
};
