class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1;
        string s2 ;
    
        for(char i : s){
            if(i!='#'){
                s1 += i;
            }else{
                if(s1.size() > 0)
                s1.pop_back();
            }
        }
        
          for(char i : t){
            if(i!='#'){
                s2 += i;
            }else{
                if(s2.size() > 0)
                s2.pop_back();
            }
        }
        
        return (s1==s2);
        
    }
};