class Solution {
   bool helper(int i,int j,int index,vector<vector<char>>& board,string word,vector<vector<bool>>&visited){
        if(index==word.size())
            return true;
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]!=word[index]|| visited[i][j] ){
            return false;
        }
        
       visited[i][j]=true;
       
       if(helper(i+1,j,index+1,board,word,visited)||helper(i-1,j,index+1,board,word,visited)||
            helper(i,j+1,index+1,board,word,visited)||helper(i,j-1,index+1,board,word,visited)){
            return true;
        }
       
       visited[i][j] = false;
       
       return false;
        
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size();
        int cols = board[0].size();
        vector<vector<bool>>visited(rows,vector<bool>(cols,false));
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
               if(word[0]==board[i][j]&&helper(i,j,0,board,word,visited)){
                    return true;
                }
            }
        }
        
        return false;
        
    }
};