#include "self-binaryTree.h"


template <class elemType>

binaryTreeType<elemType>& binaryTreeType::operator=(const binaryTreeType<elemType>& otherBinaryTree)
{
	copyTree(otherBinaryTree);
};

template <class elemType>
bool binaryTreeType::isEmpty() const
{
	return (