#pragma once

template <class elemType>
struct binaryTreeNode
{
	elemType info;
	binaryTreeNode<elemType>* llink;
	binaryTreeNode<elemType>* rlink;
};

template <class elemType>
class binaryTreeType {

public:
	const binaryTreeType<elemType>& operator= (const binaryTreeType<elemType>&);
	bool isEmpty() const;
	void inorderTraversal() const;
	void preorderTraversal() const;
	void postorderTraversal() const;

	int treeHeight() const;
	int treeNodeCount() const;
	int treeLeavesCount() const;
	void destroyTree();

	binaryTreeType(const binaryTreeType<elemType>& otherTree);

	binaryTreeType();

	~binaryTreeType();

protected:
	binaryTreeNode<elemType>* root;

private:
	void copyTree(binaryTreeNode<elemType>*& copiedTreeRoot, binaryTreeNode<elemType>* otherTreeRoot);
	void destroy(binaryTreeNode<elemType>*& p);
	void inorder(binaryTreeNode<elemType>* p) const;
	void preorder(binaryTreeNode<elemType>* p) const;
	void postorder(binaryTreeNode<elemType>* p) const;

	int height(binaryTreeNode<elemType>* p) const;
	int max(int x, int y) const;
	int nodeCount(binaryTreeNode<elemType>* p) const;
	int leavesCount(binaryTreeNode<elemType>* p) const;
};


