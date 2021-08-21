
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*> q;
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int> v(0);
            for(int i=0;i<n;i++){
                Node* curr = q.front();
                q.pop();
                v.push_back(curr->val);
                for(int j=0;j<curr->children.size();j++){
                    q.push(curr->children[j]);
                }
            }
            
            ans.push_back(v);
        }
        return ans;
    }
};