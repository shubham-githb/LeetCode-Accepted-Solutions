class Solution {
    int dp[1001];
    int help(int i, vector<int>& cost){
        if(i>=cost.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int op1 = help(i+1,cost);
        int op2 = help(i+2,cost);
        return dp[i]=min(op1,op2)+cost[i];
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp,-1,sizeof dp);
        return min(help(0,cost),help(1,cost));
        
    }
};