class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        int n = s.size();
        for(int i=0;i<n;i++) {
            if(freq.find(s[i]) == freq.end()){
                freq[s[i]] = 1;
            }else{
                freq[s[i]] = freq[s[i]]+1;
            }
        }
        
        vector<pair<int,char>> v;
        for(auto it = freq.begin(); it!=freq.end(); it++){
            v.push_back(make_pair(it->second,it->first));
        }
        
        sort(v.rbegin(),v.rend()); //sorting in decreasing order
        
        string res = "";
        for(auto it= v.begin(); it!=v.end();it++)
        {
            res = res + string(it->first,it->second);
        }
        
        return res;
        
    }
};