#include "nodeType.h"
class List
{
	private:
			nodeType *head;
			nodeType *last;

			int size;
			int maxSize;



	public: 

	List();

	~List();

	void setHeadNode(nodeType* node);

	nodeType* getHeadNode() const;

	void setSize(int size);

	int getSize() const;

	void setMaxSize(int size);

	int getMaxSize() const;

	bool insertNodeFirst(int info);

	bool insertNodeAt(int info, int location);

	bool insertNodeLast(int info);

	bool deleteNodeFirst();

	bool deleteNodeLast();

	bool deleteNodeAt(int location);

	bool deleteNodeByInfo(int info);

	bool search(int info)const;

	bool searchByLocation(int location)const;

	bool find(int info) const;

	bool reverseList();

	bool isEmpty() const;

	bool isFull() const;

	void printList() const;
};
