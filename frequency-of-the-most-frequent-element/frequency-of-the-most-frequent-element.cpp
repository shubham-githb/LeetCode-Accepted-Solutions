class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int l =0;
        int r =0;
        long sum =0;
        int res =0;
        while(r<n){
            sum += nums[r];
            while((long)nums[r]*(r-l+1)-sum >k){
                // l++;
                sum = sum - nums[l];
                l++;
            }
            res = max(res,r-l+1);
            r++;
        }
        
        return res;
        
    }
};