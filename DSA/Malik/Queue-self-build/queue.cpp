#include "queue.h"


queue::queue()
{
	this->initilizeQueue();
};

queue::queue(int size)
{
	this->initilizeQueue();
	this->maxSizeQueue = size;
	
};

queue::queue(queue &otherQueue)
{
	
		this->copyQueue(otherQueue);
};

void queue::initilizeQueue()
{
	this->maxSizeQueue = 100;
	this->frontQueue = 0;
	this->backQueue = 0;
	this->count = 0;
	list = new int[maxSizeQueue];
};

int queue::front()
{
	assert(!isEmpty());
	return list[frontQueue];
	

};

int queue::back()
{
	assert(!isEmpty());
	return list[backQueue-1];
};

int queue::backIndex()
{
	return backQueue;
};

bool queue::isEmpty()
{
	return (count == 0);
};

bool queue::isFull()
{
	return (count == maxSizeQueue);
};

int queue::size()
{
	return count;
};

int queue::capacity()
{
	return maxSizeQueue;
}

void queue::push(int newElement)
{
	if(isFull())
	{
		cout <<"sorry, the queue is full to use..." << endl;
	}
	else
	{
		list[backQueue] = newElement;
		++count;
		++backQueue;
	}
};

void queue::pop()
{
	if(isEmpty())
	{
		cout << "there's no element to remove from the queue..." << endl;
	}
	
	else
	{
		--frontQueue;
		--count;
	}
};

void queue::swap(queue &queue1,queue &queue2)
{
	queue temp(queue1);

	queue1.copyQueue(queue2);

	queue2.copyQueue(temp);
	
};

queue::~queue()
{
	delete [] list;
	count = 0;
};

void queue::copyQueue(queue &otherQueue)
{
	
		this->initilizeQueue();
		this->maxSizeQueue = otherQueue.size();
		
		while(!otherQueue.isEmpty())
		{
			this->push(otherQueue.front());
			otherQueue.pop();
		}
	
};
	
	
	
