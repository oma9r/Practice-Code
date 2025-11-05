#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void storeArray(int arr[],int size)
{
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    };


}


void printArray(int arr[],int size)
{
    cout << "[";
    for(int i=0; i < size; i++)
    {
        if(i == size - 1)
        {
            cout << arr[i] << "]";
            break;
        }
        cout << arr[i] << ",";
    };
    

}


int main() 
{
    int size; // size of the array,first line input
    cin >> size;
    cout << endl;
    int arr[size];
    
    
    storeArray(arr,size);
    printArray(arr,size);
    
    
    
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
