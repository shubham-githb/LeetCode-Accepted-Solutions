class Solution {
    void solve(int open, int close, string str, vector<string>& res){
        if(open==0 and close==0){
            res.push_back(str);
            return;
        }
        
        if(open!=0){
            string str1=str;
            str1.push_back('(');
            solve(open-1,close,str1,res);
        }
        
        if(close>open){
            string str2= str;
            str2.push_back(')');
            solve(open,close-1,str2,res);
        }
        
        return;
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        int open=n;
        int close=n;
        string str="";
        solve(open,close,str,res);
        return res;
        
    }
};