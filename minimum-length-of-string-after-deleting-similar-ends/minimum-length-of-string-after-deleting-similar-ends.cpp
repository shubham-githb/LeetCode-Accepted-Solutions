class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        int i=0;
        int j = n-1;
        while(i<j) {
            if(s[i]!=s[j]){
                break;
            }
            while(i<=j and s[i]==s[j]) i++;
            while(i<=j and s[i-1]==s[j]) j--;
        }
        
        return j-i+1;
        
    }
};