class Solution {
    void mark_current_island(vector<vector<char>> &matrix, int x, int y, int r, int c){
        if(x<0 || x>=r || y<0 || y>=c || matrix[x][y]!='1')
            return ;
        
        matrix[x][y] = '2';
        
        mark_current_island(matrix,x+1,y,r,c);
        mark_current_island(matrix,x,y+1,r,c);
        mark_current_island(matrix,x-1,y,r,c);
        mark_current_island(matrix,x,y-1,r,c);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        if(rows==0)
            return 0;
        int cnt = 0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]=='1'){
                    mark_current_island(grid,i,j,rows,cols);
                    cnt+=1;
                }
            }
        }
        
        return cnt;
    }
};