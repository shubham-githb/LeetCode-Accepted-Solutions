class Solution {
    void dfs(vector<vector<int>>& graph,vector<vector<int>>& result,vector<int>& temp,int u)
    {
        int n = graph.size()-1;
        temp.push_back(u);
        if(u==n) result.push_back(temp);
        else
            for(auto v: graph[u]){
                dfs(graph,result,temp,v);
            }
        temp.pop_back();
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> result;
        vector<int> temp;
        dfs(graph,result,temp,0);
        return result;
        
    }
};