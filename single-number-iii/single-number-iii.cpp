class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> hmap;
        vector<int> ans;
        for(auto x: nums){
            hmap[x] +=1;
        }
        
        for(auto i: hmap){
            if(i.second==1){
                ans.push_back(i.first);
            }
        }
        
        return ans;
        
    }
};