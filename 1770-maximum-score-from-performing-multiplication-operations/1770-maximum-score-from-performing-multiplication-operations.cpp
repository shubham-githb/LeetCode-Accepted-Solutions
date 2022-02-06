class Solution {
    int dp[1001][1001];
    int solve(int idx,vector<int>& nums,vector<int> &mult,int s){
        if(idx==mult.size()) return 0;
        if(dp[idx][s]!=-1) return dp[idx][s];
        int e = nums.size()-(idx-s)-1;
        int left = mult[idx]*nums[s]+solve(idx+1,nums,mult,s+1);
        int right = mult[idx]*nums[e]+solve(idx+1,nums,mult,s);
        
        return dp[idx][s] = max(left,right);
        
        
    }
public:
    int maximumScore(vector<int>& nums, vector<int>& mult) {
        memset(dp,-1,sizeof(dp));
        return solve(0,nums,mult,0);
        
    }
};