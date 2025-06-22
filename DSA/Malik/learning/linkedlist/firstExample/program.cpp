// #include "nodeType.h"
#include "List.h"

int main()
{

	List list1;

	for(int i = 0; i<11;++i)
	{

	list1.insertNodeFirst(i);
	}

	list1.printList();

	//cout << "Test" << endl;

	return 0;
};