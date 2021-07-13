class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int si =0;
        int ei =0;
        
        int n = nums.size();
        int ans =0;
        int prev = 0;

        while(ei<n){
            if(left<=nums[ei] and nums[ei]<= right ){
                prev = ei-si+1;
                ans = ans + prev;
            }
            else if(nums[ei]< left){
                ans = ans + prev;
            }
            else{
                si = ei+1;
                prev =0;
            }
            
            ei++;
        }
        
        return ans;
    }
};