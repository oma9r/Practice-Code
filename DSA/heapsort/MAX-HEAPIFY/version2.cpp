#include <iostream>
#include <vector>
using namespace std;

void maxHeapify(vector<int> &A, int i) {

    int l = 2 * i + 1;
    int r = 2 * i + 2;

    int largest = i;

    if (l < A.size() && A[l] > A[i]) {
        largest = l;
    }

    if (r < A.size() && A[r] > A[largest]) {
        largest = r;
    }

    if (largest != i) {
	//cout << "We fix in i =  " << i << endl;
        swap(A[largest], A[i]);
        maxHeapify(A, largest);
    }
}

void printArray(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int main() {
    vector<int> A = {16, 17, 18, 10, 9, 11, 20, 13, 15,-1,0,22,24,25,26};

    //maxHeapify(A, 0);
    //printArray(A);

    //cout << "second: " << endl;

    //maxHeapify(A, 0);
    //printArray(A);
	    printArray(A);

	for (int i=0; i < 3; i++){

	    cout << i << " - ";
		cout << "==========================================================="<<endl;
		//cout << "before: " << endl;

	    maxHeapify(A, 5);
		cout << "after: " << endl;
    	    printArray(A);


	}

    return 0;
}