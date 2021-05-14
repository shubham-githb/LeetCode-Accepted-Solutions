class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int j =-1;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                j++;
                swap(nums[i],nums[j]);
            }
        }
        
        return nums;
        
        
    }
};