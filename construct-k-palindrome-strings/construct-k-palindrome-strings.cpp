class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.size();
        unordered_map<char,int> hmap;
        for(auto x: s){
            int temp = x;
            hmap[temp]++;
        }
        int odd_count=0;
        for(auto x: hmap){
            if(x.second%2!=0){
                odd_count++;
            }
        }
        
        if(odd_count>k){
            return false;
        }
        else if(s.size()<k) {
            return false;
        }
        else{
            return true;
        }
        
    }
};