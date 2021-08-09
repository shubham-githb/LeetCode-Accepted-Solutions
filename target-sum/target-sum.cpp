class Solution {
    int countSubsets(vector<int> &nums,int sum){
        int n = nums.size();
        vector<vector<int>> dp(n+1,vector<int>(sum+1));
        
        for(int i=0;i<=sum;i++){
            dp[0][i]=0;
        }
        
        for(int i=0;i<=n;i++){
            dp[i][0] =1;
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(nums[i-1]<=j and nums[i-1]!=0){
                    dp[i][j] = dp[i-1][j-nums[i-1]] + dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
        
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int sum =0;
        for(auto x: nums){
            sum = sum + x;
        }
        
        int m = (target+sum)/2;
        if(sum<target || (sum+target)%2!=0){
            return 0;
        }
        int c = count(nums.begin(),nums.end(),0);
        
        return pow(2,c) * countSubsets(nums,m);
        
    }
};