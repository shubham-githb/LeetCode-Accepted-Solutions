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
    int maxi=-1;
    map<int,int> m;
    int dfs(TreeNode* root){
        if(root==NULL) return 0;
        int total = dfs(root->left)+dfs(root->right)+root->val;
        maxi = max(maxi,++m[total]);
        return total;
        
    }
public:
    vector<int> findFrequentTreeSum(TreeNode* root) {
        dfs(root);
        vector<int>ans;
        for(auto x: m){
            if(x.second==maxi){
                ans.push_back(x.first);
            }
        }
        
        return ans;
    }
};