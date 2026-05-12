#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> randFill(int N){

	vector<int> A(N);

	for(int i=0; i < N;i++){
		A[i] = rand();
	}

	return A;
}


void bubbleSort(vector<int> &A){

	int j = A.size();

	for(int i = 0; i < A.size(); i++){

		int max = -1000000;
		int index = 0;

		for(int k = 0; k < j; k++){
			if(max < A[k]){ max = A[k]; index = k;}
		}

		for(int z = index; z < j - 1; z++){

			if(A[z] > A[z+1]){swap(A[z],A[z+1]);}
		}
		--j;
	}
	
}


void printArray(vector<int>& A){

	for(int i = 0; i < A.size();i++){

		cout << A[i] << ", ";
	}

	cout << endl;
}












int main()
{
	//vector<int> A = randFill(13);
	vector<int> A = {6,7,-1,0,100,50,90,9,3,4,5,16};      
	cout << "before" << endl;

	printArray(A);

	bubbleSort(A);

	cout << "after" << endl;
	printArray(A);

        


        return 0;
}