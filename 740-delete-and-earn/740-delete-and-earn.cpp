class Solution {
    int dp[20001];
    int solve(vector<int>& nums, int pos) {
        if(pos>=nums.size()) return 0;
        if(dp[pos]!=-1) return dp[pos];
        int curr = nums[pos];
        int sum = nums[pos];
        int idx = pos+1;
        
        while(idx<nums.size() and nums[idx]==curr){
            sum += nums[idx];
            idx++;
        }
        
        while(idx<nums.size() and nums[idx]==curr+1){
            idx++;
        }
        
        return dp[pos] = max(sum + solve(nums,idx),solve(nums,pos+1));
    }
public:
    int deleteAndEarn(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        memset(dp,-1,sizeof(dp));
        return solve(nums,0);
    }
};