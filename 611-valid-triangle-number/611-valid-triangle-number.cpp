class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        sort(nums.begin(),nums.end());
        for(int j=n-1;j>=0;j--){
            int end = j-1;
            int start = 0;
            while(end>start){
                int sum = nums[start]+nums[end];
                if(sum>nums[j]){
                    ans = ans + end-start;
                    end--;
                }
                else start++;
            }
        }
        
        return ans;
    }
};