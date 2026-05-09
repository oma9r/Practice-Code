#include <iostream>
#include <climits>
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

void selectionSort(vector<int>& A){

	for(int i = 0; i < A.size();i++){

		int min = INT_MAX;
		int index = 0;

		for(int j = i; j < A.size();j++){

			if(A[j] < min){ 
					min = A[j];
					index = j;
			}
		}

		swap(A[i],A[index]);
			
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
	vector<int> A = randFill(100000);      
	cout << "before" << endl;

	printArray(A);

	selectionSort(A);

	cout << "after" << endl;
	printArray(A);

        


        return 0;
}
