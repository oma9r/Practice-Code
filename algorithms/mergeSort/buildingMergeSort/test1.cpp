#include <iostream>
using namespace std;

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






void mergeSort(int arr[],int low,int mid,int high,int data[]){


	int i = low;
									//cout << "i = " << i << " with: " << arr[i] << endl;
	int j = mid + 1;
									//cout << "j = " << j << " with: " << arr[j] << endl;

	int k = 0;

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



		while(i<=mid){

			data[k] = arr[i];
			++k;
			++i;
		}
	

	
		while(j<=high){

			data[k] = arr[j];
			++k;
			++j;
		}



	for(int x=low; x <= high;++x)
	{
		arr[x] = data[x-low];
	}; 

	




	

	
}; 


void merge(int arr[], int low, int high,int data[]){


	if(high > low){

		int mid = ( (high + low) / 2 );
		merge(arr,low,mid,data);
		merge(arr,mid+1,high,data);
		mergeSort(arr,low,mid,high,data);

	}

};	




		





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