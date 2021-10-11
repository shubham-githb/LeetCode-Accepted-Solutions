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
// class Solution {
// class Solution {
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       
       return cTree(preorder,inorder,0,inorder.size()-1);
        
        
        
    }
    
    
    int preIndex=0;
    TreeNode *cTree(vector<int>& preorder, vector<int>& inorder,int is,int ie){
    if(is>ie)return NULL;
    TreeNode* root=new TreeNode(preorder[preIndex++]);
    
    int inIndex;
    for(int i=is;i<=ie;i++){
        if(inorder[i]==root->val){
            inIndex=i;
            break;
        }
    }
    root->left=cTree(preorder,inorder, is, inIndex-1);
    root->right=cTree(preorder, inorder, inIndex+1, ie);
    return root;
}

};
