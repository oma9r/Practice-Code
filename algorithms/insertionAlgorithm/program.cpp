#include <iostream>
#include <array>
using namespace std;




int main()
{
	//int arr[6];
	std::array<int,6> arr = {8,2,4,9,3,6};

	int i=1;
	while(i < arr.size())
	{
		
		if(arr[i] < arr[i-1])
		{
			swap(arr[i],arr[i-1]);
		}

		else
		{
			++i;
		}	
	};

	for(int i=0; i < arr.size();i++)
	{
		cout << arr[i] << endl;
	}
	
	




	return 0;
};