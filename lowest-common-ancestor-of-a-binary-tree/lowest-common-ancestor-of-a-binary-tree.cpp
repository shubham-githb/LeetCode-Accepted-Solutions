/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    TreeNode* lowestCommonAncestor(TreeNode* root,int n1,int n2) {
        
        if(root==NULL) return root;
        
        if(root->val==n1 || root->val==n2){
            return root;
        }
        
        TreeNode* lca1 = lowestCommonAncestor(root->left,n1,n2);
        TreeNode* lca2 = lowestCommonAncestor(root->right,n1,n2);
        
        if(lca1!=NULL and lca2!=NULL){
            return root;
        }
        
        if(lca1!=NULL){
            return lca1;
        }
        
        else{
            return lca2;
        }
        
        
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int n1 = p->val;
        int n2 = q->val;
        
        return lowestCommonAncestor(root,n1,n2);
        
    }
};