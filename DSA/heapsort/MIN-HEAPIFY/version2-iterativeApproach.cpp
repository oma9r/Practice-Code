#include <iostream>
#include <vector>
using namespace std;

void minHeapify(vector<int> &A, int i) {



while(true){
 

    int l = 2 * i + 1;
    int r = 2 * i + 2;

    int smallest = i;

    if (l < A.size() && A[l] < A[i]) {
        smallest = l;
    }

    if (r < A.size() && A[r] < A[smallest]) {
        smallest = r;
    }

	if(smallest == i) break;

        swap(A[smallest], A[i]);
	i = smallest;

}


}

void printArray(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}


bool isMinHeap(vector <int> &A){

	for(int i = A.size()/2; i >= 0;i--){

		int l = i * 2 + 1;
		int r = i * 2 + 2;

		if(l < A.size() && A[l] < A[i]) return false;
		if(r < A.size() && A[r] < A[i]) return false;
	}

	return true;
}

int main() {
    vector<int> A = {16, 17, 18, 10, 9, 11, 20, 13, 15,-1,0,22,24,25,26};

    //maxHeapify(A, 0);
    //printArray(A);

    //cout << "second: " << endl;

    //maxHeapify(A, 0);
    //printArray(A);
	    printArray(A);

		if(isMinHeap(A)) cout << "the array is min heap" << endl;
	else cout << "The array is not" << endl;

	for (int i=A.size()/2; i >= 0; i--){

	    //cout << i << " - ";
		//cout << "==========================================================="<<endl;
		//cout << "before: " << endl;

	    minHeapify(A, i);
		//cout << "after: " << endl;
    	    //printArray(A);


	}

	    	    printArray(A);

	if(isMinHeap(A)) cout << "the array is min heap" << endl;
	else cout << "The array is not" << endl;

    return 0;
}