#include <iostream>
#include <queue>
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

void insert(node* &root, int item){

	if(root == NULL){ root = new node(item); return;};

	else{
		
		queue<node *> q;
		q.push(root);

		node *current;
		while(!q.empty()){

			current = q.front();
			q.pop();

			if(current->left == NULL){ current->left = new node(item); return;}

			else if(current->right == NULL){ current->right = new node(item);return;}

			else{
				q.push(current->left);
				q.push(current->right);
			}
		}
	}
};

void orderLevel(node *root){

	if(root == NULL) return;

	else {
		queue<node *> q;
		node *current;

		q.push(root);

		while(!q.empty()){

			current = q.front();
			q.pop();

			cout << current->value << ", ";

			if(current->left != NULL) q.push(current->left);

			if(current->right != NULL) q.push(current->right);

		}

	}
	cout << endl;
}


void treeToVector(node *root, vector<int> &A){

	for(int i=0; i < A.size(); i++){

		insert(root,A[i]);
	}
};


void deleteFromTree(node* &root, int item){

	node *current = root;
	node *trailCurrent;

	bool found = false;

	while(current != NULL){

		
		if(current->value == item){
			found = true;
			break;
		} 

		else{
			trailCurrent = current;
 
			if(current->value > item){ current = current->left;}

			else current = current->right;
		}
	}

	if(current == NULL) { cerr << "sorry, we didn't find the element you want to delete" << endl; }

	else if(found){

		



	}





}













int main()
{
	vector<int> A = {1,2,3,4,5};

	node *root = new node();

	treeToVector(root,A);

	orderLevel(root);

	insert(root,6);

	orderLevel(root);

	
        


        


        return 0;
}
