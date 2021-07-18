class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int x = nums[i]*nums[i];
            ans.push_back(x);
        }
        sort(ans.begin(),ans.end());
        
        return ans;
        
    }
};