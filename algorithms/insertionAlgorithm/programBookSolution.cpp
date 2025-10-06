#include <iostream>
#include <array>
using namespace std;

void insertionSort(int arr[])
{
	int key = 0;
	for(int j = 1; j < 6;j++)
	{
		key = arr[j];

		int i = j - 1;

		while(i >= 0 && arr[i] > key)
		{
			arr[i+1] = arr[i];
			i = i - 1;
		}

		arr[i+1] = key;
	}
};
	


int main()
{

	int arr[] = {8,2,4,9,3,6};

	insertionSort(arr);

	for(int i=0; i < 6;i++)
	{
		cout << arr[i];
	};
return 0;
};

	
	 