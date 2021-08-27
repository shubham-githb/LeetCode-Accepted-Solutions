class Solution {
public:
   bool canBeIncreasing(vector<int>& nums) {
        
        int n = nums.size();
        int m = INT_MIN;
        vector<int> dp(n,1);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[j] < nums[i] and dp[i]<=dp[j]){
                    dp[i]=dp[j]+1;
                }
            }
        }
        
        for(auto x: dp){
            m = max(m,x);
        }
        
        return m >= n-1;
        
    }
};