#include <iostream>
#include <string>


class stackImp
{
	public: 
		int maxStackSize;
		int currentValue;
		int *list;
		stackImp();
		stackImp(int size);
		stackImp(stackImp &otherStack);
		void initilize(int size);
		~stackImp();
		bool isFull();
		bool isEmpty();	
		void pop();
		void push(int data);
		int top();
		void printList();
};
		