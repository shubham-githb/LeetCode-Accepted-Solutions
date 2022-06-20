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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if(root==NULL){
            return res;
        }
        
        // vector<int> res;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()>0){
            int n = q.size();
            for(int i=0;i<n;i++){
                TreeNode* curr = q.front();
                if(i==0){
                    res.push_back(curr->val);
                }
                q.pop();
                if(curr->right) q.push(curr->right);
                if(curr->left) q.push(curr->left);
            }
        }
        
        return res;
    }
};