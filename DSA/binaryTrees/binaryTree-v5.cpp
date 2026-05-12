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
}



void isEmpty(node *p){return (p == NULL);};

bool search(node *p, int item){

	if(p != NULL){

		if(p->value == item) return true; 
		else if(p->value > item) return search(p->left,item);
		else return search(p->right,item);
	}
	return false;
};

void insert(node *p, int item){

	if(p != NULL){
		if(p->value => item){insert(p->left,item);}
		else if(p->value < item){insert(p->right,item);}
	}

	else{
		p = new node(item);
	}

};

void delete(node *p, int item){

	if(search(p,item)){

		if(p->value == item){

			if(p->left == NULL && p->right == NULL){
				p = NULL;
				delete p;
			}

			else if(p->right
		
		}

	}

	else{
		cout << "The item doesn't exit" << endl;

	}


}












int main()
{
        


        


        return 0;
}
