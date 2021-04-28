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
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
            if(root==nullptr)
            {
                return nullptr;
            }
        
        if(root==p or root==q) return root;
        TreeNode *l= lowestCommonAncestor(root->left,p,q);
        TreeNode *r= lowestCommonAncestor(root->right,p,q);
        
        if(l!=nullptr and r!=nullptr)
        {
            return root;
        }
        else if(l!=nullptr)
        {
            return l;
        }
        else if(r!=nullptr)
        {
            return r;
        }
        return nullptr;
    }
};