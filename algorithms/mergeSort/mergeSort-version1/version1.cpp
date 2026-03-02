#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSort(vector<int> a, vector<int> b){


		vector<int> c(a.size() + b.size());
		int i = 0;
		int j = 0;
		int k = 0;

		while(i < a.size() || j < b.size()){


			if((a[i] <= b[j] || j == b.size()) && i < a.size()){

				c[k++] = a[i++];


			}

			else
				c[k++] = b[j++];

		}

		return c;
}


void printVector(vector<int> arr){



		for(int i = 0; i < arr.size(); i++){

			if(arr.size() - i == 1){

				cout << arr[i];
				break;
			}
			cout << arr[i] << ", ";

		}
		cout << endl;
}

















int main()
{
	vector <int> a = {1,2,4,6};
	//printVector(a);
	vector <int> b = {5,7,8,9};

	printVector(mergeSort(a,b));       


        


        return 0;
}