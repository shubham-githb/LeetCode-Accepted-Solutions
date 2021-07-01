class Solution {
public:
    int findCircleNum(vector<vector<int>>& m) {
        int n = m.size();
        if(n==0) return n;
        int ans =0;
        vector<bool> visited(n,false);
        for(int i=0;i<n;i++){
            if(visited[i]) continue;
            queue<int> q;
            q.push(i);
            ans++;
            while(q.empty()==false){
                int x = q.front();
                q.pop();
                visited[x]=true;
                for(int j =0;j<n;j++){
                    if(visited[j]==false and m[x][j]==1){
                        q.push(j);
                        visited[j]=true;
                    }
                }
            }
        }
        
        return ans;
    }
};