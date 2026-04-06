#include "../heapsort/priorityQueueLibrary.h"


int main()
{
	vector <int> A = {5,22,3,17,10,84,19,6,9};

	cout << "Before Sorting:";
	printArray(A);

	heapsortMin(A);
	cout << "After Sorting:";
	printArray(A);

	cout << "The max value: " << max(A) << endl;

	insert(A,99);

//	cout << "The max value: " << max(A) << endl;

//	cout << "The extract max value: " << extractMax(A) << endl;


	if(max(A) == extractMax(A)){cout << "Matched!" << endl;}
	else {cout << "Not Matched!" << endl;}

	heapsortMin(A);

	cout << "After extract the max: " << endl;
	cout << "The max value: " << max(A) << endl;

	cout << "==================================" << endl;


	cout << "Before inceaseKey:";
	printArray(A);

	increaseKey(A,4,12);
	

	cout << "After:";
	printArray(A);

	printCheckSorted(isSortedDecresing(A));
        
        return 0;
}
