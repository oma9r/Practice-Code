#include <iostream>
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
    bool hasPathSum(TreeNode* root, int targetSum) {

        if(root == NULL) return false;
        TreeNode *current = root;

        int sum = 0;


        while(current != NULL){

                    sum += current->val; 

                    if(current->left != NULL && current->right != NULL){
                        if(current->right->val > current->left->val) current = current->left;
                        else current = current->right;
                    }
                    else if(current->left != NULL){
                        current = current->left;
                    }
                    else current = current->right;

		//if(sum == targetSum) return true;
        }
        return (sum == targetSum);
        
    }
};












int main()
{
	Solution s1;

	TreeNode *root = new TreeNode(5);

	root->left = new TreeNode(4);
		root->left->left = new TreeNode(11);

			root->left->left->right = new TreeNode(2);
			root->left->left->left = new TreeNode(7);

	root->right = new TreeNode(8);
		root->right->left = new TreeNode(13);
		root->right->right = new TreeNode(4);
			root->right->right->right = new TreeNode(1);

	if(s1.hasPathSum(root,22)) cout << "true" << endl;

	else cout << "false" << endl;
        


        


        return 0;
}
