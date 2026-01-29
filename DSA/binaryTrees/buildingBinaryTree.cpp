#include <iostream>
using namespace std;

struct bstnode{
		int value;
		bstnode *llink;
		bstnode *rlink;
}

class binaryTree{

		private: 
			bstnode *root;

		public: 
			bool isEmpty(){ return (root == NULL); };

			int postorder(bstnode *p){

				if(p != NULL){

					postorder(p->llink);
					postorder(p->rlink);
					return p->value;
				}
			}

			
			void search(int x){
						if(this->postorder(root) == x){
				
							cout << "We find it : " << postorder(root) << endl;
							return;
						}

						cout << "we couldn't find it" << endl;

			}


			void insert(int x){

						
						




			}
			

			





}














int main()
{
        


        


        return 0;
}
