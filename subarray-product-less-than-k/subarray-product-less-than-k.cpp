class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int start =0;
        int prod =1;
        int count =0;
        for(int end =0;end<nums.size();end++){
            prod*=nums[end];
            
            while(prod>=k and start<nums.size()){
                prod = prod/nums[start];
                start++;
            }
            
            if(prod<k){
                count += end-start+1;
            }
        }
        
        return count;
        
    }
};