class Solution {
    int count=0;
    void dfs(vector<vector<char>> & grids,int i,int j){
        if(i<0 || i>=grids.size() || j>=grids[0].size() || j<0) return;
        if(grids[i][j] =='.'){
            return;
        }
        grids[i][j]='.';
        dfs(grids,i+1,j);
        dfs(grids,i-1,j);
        dfs(grids,i,j+1);
        dfs(grids,i,j-1);
    }
public:
    int countBattleships(vector<vector<char>>& grids) {
        int m = grids.size();
        int n = grids[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grids[i][j]=='X'){
                    dfs(grids,i,j);
                    count++;
                }
            }
        }
        
        return count;
        
    }
};