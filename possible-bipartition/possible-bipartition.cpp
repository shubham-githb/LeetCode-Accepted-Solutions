class Solution {
public:
    bool checkbfs(vector<vector<int>>&g,int src,vector<int>&color)
    {
        color[src]=1;
        queue<int>q;
        q.push(src);
        while(!q.empty())
        {
            auto cur=q.front();
            q.pop();
            for(auto it:g[cur])
            {
                if(color[it]==color[cur])
                    return false;
                else if(color[it]==-1)
                {
                    color[it]=1-color[cur];
                    q.push(it);
                }
            }
        }
        return true;
    }
    
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) 
    {
      //Creating graphs 
      vector<vector<int> >g(n+1);
      for(auto v:dislikes)
      {
        g[v[0]].push_back(v[1]);
        g[v[1]].push_back(v[0]);
      }
      vector<int>color(n+1,-1);
      for(int i=1;i<=n;i++)
      {
        if(color[i]==-1)
        {
            if(!checkbfs(g,i,color))
                return false;
        }
      }
      return true;
    }
};