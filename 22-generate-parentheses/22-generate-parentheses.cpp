class Solution {
    void solve(int n , int i , string &temp, int open, int close, vector<string> &res ){
        int max = 2*n;
        if(i==max){
            res.push_back(temp);
        }
        
        if(open<n){
            temp += '(';
            solve(n,i+1,temp,open+1,close,res);
            temp.pop_back();
        }
        
        if(close<open){
            temp += ')';
            solve(n,i+1,temp,open,close+1,res);
            temp.pop_back();
        }
        
        return;
}
public:
    vector<string> generateParenthesis(int n) {
        string temp;
        // int open =0;
        // int close =0;
        vector<string> res;
        // int i=0;
        solve(n,0,temp,0,0,res);
        
        return res;
        
    }
};