#include <iostream>
#include <assert.h>
using namespace std;



class queue
{
	public: 
		queue();
		queue(int);
		queue(queue&);
		void initilizeQueue();
		int front();
		int back();
		int backIndex();
		bool isEmpty();
		bool isFull();
		int size();
		int capacity();
		void push(int);
		void pop();
		void swap(queue &,queue &);
		void copyQueue(queue &);
		~queue();


	private: 
		int maxSizeQueue;
		int frontQueue;
		int backQueue;
		int count;
		int *list;
};