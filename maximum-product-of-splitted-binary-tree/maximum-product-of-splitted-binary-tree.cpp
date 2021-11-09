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
    long totalSum = 0, maxPro = 0;
public:
    void cal_totalSum(TreeNode* root){
        if(root==NULL) return;
        cal_totalSum(root->left);
        cal_totalSum(root->right);
        totalSum += root->val;
    }
    long cal_maxPro(TreeNode* root){
        if(root==NULL) return 0;
        long l = cal_maxPro(root->left);
        long r = cal_maxPro(root->right);
        long SubtreeSum = l+r+root->val;
        maxPro = max(maxPro,SubtreeSum*(totalSum-SubtreeSum));
        return SubtreeSum;
    }
    int maxProduct(TreeNode* root) {
        cal_totalSum(root);
        cal_maxPro(root);
        
        return (int)(maxPro%1000000007);
        
    }
};