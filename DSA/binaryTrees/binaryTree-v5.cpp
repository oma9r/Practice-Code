#include <iostream>
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

void inorder(node *p){

	if(p != NULL){
		inorder(p->left);
		cout << p->value << ", ";
		inorder(p->right);
	}
}

void postorder(node *p){

	if(p != NULL){
		postorder(p->left);
		postorder(p->right);
		cout << p->value << ", ";
	}
}

void preorder(node *p){

	if(p != NULL){
		cout << p->value << ", ";
		inorder(p->left);
		inorder(p->right);
	}
}


bool isEmpty(node *p){return (p == NULL);};

bool search(node *p, int item){

	if(p != NULL){

		if(p->value == item) return true; 
		else if(p->value > item) return search(p->left,item);
		else return search(p->right,item);
	}
	return false;
};

void insert(node *p, int item){

	node *current;
	node *trailCurrent;
	node *newNode = new node(item);

	if(p == NULL) p = newNode;

	else{
		current = p;

		while(current != NULL){

			trailCurrent = current;
		
			if(current->value == item){
			
				cerr << "The insert item is already in the list-";
				cerr << "duplicates are not allowed. " << item << endl;
				return;
			}

			else if(current->value > item) current = current->left;
			
			else current = current->right;			

		}

		if(trailCurrent->value > item) trailCurrent->left = newNode;
	
		else trailCurrent->right = newNode;

	}
};













int main()
{
	node *root = new node(31);
	insert(root,42);
	insert(root,25);
	insert(root,29);
	insert(root,20);

	cout <<"inorder: ";inorder(root);cout << endl;
        cout <<"preorder: ";preorder(root);cout << endl;
	cout <<"postorder: ";postorder(root);cout << endl;


        


        return 0;
}
