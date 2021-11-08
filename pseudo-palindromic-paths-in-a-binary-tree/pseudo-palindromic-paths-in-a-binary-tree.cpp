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
    int res =0;
    unordered_map<int,int> hmap;
    
    //*****************************************************************
    void dfs(TreeNode* root){
        if(!root){
            return;
        }
        
        hmap[root->val]++;
        if(root->left==NULL and root->right==NULL){
            int odd =0;
            for(auto x: hmap){
                if(x.second%2==1){
                    odd++;
                }
            }
                
                if(odd<=1){
                    res++;
                }
        }
        
        dfs(root->left);
        dfs(root->right);
        
        hmap[root->val]--;
    }
    
    
    
    
public:
    int pseudoPalindromicPaths (TreeNode* root) {
        dfs(root);
        return res;
    }
};