class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i=0;
        int j=0;
        
        int sum =0;
        int mini = INT_MAX;
        while(j<n){
            sum += nums[j];
            if(sum<target){
                j++;
            }
            else if(sum>=target){
                while(sum>=target){
                    mini = min(mini,j-i+1);
                    sum = sum-nums[i];
                    // mini = min(mini,j-i+1);
                    i++;
                }
                
                j++;
            }
        }
        
        if(mini==INT_MAX){
            return 0;
        }
        else return mini;
        
    }
};