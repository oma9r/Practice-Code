#include "queueADT.h"

template <class Type>

class queueType: public queueADT<Type>
{
	public:
		const queueType<Type>& operator=(const queueType<Type>&);

		bool isEmptyQueue() const;

		bool isFullQueue() const;

		void initializeQueue();

		Type front() const;

		Type back() const;

		void addQueue(const Type& queueElement);

		void deleteQueue();

		queueType(int queueSize = 100);

		queueType(const queueType<Type>& otherQueue);

		~queueType();

	private:
		int maxQueueSize;
		int count;

		int queueFront;

		int queueRear;

		Type *list;
};