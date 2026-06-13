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

void deleteNode(node *p){

	if(isEmpty(p)){ cout << "The tree is empty, you can't delete anything from it" << endl; return;};
	
	//node *dNode = search(p,item);
	//if(dNode == NULL){cout << "The item is not exist" << endl; return;};

	node *dNode = p;

	node *temp;

	if(dNode->left == NULL && dNode->right == NULL){

		temp = dNode;
		dNode = NULL;
		delete temp;		
	}

	else if(dNode->left == NULL){

		temp = dNode;
		dNode = temp->right;
		delete temp;

	}
	
	else if(dNode->right == NULL){

		temp = dNode;
		dNode = temp->left;
		delete temp;
	}

	else {
		node *current,*trailCurrent;

		current = dNode->left;
		trailCurrent = NULL;

		while(current->right != NULL){

			trailCurrent = current;
			current = current->right;
		}

		dNode->value = current->value;

		if(trailCurrent == NULL) dNode->left = current->left;

		else trailCurrent->right = current->left;

		delete current;
	}//end else

	cout << "Delettion is done!" << endl;

}

void deleteFromTree(node *p, int item){

	if(isEmpty(p)){cout << "the tree is empty" << endl;return;}

	if(!search(p,item)){cout << "delete from tree - the item is not exist" << endl;return;};

	node *current;
	node *trailCurrent;
	bool found = false;

	current = p;
	trailCurrent = current;

	while(current != NULL && !found){

		if(current->value == item) found = true;

		else{
			trailCurrent = current;
			
			if(current->value > item) current = current->left;
			
			else current = current->right;
		}
	}

	if(found){
			if(current == p) deleteNode(p);
			
			else if(trailCurrent->value > item) deleteNode(trailCurrent->left);

			else deleteNode(trailCurrent->right);
	}


}


bool find(node *p, int item){
	return (search(p,item) != NULL);
}



int main()
{
	/*
	node *root = new node(31);
	insert(root,42);
	insert(root,25);
	if(find(root,25)) cout << "25 is exist!" << endl;
	insert(root,29);
	if(find(root,29)) cout << "29 is exist!" << endl;
	insert(root,20);
	deleteNode(root,29);
	*/

	node *root = new node(60);

	vector<int> arr = {50,70,30,53,80,35,57,75,32,40,77,48,45};

	for(int i =0; i < arr.size();i++){insert(root,arr[i]);};


	if(find(root,57))cout << "we find 57!" << endl;

	deleteFromTree(root,57);

	if(find(root,57))cout << "we find 57!" << endl;


	
	if(!find(root,47))cout << "we didn't find 47!" << endl;


	deleteFromTree(root,47);

	cout <<"inorder: ";inorder(root);cout << endl;
        cout <<"preorder: ";preorder(root);cout << endl;
	cout <<"postorder: ";postorder(root);cout << endl;


        


        return 0;
}
