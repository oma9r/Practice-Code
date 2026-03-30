#include "heapLibrary.h"


void buildMaxHeap(vector <int>& A){

	for(int i = A.size()/2; i>= 0;i--){

		maxHeapify(A,i);
	}

}



int main(){

	cout << "============Before===============" << endl;
	
	vector <int> A = {5,3,17,10,84,19,6,22,9};
	
	printArray(A);

	buildMaxHeap(A);

	cout << "============After===============" << endl;
	
	printArray(A);

	if(isMaxHeap(A)) cout << "The process is done!" << endl;
	else 		 cout << "There's something wrong!" << endl;












return 0;
}