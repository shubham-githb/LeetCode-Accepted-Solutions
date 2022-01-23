class Solution {
    int solve(vector<int> &cost,int n , vector<int> &dp){
        if(n<0) return 0;
        if(n==0||n==1) return cost[n];
        
        if(dp[n]!=-1){
            return dp[n];
        }
        
        int left = cost[n]+solve(cost,n-1,dp);
        int right = cost[n]+solve(cost,n-2,dp);
        
        dp[n] = min(left,right);
        
        return dp[n];
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n =cost.size();
        vector<int> dp(n+1,-1);
        
        return min(solve(cost,n-1,dp),solve(cost,n-2,dp));
    }
};