#include <iostream>
#include <cmath>
using namespace std;

   struct TreeNode {
       int val;
       TreeNode *left;
       TreeNode *right;
       TreeNode() : val(0), left(nullptr), right(nullptr) {}
       TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
       TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:

    
    bool isBalanced(TreeNode* root) {

        if(root != NULL){

	     cout << "height of root->left = " << count(root->left) << " with current root->left->value = " << root->left->val << endl << "height of root->right = " << count(root->right)  << " with current root->right->value = " << root->right->val << endl; 

            int x = abs(abs(count(root->left)) - abs(count(root->right)));

		if(x < -1) x = x * -1;

		//x = x - 1;

		cout << "x = " << x << endl;

            if(x != 1 || x != 0) return false;


            else return isBalanced(root->left) && isBalanced(root->right);
        }
        else{
            return false;
        }
    }

    
    int count(TreeNode * root){

        if(root == NULL) return -1;

        else return 1 + max(count(root->left),count(root->right));
    };
};












int main()
{
	TreeNode *root = new TreeNode(3);

	root->left = new TreeNode(9);
	root->right = new TreeNode(20);

	root->right->right = new TreeNode(7);
	root->right->left = new TreeNode(15);

	
        Solution s1;

	if(s1.isBalanced(root)) cout << "the tree is balanced!" << endl;

	else cout << " the tree is not!" << endl;


        


        return 0;
}
