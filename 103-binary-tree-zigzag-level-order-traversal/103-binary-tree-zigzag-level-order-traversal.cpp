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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL){
            return res;
        }
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(q.empty()==false){
            vector<int> temp;
            int n = q.size();
            for(int i=0;i<n;i++){
                TreeNode* x = q.front();
                temp.push_back(x->val);
                q.pop();
                if(x->left){
                    q.push(x->left);
                }
                if(x->right){
                    q.push(x->right);
                }
            }
            res.push_back(temp);
        }
        for(int i=0;i<res.size();i++){
            if(i%2!=0){
                reverse(res[i].begin(),res[i].end());
            }
        }
        
        return res;
        
    }
};