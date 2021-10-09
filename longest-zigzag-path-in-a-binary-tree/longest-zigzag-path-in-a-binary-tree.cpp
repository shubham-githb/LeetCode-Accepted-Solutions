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
    int longestZigZag(TreeNode* root) {
        if(root==NULL)return 0;
        queue<pair<TreeNode*,pair<int,char>>>q;
        q.push({root,{0,'N'}});
        int mx=0;
        while(q.empty()==false)
        {
            int n=q.size();
            while(n--)
            {
                pair<TreeNode*,pair<int,char>>temp=q.front();
                q.pop();
                TreeNode* node=temp.first;
                int x=temp.second.first;
                char dir=temp.second.second;
                if(x==0)
                {
                    if(node->left)q.push({node->left,{1,'L'}});
                    if(node->right)q.push({node->right,{1,'R'}});
                }
                else
                {
                    if(node->left)
                    {
                        if(dir=='L')q.push({node->left,{1,'L'}});
                        else q.push({node->left,{x+1,'L'}});
                    }
                    if(node->right)
                    {
                        if(dir=='R')q.push({node->right,{1,'R'}});
                        else q.push({node->right,{x+1,'R'}});
                    }
                }
                mx=max(mx,x);
            }
        }
        return mx;
    }
};