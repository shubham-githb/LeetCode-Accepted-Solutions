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
    int sum =0;
public:
    int sumOfLeftLeaves(TreeNode* root) {
        helper(root);
        return sum;
    }
    
    void helper(TreeNode* root){
        if(root==NULL) return ;
        if(isLeaf(root->left)) sum = sum + root->left->val;
        helper(root->left);
        helper(root->right);
    }
    
    bool isLeaf(TreeNode* root){
        if(root==NULL) return false;
        if(root->left==NULL and root->right==NULL){
            return right;
        }
        
        return false;
    }
    
};