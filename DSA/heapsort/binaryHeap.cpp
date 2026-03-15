#include "binaryHeap.h"



binaryHeap::binaryHeap(){
	this->root = NULL;
	count = 0;
}

binaryHeap(node *newRoot){
	this->root = newRoot;
	count = 0;
}

~binaryHeap(){

	//destoryHeap();
	this->root = NULL; // temp

}


void binaryHeap::buildHeap(vector<int>& arr){

		node *current = new node;
		this->root = current;
		

		for(int i = 0; i + 3 < arr.size();){

			current->value = arr[i++];

			current->left = new node;
			current->left->value = arr[i++];
			current->left->parent = current;

			current->right = new node;
			current->right->value = arr[i++];
			current->right->parent = current;

			current->left->left = new node;
			current = current->left->left; 
			
		}
		

}

void binaryHeap::printHeap(){

	node *current = this->root;

	for(int i = 0; i + 3 < this->size();){


			cout << current->value << ", " << current->left->value << ", " << current->right->value << ", ";
			current = current->left->left;
			
		}



}

int binaryHeap::size(){return this->count;};