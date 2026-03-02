#include <iostream>
using namespace std;

struct node{

		int value;
		node *llink;
		node *rlink;	
}

class Btree{

		public:
			node *root;

			Btree(){
				root = NULL;
			}


			bool isEmpty(){ return (root == NULL); }

			int countNodes(){

				node *p = root;
				return countNodesNum(p);
			}

			float countLevels(){

				node *p = root;
				return countLevelsNum(p,0);

			}

			









		private:
			int countNodesNum(node *p){


				if(p == NULL) return 0;

				else return 1 + countNodesNum(p->llink) + countNodesNum(p->rlink);
			};	



			float countLevelsNum(node *p, int level){
			
				if(p->llink == NULL && p->rlink == NULL) return value;

				else return countLevelsNum(p->llink,++value)

			}

			
					




















}














int main()
{
        


        


        return 0;
}
