#include <iostream>
#include <vector>
using namespace std;

void swapping(vector<int> &A){

	int p = 1;

	int i = 0;
	int j = 2;

	if(A[i] > A[p]){

		if(A[i] > A[j]){

			if(A[p] > A[j]){ // case 1

				swap(A[i],A[j]); 
			}

			else{    // case 2

				swap(A[i],A[j]);
				swap(A[p],A[i]);
			}
		}
		
		else{  //case 3
			swap(A[i],A[p]);
		}

	}

	else if(A[p] > A[j]){ //case 4

		swap(A[p],A[j]);

	}

}


void printArray(vector<int> &A){

	for(int i = 0; i < A.size();i++){

		cout << A[i] << ", ";
	}

	cout << endl;

}


int main()
{
	
		vector <int> case1 = {3,2,1};  //case1
		vector <int> case2 = {3,1,2};  //case2
		vector <int> case3 = {2,1,3};  //case3
		vector <int> case4 = {1,3,2};  //case4

		cout << "before: " << endl;
		printArray(case1);
		swapping(case1);
		cout << "after: " << endl;
		printArray(case1);

		cout << "========case2==========" << endl;

		cout << "before: " << endl;
		printArray(case2);
		swapping(case2);
		cout << "after: " << endl;
		printArray(case2);


		cout << "========case3==========" << endl;

		cout << "before: " << endl;
		printArray(case3);
		swapping(case3);
		cout << "after: " << endl;
		printArray(case3);

		cout << "========case4==========" << endl;

		cout << "before: " << endl;
		printArray(case4);
		swapping(case4);
		cout << "after: " << endl;
		printArray(case4);





	//for(int i = 0; i< 4; i++){

		//cout << "====before====" << endl;
		//printArray(cases[i]);

		//swapping(cases[i]);
		//cout << "====after====" << endl;
		//printArray(cases[i]);

	//}



        


        return 0;
}
