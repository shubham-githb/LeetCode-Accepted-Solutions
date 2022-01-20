class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n = grid[0].size();
        vector<long> upper(n+2);
        vector<long> lower(n+2);
        
        for(int i=n;i>=1;i--){
            upper[i] = upper[i+1]+grid[0][i-1];
        }
        
        for(int i=1;i<=n;i++){
            lower[i]=lower[i-1]+grid[1][i-1];
        }
        
        long res = LLONG_MAX;
        
        for(int i=1;i<=n;i++){
            res = min(max(upper[i+1],lower[i-1]),res);
        }
        
        
        
        return res;
        
        
    }
};