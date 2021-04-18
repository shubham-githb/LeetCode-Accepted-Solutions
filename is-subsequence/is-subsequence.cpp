class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m = s.length();
        int n = t.length();
        if(m==0) return true;
        if(n==0) return false;
        if(s[0]==t[0]) return isSubsequence(s.substr(1),t.substr(1));
        else
            return isSubsequence(s,t.substr(1));
        
    }
};