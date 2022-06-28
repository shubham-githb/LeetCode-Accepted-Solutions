class Solution {
    vector<vector<int>> memo;
    int solve(int m, int n, int i, int j){
        if(i==m-1 || j==n-1){
            return 1;
        }
        if(i>=m || j>=n){
            return 0;
        }
        if(memo[i][j]!=-1){
            return memo[i][j];
        }
        return memo[i][j] = solve(m,n,i+1,j)+solve(m,n,i,j+1);
    }
public:
    int uniquePaths(int m, int n) {
        memo = vector<vector<int>> (m,vector<int>(n,-1));
        int ans ;
        ans = solve(m,n,0,0);
        return ans;
        
    }
};