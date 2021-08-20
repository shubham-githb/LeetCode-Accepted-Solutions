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
    int ans =0;
     int helper(TreeNode* root){
        if(root==NULL) return 0;
        int left = helper(root->left);
        int right = helper(root->right);
        int leftcheck =0;
        int rightcheck =0;
        if(root->left!=NULL and root->left->val == root->val){
            leftcheck = left+1;
        }
        if(root->right!=NULL and root->val==root->right->val){
            rightcheck = right+1;
        }
        
        ans = max(ans,leftcheck+rightcheck);
        return max(leftcheck,rightcheck);
    }
public:
    int longestUnivaluePath(TreeNode* root) {
        helper(root);
        return ans;
        
    }
};