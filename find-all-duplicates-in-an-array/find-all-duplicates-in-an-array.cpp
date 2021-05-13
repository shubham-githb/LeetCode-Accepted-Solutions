class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int index = abs(nums[i]);
            if(nums[index-1]>0) nums[index-1] = nums[index-1]*-1;
            else
                result.push_back(index);
        }
        return result;
        
    }
};