class Solution {
    int solve(int n , vector<int> &dp){
        if(n==0 || n==1) {
            return n;
        }
        
        if(dp[n]!=-1){
            return dp[n];
        }
        
        int ans1 = solve(n-1,dp);
        
        int ans2 = solve(n-2,dp);
        
        dp[n] = ans1+ans2;
        
        return dp[n];
    }
public:
    int fib(int n) {
        vector<int> dp(n+1);
        for(int i=0;i<=n;i++){
            dp[i] = -1;
        }
        
        int ans = solve(n,dp);
        return ans;
        
    }
};