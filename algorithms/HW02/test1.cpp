#include <iostream>
using namespace std;

const int numberOfCharacters = 26;

struct node{

	int numberOfChildern;
	char val;
	node * childernArray[numberOfCharacters];
}


class ds{

		public:
			int currentChild;
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

				if(root->numberOfChildern == 0){

				
					root->childernArray[0]->val = s[0];
					++root->numberOfChildern;
					childernArray[0]->numberOfChildern = 0;
					insertVal(childernArray[0], ++s);                         ///node *nextNode, char *s
					
					
	

				}
		
					
				

				

		}


		void insertVal(node *nextNode, char *s){
		
			if(s == '/0'){
			
				nextNode->val = '$';
				return;
			}

			else{
				for(int i=0; i < newNode->numberOfChildern; ++i){

					if(newNode->childernArray[i]->val == s){

						

				

				


		



}
	












int main()
{
        


        


        return 0;
}
