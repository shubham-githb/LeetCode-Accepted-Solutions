class Solution {
    bool subsequence(string s, string str){
        int i=0;
        int j=0;
        
        while(i<s.size() and j<str.size())
        {
            if(s[i]==str[j]){
                i++;
                j++;
            }
            else{
                i++;
            }
        }
         if(j==str.size()){
            return true;
        }
        else{
            return false;
        }
       
    }
public:
    string findLongestWord(string s, vector<string>& d) {
        vector<string> vec;
        for(auto str: d){
            if(subsequence(s,str)){
                vec.push_back(str);
            }
        }
        
        sort(vec.begin(),vec.end());
        string maxlen = "";
        for(auto x: vec){
           maxlen = x.size()>maxlen.size() ? x : maxlen;
        }
        
        return maxlen;
        
    }
};