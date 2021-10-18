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
    int getMinimumDifference(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<int> ans;
        while(q.empty()==false){
            auto x = q.front();
            q.pop();
            ans.push_back(x->val);
            if(x->left){
                q.push(x->left);
            }
            if(x->right){
                q.push(x->right);
            }
        }
        
        int mind = INT_MAX;
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans.size();j++){
                if(i!=j){
                    int diff = abs(ans[i]-ans[j]);
                    mind=min(mind,diff);
                }
            }
        }
        return mind;
    }
};