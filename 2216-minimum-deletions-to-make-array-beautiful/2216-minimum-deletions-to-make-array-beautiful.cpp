class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n = nums.size();
        int i =0;
        int j = i+1;
        int cnt = 0;
        while(i<nums.size() && j<nums.size()){
            if(nums[i]!=nums[j]){
                i=j+1;
                j = j+2;
            }
            else if(nums[i]==nums[j]){
                cnt++;
                j++;
            }
        }
        
        if(i<nums.size()){
            cnt++;
        }
        
        
        return cnt;
        
    }
};