class Solution {
public:
    void solve(vector<vector<int>>& result,int n,int begin ,int k ,vector<int>& combination){
        if(combination.size()==k){
            result.push_back(combination);
            return;
        }
        for(int i=begin ; i<=n ;i++){
            combination.push_back(i);
            solve(result , n , i+1 , k , combination);
            combination.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int> combination;
        vector<vector<int>> result;
        solve(result , n , 1 , k , combination);
        return result;
    }
};