#include <iostream>
#include <queue>
#include <vector>
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
    vector<string> binaryTreePaths(TreeNode* root) {

        vector<int> arr;

        queue<TreeNode *> q;

        TreeNode *current = root;
        q.push(current);

        int leafs = 0;

        while(!q.empty()){

            current = q.front();
            q.pop();

            arr.push_back(current->val);
            if(current->left != NULL) q.push(current->left);

            if(current->right != NULL) q.push(current->right);

            if(current->left == NULL && current->right == NULL) ++leafs;
            
        }

	for(int i=0; i< arr.size(); i++)cout << arr[i] << ", ";

	cout << endl;

        vector<string> path(leafs);

        int degree = 0;
        

        for(int i =0 ; i < path.size();i++){

		if(log2(i+1) != floor(log2(i+1))) continue;
                degree = leafs / (i+1);

		bool found = false;
		if(degree == 1){ degree = leafs; found = true;}

		cout << "degree = " << degree << endl;

                for(int j = 0; j < degree;j++){
                    if(i == 0 || i == path[j].size() - 1){

			cout << "current arr: " << arr[i] << endl;
                        path[j] += to_string(arr[i]);
			
			cout << "current string: " << path[j] << endl;
                    }
                    else{
			cout << "current arr: " << arr[i] << endl;

                        path[j] += "->" + to_string(arr[i]) ;
			cout << "current string: " << path[j] << endl;


                    }            
                }
		cout << "=================" << endl;
        
        }

        return path;




        
    }
};













int main()
{
	Solution s1;
	
	TreeNode* root = new TreeNode(1);

		root->left = new TreeNode(2);
			
			root->left->left = new TreeNode(7);
			root->left->right = new TreeNode(5);

		root->right = new TreeNode(3);

			root->right->left = new TreeNode(6);
			root->right->right = new TreeNode(8);

	vector<string> st = s1.binaryTreePaths(root);

	for(int i=0; i < st.size();i++){

		cout << st[i] << ", "; 
	}
        


        


        return 0;
}
