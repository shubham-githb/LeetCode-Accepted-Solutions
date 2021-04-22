class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int y;
        vector<int> v;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            y = target-nums[i];
            for(int j=i+1;j<n;j++)
            {
                if(nums[j]==y){
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
        
        return v;
        
    }
};