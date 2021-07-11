class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        int n = stoi(s);
        int nn = s.size();
        for(int i=0;i<nn;i++){
            for(int j=i+1;j<nn;j++){
                swap(s[i],s[j]);
                n = max(n,stoi(s));
                swap(s[i],s[j]);
            }
        }
        
        return n;
        
    }
};