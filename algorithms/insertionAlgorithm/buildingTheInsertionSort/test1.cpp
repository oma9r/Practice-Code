#include <iostream>
using namespace std;


void insertionSort(int arr[],int size)
{
	
	int i = 1;
	int j = i;

	while(i < size)
	{
		j = i;

		while(j > 0){
			

			if(arr[j] <= arr[j-1]){

				swap(arr[j],arr[j-1]);
			}

			j = j - 1;

		}

		i = i + 1;
	}

}


void printArray(int arr[], int size)
{
	cout << "[";
		
	for(int i=0; i < size; i++)
	{
		if( i == size - 1)
		{
			cout << arr[i] << "]" << endl;
			break;
		} 
		cout << arr[i] << ",";
	}
}
		 











int main()
{

	// Test Cases for insertionSort

	// Original test
	printf("Test 0: Original array {5,2,4,6,1,3}\n");
	int arr[] = {5,2,4,6,1,3};
	insertionSort(arr,6);
	printArray(arr,6);

	// Test Case 1: Already sorted array
	printf("Test 1: Already sorted array {1,2,3,4,5,6}\n");
	int arr1[] = {1,2,3,4,5,6};
	insertionSort(arr1, 6);
	printArray(arr1, 6);

	// Test Case 2: Reverse sorted array
	printf("Test 2: Reverse sorted array {6,5,4,3,2,1}\n");
	int arr2[] = {6,5,4,3,2,1};
	insertionSort(arr2, 6);
	printArray(arr2, 6);

	// Test Case 3: Array with duplicates
	printf("Test 3: Array with duplicates {4,2,5,2,3,4}\n");
	int arr3[] = {4,2,5,2,3,4};
	insertionSort(arr3, 6);
	printArray(arr3, 6);

	// Test Case 4: All elements equal
	printf("Test 4: All elements equal {7,7,7,7,7,7}\n");
	int arr4[] = {7,7,7,7,7,7};
	insertionSort(arr4, 6);
	printArray(arr4, 6);

	// Test Case 5: Single element
	printf("Test 5: Single element {42}\n");
	int arr5[] = {42};
	insertionSort(arr5, 1);
	printArray(arr5, 1);

	// Test Case 6: Empty array
	printf("Test 6: Empty array {}\n");
	int arr6[] = {};
	insertionSort(arr6, 0);
	printArray(arr6, 0);

	// Test Case 7: Negative numbers
	printf("Test 7: Negative numbers {-3,-1,-7,-5,0}\n");
	int arr7[] = {-3,-1,-7,-5,0};
	insertionSort(arr7, 5);
	printArray(arr7, 5);

	// Test Case 8: Mix of positive and negative numbers
	printf("Test 8: Mix of positive and negative numbers {3,-2,7,0,-5,1}\n");
	int arr8[] = {3,-2,7,0,-5,1};
	insertionSort(arr8, 6);
	printArray(arr8, 6);

	// Test Case 9: Large numbers
	printf("Test 9: Large numbers {1000000,500000,2000000,100,999999}\n");
	int arr9[] = {1000000, 500000, 2000000, 100, 999999};
	insertionSort(arr9, 5);
	printArray(arr9, 5);

	// Test Case 10: Already sorted except last element
	printf("Test 10: Already sorted except last element {1,2,3,4,6,0}\n");
	int arr10[] = {1,2,3,4,6,0};
	insertionSort(arr10, 6);
	printArray(arr10, 6);

	// Trick Case 1: Last element smaller than all others
	printf("Trick Case 1: Last element smaller than all others {5,6,7,8,9,1}\n");
	int arr11[] = {5,6,7,8,9,1};
	insertionSort(arr11, 6);
	printArray(arr11, 6);

	// Trick Case 2: First element largest
	printf("Trick Case 2: First element largest {9,1,2,3,4,5}\n");
	int arr12[] = {9,1,2,3,4,5};
	insertionSort(arr12, 6);
	printArray(arr12, 6);

	// Trick Case 3: Alternating high and low values
	printf("Trick Case 3: Alternating high and low values {1,9,2,8,3,7,4,6,5}\n");
	int arr13[] = {1,9,2,8,3,7,4,6,5};
	insertionSort(arr13, 9);
	printArray(arr13, 9);

	// Trick Case 4: All duplicates except one outlier
	printf("Trick Case 4: All duplicates except one outlier {4,4,4,0,4,4}\n");
	int arr14[] = {4,4,4,0,4,4};
	insertionSort(arr14, 6);
	printArray(arr14, 6);

	// Trick Case 5: Large array with reverse sorted blocks
	printf("Trick Case 5: Large array with reverse sorted blocks {10,9,8,1,2,3,7,6,5,4}\n");
	int arr15[] = {10,9,8,1,2,3,7,6,5,4};
	insertionSort(arr15, 10);
	printArray(arr15, 10);


	
	
	return 0;
};