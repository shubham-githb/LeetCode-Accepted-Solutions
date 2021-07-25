class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int res=0;
        while(n>0){
            if(s[--n]!=' ') res++;
             else if(res>0) return res;
        }
        
        return res;
        
    }
};