class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        if(n==0) return true;
        queue<int> q;
        vector<bool> visited(n, false);
        
        visited[0] = true;
        
        for(int i=0;i<rooms[0].size();i++)
        {
            q.push(rooms[0][i]);
        }
        
        while(q.empty()==false)
        {
            auto x = q.front();
            q.pop();
            if(visited[x]==true) continue;
            visited[x] = true;
            for(int i=0;i<rooms[x].size();i++)
            {
                q.push(rooms[x][i]);
            }
        }
        
        
        for(int i=0;i<n;i++){
            if(visited[i]==false) return false;
        }
        
        
        return true;
        
    }
};