#include <iostream>
using namespace std;

template <class Type>

struct nodeType
{
	Type info;
	nodeType<Type> *link;
};


template <class Type>

class linkedStackType
{
	public:
		const linkedStackType<Type>& operator=(const linkedStackType<Type>&);

		bool isEmptyStack() const;

		bool isFullStack() const;

		void initializeStack();
	
		void push(const Type& newItem);

		Type top() const;

		void pop();
	
		linkedStackType();

		linkedStackType(const linkedStackType<Type>& otherStack);

		~linkedStackType();

	private:
		
		nodeType<Type> *stackTop;

		void copyStack(const linkedStackType<Type>& otherStack);
};
		
	

	
