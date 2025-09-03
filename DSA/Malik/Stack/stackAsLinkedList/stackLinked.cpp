#include "stackLinked.h"


template <class Type>
linkedStackType<Type>::linkedStackType()
{
	stackTop = NULL;
}


template <class Type>
bool linkedStackType<Type>::isEmptyStack() const
{
	return (stackTop == NULL);
}

template <class Type>
bool linkedStackType<Type>::isFullStack() const
{
	return false;
}

template <class Type>
void linkedStackType<Type>::initializeStack()
{
	
	nodeType<Type> *temp;

	while(stackTop != NULL)
	{
		temp = stackTop;
		stackTop = stackTop->link;
		delete temp;
	}
}

template <class Type>
void linkedStack<Type>::push(const Type& newItem)
{
	nodeType<Type> *newNode;

	newNode = new nodeType<Type>;

	newNode->info = newItem;
	newNode->link = stackTop;

	stackTop = newNode;

};

template <class Type>
Type linkedStack<Type>::top() const
{
	if(isEmptyStack())
	{
		cout <<"The stack is empty..." << endl;
		
		return NULL;
	}

	else
	{
		return stackTop->info;
	}

};

template <class Type>
void linkedStack<Type>::pop()
{

	if(!isEmptyStack()) 
	{
		nodeType<Type> *temp;

		temp = new nodeType<Type>;

		temp = stackTop;

		stackTop = stackTop->link;

		delete temp;
	}

	else
	{
		cout << "Can't delete from Empty stack." << endl;
	}
}


template <class Type> 
void linkedStackType<Type>::copyStack(const linkedStackType<Type>& otherStack)
{
	nodeType<Type> *newNode,*current,*last;

	if(stackTop != NULL)
	{
		initializeStack();
	}

	if(otherStack.stackTop == NULL)
	{
		stackTop = NULL;
	}

	else
	{
		current = otherStack.stackTop;

		stackTop = new nodeType<Type>;

		stackTop->info = current->info;
		stackTop->link = NULL;
		last = stackTop;
		current = current->link;

		while(current != NULL)
		{
			newNode = new nodeType<Type>;
		
			newNode->info = current->info;
			newNode->link = NULL;
			last->link = newNode;
			last = newNode;
			current = current->link;
		}
	}
};
	

}
	

template <class Type>
linkedStackType<Type>::linkedStackType()
{
	initializeStack();
}

template <class Type>
linkedStackType<Type>::linkedStackType(const linkedStackType<Type>& otherStack)
{
	stackTop = NULL;
	copyStack(otherStack);
}

template <class Type>
linkedStackType<Type>::~linkedStackType()
{
	initializeStack();
}
	

template <class Type>
const linkedStackType<Type>& linkedStackType<Type>::operator=(const linkedStackType<Type>& otherStack)
{
	if(this != &otherStack)
				copyStack(otherStack);
	return *this;
}