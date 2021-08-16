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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* node = new TreeNode(val);
            node->left = root;
            return node;
        }
        
        queue<TreeNode*> q;
        q.push(root);
        int currentDepth = 1;
        while(currentDepth<depth-1){
            int size=q.size();
            while(size>0){
                TreeNode* curr = q.front();
                q.pop();
                size--;
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            currentDepth++;
            
        }
        
        while (!q.empty()) {
            TreeNode *curr = q.front();
            q.pop();
            TreeNode *left = curr->left, *right = curr->right;
            curr->left = new TreeNode(val);
            curr->right = new TreeNode(val);
            curr->left->left = left;
            curr->right->right = right;
        }
        return root;
    }
};