#include <iostream>
#include <vector>
using namespace std;

void maxHeapify(vector<int> &A, int i) {



while(true){
 

    int l = 2 * i + 1;
    int r = 2 * i + 2;

    int largest = i;

    if (l < A.size() && A[l] > A[i]) {
        largest = l;
    }

    if (r < A.size() && A[r] > A[largest]) {
        largest = r;
    }

	if(largest == i) break;

        swap(A[largest], A[i]);
	i = largest;

}


}

void printArray(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}


bool isMaxHeap(vector <int> &A){

	for(int i = A.size()/2; i >= 0;i--){

		int l = i * 2 + 1;
		int r = i * 2 + 2;

		if(l < A.size() && A[l] > A[i]) return false;
		if(r < A.size() && A[r] > A[i]) return false;
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

		if(isMaxHeap(A)) cout << "the array is max heap" << endl;
	else cout << "The array is not" << endl;

	for (int i=A.size()/2; i >= 0; i--){

	    cout << i << " - ";
		cout << "==========================================================="<<endl;
		//cout << "before: " << endl;

	    maxHeapify(A, i);
		cout << "after: " << endl;
    	    printArray(A);


	}

	if(isMaxHeap(A)) cout << "the array is max heap" << endl;
	else cout << "The array is not" << endl;

    return 0;
}