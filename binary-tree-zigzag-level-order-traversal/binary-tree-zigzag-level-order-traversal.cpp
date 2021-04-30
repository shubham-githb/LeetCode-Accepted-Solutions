
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return {};
        queue<TreeNode*> q;
        q.push(root);
        while(q.empty()==false){
            vector<int> temp;
            int count = q.size();
            for(int i=0;i<count;i++){
                TreeNode *curr = q.front();
                temp.push_back(curr->val);
                q.pop();
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            
            ans.push_back(temp);

        }
        
        for(int i=1;i<ans.size();i+=2){
            reverse(ans[i].begin(),ans[i].end());
        }
        
        return ans;
        
    }
};