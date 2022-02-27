class Solution {
public:
    int minSteps(string s, string t) {
        int count =0;
        vector<int> v(26,0);
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']++;
        }
        
        for(int j=0;j<t.size();j++){
            v[t[j]-'a']--;
        }
        
        for(int i =0;i<26;i++){
            count+= abs(v[i]);
        }
        
        
        
        return count;
        
        
        
    }
};