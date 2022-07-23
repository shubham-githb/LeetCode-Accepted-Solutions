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
    int maxPath(TreeNode* root, int &result){
        if(root==NULL){
            return 0;
        }
        int left = maxPath(root->left,result);
        int right = maxPath(root->right,result);
        
        int max1 = max(max(left,right)+root->val,root->val);
        int max2 = max(max1,(left+right+root->val));
        result = max(max2,result);
        
        return max1;
        
    }
public:
    int maxPathSum(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int res=INT_MIN;
        maxPath(root,res);
        
        return res;
        
    }
};