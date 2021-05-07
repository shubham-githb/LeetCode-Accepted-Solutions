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
    vector<int> v;
    int i;
    void inorder(TreeNode* root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    void constructor(TreeNode* root){
        if(root==NULL){
            return;
        }
        constructor(root->left);
        root->val = v[i++];
        constructor(root->right);
    }
    void recoverTree(TreeNode* root) {
        inorder(root);
        sort(v.begin(),v.end());
        constructor(root);
    }
};