class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> mp;
        for(int i=0;i<order.size();i++){
            mp[order[i]] = i;
        }
        
        for(int i=1;i<words.size();i++){
            string s = words[i-1];
            int j=0;
            while(j<s.size() and words[i][j]==s[j]){
                j++;
            }
           if((j==words[i].length()&& j!=s.length()) || mp[words[i][j]]<mp[s[j]]) return false;
           
        }
        
        return true;
        
    }
};