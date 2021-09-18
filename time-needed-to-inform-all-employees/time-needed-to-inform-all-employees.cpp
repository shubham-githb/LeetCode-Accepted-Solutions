class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>> adj(n);
        for(int i=0;i<n;i++){
            if(manager[i]!=-1){
                adj[manager[i]].push_back(i);
            }
        }
        
        int ans =0;
        queue<pair<int,int>> q;
        q.push({headID,0});
        
        while(q.empty()==false){
            auto top = q.front();
            int curr = top.first;
            int cost = top.second;
            q.pop();
            ans = max(ans,cost);
            for(int j=0;j<adj[curr].size();j++){
                q.push({adj[curr][j],cost+informTime[curr]});
            }
        }
        
        return ans;
    }
};