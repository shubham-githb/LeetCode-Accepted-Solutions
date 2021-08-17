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
        return max(getDepth(root->left),getDepth(root->right))+1;
    }
public:
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        
        int left_subtree = getDepth(root->left);
        int right_subtree = getDepth(root->right);
        
        if(left_subtree==right_subtree){
            return root;
        }
        
        if(left_subtree>right_subtree){
            return subtreeWithAllDeepest(root->left);
        }
        
        
        else
            return subtreeWithAllDeepest(root->right);
        
        
        
    }
};