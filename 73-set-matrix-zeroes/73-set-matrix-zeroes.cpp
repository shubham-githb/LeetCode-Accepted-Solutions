class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<pair<int,int>> res;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                   
                    res.push_back({i,j});
                }
            }
        }
        
        for(int i=0;i<res.size();i++){
            int row = res[i].first;
            int cols = res[i].second;
            for(int k=0;k<m;k++){
                matrix[row][k] = 0;
            }
            for(int l=0;l<n;l++){
                matrix[l][cols]=0;
            }
        }
    }
};