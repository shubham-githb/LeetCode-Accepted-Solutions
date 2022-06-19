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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(!root) return result;
        queue<TreeNode*> q;
        q.push(root);
        while(q.empty()==false){
            int n = q.size();
            vector<int> temp(n);
            // TreeNode* curr = q.front();
            for(int i=0;i<n;i++){
                TreeNode* curr = q.front();
                temp[i] = curr->val;
                q.pop();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            
            }
            result.push_back(temp);
            
        }
        
        // result.push_back(temp);
        
        
        return result;
        
        
    }
    
    
};