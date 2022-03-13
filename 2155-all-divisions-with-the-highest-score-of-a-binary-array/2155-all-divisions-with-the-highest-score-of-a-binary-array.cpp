class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        int left[n];
        int right[n];
        int cnt =0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                cnt++;
            }
            left[i] = cnt;
        }
        
        cnt =0;
        
        for(int i=n-1;i>=0;i--){
            if(nums[i]==1){
                cnt++;
            }
            
            right[i] = cnt;
        }
        
        int dp[n+1];
        int val ;
        int mx = -1;
        
        for(int i=0;i<=n;i++){
            if(i==0){
                val = right[i];
            }
            else if(i==n){
                val = left[n-1];
            }
            else{
                val = left[i-1]+right[i];
            }
            dp[i] = val;
            mx = max(mx,val);
        }
        
        for(int i=0;i<=n;i++){
            if(dp[i]==mx){
                res.push_back(i);
            }
        }
        
        return res;
    }
};