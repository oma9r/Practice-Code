#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
#include <cmath>
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
	}

		if(trailCurrent->value < value){

			trailCurrent->right = new_node;
		}

		else trailCurrent->left = new_node;
}





void orderByLevel(node *root){

	if (!root)
        return;

    queue<node*> q;
    q.push(root);

    while (!q.empty())
    {
        node* newNode = q.front();
        q.pop();

        cout << newNode->value << ", ";

        if (newNode->left)
            q.push(newNode->left);

        if (newNode->right)
            q.push(newNode->right);
    }

cout << endl;
	
}


void insert(node *root, int value){

	if(root == NULL) root = new node(value);

	else{
		queue<node *> q;
		q.push(root);

		node *current;

		while(!q.empty()){

			current = q.front();
			q.pop();

			if(current->left == NULL){

				current->left = new node(value);
				break;
			}						
			
			else if(current->right == NULL){
			
				current->right = new node(value);
				break;
			}

			else{
				q.push(current->left);
				q.push(current->right);
			}

		}
	}
}


void createFullBinaryTree(node *root,vector<int> &arr){
	
	for(int i=0; i < arr.size();i++){		
		insert(root,arr[i]);
	}
}


bool checkFullBinaryTree(node *root){

	if(root->left != NULL && root->right != NULL) return true;

	else if(root->left == NULL && root->right == NULL) return true;
	
	else if( (root->left != NULL && root->right == NULL) || (root->left == NULL && root->right != NULL) ) return false; 

	else return checkFullBinaryTree(root->left) && checkFullBinaryTree(root->right);
}


bool checkFullBinaryTree(int countNode){

	double value = (double)log2(countNode);
	//cout << "the value of log2 = " << value << endl;

	return (floor(value) == value); 
}



int countNodes(node *root){

	if(root == NULL) return 0;

	else{
		return 1 + countNodes(root->left) + countNodes(root->right);
		
	}
};




int main()
{
        vector<int> A = {4,6,8,10,12};

	//vector<int> A = {55,98,33,60,80,102,10,41,56,65,79,85,100,120,7,21,39,40,58,59};

	//node *root = new node(76);

	node *root = new node(2);

	createFullBinaryTree(root,A);

	orderByLevel(root);

	int size = countNodes(root) + 1;

	//cout << "size = " << size - 1 << endl;

	if(checkFullBinaryTree(size)) cout << "this is a full binary tree" << endl;

	if(checkFullBinaryTree(root)) cout << "This is also full binary tree!" << endl;


	cout << endl << "before anything" << endl;
	
	insert(root,5);

	//orderByLevel(root);

	//insert(root,7);

	orderByLevel(root);

	if(checkFullBinaryTree(countNodes(root) + 1)) cout << "this is a full binary tree" << endl;

	if(checkFullBinaryTree(root)) cout << "This is also full binary tree!" << endl;

	//deleteNode(root,33);

	//cout << endl << "after deletion: " << endl;
	//orderByLevel(root);
        


        return 0;
}
