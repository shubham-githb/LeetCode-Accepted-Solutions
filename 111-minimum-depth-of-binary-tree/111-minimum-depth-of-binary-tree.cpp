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
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        if(root->left==NULL and root->right==NULL){
            return 1;
        }
        int lh = INT_MAX;
        int rh = INT_MAX;
        // int lh = minDepth(root->left);
        // int rh = minDepth(root->right);
        if(root->left){
            lh = minDepth(root->left);
        }
        
        if(root->right){
            rh = minDepth(root->right);
        }
        
        return min(lh,rh)+1;
        
    }
};