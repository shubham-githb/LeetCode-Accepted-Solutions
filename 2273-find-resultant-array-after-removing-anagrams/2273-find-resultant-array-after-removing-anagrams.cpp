class Solution {
    bool isAnagrams(string s1, string s2){
        vector<char> cnt1(256,0);
        vector<char> cnt2(256,0);
        
        for(int i=0;i<s1.size();i++){
            cnt1[s1[i]]++;
        }
        
        for(int j=0;j<s2.size();j++){
            cnt2[s2[j]]++;
        }
        
        if(cnt1==cnt2){
            return true;
        }
        return false;
    }
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        int n = words.size();
        for(int i=0;i<n;i++){
            int j = i+1;
            while(j<n and isAnagrams(words[i],words[j])==true){
                j++;
            }
            ans.push_back(words[i]);
            i=j-1;
        }
        
        
        return ans;
        
    }
};