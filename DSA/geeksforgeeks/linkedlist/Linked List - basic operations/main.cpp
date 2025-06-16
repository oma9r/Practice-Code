#include <iostream>
using namespace std;
#include "list.h"

void fasl()
{
	cout << "============" << endl;
};


int main()
{
	list l1;
	l1.addfront(5);
	l1.addfront(6);
	l1.addfront(7);
	l1.print();
	fasl();
	l1.addback(8);
	l1.addback(0);
	l1.addback(9);
	l1.print();
	fasl();
	l1.add(0);
	l1.print();
	fasl();
	l1.search(7);
	cout << "with------------------------" << endl;
	l1.search(100);
	cout << "without--------------------" << endl;
	l1.addback(123);
	cout << "counter: " << l1.counter() << endl;
	cout << "before reverse" << endl;
	l1.print();
	l1.reverse();
	cout << "after reverse" << endl;
	l1.print();
	cout << "before delete" << endl;
	fasl();
	l1.deleted(6);
	cout << "after delete" << endl;
	l1.print();
	fasl();
	cout << "before invalid delete" << endl;
	l1.deleted(456);
	fasl();
	cout << "after invalid delete" << endl;
	l1.print();
	fasl();
	//cout << "before delete all list" << endl;
	//l1.delete_list();
	//l1.print();
	//l1.get_value(6);
	//l1.get_value(2);
	l1.get_value_end(4);
	l1.get_value_end(5);

	return 0;
}