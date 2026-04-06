#include "../heapsort/priorityQueueLibrary.h"

void insert(vector<int> &A, int value){

	A.push_back(value);

	heapsortMin(A);
};

int max(vector<int> &A){

	return A[0];
};

int extractMax(vector<int> &A){

	if(A.size() == 0){cerr << "The size of the array is 0!" << endl;}

	heapsort(A);
	int temp = A[A.size()-1];
	A.pop_back();
	return temp;

}

void increaseKey(vector<int> &A, int index, int newValue){

	if(A.size() == 0){cerr << "The size of the array is 0!" << endl;}

	A[index] = newValue;

	heapsortMin(A);



}
