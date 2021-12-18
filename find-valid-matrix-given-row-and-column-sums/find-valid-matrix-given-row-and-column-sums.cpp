class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& row, vector<int>& col) {
        
        const int n = row.size(), m = col.size();
        
        vector<vector<int>> res(n, vector<int> (m, 0));
        
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < m; ++j) {
                
                int min_v = min(row[i], col[j]);
                res[i][j] = min_v;
                row[i] -= min_v;
                col[j] -= min_v;
            }
        }
        
        return res;
    }
};