#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
  
    int pivot = arr[high];

    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    
    swap(arr[i + 1], arr[high]);  

    return i + 1;
}


void quickSort(vector<int>& arr, int low, int high) {
  
    while(low < high) {
      
	//int pi = 0;
	cout << "low = " << low << " before" << endl;
	cout << "high = " << high << " before" << endl;
	//cout << "pi = " << pi << " before" << endl;
        int pi = partition(arr, low, high);
	cout << "pi = " << pi << " after" << endl;

        //quickSort(arr, low, pi - 1);
        //quickSort(arr, pi + 1, high);

	if(low < pi - 1){
		cout << "1 if" << endl;
		cout << low << " < " << pi -1 << endl;
		high = pi -1;
	}

	if(pi + 1 < high){
		cout << "==2 if==" << endl;
		cout << pi + 1 << " < " << high << endl;
		low = pi + 1;
	}
	
    }
}

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();
    quickSort(arr, 0, n - 1);
  
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}