#include "arrayListType.h"

template <class elemType>

bool arrayListType<elemType>::isEmpty() const
{
	return (length == 0);
}

bool arrayListType<elemType>::isFull() const
{
	return (length == maxSize);
}

int arrayListType<elemType>::maxListSize() const
{
	return maxSize;
}

void arrayListType<elemType>::print() const
{
	for(int i = 0; i < length; ++i)
		cout << List[i] << " ";
	
	cout << endl;
}

bool arrayListType<elemType>::isItemAtEqual(int location, const elemType& item) const
{
	return (List[location] == item);
}

void arrayListType<elemType>::insertAt(int location, const elemType& insertItem)
{
	if(location < 0 || location >= maxSize)
						cerr << "The position of the item to be inserted is out of range" << endl;
	else
		if(length >= maxSize)
					cerr << "Cannot insert in a full list" << endl;
		else
		{
			for(int i = length; i > location; --i)
								list[i] = list[i-1];

			list[location] = insertItem;
		
			length++;
		}
}// end function insertAt


void arrayListType<elemType>::insertEnd(const elemType& insertItem)
{
	if(length >= maxSize)
				cerr << "Cannot insert in a full list" << endl;
	else
	{
		list[length] = insertItem;
		length++;
	}
}

void arrayListType<elemType>::removeAt(int location)
{
	if(location < 0 || location >= length)
						cerr << "The location of the item to be removed is out of the range" << endl;
	else 
	{
		for(int i = location; i < length - 1; ++i)
		list[i] = list[i+1];

		length--;
	}
}// end removeAt function

void retrieveAt(int location,elemType& retItem) const
{
	if(location < 0 || location >= length)
						cerr << "The location of the item to be retrieved is out of the range" << endl;
	else
		retItem = list[location];
}

void arrayListType<elemType>::replaceAt(int location,const elemType& repItem)
{
	if(location < 0 || location >= length)
						cerr << "The location of the item to be replaced is out of range." << endl;
	else
		list[location] = repItem;
}

void arrayListType<elemType>::clearList()
{
	length = 0;
}

arrayListType<elemType>::arrayListType(int size)
{
	if(size < 0)
	{
		cerr << "The array size must be positive. Creating an array of size 100." << endl;

		maxSize = 100;
	}

	else
		maxSize = size;

	length = 0;

	list = new elemType[maxSize];
	assert(list != NULL);
}

arrayListType<elemType>::~arrayListType()
{
	delete [] list;
}
	


