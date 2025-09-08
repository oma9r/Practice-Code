#include "linkedQueueType.h"

template <class Type>
bool linkedQueueType<Type>::isEmptyQueue() const
{
	return (queueFront == NULL);
}

template <class Type>
bool linkedQueueType<Type>::isFullQueue() const
{
	return false;
}

template <class Type>
void linkedQueueType<Type>::initializeQueue()
{
	nodeType<Type> *temp;

	while(queueFront != NULL)
	{
		temp = queueFront;
		queueFront = queueFront->link;

		delete temp;
	}

	queueRear = NULL;
}

template <class Type>
void linkedQueueType<Type>::addQueue(const Type& newELement)
{
	nodeType<Type> *newNode;

	newNode = new nodeType<Type>;

	newNode->info = newELement;
	newNode->link = NULL;

	if(queueFront == NULL)
	{
		queueFront = newNode;
		queueRear = newNode;
	}
	else
	{
		queueRear->link = newNode;
		queueRear = queueRear->link;
	}
}

template <class Type>
Type linkedQueueType<Type>::front() const
{
	assert(queueFront != NULL);
	return queueFront->info;
}

template <class Type>
Type linkedQueueType<Type>::back() const
{
	assert(queueRear != NULL)
	return queueRear->info;
}

template <class Type>
void linkedQueueType<Type>::deleteQueue()
{
	nodeType<Type> *temp;
	
	if(!isEmptyQueue())
	{
		temp = queueFront;
		queueFront = queueFront->link;

		delete temp;

		if(queueFront == NULL)
		{
			queueRear = NULL;
		}
	}

	else
	{
		cout << "Can't remove from an empty queue" << endl;
	}
}

	





