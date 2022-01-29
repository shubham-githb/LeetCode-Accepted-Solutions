vector<vector<int>> dp(105,vector<int> (105,-1)); 

class Solution {
   
public:
    int uniquePaths(int m, int n) {
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        
        if(m<0 || n<0){
            return 0;
        }
        
        if(m==1 || n==1){
            return 1;
        }
        
        int left = uniquePaths(n-1,m);
        int right = uniquePaths(n,m-1);
        
        return dp[m][n] = left+right;
        
    }
};