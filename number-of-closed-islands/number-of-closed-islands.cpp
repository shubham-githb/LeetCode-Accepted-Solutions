class Solution {
    int res =0;
    void dfs(int i, int j, vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        if(i<0 || i>m-1 || j<0 || j>n-1 || grid[i][j]!=0) return;
        grid[i][j] = -1;
        dfs(i+1,j,grid);
        dfs(i,j+1,grid);
        dfs(i-1,j,grid);
        dfs(i,j-1,grid);
    }
public:
int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((i==0||j==0||i==m-1||j==n-1)&&grid[i][j]==0){
                    dfs(i,j,grid);

                }
            }
        }        
 for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    dfs(i,j,grid);
                    ans++;
                }
            }
        }
        return ans;
    }
};