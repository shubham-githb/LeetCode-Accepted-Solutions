class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> cnt;
        vector<int> v;
        
        for(auto x: arr) cnt[x]++;
        for(auto x: cnt) v.push_back(x.second);
        
        sort(v.rbegin(),v.rend());
        
        while(!v.empty()){
            if(v.back()<=k){
                k=k-v.back();
                v.pop_back();
            }
            else break;
        }
        
        return v.size();
        
    }
};