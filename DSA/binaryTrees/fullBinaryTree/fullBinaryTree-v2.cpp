#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct node{
		int value;
		char sy;
		node *left;
		node *right;

		node(int x){
				value = x;
				left = NULL;
				right = NULL;
		}

		node(char x){
				sy = x;
				left = NULL;
				right = NULL;
		}
};


void insertNode(node *root, int value){

	node *new_node = new node(value);

	if(root == NULL){ root = new_node; return;};

	node *current,*trailCurrent;

	current = root;

	while(current != NULL){

		trailCurrent = current;

		if(current->value == value) cerr << "Sorry we can't duplicate values"<<endl;

		else if(current-> value > value) current = current->left;

		else current = current->right;

		if(trailCurrent->value < value){

			trailCurrent->right = new_node;
		}

		else trailCurrent->left = new_node;
	}
}


void createFullBinaryTree(node *root,vector<int> &arr){
	
	for(int i=0; i < arr.size();i++){		
		insertNode(root,arr[i]);
	}
}


void orderByLevel(node *root){

	queue<node *> q;

	node *current = root;


	while(current != NULL || !q.empty()){

		cout << current->value << ", " << endl;
		if(current->left != NULL && current->right != NULL){
			q.push(current);
		}

		current = q.front()->left;
		cout << current->value << ", " << endl;
		if(current->left != NULL && current->right != NULL){
			q.push(current);
		}

		current = q.front()->right;
		q.pop();
		//cout << current->sy << ", " << endl;
		if(current->left != NULL && current->right != NULL){
			q.push(current);
		}

	}



}







int main()
{
        vector<int> A = {2,3,4,5,6,7};

	node *root = new node(1);

	createFullBinaryTree(root,A);

	orderByLevel(root);
	
	


        


        return 0;
}
