#include "List.h"
List::List()
{
	cout << "============================" << endl;
	cout << "Inititlize this list......" << endl;
	//this->setHeadNode(NULL);
	//this->last = NULL;

	this->setSize(0);
	this->setMaxSize(10);

	cout << "End constr" << endl;
	cout << "============================" << endl;

};

List::~List()
{
	nodeType *current;
	current = new nodeType;

	//nodeType *q;
	//q = new node;

	current = this->getHeadNode();
	//q = current;

	while(current->getLink() != NULL)
	{
		delete current;

		current = current->getLink();

		//q = current;

		// try to use current directly
	}


	delete current;

	this->setHeadNode(NULL);
	this->last = NULL;

	this->setSize(0);

	cout << "desrtoy the list" << endl;
	cout << "============================" << endl;

};

void List::setHeadNode(nodeType* node)
{
	this->head = node;
};

nodeType* List::getHeadNode() const
{
	return this->head;
};

void List::setSize(int size)
{
	this->size = size;
};

int List::getSize() const
{
	return this->size;
};

void List::setMaxSize(int size)
{
	this->maxSize = size;
};

int List::getMaxSize() const
{
	return this->maxSize;
};

bool List::insertNodeFirst(int info)
{
	nodeType *insertNode;
	insertNode = new nodeType;
	insertNode->setInfo(0);
	insertNode->setLink(NULL);
	insertNode->setInfo(info);


	bool returnResult = false;

	if(this->getHeadNode() == NULL)
	{
		this->head = insertNode;
		last = insertNode;

		returnResult = true;

		
	}

	else
	{

		insertNode->setLink(this->getHeadNode());
		this->setHeadNode(insertNode);

		returnResult = true;
	}

	if(returnResult) this->setSize(++size); 

	return returnResult;
};

































void List::printList() const
{
	nodeType *current;
	current = new nodeType;

	current = this->getHeadNode();

	cout << current->getInfo() << endl;

	
	cout << "=========================" << endl;
	cout << "List start: " << endl;

	for(int i=0; current->getLink() == NULL;++i)
	{
		if(i == 11) break;
		if(current->getInfo() == NULL)
		{
			cout << i << "NULL value: ";
			cout << current->getInfo() << endl;
		}

		else
		{
			cout << i << "is not NULL value: ";
			cout << current->getInfo() << endl;
		}

		current = current->getLink();
	}

	delete current;

	cout << "List end."<< endl;
	cout << "=========================" << endl;
};
	
		


		
	
		
		
		