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
    int total =0;
    void findPathSum(TreeNode* root, int sum, int currentSum){
        if(root==NULL) return;
        currentSum = currentSum + root->val;
        if(currentSum==sum){
            total = total + 1;
        }
        
        findPathSum(root->left,sum,currentSum);
        findPathSum(root->right,sum,currentSum);
    }
public:
    int pathSum(TreeNode* root, int sum) {
        if(root==NULL)
            return 0;
        findPathSum(root,sum,0);
        pathSum(root->left,sum);
        pathSum(root->right,sum);
        
        
        return total;
        
    }
};