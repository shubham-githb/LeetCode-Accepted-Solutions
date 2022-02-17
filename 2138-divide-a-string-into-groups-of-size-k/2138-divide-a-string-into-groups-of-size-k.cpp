class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> res;
        for(int i=0;i<s.size();i+=k){
            res.push_back(s.substr(i,k));
        }
        
        string last_str = res[res.size()-1];
        
        while(last_str.size() != k){
            last_str.push_back(fill);
        }
        
        
        res[res.size()-1] = last_str;
        
        
        return res;
    }
};