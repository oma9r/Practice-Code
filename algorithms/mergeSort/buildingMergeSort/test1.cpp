#include <iostream>
using namespace std;

void printArray(int arr[], int N){

	cout << " The first element of the array: << " << arr[0] << endl;
	cout << "[";
	for(int i=0; i< N; i++){

		if(N - i == 1)
		{
			cout << arr[i] << "]" << endl;
			break;
		}

		cout << arr[i] << ",";
	
	}

		cout << "*****finish print array*****" << endl;



}




void mergeSort(int arr[],int low,int mid,int high){


	int i = low;
	int j = mid + 1;

	int k = 0;

	int data[high - low + 1];

	while( i <= mid && j <= high){

		//cout << "Enter the main while loop: " << endl;
	
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

	//cout << "End While loop" << endl;


	if(k != 0){

		//cout << "i while" << endl;

		while(i<=mid){

			data[k] = arr[i];
			++k;
			++i;
		}
	

		//cout << "j while" << endl;
	
		while(j<=high){

			data[k] = arr[j];
			++k;
			++j;
		}
	}

	arr = data;

	//cout << "End mergeSort function" << endl;
	

	
}; 


void merge(int arr[], int low, int high){

						cout << "==========================================================="<<endl;

	if(high > low){
							printArray(arr,high - low + 1);

							cout << "low = " << low << ",high =  " << high << endl; 

		int mid = ( (high + low) / 2 );// - 1 ;

					cout << "mid = " << mid << endl;
										int diff = high - low;
										cout << "The difference is between low and high: " << high << " - " << low << endl;
										printArray(arr,high - low+1);

		merge(arr,low,mid);
										printArray(arr,high - low+1);
		cout << "finish merge 1 with mid = " << mid << endl;
		//++mid;
		//cout << "mid = " << mid << " so we need to go out" << endl;
										printArray(arr,high - low+1);
		//if(mid == 4) return;
		merge(arr,mid+1,high);
		//cout << "finish merge 2" << endl;
		mergeSort(arr,low,mid,high);
		printArray(arr,high - low+1);
		cout << "finish mergeSort - main" << endl;
	}
};	




		





int main()
{

	int arr[8] = {7,4,8,1,3,6,5,2};

	int data[8];

	//cout << "Before Sorting: " << endl;

	//printArray(arr,8);


	merge(arr,0,7);

	//cout << "After Sorting: " << endl;

	//printArray(data,8);


        return 0;
};