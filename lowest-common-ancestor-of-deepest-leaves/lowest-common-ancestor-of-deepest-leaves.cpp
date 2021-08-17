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
    int getDepth(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return max(getDepth(root->right),getDepth(root->left))+1;
    }
public:
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
          if(root==NULL){
            return {};
        }
        
        int left_subtree = getDepth(root->left);
        int right_subtree = getDepth(root->right);
        
        if(left_subtree==right_subtree){
            return root;
        }
        
        if(left_subtree>right_subtree){
            return lcaDeepestLeaves(root->left);
        }
        
        
        else
            return lcaDeepestLeaves(root->right);
        
        
        
    }
};