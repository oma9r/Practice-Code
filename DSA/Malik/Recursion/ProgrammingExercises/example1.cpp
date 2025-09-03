#include <iostream>
#include <string>
using namespace std;

void print(int n)
{
	
	if(n == 0)
	{
		return;
	}

	cout << string(n,'*') << endl;

	print(n-1);

	cout << string(n,'*') << endl;

};
	











int main()
{
	print(4);

	cout << "===========================" << endl;

	print(8);


	return 0;
}