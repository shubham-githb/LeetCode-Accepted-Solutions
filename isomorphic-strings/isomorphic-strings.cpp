class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> hmap;
        set<char>x;
        int n = s.size();
        int m = t.size();
        if(n!=m) return false;
        for(int i=0;i<n;i++){
            if(hmap.count(s[i])==0 and x.count(t[i])==0){
                hmap[s[i]] = t[i];
                x.insert(t[i]);
            }
            else if(hmap.count(s[i])==0 and x.count(t[i])==1)
                return false;
            else if(hmap[s[i]]!=t[i])
                return false;
        }
        
        return true;
        
    }
};