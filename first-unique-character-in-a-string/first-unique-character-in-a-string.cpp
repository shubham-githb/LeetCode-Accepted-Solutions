class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        map<char,int> hmap;
        for(int i=0;i<n;i++) 
            hmap[s[i]]++;
        for(int i=0;i<n;i++)
        {
            if(hmap[s[i]]==1) return i;
        }
        return -1;
        
    }
};