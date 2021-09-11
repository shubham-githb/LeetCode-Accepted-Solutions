class Solution {
    vector<vector<int>> result;
    void solve(vector<int> &temp,int k, int n,int start){
        if(temp.size()==k){
            if(n==0){
                result.push_back(temp);
            }
            return;
        }
        
        for(int i=start;i<=9;i++){
            temp.push_back(i);
            solve(temp,k,n-i,i+1);
            temp.pop_back();
        }
        
        
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        solve(temp,k,n,1);
        return result;
    }
};