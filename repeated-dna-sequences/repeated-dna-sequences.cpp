class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.size();
        vector<string> res;
        unordered_map<string,int> hmap;
        for(int i=0;i<n;i++){
            hmap[s.substr(i,10)]++;
        }
        
        for(auto x: hmap){
            if(x.second>1){
                res.push_back(x.first);
            }
        }
        
        return res;
        
    }
};