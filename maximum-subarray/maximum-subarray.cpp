class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int res =nums[0];
        for(int i=0;i<n;i++){
            int curr=0;
            for(int j=i;j<n;j++){
                curr = curr+nums[j];
                res = max(res,curr);
            }
        }
        
        return res;
        
    }
};