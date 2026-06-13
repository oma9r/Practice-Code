#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct node{

	int value;
	char sy;
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

	node(char x){
		sy = x;
		right = NULL;
		left = NULL;
		}

		
};

void inOrder(node *root){

cout << "inorder: " << endl;


	node *current = root;
	stack<node* > st;

	while(current != NULL || !st.empty()){

		if(current != NULL){
			
			st.push(current);
			current = current->left;
		}
		else{
			current = st.top();
			st.pop();
			cout << current->sy << ", ";
			current = current->right;

		}
	}
cout << endl << "=====================" << endl;

}


void preOrder(node *root){

cout << "preorder: " << endl;

	node *current = root;
	stack<node* > st;

	while(current != NULL || !st.empty()){

		if(current != NULL){

			cout << current->sy << ", ";
			st.push(current);
			current = current->left;
		}
		else{
			current = st.top();
			st.pop();
			current = current->right;

		}
	}

cout << endl << "=====================" << endl;
}

void postOrder(node *root){

cout << "postorder: " << endl;

	node *current = root;
	stack<node* > st;
	stack<int> stt;
	int v = 0;

	if(current == NULL) return;

	if(current != NULL){
		
		st.push(current);
		stt.push(1);
		current = current->left;

		while(!st.empty()){
			
			if(current != NULL && v == 0){
		
				st.push(current);
				stt.push(1);
			}
			else{
				current = st.top();
				st.pop();
				
				v = stt.top();
				stt.pop();

				if(v == 1){

					st.push(current);
					stt.push(2);
					current = current->right;
					v = 0;
				}
				else{
					cout << current->sy << ", ";
				}


			}


		}


	}
	




cout << endl << "=====================" << endl;
}




int main()
{
	node *root = new node('A');

	root->left = new node('B');
	root->left->left = new node('D');
	root->left->right = new node('E');

	root->right = new node('C');
	root->right->left = new node('F');
	root->right->right = new node('G');

	inOrder(root);
	preOrder(root);
	postOrder(root);
        


        return 0;
}
