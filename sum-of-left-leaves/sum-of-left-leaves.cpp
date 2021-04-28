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
    bool isLeaf(TreeNode *root){
        if(root==NULL)
            return false;
        if(root->left==NULL and root->right==NULL){
            return true;
        }
        
        return false;
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int res =0;
        if(root!=NULL){
                if(isLeaf(root->left)){
                    res = res + root->left->val;
                }
                else
                    res = res + sumOfLeftLeaves(root->left);
                res = res + sumOfLeftLeaves(root->right);
            }
    
        return res;
        
    }
};