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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        int level =0;
        q.push(root);
        while(q.empty()==false){
            vector<int> v;
            int n = q.size();
            for(int i=0;i<n;i++){
                TreeNode* curr = q.front();
                q.pop();
                v.push_back(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            if(level%2==0){
                for(int k=0;k<v.size()-1;k++)
             {
                 if(v[k]%2==0)
                     return false;
                 if(v[k]>=v[k+1])
                     return false;
             }
             if(v[v.size()-1]%2==0)
                 return false;
            }
            else
            {
              for(int k=0;k<v.size()-1;k++)
             {
                 if(v[k]%2==1)
                     return false;
                 if(v[k]<=v[k+1])
                     return false;
             }
             if(v[v.size()-1]%2==1)
                 return false;
         }
            
            level = level + 1;
            ans.push_back(v);
        }
        
        return true;
        
    }
};