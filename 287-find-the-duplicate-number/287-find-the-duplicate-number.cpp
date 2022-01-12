class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int ans ;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]==nums[i+1]){
                ans = nums[i];
                break;
            }
        }
        
        return ans;
    }
};