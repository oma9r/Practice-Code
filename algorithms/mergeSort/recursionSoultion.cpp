// this solution is from freeCodeCamp.org video, i will try to solve it by myself

#include <iostream>
#include <array>
using namespace std;
void merge(int arr[], int start, int mid, int end)
{
	int temp[end - start + 1];
	
	int i = start; // first element of first sub-array
	int j = mid + 1; // first element of second sub-array
	int k = 0;

	while(i <= mid && j <= end)
	{
		if(arr[i] <= arr[j])
		{
			temp[k] = arr[i];
			i++;
			k++;
		}

		else
		{
			temp[k] = arr[j];
			j++;
			k++;
		}
	};

	while(i <= mid)
	{
		temp[k] = arr[i];
		k++;
		i++;

	};

	
	while(j <= end)
	{
		temp[k] = arr[j];
		k++;
		j++;
	};

	for(i = start; i <= end;i++)
	{
		arr[i] = temp[i-start];
	};
};	


void mergeSort(int arr[], int start, int end)
{
	if(start < end)
	{
		int mid = (start + end) / 2;
		mergeSort(arr,start,mid);
		mergeSort(arr,mid+1,end);
		merge(arr,start,mid,end);

	}
};


void storeArray(int arr[],int size)
{
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    };


}


void printArray(int arr[],int size)
{
    cout << "[";
    for(int i=0; i < size; i++)
    {
        if(i == size - 1)
        {
            cout << arr[i] << "]";
            break;
        }
        cout << arr[i] << ",";
    };
    

};


int main()
{

    	int size; // size of the array,first line input
    	cin >> size;
    	int arr[size];
    
    
        storeArray(arr,size);
    

	mergeSort(arr,0,size-1);

	printArray(arr,size);
	



	return 0;
};
