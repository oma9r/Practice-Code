#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
using namespace std;


/// Mar 18, 2026 - 3:01 am, you're good is work when you add a new value less than the root, if the value of the root is larger, the biggest value will alaways be in the right node of the root node.

/// Mar 18, 2026 - 3:06 - I fix the code by when i finished the code, swap to be sure that we make the right heap... I think, but I'm not sure yet hahahaha


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

		int left = 2 * i + 1; // + 2 with inital 1
		int right = left + 1; // + 2 with inital 2
		int parent = floor((i-1)/2); // with inital -1   +0.5

		if(left < A.size() && A[left] > A[i]){ swap(A[i],A[left]); }

		if(right < A.size() && A[right] > A[i]){ swap(A[i],A[right]); }

		if(parent >= 0 && A[i] > A[parent]){ swap(A[i],A[parent]); }

	}

	if(A[0] < A[2]){swap(A[0],A[2]);}
	else if(A[0] < A[1]){swap(A[0],A[1]);}

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

	//vector<int> arr = readNumbersFromFile("numbers.txt");

	//vector <int> arr = {1, 10, 9, 8, 7, 6, 5};

	//vector<int> arr = {35, 1, 3, 2, 16, 9, 10, 14, 8, 7};

	//vector<int> arr = {5, 4, 3, 2, 1, 100};

	//vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

	//vector<int> arr = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	//vector<int> arr = {3, 17, 2, 1, 25, 7, 36, 19, 100};

	//vector<int>  arr = {5, 12, 11, 13, 4, 6, 7, 8, 9, 10};

	vector<int>  arr = {2, 50, 3, 40, 45, 1, 4, 39, 38, 37, 36};



	cout << "========================Input: " << endl;

	printArray(arr);

	arr = heapify(arr);

	cout << "========================Output: " << endl;


	printArray(arr);

return 0;

	int i = 0;

	while(i < 5){

		cout << "Enter a new value to the heap:------> ";
		int x;
		cin >> x;

		cout << "Before: " << endl;
		printArray(arr);
		arr.push_back(x);
		cout << "When added the new element: " << endl;
		printArray(arr);
		arr = heapify(arr);

		cout << "After " << endl;
		printArray(arr);
		++i;
		cout << "================================================"<<endl;
	}
        


        return 0;
}
