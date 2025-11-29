#include <iostream>
using namespace std;

template <class elemType>
class bSearchTreeType: public binaryTreeType<elemType>
{
	public:
		bool search(const elemType& searchItem) const;
		void insert(const elemType& insertItem);
		void deleteNode(const elemType& deleteItem);

	private:
		void deleteFromTree(binaryTreeNode<elemType>* &p);
};

template <class elemType>
bool bSearchTreeType<elemType>::search(const elemType& searchItem) const
{
	binaryTreeNode<elemType> *current;
	bool found = false;


	if(root == NULL)
			cerr << "Can't search the empty tree." << endl;
	else
	{
			current = root;
			
			while(current != NULL && !found)
			{
				if(current->info == searchItem)
					found = true;
				else if(current->info > searchItem)
					current = current->llink;
				else 
					current = current->rlink;
			}
	}
	return found;
};


template <class elemType>
void bSearchTreeType<elemType>::insert(const elemType& insertItem)
{
	binaryTreeNode<elemType> *current;
	binaryTreeNode<elemType> *trailCurrent;
	binaryTreeNode<elemType> *newNode;

	
	newNode = new binaryTreeNode<elemType>;
	assert(newNode != NULL);
	newNode->info = insertItem;
	newNode->llink = NULL;
	newNode->rlink = NULL;
	
	if(root == NULL)
			root = newNode;
	else
	{
		current = root;
		
		while(current != NULL)
		{
			trailCurrent = current;

			if(current->info == insertItem)
			{
				cerr << "The insert item is already in the list-";
				cerr << "duplicates are not allowed." << insertItem << endl;
				return;
			}

			else if(current->info > insertItem)
				current = current->llink;
			else 
				current = current->rlink;
		}

		if(trailCurrent->info > insertItem)
							trailCurrent->llink = newNode;
		else
			trailCurrent->rlink = newNode;
	}
}
		