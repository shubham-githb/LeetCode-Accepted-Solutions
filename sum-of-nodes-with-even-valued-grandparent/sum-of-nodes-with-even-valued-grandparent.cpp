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
    int helper(TreeNode* root){
        if(root){
            return root->val;
        }
        return 0;
    }
public:
    int sumEvenGrandparent(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int sum =0;
        while(q.empty()==false){
            int n = q.size();
            for(int i=0;i<n;i++){
                TreeNode* curr = q.front();
                q.pop();
                if(curr->val%2==0){
                    if(curr->left) sum=sum+helper(curr->left->left) + helper(curr->left->right);
                    if(curr->right) sum=sum+helper(curr->right->left)+helper(curr->right->right);
                }
                
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
        }
        
        
        return sum;
        
    }
};