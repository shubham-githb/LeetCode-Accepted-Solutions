class Solution {
    long long func(string t, string p){
        long long prefix[t.size()];
        long long count =0,res=0;
        
        for(int i=t.size()-1;i>=0;i--){
            prefix[i]=count;
            if(t[i]==p[1]) count++;
        }
        
        for(int i=0;i<t.size();i++){
            if(t[i]==p[0]){
                res+= prefix[i];
            }
        }
        
        return res;
    }
public:
    long long maximumSubsequenceCount(string text, string pattern) {
        return max(func(pattern[0]+text,pattern),func(text+pattern[1],pattern));
    }
};