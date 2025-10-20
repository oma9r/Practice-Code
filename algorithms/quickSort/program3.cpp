#include <iostream>
using namespace std;
int sortingFunction(int arr[], int start, int end) 
{
    int pivot = arr[end];
    int index = start - 1;

    for (int i = start; i < end; i++) 
     {
        if (arr[i] < pivot) {
            index++;
            swap(arr[index], arr[i]);
        }
    }

    swap(arr[index + 1], arr[end]);
    return index + 1;
}

void quickSort(int arr[], int start, int end) {
    if (start >= end)
        return;

    int pivotIndex = sortingFunction(arr, start, end);
    quickSort(arr, start, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, end);
}


void storeArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cin >> arr[i];
}

void printArray(int arr[], int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size - 1)
            cout << ",";
    }
    cout << "]";
}

int main()
{
    int size;
    cin >> size;
    int arr[size];

    storeArray(arr, size);
    quickSort(arr, 0, size - 1);
    printArray(arr, size);

	return 0;
}
