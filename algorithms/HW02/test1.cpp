#include <iostream>
using namespace std;

const int numberOfCharacters = 26;

struct node{

	int numberOfChildern;
	char val;
	node * childernArray[numberOfCharacters];
	bool lastNode;
}


class ds{

		public:
			node * root;

			ds(){
				root->val = '*';
				currentChild = 0;
				root->numberOfChildern = 0;
				for(int i=0; i <numberOfCharacters; ++i){
					root->childernArray[i] = NULL;
				}
			}

		void insert(char *s){


				node * current = root;

				for(char c : s){

					if(current->childernArray[c - 'a'] == NULL){

						node * newNode = new node();

						current->childernArray[c - 'a'] = newNode;
					}

					
					current = current->childernArray[c-'a'];

				}

				current->lastNode = true;
		}



		void search(char *s){

				node *current = root;

				for(char c : s){

					if(current->childernArray[c - 'a'] == NULL)
						return false;

					current = current->childernArray[c - 'a'];

				}


				return current->lastNode;

		}


		void startsWith(char *s){

			node *current = root;

			for(char c : s){


				int index = c - 'a';

				if(current->childernArray[index] == NULL){

					return false;
				}

			}

			return true;
		}


		node * deleteString(node *deleteNode, char *s){

			if(!deleteNode) return NULL;

			if(0 == s.size()){

				if(deleteNode->lastNode)
					deleteNode->lastNode = false;
				

				if(isEmpty(deleteNode)){

					delete (deleteNode);
					deleteNode = NULL;
				}

				return deleteNode;

			}


			int index = s[0] - 'a';
			deleteNode->childernArray[index] = deleteString(deleteNode->numberOfCharacters[index],s[1]);

		};

		

			
			




			

			
		
				

				

		}
				

				


		



}
	












int main()
{
        


        


        return 0;
}
