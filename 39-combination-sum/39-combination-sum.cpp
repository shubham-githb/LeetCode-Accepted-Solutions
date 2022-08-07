// class Solution {
//     void solve(vector<int>& candidates, int target,int ind,vector<int> &ds, vector<vector<int>>& result){
//         int n = candidates.size();
//         if(ind==n){
//             if(target==0){
//                 result.push_back(ds);
//             }
//             return;
//         }
        
//         if(candidates[ind]<=target){
//             ds.push_back(candidates[ind]);
//             solve(candidates,target-candidates[ind],ind,ds,result);
//             ds.pop_back();
//         }
        
//         solve(candidates,target,ind+1,ds,result);
//     }
// public:
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         vector<int> ds;
//         vector<vector<int>> result;
//         solve(candidates,target,0,ds,result);
//         return result;
        
//     }
// };

class Solution {
    void solve(vector<int>& candidates, int target,int ind,vector<int> &ds, vector<vector<int>>& result){
        int n = candidates.size();
        if(ind==n){
            if(target==0){
                result.push_back(ds);
            }
            return;
        }
        
        if(candidates[ind]<=target){
            ds.push_back(candidates[ind]);
            solve(candidates,target-candidates[ind],ind,ds,result);
            ds.pop_back();
        }
        solve(candidates,target,ind+1,ds,result);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        
        vector<vector<int>> result;
        solve(candidates,target,0,ds,result);
        return result;
        
    }
};