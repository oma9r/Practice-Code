#include "../heapsort/priorityQueueLibrary.h"


int main()
{
	vector <int> A = {5,22,3,17,10,84,19,6,9};

	cout << "Before Sorting:";
	printArray(A);

	heapsort(A);
	cout << "After Sorting:";
	printArray(A);

	cout << "The min value: " << min(A) << endl;

	insertMin(A,3);

//	cout << "The max value: " << min(A) << endl;

//	cout << "The extract max value: " << extractMin(A) << endl;


	if(min(A) == extractMin(A)){cout << "Matched!" << endl;}
	else {cout << "Not Matched!" << endl;}

	heapsort(A);

	cout << "After extract the min: " << endl;
	cout << "The max value: " << min(A) << endl;

	cout << "==================================" << endl;


	cout << "Before derceaseKey:";
	printArray(A);

	decreaseKey(A,4,8);
	

	cout << "After:";
	printArray(A);

	printCheckSorted(isSorted(A));
        
        return 0;
}
