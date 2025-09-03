#include <iostream>
using namespace std;


void print(int i, int base)
{
	if(i == base) return;

	else
	{
		cout << i << " ";
		print(i-1,base);
	}
};




int main()
{

	print(10,0);

	

	return 0;

}