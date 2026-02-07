#include <iostream>
using namespace std;


struct node{

		int value;
		node *right;
		node *left;

		node(int val){ value = val; right = NULL; left = NULL;} 
};









bool isEmpty(node *root){ return (root == NULL); };






bool search(node *root, int value){

	if(isEmpty(root)){return false; };

	
	node *current = root;

	while(current != NULL){

		



	}
					


};


node *insert(node *root, int value){

	if(root == NULL) return new node(value);

	else if(root->value <= value) root->left = insert(root->left,value);

	else if(root->value > value) root->right = insert(root->right,value);


	return root;
};

void inOrder(node *root){

	if(root != NULL){
		inOrder(root->left);
		cout << root->value << " ";
		inOrder(root->right);
	}

}


void readingValues(node *root){

	cout << "Please enter the size of the tree you want to build: ";

	int SIZE;

	cin >> SIZE;

	cout << endl;

	node *p = root;

	for(int i=0; i < SIZE;i++){
		int temp;
		cout << "Enter the value: ";
		cin >> temp;
		p = insert(p,temp);
		cout << endl;
	}
	

}

void buildingBinaryTree(node *root){

	if(!isEmpty(root)){ cout << "The tree is already built in. No need to build it again." << endl; return;}

	readingValues(root);
	
}
















int main()
{
   
	node *root = NULL;

	//============================================================= first test - insert and build ============================================     


	if(isEmpty(root)) cout << "The tree is empty" << endl;

	buildingBinaryTree(root);       // building

	buildingBinaryTree(root);       // should print can't build again

	cout << "the root value " << root->value << endl;
	node *p = root;
	inOrder(p);
	if(search(root,7)) cout << "we find it!" << endl;

		
	
	
	

        


        return 0;
}
