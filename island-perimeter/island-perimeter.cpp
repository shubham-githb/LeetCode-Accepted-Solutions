class Solution {
    void dfs(vector<vector<int>>& grid,int i, int j , int &p){
        grid[i][j] = 2;
        if(i==0 || grid[i-1][j]==0) p++;
        if(i==grid.size()-1 || grid[i+1][j]==0) p++;
        if(j==0 || grid[i][j-1]==0) p++;
        if(j==grid[0].size()-1|| grid[i][j+1]==0) p++;
        
        if(i>0 and grid[i-1][j]==1) dfs(grid,i-1,j,p);
        if(i<grid.size()-1 and grid[i+1][j]==1) dfs(grid,i+1,j,p);
        if(j>0 and grid[i][j-1]==1) dfs(grid,i,j-1,p);
        if(j<grid[0].size()-1 and grid[i][j+1]==1) dfs(grid,i,j+1,p);
        
        
    }
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int p = 0;
        int r = grid.size();
        int c = grid[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1){
                    dfs(grid,i,j,p);
                }
            }
        }
        
        return p;
        
    }
};