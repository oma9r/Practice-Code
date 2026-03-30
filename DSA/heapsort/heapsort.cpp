#include "heapLibrary.h"


void heapsort(vector<int> &A){

	buildMaxHeap(A);

	//int size = A.size();

	cout << "===============Before===============" << endl;
	printArray(A);
	
			cout << "=============Start===============" << endl;
	for(int i= A.size(); i > 0;i--){
		swap(A[0],A[i]);
		//--size;
		maxHeapify(A,0);
		printArray(A);
		cout << "============================" << endl;
	}
}

bool isSorted(vector <int> &A){

	for(int i=1; i < A.size();i++){

		if(A[i] > A[i-1]) return false;


	}

	return true;
}



int main(){


	vector <int> A = {5,22,3,17,10,84,19,6,9};

	//cout << "===============Before===============" << endl;
	//printArray(A);

	if(isSorted(A)) cout << "The list is sorted!" << endl;
	else		cout << "The list is not sorted!" << endl;

	heapsort(A);

	cout << "===============After===============" << endl;
	printArray(A);


	if(isSorted(A)) cout << "The list is sorted!" << endl;
	else		cout << "The list is not sorted!" << endl;


return 0;
}