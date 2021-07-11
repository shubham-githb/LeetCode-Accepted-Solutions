class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        map<char,int> hmap;
        for(int i=0;i<n;i++){
            hmap[s[i]] = i;
        }
        
        vector<int> ans;
        int maxnum=0;
        int prev = -1;
        
        for(int i=0;i<n;i++){
            maxnum = max(maxnum,hmap[s[i]]);
            if( maxnum == i){
                ans.push_back(maxnum-prev);
                prev = maxnum;
            }
        }
        
        return ans;
        
        
    }
};