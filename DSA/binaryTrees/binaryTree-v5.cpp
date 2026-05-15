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

node *search(node *p, int item){

	if(p != NULL){

		if(p->value == item) return p; 
		else if(p->value > item) return search(p->left,item);
		else return search(p->right,item);
	}
	return NULL;
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

void deleteNode(node *p,int item){

	if(isEmpty(p)){ cout << "The tree is empty, you can't delete anything from it" << endl; return;};
	
	node *deleteNode = search(p,item);
	if(deleteNode == NULL){cout << "The item is not exist" << endl; return;};

	node *temp;

	if(deleteNode->left == NULL && deleteNode->right == NULL){

		temp = deleteNode;
		deleteNode = NULL;
		delete temp;		
	}

	else if(deleteNode->left == NULL){

		temp = deleteNode;
		deleteNode = temp->right;
		delete temp;

	} 

	
	

	





}













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
