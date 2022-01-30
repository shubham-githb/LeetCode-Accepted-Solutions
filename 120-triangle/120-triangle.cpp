class Solution {
    int solve(vector<vector<int>>& grid,int i,int j,int n,vector<vector<int>> &dp){
        if(i>=n){
            return 0;
        }
        
    
        if(j>=n || j<0){
            return 1e9;
        }
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        int left = grid[i][j] + solve(grid,i+1,j,n,dp);
        int right = grid[i][j] + solve(grid,i+1,j+1,n,dp);
        
        return dp[i][j] =  min(left,right);
        
    }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        // vector<vector<int>> dp(n+1,vector<)
        int n = triangle.size();
        vector<vector<int>> dp(n+1,vector<int> (n+1,-1));
        // int m = triangle[0].size();
        return solve(triangle,0,0,n,dp);
    }
};