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
    bool isPairSum(TreeNode* root, int sum, unordered_set<int> &s){
        if(root==NULL){
            return false;
        }
        if(isPairSum(root->left,sum,s)==true)
            return true;
        if(s.find(sum-root->val)!=s.end())
            return true;
        else
            s.insert(root->val);
        return isPairSum(root->right,sum,s);
    }
    
public:
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> hset;
        return isPairSum(root,k,hset);
        
    }
};