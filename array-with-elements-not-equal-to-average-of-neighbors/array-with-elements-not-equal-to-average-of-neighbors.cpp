class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      
        int n = nums.size();
        for(int i=1;i+1<n;i++){
             int x=nums[i-1],y=nums[i],z=nums[i+1];
 
        if( x<y and y<z  or x>y and y>z  ) swap(nums[i],nums[i+1]);
        }
        
        return nums;
        
    }
};