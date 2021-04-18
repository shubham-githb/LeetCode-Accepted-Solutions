/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int findMaxUtil(TreeNode* root, int &res)
    {
       if(root==NULL) 
           return 0;
       int left = findMaxUtil(root->left , res);
       int right = findMaxUtil(root->right, res);
        
       int ms = max(max(left,right)+root->val,root->val);
       int m2 = max(ms,left+right+root->val);
       
       res = max(m2,res);
    
       return ms;
        
    }
    
    int maxPathSum(TreeNode* root) {
        int res = INT_MIN;
        findMaxUtil(root,res);
        
        return res;
        
    }
};