// class Solution {
//     int dp[102][102];
// public:
//      int solve(vector<vector<int>>& matrix,int i,int j,int n,int m){
//         if(i==n-1) return matrix[i][j];
//         if(j>=m || j<0) return INT_MAX;
//            // return matrix[i][j]+min(solve(matrix,i+1,j,n,m),min(solve(matrix,i+1,j-1,n,m),solve(matrix,i+1,j+1,n,m)));
//                  return dp[i][j]=matrix[i][j]+min(solve(matrix,i+1,j,n,m),min(solve(matrix,i+1,j-1,n,m),solve(matrix,i+1,j+1,n,m)));
//      }
         
//     int minFallingPathSum(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         int m = matrix[0].size();
//         // int mini = INT_MAX;
//         int min_val=INT_MAX;

//         memset(dp,-1,sizeof(dp));
//         for (int i=0;i<m;i++){
//             min_val=min(min_val,solve(matrix,0,i,n,m));
//         }
        
//           return min_val;
//     }
// };

class Solution {
    int dp[102][102];
public:
    int solve(vector<vector<int>>& matrix, int i, int j, int n, int m){
        if (j>=m || j<0) return INT_MAX;
        if (i==n-1) return matrix[i][j];
        if (dp[i][j]!=-1) return dp[i][j];
		// now we will traverse below, diagonally_left and diagonally_right.
        return dp[i][j]=matrix[i][j]+min(solve(matrix,i+1,j,n,m),min(solve(matrix,i+1,j-1,n,m),solve(matrix,i+1,j+1,n,m)));
    }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int min_val=INT_MAX;
        memset(dp,-1,sizeof(dp));
		// this loop is for all elements of first row
        for (int i=0;i<m;i++){
            min_val=min(min_val,solve(matrix,0,i,n,m));
        }
        return min_val;
    }
};