#include <iostream>
using namespace std;

int partition(int arr[], int start, int end) 
{

    int i = start - 1;

    int pivot = arr[end];

    for (int j = start; j <= end - 1; j++) 
	{
        if (arr[j] < pivot) 
	{
            i++;
	    int temp = arr[i];
	    arr[i] = arr[j];
	    arr[j] = temp;
        }
    }

    ++i;
    
    int temp = arr[i];
    arr[i] = arr[end];
    arr[end] = temp;

    return i;
}



void quickSort(int arr[], int start, int end) {

	int pi = 1;
  
    while (pi > 0) {

        pi = partition(arr, start, end);


	

	 pi = partition(arr, start, pi - 1);
	
	

	 pi = partition(arr, pi + 1, end);


    }
}


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

	quickSort(arr,0,size-1);
    


	printArray(arr,size);



return 0;
};
	


