class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int p=0;
        int r= grid.size();
        int c = grid[0].size();
        
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==0)
                    continue;
                p = p+4;
                if(i>0) p -= grid[i-1][j];
                if(j>0) p -= grid[i][j-1];
                if(i<r-1) p -= grid[i+1][j];
                if(j<c-1) p -= grid[i][j+1];
            }
        }
        
        return p;
        
        
    }
};