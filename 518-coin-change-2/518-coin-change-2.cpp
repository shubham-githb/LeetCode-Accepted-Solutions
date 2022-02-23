class Solution {
    int solve(int idx, int amount,vector<int>& coins, vector<vector<int>> &dp){
        if(idx==0){
            if(amount%coins[0]==0){
                return 1;
            }
            else 
                return 0;
        }
        if(dp[idx][amount]!=-1){
            return dp[idx][amount];
        }
        int take =0;
        if(amount>=coins[idx]){
            take = solve(idx,amount-coins[idx],coins,dp);   
        }
        int notTake = solve(idx-1,amount,coins,dp);
        
        return dp[idx][amount]=take+notTake;
    }
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        if(amount == 0) return 1;
        if(coins.size() == 0) return 0;
        
        return solve(n-1,amount,coins,dp);
    }
};