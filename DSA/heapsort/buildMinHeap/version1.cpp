#include "heapLibrary.h"


void buildMinHeap(vector <int>& A){

	for(int i = A.size()/2; i>= 0;i--){

		minHeapify(A,i);
	}

}



int main(){

	cout << "============Before===============" << endl;
	
	vector <int> A = {22,84,17,10,3,19,6,5,9};
	
	printArray(A);

	buildMinHeap(A);

	cout << "============After===============" << endl;
	
	printArray(A);

	if(isMinHeap(A)) cout << "The process is done!" << endl;
	else 		 cout << "There's something wrong!" << endl;












return 0;
}