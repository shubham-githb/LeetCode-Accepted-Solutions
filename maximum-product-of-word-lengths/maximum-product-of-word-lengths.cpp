class Solution {
     bool noCommon(string& a, string& b){
        for(auto x: a) 
            for(auto y: b)
                if(x == y) return false;
        return true;
    }
    
public:
    int maxProduct(vector<string>& words) {
        int maxlen =0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                if(words[i].size()*words[j].size()<=maxlen) continue;
              if(noCommon(words[i], words[j])) maxlen = max(maxlen, (int)(words[i].size() * words[j].size()));
            }
        }
        
        return maxlen;
        
    }
};