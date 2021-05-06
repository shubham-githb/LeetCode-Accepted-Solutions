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
    void printKth(TreeNode* root,int k, int &count,int &res){
       if(root!=NULL){
            printKth(root->left,k,count,res);
            if(++count==k){
                res = root->val;
                return;
            }
            printKth(root->right,k,count,res);
       }
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        int count =0;
        int res;
        printKth(root,k,count,res);
        return res;
        
    }
};