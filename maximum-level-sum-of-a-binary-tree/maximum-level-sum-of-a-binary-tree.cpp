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
    int maxLevelSum(TreeNode* root) {
        if(!root) return 0;
        int level=0;
        int ans;
        queue<TreeNode*> q;
        q.push(root);
        int maxi = INT_MIN;
        while(q.empty()==false){
            int sum =0;
            int n = q.size();
            level++;
            for(int i=0;i<n;i++)
            {
                TreeNode* curr = q.front();
                q.pop();
                sum = sum + curr->val;
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
              
            }
            if(sum>maxi){
                maxi=sum;
                ans = level;
            }
        }
         root->left=root->right=nullptr;
        return ans;
    }
};