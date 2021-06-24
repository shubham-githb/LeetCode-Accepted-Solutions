class Solution {
    void dfs(vector<vector<char>>& board,int i, int j){
        if(i>=0 and i< board.size() & j>=0 and j<board[0].size() && board[i][j]=='O'){
            board[i][j] = 'A';
            dfs(board,i+1,j);
            dfs(board,i-1,j);
            dfs(board,i,j+1);
            dfs(board,i,j-1);
        }
        
       
    }
public:
    void solve(vector<vector<char>>& board) {
        if(board.size()<=2)
            return;
        int row = board.size();
        int col = board[0].size();
        if(col<=2){
            return;
        }
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(board[i][j]=='O' and (i==0||i==row-1||j==0||j==col-1)){
                    dfs(board,i,j);
                }
            }
        }
        
         for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(board[i][j]=='O'){
                    board[i][j]='X';
                }
                if(board[i][j]=='A'){
                    board[i][j]='O';
                }
            }
        }
    }
};