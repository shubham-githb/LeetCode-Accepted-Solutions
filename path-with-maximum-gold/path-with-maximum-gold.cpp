class Solution {
    int ans = INT_MIN;
    void dfs(vector<vector<int>>& grid,int row,int cols,int &sum){
        if(row<0 or row>=grid.size() or cols<0 or grid[0].size()<=cols or grid[row][cols]==0){
            return;
        }
        
        int temp = grid[row][cols];
        sum = sum+temp;
        ans = max(ans,sum);
        grid[row][cols]=0;
        dfs(grid,row+1,cols,sum);
        dfs(grid,row-1,cols,sum);
        dfs(grid,row,cols-1,sum);
        dfs(grid,row,cols+1,sum);
        grid[row][cols]=temp;
        sum = sum-temp;
    }
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int sum =0;
                dfs(grid,i,j,sum);
            }
        }
        return ans;
    }
};