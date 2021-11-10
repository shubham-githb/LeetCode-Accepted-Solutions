class Solution {
public:
    int maxOperations(vector<int>& nums, int target) {
        int count=0;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        int j = n-1;
        while(i<j){
            if(nums[i]+nums[j]==target){
                count++;
                i++;
                j--;
            }
            else if(nums[i]+nums[j]>target){
                j--;
            }
            else{
                i++;
            }
        }
        return count;
    }
};