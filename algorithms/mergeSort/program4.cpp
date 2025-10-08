#include <iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    int i = start;         // first element of first sub-array
    int j = mid + 1;       // first element of second sub-array

    while (i <= mid && j <= end)            // mid is the end of the first sub-array and end is the end of the second sub-array
    {
        if (arr[i] > arr[j])
        {
            int temp = arr[j];

            for (int k = j; k > i; k--)
                arr[k] = arr[k - 1];
            arr[i] = temp;

            i++;
            j++;
	    mid++;

        }
        else
        {
            i++;
           
        }
    }
}

void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
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
    mergeSort(arr, 0, size - 1);
    printArray(arr, size);


return 0;
}