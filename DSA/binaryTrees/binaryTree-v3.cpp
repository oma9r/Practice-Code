#include <iostream>
using namespace std;


struct binaryTreeNode{

	int info;
	binaryTreeNode *llink;
	binaryTreeNode *rlink;
};


class binaryTreeType{

	protected:
			binaryTreeNode *root;


	public:


		binaryTreeType(){
			root = NULL;
		}
		bool isEmpty(){
			return (root == NULL);
		};

		void inorderTraversal() const{

			inorder(root);
		};


		void preorderTraversal() const{

			preorder(root);
		};

		void postorderTraversal() const{

			postorder(root);
		};


		int treeHeight() const{

			return height(root);
		};

		int treeNodesCount(){
			return nodeCount(root);
		};

		int treeLeavesCount() {

			return leavesCount(root);
		};

		void inorder(binaryTreeNode *p) const{

			if(p != NULL){
				inorder(p->llink);
				cout << p->info << " ";
				inorder(p->rlink);
			}
		};


		void preorder(binaryTreeNode *p) const{

			if(p != NULL){
				cout << p->info << " ";
				preorder(p->llink);
				preorder(p->rlink);
			}
		};

		void postorder(binaryTreeNode *p) const {

			if(p != NULL){
				postorder(p->llink);
				postorder(p->rlink);
				cout << p->info << " ";
			}
		};


		int height(binaryTreeNode *p) const{

			if(p == NULL) return 0;

			else
				return 1 + max(height(p->llink),height(p->rlink));
		}

		int max(int x, int y) const{

			if(x >= y) return x;

			else return y;

		};		
		

		int nodeCount(binaryTreeNode *&p){

			if(p == NULL) return 0;

			else
				return 1 + nodeCount(p->llink) + nodeCount(p->rlink);
		};

		int leavesCount(binaryTreeNode *&p){

			if(p == NULL) return 0;

			else
				if(p->llink == NULL && p->rlink == NULL) return 1;

				else return leavesCount(p->llink) + leavesCount(p->rlink);
			
		};

		
		void copyTree(binaryTreeNode* copiedTreeRoot,binaryTreeNode* otherTreeRoot){


			if(otherTreeRoot == NULL) copiedTreeRoot = NULL;

			else{

				copiedTreeRoot = new binaryTreeNode;
				copiedTreeRoot->info = otherTreeRoot->info;
				copyTree(copiedTreeRoot->llink, otherTreeRoot->llink);
				copyTree(copiedTreeRoot->rlink, otherTreeRoot->rlink);
			}
		};


		void destroy(binaryTreeNode* &p){

			if(p != NULL){

				destroy(p->llink);
				destroy(p->rlink);
				delete p;
				p = NULL;
			}
		};


		void destroyTree(){
			destroy(root);
		};

		
		binaryTreeType(binaryTreeType& otherTree){

			if(otherTree.root == NULL) root = NULL;

			else
				copyTree(root,otherTree.root);
		}

		~binaryTreeType(){
			destroy(root);
		}

		const binaryTreeType& operator=(const binaryTreeType& otherTree){

			if(this != &otherTree){

				if(root != NULL) destroy(root);

				if(otherTree.root == NULL) root = NULL;
				
				else 
					copyTree(root,otherTree.root);
			}

			return *this;
		};


		bool search(int searchItem) const{

			if(root == NULL) cerr << "Can't search the empty tree." << endl;

			else{

				binaryTreeNode *current = root;

				while(current != NULL){

					if(current->info == searchItem) return true;

					else if(current->info > searchItem) current = current->llink;

					else
						current = current->rlink;
				}
			}


			return false;

		}

		void insert(int insertItem){

			binaryTreeNode *newNode;

			newNode = new binaryTreeNode;
			//assert(newNode != NULL);
			newNode->info = insertItem;
			newNode->llink = NULL;
			newNode->rlink = NULL;

			if(root == NULL) root = newNode; return;

			binaryTreeNode *current = root;

			binaryTreeNode *trailCurrent = NULL;

			while(current != NULL){

				trailCurrent = current;

				if(current->info == insertItem){
					cerr << "the element you're try to add is exist!" << endl;
					return;
				}

				else if(current->info > insertItem) current = current->llink;

				else current = current->rlink;

			}

			if(insertItem < trailCurrent->info){

				trailCurrent->llink = newNode;	
			}

			else{
				trailCurrent->rlink = newNode;

			}

			
		};



		void buildingBinaryTree(){

			//if(!this->isEmpty()) cout <<"The tree is not empty!" << endl; return;

			int SIZE;

			cout << "Enter the size: ";
			cin >> SIZE;

			for(int i=0; i < SIZE; i++){

				int temp = 0;
				cout << "Enter the value: ";
				cin >> temp;
				insert(temp);
			}
		}

		void deleteNode(int deleteItem){

			if(root == NULL) return;

			else{
				bool found = false;
				binaryTreeNode *current;
				binaryTreeNode *tCurrent;

				current = root;

				while(current != NULL){

					tCurrent = current;

					if(current->info == deleteItem){
						found = true;
						break;
					}

					else if(current->info > deleteItem) current = current->llink;

					else current = current->rlink;
				}


				if(!found) return;


				//case 1

				if(current->llink == NULL && current->rlink == NULL){

					
					if(current->info < tCurrent->info){
						
						tCurrent->llink = NULL;
						delete current;
						current = NULL;

					}

					else if(current->info => tCurrent->info){
												
						tCurrent->rlink = NULL;
						delete current;
						current = NULL;
					}
				}


				else if(current->llink == NULL || current->rlink == NULL){

					binaryTreeNode *childNode;

					if(current->llink != NULL){childNode = current->llink;}

					else childNode = current->rlink;

					
					if(current->info < tCurrent->info){
						
						tCurrent->llink = childNode;
						delete current;
						current = NULL;

					}

					else if(current->info => tCurrent->info){
												
						tCurrent->rlink = childNode;
						delete current;
						current = NULL;
					}



				}

				else if(current->llink != NULL && current->rlink != NULL){


						tCurrent->rlink = current->rlink;
						delete current;
						current = NULL;


				}
				


				
				
				
				






			}










		}


};


int main()
{

	binaryTreeType t1;

	cout << "suppose to build the tree" << endl;
	t1.buildingBinaryTree();
       
	//cout << "suppose to tell you that the tree is not empty" << endl;
	//t1.buildingBinaryTree();

	cout << "print the size of the tree: " << t1.treeNodesCount() << endl;

	cout << "print the tree inorder" << endl;
	t1.inorderTraversal();

	cout << "print the tree preorder" << endl;
	t1.preorderTraversal();

	cout << "print the tree postorder" << endl;
	t1.postorderTraversal();

	cout << "======================= after building ===============" << endl;

	if(t1.search(6)) cout << "We found 6!" << endl;

	cout << "======================= copy to another tree =========" << endl;

	binaryTreeType t2 = t1;

	cout << "print the size of the tree of t2: " << t2.treeNodesCount() << endl;

	cout << "print the tree inorder of t2" << endl;
	t2.inorderTraversal();

	cout << "print the tree preorder of t2" << endl;
	t2.preorderTraversal();

	cout << "print the tree postorder of t2" << endl;
	t2.postorderTraversal();

	cout << "======================= try to insert in t1 =========" << endl;

	t1.insert(5);

	cout << "print the size of the tree: " << t1.treeNodesCount() << endl;

	cout << "print the tree inorder" << endl;
	t1.inorderTraversal();

	cout << "print the tree preorder" << endl;
	t1.preorderTraversal();

	cout << "print the tree postorder" << endl;
	t1.postorderTraversal();

	if(t1.search(6)) cout << "We found 6!" << endl;


	cout << "======================= try to insert in t2 =========" << endl;

	t2.insert(7);
	
	cout << "print the size of the tree of t2: " << t2.treeNodesCount() << endl;

	cout << "print the tree inorder of t2" << endl;
	t2.inorderTraversal();

	cout << "print the tree preorder of t2" << endl;
	t2.preorderTraversal();

	cout << "print the tree postorder of t2" << endl;
	t2.postorderTraversal();

	if(t1.search(8)) cout << "We found 6!" << endl;
	

	

        


        return 0;
}
