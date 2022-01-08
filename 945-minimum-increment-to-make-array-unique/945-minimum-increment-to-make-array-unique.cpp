class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i-1]>=nums[i]){
                ans = ans + (nums[i-1]+1-nums[i]);
                nums[i] = nums[i-1]+1;
            }
        }
        return ans;
    }
};