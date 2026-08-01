#include <iostream>
#include <queue>
using namespace std;

/// Definition for a binary tree node.
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        queue <TreeNode *> pu;
        queue <TreeNode *> qu;

        TreeNode *p1; 
        pu.push(p);
        TreeNode *q1;
        qu.push(q);

        while(!qu.empty() && !pu.empty()){

            p1 = pu.front();

		cout << "p1 value " << p1->val << endl;

            pu.pop();
            q1 = qu.front();


		cout << "q1 value " << q1->val << endl;


            qu.pop();

            if(p1->val != q1->val){cout << p1->val << " != " << q1->val << " they are not equal!" << endl; return false;}

            else{
                if(p1->left != NULL){ pu.push(p1->left); cout << "p1->left->val = " << p1->left->val << endl; }
                if(p1->right != NULL){ pu.push(p1->right); cout << "p1->right->val = " << p1->right->val << endl; }

                if(q1->left != NULL){ qu.push(q1->left); cout << "q1->left->val = " << q1->left->val << endl; }
                if(q1->right != NULL){ qu.push(q1->right);cout << "q1->right->val = " << q1->right->val << endl; }
            }
        }

	cout << "the size of qu = " << qu.size() << endl << "the size of pu = " << pu.size() << endl;

        if(!qu.empty() || !pu.empty()) return false;

        return true;
        
    }
};











int main()
{
	   Solution s1;

	   TreeNode *q = new TreeNode(1);
		
		//q->left = new TreeNode(2);
		q->right = new TreeNode(2);

           TreeNode *p = new TreeNode(1);
		p->left = new TreeNode(2);
		//p->right = new TreeNode(3);

	   
	   if(s1.isSameTree(p,q)) cout << "true" << endl;
           else cout << "false" << endl;

        


        return 0;
}
