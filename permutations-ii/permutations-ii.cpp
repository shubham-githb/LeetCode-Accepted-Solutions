class Solution {
     void solve(vector<int>&nums,vector<bool>&vis,vector<int>& permute,vector<vector<int>> &result){
        if(permute.size()==nums.size()){
            result.push_back(permute);
            return;
        }
        
        else{
            for(int i=0;i<vis.size();i++){
                if(i>0 and vis[i-1] and nums[i-1]==nums[i]){
                    continue;
                }
                else if(vis[i]){
                    permute.push_back(nums[i]);
                    vis[i]=false;
                    solve(nums,vis,permute,result);
                    vis[i]=true;
                    permute.pop_back();
                }
            }
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        vector<int> permute;
        vector<bool> vis(nums.size(),true);
        solve(nums,vis,permute,result);
        return result;
        
    }
};