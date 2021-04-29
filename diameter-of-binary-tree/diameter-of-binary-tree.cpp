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
int height(TreeNode *root,int &res){
    if(root==NULL)
        return 0;
    int lh=height(root->left,res);
    int rh=height(root->right,res);
    res=max(res,lh+rh);
    
        return 1+max(lh,rh);
}
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int res = INT_MIN;
        if(root==NULL) return 0;
        height(root,res);
        return res;
        
    }
};