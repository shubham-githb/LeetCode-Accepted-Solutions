class Solution {
public:
    vector<vector<int>>dp;
    
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        // vector<vector<int>> dp(m,vector<int>(n,-1));
        dp.resize(n,vector<int>(m,-1));
        
        return min_path(grid,m,n,0,0);
        
    }
    
    int min_path(vector<vector<int>>& grid,int m , int n, int i, int j){
        if(i<0||i>=n||j<0||j>=m)
            return 4000001;
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(i==n-1&&j==m-1)
            return grid[i][j];
        int ans=grid[i][j];
        
        ans+=min(min_path(grid,m,n,i,j+1),min_path(grid,m,n,i+1,j));
        
        return dp[i][j] = ans;
    }
};