class Solution {

public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> hashMap(26,0);
        for(int i =0;i<p.size();i++){
            hashMap[p[i]-'a']++;
        }
        int start = 0;
        int end = 0;
        
        vector<int> hashMapWindow(26,0);
        while(end<s.size()){
            hashMapWindow[s[end]-'a']++;
            if(end-start+1<p.size()){
                end++;
            } else if(end-start+1==p.size()){
                if(hashMapWindow==hashMap) ans.push_back(start);
                hashMapWindow[s[start]-'a']--;
                start++;
                end++;
            }
        }
        return ans;
    }
};