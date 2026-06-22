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
	}

		if(trailCurrent->value < value){

			trailCurrent->right = new_node;
		}

		else trailCurrent->left = new_node;
}


void createFullBinaryTree(node *root,vector<int> &arr){
	
	for(int i=0; i < arr.size();i++){		
		insertNode(root,arr[i]);
	}
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
		node *current = root;
		
		if(current->left == NULL) current->left = new node(value);

		else if(current->right == NULL) current->right = new node(value);

		else{
			queue<node *> q;
			current = current->left;
			q.push(current);
			
			


		}







	}





}









int main()
{
        //vector<int> A = {2,4,6,8,10,12};

	vector<int> A = {55,98,33,60,80,102,10,41,56,65,79,85,100,120,7,21,39,40,58,59};

	node *root = new node(76);

	createFullBinaryTree(root,A);

	orderByLevel(root);

	//insertNode(root,5);

	//orderByLevel(root);

	//insertNode(root,7);

	//orderByLevel(root);

	//deleteNode(root,33);

	//cout << endl << "after deletion: " << endl;
	//orderByLevel(root);
        


        return 0;
}
