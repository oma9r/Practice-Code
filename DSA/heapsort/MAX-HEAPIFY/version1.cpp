#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
using namespace std;


vector<int> readNumbersFromFile(const string& filename)
{
    ifstream file(filename);

    if (!file)
    {
        cout << "Error opening file\n";
        return {};
    }

    vector<int> numbers;
    int x;

    while (file >> x)
    {
        numbers.push_back(x);
    }

    file.close();

    return numbers;
}


vector<int> heapify(vector <int> A){

	for(int i = 0; i < A.size(); i++){


		int left = 2 * i + 1;
		int right = left + 1;
		int parent = floor((i-1)/2);

		if(left < A.size() && A[left] > A[i]){ swap(A[i],A[left]); }

		if(right < A.size() && A[right] > A[i]){ swap(A[i],A[right]); }

		if(parent >= 0 && A[i] > A[parent]){ swap(A[i],A[parent]); }
	}

	return A;


}



void printArray(vector <int> arr){


	for(int i = 0; i < arr.size(); i++){

		if(i == arr.size() - 1){
			cout << arr[i];
			cout << endl;
			return;
		}

		cout << arr[i] << ", ";
	}



};











int main()
{
  
	//vector<int> arr = {17,4,7,6,5,18,28,3,10};

	//vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

	//vector<int> arr = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	//vector<int> arr = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};

	vector<int> arr = readNumbersFromFile("numbers.txt");

	cout << "========================Input: " << endl;

	printArray(arr);

	arr = heapify(arr);

	cout << "========================Output: " << endl;

	printArray(arr);

        


        return 0;
}
