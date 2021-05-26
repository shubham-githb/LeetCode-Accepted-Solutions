class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return true;
        int idx =0;
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                if(idx!=0){
                    return false;
                }
                idx = i;
            }
        }
        
        if(idx==0 or idx==1 or idx==n-1) return true;
        if((nums[idx-1]>nums[idx+1]) and (nums[idx-2]>nums[idx])){
            return false;
        }
        return true;
        
    }
};