class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int expectedSum = nums.size()*(nums.size()+1)/2;
        for(int i =0;i<nums.size();i++)
            expectedSum = expectedSum - nums[i];
        return expectedSum;
        
    }
};