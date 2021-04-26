class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum =0;
        for(int i=0;i<n;i++) sum+=nums[i];
        if(sum%2==1) return false;
        int k = sum/2;
        int dp[n+1][k+1];
        for(int i=0;i<n+1;i++) dp[i][0] =1 ;
        for(int j=0;j<k+1;j++) dp[0][j] = 0;
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<k+1;j++)
            {
                if(nums[i-1]<=j)
                    dp[i][j]=dp[i-1][j-nums[i-1]]||dp[i-1][j];
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        
        return dp[n][k];
    }
};