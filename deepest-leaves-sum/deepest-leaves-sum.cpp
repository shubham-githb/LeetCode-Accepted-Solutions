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
    int deepestLeavesSum(TreeNode* root) {
        if(root->left==NULL and root->right==NULL){
            return root->val;
        }
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int sum =0;
        int last_sum =0;
        
        while(q.empty()==false){
            TreeNode* x = q.front();
            q.pop();
            if(x==NULL){
                if(q.size()==0){
                    last_sum = sum;
                    break;
                    
                }
                q.push(NULL);
                sum =0;
            }
            else{
                sum = sum + x->val;
                if(x->left!=NULL) q.push(x->left);
                if(x->right!=NULL) q.push(x->right);
            }
        }
        
        return last_sum;
        
    }
};