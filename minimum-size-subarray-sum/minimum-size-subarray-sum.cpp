class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start =0;
        int minLen = INT_MAX;
        int n = nums.size();
        int sum =0;
        for(int i=0;i<n;i++){
            sum = sum + nums[i];
            while(sum>=target){
                minLen = min(minLen, i-start+1);
                sum = sum - nums[start];
                start++;
            }
        }
        
        if(minLen==INT_MAX) return 0;
        else
            return minLen;
        
    }
};