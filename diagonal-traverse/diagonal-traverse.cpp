class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& grids) {
        
        if(grids.size()==0 || grids[0].size()==0){
            return {};
        }
        
        int m = grids.size();
        int n = grids[0].size();
        int i=0;
        vector<int>res(m*n);
        int row =0,col=0;
        bool up = true;
        
        while(row<m and col<n){
            if(up){
                while(row>0 and col<n-1){
                    res[i]= grids[row][col];
                    i++;
                    row--;
                    col++;
                }
                res[i++] = grids[row][col];
                if(col==n-1){
                    row++;
                }else{
                    col++;
                }
            }
            
            else {
                while(col>0 and row<m-1){
                    res[i] = grids[row][col];
                    i++;
                    row++;
                    col--;
                }
                res[i++] = grids[row][col];
                if(row==m-1){
                    col++;
                }else{
                    row++;
                }
            
                
            }
            
            up = !up;
           
        }
        
        return res;
        
         
        
    }
};