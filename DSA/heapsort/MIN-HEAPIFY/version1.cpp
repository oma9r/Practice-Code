#include <iostream>
#include <vector>
using namespace std;

void minHeapify(vector<int> &A, int i) {

    int l = 2 * i + 1;
    int r = 2 * i + 2;

    int smallest = i;

    if (l < A.size() && A[l] < A[i]) {
	//cout << "left: A[" << l <<"] = " << A[l] << endl;
	//cout << "i: A[" << i <<"] = " << A[i] << endl;
	//cout << "=========================" << endl;
        smallest = l;
    }

    if (r < A.size() && A[r] < A[smallest]) {
	//cout <<"Right: A[" << r <<"] = " << A[r] << endl;
	//cout << "Smallest: A[" << smallest <<"] = " << A[smallest] << endl;
	//cout << "=========================" << endl;
        smallest = r;
    }

    if (smallest != i) {
        swap(A[smallest], A[i]);
	//cout << "i: A[" << i <<"] = " << A[i] << endl;
	//cout << "left: A[" << smallest <<"] = " << A[smallest] << endl;
	//cout << "=========================" << endl;
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
    vector<int> A = {16,13,12,6,5,2,1};

	cout << "before: " << endl;
	    printArray(A);

	for (int i=A.size()/2; i > -1; i--){

	    //cout << i << " - ";
		cout << "==========================================================="<<endl;
		//cout << "before: " << endl;

	    minHeapify(A, i);
		cout << "after: " << endl;
    	    printArray(A);


	}

    return 0;
}