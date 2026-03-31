#include "heapLibrary-v2.h"


void heapsort(vector<int> &A){

	buildMinHeap(A);

	int size = A.size();

	for(int i= A.size()-1; i > 0;i--){
		swap(A[0],A[i]);
		--size;
		minHeapify(A,0,size);
	}
}



bool isSortedDecresing(vector <int> &A){

	for(int i=1; i < A.size();i++){

		if(A[i] > A[i-1]) return false;

	}

	return true;
}



int main(){


	vector <int> A = {5,22,3,17,10,84,19,6,9};

	cout << "Before:";
	printArray(A);



	heapsort(A);

	cout << "After: ";
	printArray(A);


	if(isSortedDecresing(A)) cout << "The list is sorted!" << endl;
	else		cout << "The list is not sorted!" << endl;


return 0;
}