class Solution {
    void solve(string s,vector<string>&result,int i){
        if(i==s.size()){
            result.push_back(s);
            return;
        }
        
        if(isalpha(s[i])){
            s[i] = toupper(s[i]);
            solve(s,result,i+1);
            s[i] = tolower(s[i]);
            solve(s,result,i+1);
        }
        else{
            solve(s,result,i+1);
        }
    }
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> result;
        solve(s,result,0);
        return result;
    }
};