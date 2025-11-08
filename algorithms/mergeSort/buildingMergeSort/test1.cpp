#include <iostream>
using namespace std;




void mergeSort(int arr[],int low,int mid,int high,int data[]){


	int i = low;
	int j = mid + 1;

	int k = 0;

	//int data[high - low + 1];

	while( i <= mid && j <= high){
	
		if(arr[i] <= arr[j]){
			
			data[k] = arr[i];
			++i;
		}

		else{
			data[k] = arr[j];
			++j;
		}

		++k;
	}

	if(i <= mid){

		while(i<=mid){

			data[k] = arr[i];
			++k;
			++i;
		}
	}

	else if(j <= high){
		while(j<=high){

			data[k] = arr[j];
			++k;
			++j;
		}
	}

	
}; 


void merge(int arr[], int low, int high,int data[]){

	if(low < high){

		int mid = high/2;

		merge(arr,low,mid,data);
		merge(arr,mid+1,high,data);
		mergeSort(arr,low,mid,high,data);
	}
};	



void printArray(int arr[], int N){
	cout << "[";
	for(int i=0; i< N; i++){

		if(N - i == 1)
		{
			cout << arr[i] << "]" << endl;
			break;
		}

		cout << arr[i] << ",";
	
	}


}
		





int main()
{

	int arr[8] = {7,4,8,1,3,6,5,2};

	int data[8];

	cout << "Before Sorting: " << endl;

	printArray(arr,8);

	merge(arr,0,7,data);

	cout << "After Sorting: " << endl;

	printArray(data,8);


        return 0;
};