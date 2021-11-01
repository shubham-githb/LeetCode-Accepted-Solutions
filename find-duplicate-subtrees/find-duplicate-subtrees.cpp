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
    vector<TreeNode*> res;
   unordered_map<string,int>hmap;
    string dfsPath(TreeNode* root, string p){
        if(!root){
            return "";
        }
       p+=to_string(root->val)+"-"+dfsPath(root->left,p)+"-"+dfsPath(root->right,p);
        hmap[p]++;
        if(hmap[p]==2){
            res.push_back(root);
        }
        return p;
    }
public:
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        dfsPath(root,"");
        return res;
        
    }
};