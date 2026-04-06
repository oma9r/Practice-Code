#include <iostream>
#include <vector>
using namespace std;
void maxHeapify(vector<int> &, int, int);
bool isMaxHeap(vector <int> &);
void minHeapify(vector<int> &, int, int);
bool isMinHeap(vector <int> &);

void printArray(vector<int> &);

void buildMaxHeap(vector <int>&);
void buildMinHeap(vector <int>&);

void heapsort(vector<int> &);
bool isSorted(vector <int> &);

void heapsortMin(vector<int> &);
bool isSortedDecresing(vector <int> &);

void printCheckSorted(bool);