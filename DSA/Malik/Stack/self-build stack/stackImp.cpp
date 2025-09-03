#include "stackImp.h"
using namespace std;


	stackImp::stackImp()
	{
		initilize(100);
	};

	stackImp::stackImp(int size)
	{
		initilize(size);
	};

	void stackImp::initilize(int size)
	{
		maxStackSize = size;
		list = new int [maxStackSize];
		listName = new string [maxStackSize];
		currentValue = 0;
	};
		

	stackImp::~stackImp()
	{
		delete [] list;
		delete [] listName;
		currentValue = 0;
	};

	bool stackImp::isFull()
	{
		return (currentValue == maxStackSize);
	};

	bool stackImp::isEmpty()
	{
		return (currentValue == 0);
	};


	void stackImp::pop()
	{
		if(isEmpty()) cout << "The list is Empty, we can't delete from Empty list." << endl;
		
		else
		{
			--currentValue;
		}
	};

	void stackImp::push(int data)
	{
		if(isFull()) cout << "The list is full, we can't add something..." << endl;

		else
		{
			list[currentValue] = data;
			++currentValue;
		}
	};

	int stackImp::top()
	{
		if(isEmpty()) cout << "The List is empty" << endl;

		else if(isFull()) return list[currentValue - 1];

		else
		{
			return list[currentValue-1];
		}
	};

	void stackImp::printList()
	{
		cout << "current value of the list: " << currentValue << endl;
		for(int i=0; i <currentValue;i++)
		{
			cout << i + 1 <<" " << list[i] << endl;
		}
	};