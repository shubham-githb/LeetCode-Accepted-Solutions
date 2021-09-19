class Solution {
public:
    bool canReorderDoubled(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> hmap;
        for(auto x:nums){
            hmap[x]++;
        }
         sort(nums.begin(), nums.end());
        vector<int> res;
        for(auto ele: nums){
              if(hmap.find(ele*2)!=hmap.end() and hmap[ele]!=0 and hmap[ele*2]!=0){
                hmap[ele]--;
                hmap[ele*2]--;
                // res.push_back(ele);
            }
            
        }
        
        for(auto i: hmap){
            if(i.second!=0){
                return false;
            }
        }
        
        return true;
        
    }
};