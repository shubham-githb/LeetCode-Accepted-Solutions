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
    bool isBST(TreeNode* root,long min , long max){
        if(root==NULL)
            return true;
        return (root->val>min and root->val<max and isBST(root->left,min,root->val) and isBST(root->right,root->val,max));
    }
public:
    bool isValidBST(TreeNode* root) {
      
        return isBST(root,LONG_MIN,LONG_MAX);
        
    }
};