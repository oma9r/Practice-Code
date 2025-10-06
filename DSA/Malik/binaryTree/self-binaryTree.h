#include <iostream>
using namespace std;

template <class elemType>


struct binaryTreeNode
{
	elemType info;
	binaryTreeNode<elemType> llink;
	binaryTreeNode<elemType> rlink;
};

template <class elemType>
class binaryTreeType
{
	const binaryTreeType<elemType>& operator= (const binaryTreeType<elemType>&);
	
	bool isEmpty() const;

	binaryTreeNode<elemType>& search(const binaryTreeNode<elemType>&) const;

	void insertNode(const binaryTreeNode<elemType>&);

	void deleteNode(const binaryTreeNode<elemType>&);

	int treeHeight()const;

	int treeNodes() const;

	int treeLeaves() const;
	
	void inOrderTraversal();
	
	void preOrderTraversal();
	
	void postOrderTraversal();

	void copyTree(const binaryTreeType<elemType>&);

	void destroyTree();

	binaryTreeType(const binaryTreeType<elemType>& otherTree);

	binaryTreeType();

	~binaryTreeType();

	protected:
			binaryTreeNode<elemType> *root;

	private:
			void destroy(binaryTreeNode<elemType>* &p);

			void inorder(binaryTreeNode<elemType> *p) const;

			
};
	