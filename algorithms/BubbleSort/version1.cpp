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

	
	for(int i = 0; i < A.size(); i++){

		int max = -100000;
		int index = 0;

		for(int j = 0; j < A.size();j++){
			if(A[j] > max){
				max = A[j];
				index = j;
			}
		}

		for(int j = index; j < A.size()-1;j++){

			if(A[j] > A[j+1]){
						swap(A[j],A[j+1]);
						
			}
		}



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
	vector<int> A = randFill(13);      
	cout << "before" << endl;

	printArray(A);

	bubbleSort(A);

	cout << "after" << endl;
	printArray(A);

        


        return 0;
}