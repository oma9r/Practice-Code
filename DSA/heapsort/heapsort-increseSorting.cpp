#include "heapLibrary-v2.h"





int main(){


	vector <int> A = {5,22,3,17,10,84,19,6,9};

	cout << "Before:";
	printArray(A);



	heapsort(A);

	cout << "After: ";
	printArray(A);


	if(isSorted(A)) cout << "The list is sorted!" << endl;
	else		cout << "The list is not sorted!" << endl;


return 0;
}