#include <iostream>
#include <vector>
using namespace std;

struct node{
		int value;
		node *parent;
		node *left;
		node *right;

		node(){
			value = 0;
			parent = NULL;
			left = NULL;
			right = NULL;
		}
}

class binaryHeap{

	public:
		node *root;
		int count;


	binaryHeap();             //defualt constructor
	binaryHeap(node *);
	~binaryHeap();
	
	void buildHeap(vector<int>&);
	//void buildMinHeap();
	//void buildMaxHeap();
	








	//helper functions

	//vector<int> readArray(vector<int>&);
	void printHeap();
	//bool askUser();
	int size();

	







}
