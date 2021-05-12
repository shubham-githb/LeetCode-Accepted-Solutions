class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        int leftmin = nums[0];
        for(int j=1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(nums[k]>leftmin and nums[j]>nums[k])
                    return true;
                leftmin = min (nums[j],leftmin); 
            }
        }
        return false;
        
    }
};