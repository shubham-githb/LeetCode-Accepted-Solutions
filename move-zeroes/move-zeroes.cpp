class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int countZero=0;
        for(int i=0;i<n;i++) {
            if(nums[i]==0)
            {
                countZero = countZero+1;
            }
        }
        
        for(int i=0;i<n;i++) {
            if(nums[i]!=0) {
                ans.push_back(nums[i]);
            }
        }
        
        while(countZero--)
        {
            ans.push_back(0);
        }
        
        for(int i=0;i<n;i++)
        {
            nums[i] = ans[i];
        }
        
    }
};