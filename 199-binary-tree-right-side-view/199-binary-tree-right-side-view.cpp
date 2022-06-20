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
        vector<vector<int>> total;
        
        if(root==NULL){
            return res;
        }
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(q.size()>0)
        {
            // TreeNode* curr = q.front();
            int n = q.size();
            vector<int> temp;
            for(int i=0;i<n;i++)
            {
                TreeNode* curr = q.front();
                temp.push_back(curr->val);
                q.pop();
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            total.push_back(temp);
        }
        
        int m = total.size();
        for(int i=0;i<m;i++){
            int x = total[i].size();
            res.push_back(total[i][x-1]);
        }
        
        return res;
    }
};