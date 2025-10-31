#include <iostream>
using namespace std;


void insertionSortDec(int arr[], int size)
{
	int i = 1;
	int j = i;

	while(i < size)
	{
		j = i;

		while(j > 0)
		{
			if(arr[j] >= arr[j-1])
			{
				swap(arr[j-1],arr[j]);
			}

			j = j - 1;
		}
		
		i = i + 1;
	}
}
		
		









void printArray(int arr[],int size)
{
	
	cout << "[";
	for(int i = 0; i < size; i++)
	{
		if(i == size - 1)
		{
			cout << arr[i] << "]" << endl;
			break;
		}
		cout << arr[i] << ",";
	}
}






int main()
{
	int arr[] = {31,41,59,26,41,58};

	insertionSortDec(arr,6);
	
	printArray(arr,6);
        


      

        return 0;
}
