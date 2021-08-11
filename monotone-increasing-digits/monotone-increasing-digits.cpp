class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string s;
        s = to_string(n);
        
        int index,i;
        bool sorted = true;
        for(int i=1;i<s.size();i++){
            if(s[i-1]>s[i]){
                index = i-1;
                sorted = false;
                break;
            }
        }
        
        if(sorted){
            return n;
        }
        
        index = s.find(s[index]);
        s[index] = (s.at(index)-'0' -1) + '0';
        
       for(i=index+1;i<s.length();i++) s[i] = '9';
        
        n = stoi(s);
        
        return n;
        
    }
};