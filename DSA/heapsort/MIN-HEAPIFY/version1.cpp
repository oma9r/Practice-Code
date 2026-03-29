#include <iostream>
#include <vector>
using namespace std;

void minHeapify(vector<int> &A, int i) {

    int l = 2 * i + 1;
    int r = 2 * i + 2;

    int smallest = i;

    if (l < A.size() && A[l] < A[i]) {
        smallest = l;
    }

    if (r < A.size() && A[r] < A[smallest]) {
        smallest = r;
    }

    if (smallest != i) {
	//cout << "We fix in i =  " << i << endl;
        swap(A[smallest], A[i]);
        minHeapify(A, smallest);
    }
}

void printArray(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int main() {
    vector<int> A = {16,13,12,9,8,7,-1};


	    printArray(A);

	for (int i=0; i < 3; i++){

	    cout << i << " - ";
		cout << "==========================================================="<<endl;
		//cout << "before: " << endl;

	    minHeapify(A, 5);
		cout << "after: " << endl;
    	    printArray(A);


	}

    return 0;
}