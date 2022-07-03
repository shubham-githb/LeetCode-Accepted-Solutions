class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int peak = 1;
        int valley = 1;
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]<nums[i]){
                peak = valley+1;
            }
            else if(nums[i]<nums[i-1]){
                valley = peak+1;
            }
        }
        
        return max(peak,valley);
        
    }
};