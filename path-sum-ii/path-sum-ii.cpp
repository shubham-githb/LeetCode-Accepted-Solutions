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
    vector<vector<int>> vc;
    
    void helper(TreeNode* root, int& targetSum, vector<int> curr){
        if(root==NULL)return;
        curr.push_back(root->val);
        int ss = accumulate(curr.begin(),curr.end(),0);
        if(root->left == NULL && root->right==NULL){
            if(ss == targetSum){
                vc.push_back(curr);
                return;
            }
        }
        helper(root->left,targetSum,curr);
        helper(root->right,targetSum,curr);
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> curr;
        helper(root,targetSum,curr);
        return vc;
    }
};