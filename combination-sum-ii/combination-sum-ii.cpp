class Solution {
    void solve(int ind, int target, vector<int>& nums, vector<vector<int>>& result, vector<int>& ds){
        if(target==0){
            result.push_back(ds);
            return;
        }
        
        for(int i=ind;i<nums.size();i++){
            if(i>ind and nums[i]==nums[i-1]) continue;
            if(target<nums[i]) break;
            ds.push_back(nums[i]);
            solve(i+1,target-nums[i],nums,result,ds);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> result;
        vector<int> ds;
        solve(0,target,candidates,result,ds);
        return result;
    }
};