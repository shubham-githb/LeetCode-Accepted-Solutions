class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
       unordered_map<char, string> cmap;
        unordered_map<string, char> wmap;
        
        stringstream str(s);
        string word;
        int n = pattern.size();
        int i=0;
        
        while(str >> word){
            if(i==n) return false;
            char c = pattern[i];
            if(cmap.count(c)!=wmap.count(word))
                return false;
            if(cmap.count(c)==1){
                if(wmap[word]!=c or cmap[c]!=word) return false;
            }
            else{
                cmap.insert({c,word});
                wmap.insert({word,c});
            }
            i++;
        }
        
        return i==n;
        
    }
};