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
    TreeNode* construct(vector<int>& arr,int s,int e){
       if(s > e) return NULL;
        if(s == e) return  new TreeNode(arr[s]);
        
        int idx = findMax(arr, s, e);
        TreeNode*root = new TreeNode(arr[idx]);
        root->left  = construct(arr, s, idx-1);
        root->right = construct(arr, idx+1, e);
        
        return root;
    }
    int findMax(vector<int>& ans, int start, int end){
        int max = INT_MIN;
        int idx = -1;
        for(int i=start;i<=end;i++){
            if(ans[i]>max){
                max = ans[i];
                idx = i;
            }
        }
        
        return idx;
    }
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode* root = construct(nums,0,nums.size()-1);
        return root;
        
    }
};