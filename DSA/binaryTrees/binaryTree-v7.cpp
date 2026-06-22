#include <iostream>
#include <vector>
using namespace std;

struct node{

		int value;
		node *right;
		node *left;

		node(){
			value = 0;
			right = NULL;
			left = NULL;
		}


		node(int x){
			value = x;
			right = NULL;
			left = NULL;
		}
};


void inorder(node *root){

	if(root != NULL){
		
		inorder(root->left);
		cout << root->value << ", ";
		inorder(root->right);
	}

	cout << endl;
};

void preorder(node *root){

	if(root != NULL){

		cout << root->value << ", ";
		preorder(root->left);
		preorder(root->right);
	}
};

void postorder(node *root){

	if(root != NULL){

		postorder(root->left);
		postorder(root->right);
		cout << root->value << ", ";
	}
};

void insert(node *root, int value){

	if(root == NULL){ root = new node(value);}

	else{
		node *current = root;
		node *trailCurrent = current;

		while(current != NULL){

			trailCurrent = current;

			if(current->value == value) {cerr << "error, you can't insert exist value" << endl; }

			else if(current->value > value){current = current->left;}

			else current = current->right;
		}


		if(trailCurrent->value > value){trailCurrent->left = new node(value);}

		else trailCurrent->right = new node(value);

	} 

};


void vectorToTree(node *root, vector<int> &A){

	for(int i=0; i < A.size();i++){

		insert(root,A[i]);
	}

};

void deleteNode(node * &p){

	node *temp = p;

	if(p->left == NULL && p->right == NULL){

		p = NULL;
		delete temp;	
	}

	else if(p->left == NULL){

		p = p->right;
		delete temp;		

	}

	else if(p->right == NULL){

		p = p->left;
		delete temp;

	}

	else {

	
		node *current = p->left;

		while(current != NULL){

			if(current->right == NULL){p->value = current->value; break;}

			else{
				current = current->right;

			}
		}
		
		delete current;

	}
}


void deleteFromTree(node *root, int item){

	if(root == NULL) cerr << "we can't delete from empty tree" << endl;

	else {

		node *current = root;

		node *trailCurrent;

		bool found = false;

		while( current != NULL && !found){

			trailCurrent = current;

			if(current->value == item) found = true;

			else if(current->value > item) current = current->left;

			else current = current->right;

		}

		if(current == NULL) cerr << "sorry, something went wrong" << endl;

		if(found){

				if(current == root){deleteNode(root);}

				else if(trailCurrent->value > item) deleteNode(trailCurrent->left);

				else deleteNode(trailCurrent->right);

		}

		


	}





}











int main()
{
		vector<int> A = {60,50,70,30,53,80,35,57,75,32,40,77,48};

		node *root;

		//vectorToTree(root,A);

		insert(root,60);

		
		insert(root,50);
		insert(root,70);

		inorder(root);

		cout << "case 1: 45 " << endl;
		deleteFromTree(root,45);
		cout << "===========" << endl;
        
		inorder(root);

		cout << "case 2: 30 " << endl;
		deleteFromTree(root,30);
		cout << "===========" << endl;

		inorder(root);

		cout << "case 3: 80 " << endl;
		deleteFromTree(root,80);
		cout << "===========" << endl;

		inorder(root);

		cout << "case 4: 50 " << endl;
		deleteFromTree(root,50);
		cout << "===========" << endl;        

		inorder(root);

        return 0;
}
