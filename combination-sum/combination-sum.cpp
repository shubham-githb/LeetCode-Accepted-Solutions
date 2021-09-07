class Solution {
    void solve(vector<int>& nums,vector<vector<int>>& result,int target,int ind,vector<int>& ds){
        if(ind == nums.size()){
            if(target==0){
                result.push_back(ds);
            }
            return;
        }
        
        if(nums[ind]<=target){
            ds.push_back(nums[ind]);
            solve(nums,result,target-nums[ind],ind,ds);
            ds.pop_back();
        }
        
        solve(nums,result,target,ind+1,ds);
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> ds;
        solve(candidates,result,target,0,ds);
        return result;
    }
};