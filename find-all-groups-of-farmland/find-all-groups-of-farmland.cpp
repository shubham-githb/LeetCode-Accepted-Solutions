class Solution {
    vector<vector<int>> ans;
    void dfs(vector<vector<int>>& grid,int i,int j,int &x, int &y){
        if(i<0 || j<0 || i>=grid.size() || j>= grid[i].size()){
            return;
        }
        if(grid[i][j]==0){
            return;
        }
        
        x = max(i,x);
        y = max(j,y);
        
        grid[i][j]=0;
        
        dfs(grid,i+1,j,x,y);
        dfs(grid,i-1,j,x,y);
        dfs(grid,i,j+1,x,y);
        dfs(grid,i,j-1,x,y);
    }
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]==1){
                    int x = i;
                    int y = j;
                    dfs(grid,i,j,x,y);
                    ans.push_back({i,j,x,y});
                }
            }
        }
        return ans;
    }
};