#include "../heapsort/heapLibrary-v2.h"


void maxHeapify(vector<int> &A, int i,int size) {

while(true){
 

    int l = 2 * i + 1;
    int r = 2 * i + 2;

    int largest = i;

    if (l < size && A[l] > A[i]) {
        largest = l;
    }

    if (r < size && A[r] > A[largest]) {
        largest = r;
    }

	if(largest == i) break;

        swap(A[largest], A[i]);
	i = largest;

}


};


bool isMaxHeap(vector <int> &A){

	for(int i = A.size()/2; i >= 0;i--){

		int l = i * 2 + 1;
		int r = i * 2 + 2;

		if(l < A.size() && A[l] > A[i]) return false;
		if(r < A.size() && A[r] > A[i]) return false;
	}

	return true;
};

void minHeapify(vector<int> &A, int i,int size) {



while(true){
 

    int l = 2 * i + 1;
    int r = 2 * i + 2;

    int smallest = i;

    if (l < size && A[l] < A[i]) {
        smallest = l;
    }

    if (r < size && A[r] < A[smallest]) {
        smallest = r;
    }

	if(smallest == i) break;

        swap(A[smallest], A[i]);
	i = smallest;

}


};

bool isMinHeap(vector <int> &A){

	for(int i = A.size()/2; i >= 0;i--){

		int l = i * 2 + 1;
		int r = i * 2 + 2;

		if(l < A.size() && A[l] < A[i]) return false;
		if(r < A.size() && A[r] < A[i]) return false;
	}

	return true;
};


void printArray(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

void buildMaxHeap(vector <int>& A){

	for(int i = A.size()/2; i>= 0;i--){

		maxHeapify(A,i,A.size());
	}

}

void buildMinHeap(vector <int>& A){

	for(int i = A.size()/2; i>= 0;i--){

		minHeapify(A,i,A.size());
	}

}



void heapsort(vector<int> &A){

	buildMaxHeap(A);

	int size = A.size();

	for(int i= A.size()-1; i > 0;i--){
		swap(A[0],A[i]);
		--size;
		maxHeapify(A,0,size);
	}
}



bool isSorted(vector <int> &A){

	for(int i=1; i < A.size();i++){

		if(A[i] < A[i-1]) return false;

	}

	return true;
}


void heapsortMin(vector<int> &A){

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


void printCheckSorted(bool sorted){

	if(sorted){ cout << "Sorted!" << endl;}

	else {cout << "Not Sorted!" << endl;}
}

