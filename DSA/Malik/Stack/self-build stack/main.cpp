#include "stackImp.h"
using namespace std;






int main()
{

	stackImp s1;

	s1.pop();
	s1.push(10);
	cout <<"Top: " <<  s1.top() << endl;
	s1.push(14);
	cout <<"Top: " <<  s1.top() << endl;
	s1.push(16);
	cout <<"Top: " <<  s1.top() << endl;
	s1.push(17);
	cout <<"Top: " <<  s1.top() << endl;
	s1.push(18);
	s1.pop();
	cout <<"Top: " <<  s1.top() << endl;
	s1.push(19);
	cout <<"Top: " <<  s1.top() << endl;

	s1.printList();


	return 0;
}