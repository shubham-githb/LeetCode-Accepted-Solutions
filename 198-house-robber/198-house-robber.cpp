class Solution {
    int solve(vector<int> &nums, int i, vector<int> &dp){
        if(i>=nums.size()){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        
        int left = nums[i] + solve(nums,i+2,dp);
        int right = solve(nums,i+1,dp);
        
        dp[i] = max(left,right);
        
        return dp[i];
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        return solve(nums,0,dp);
        
    }
};