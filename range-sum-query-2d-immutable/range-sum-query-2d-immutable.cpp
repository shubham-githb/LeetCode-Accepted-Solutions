class NumMatrix {
public:
    int row =0;
    int col =0;
    vector<vector<int>> dp;
    NumMatrix(vector<vector<int>>& m) {
        row = m.size();
        col = m[0].size();
        dp.resize(row+1,vector<int>(col+1));
        
        for(int i=1;i<dp.size();i++){
            for(int j=1;j<dp[0].size();j++){
                dp[i][j] = dp[i-1][j] + dp[i][j-1] + m[i-1][j-1]-dp[i-1][j-1];
            }
            
        }
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        row1++;
        row2++;
        col1++;
        col2++;
        return dp[row2][col2] - dp[row1 - 1][col2] - dp[row2][col1 - 1] + dp[row1 - 1][col1 - 1];
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */