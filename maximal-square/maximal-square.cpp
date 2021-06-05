class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        if(rows==0){
            return 0;
        }
        
        vector<vector<int>> dp(rows+1,vector<int>(cols+1,0));
//         for(int i=0;i<=rows;i++){
//             dp[i][0]=0;
//         }
        
//         for(int i=1;i<=cols;i++){
//             dp[0][j]=0;
//         }
        
        int largest=0;
        for(int i=1;i<=rows;i++){
            for(int j=1;j<=cols;j++){
                if(matrix[i-1][j-1]=='1'){
                    dp[i][j] = 1+ min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
                    if(largest<dp[i][j]){
                        largest=dp[i][j];
                    }
                }
            }
        }
        
        return largest*largest;
        
    }
};