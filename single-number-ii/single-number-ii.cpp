class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>hmap;
        for(auto x: nums){
            hmap[x]=hmap[x]+1;
        }
        
        int flag = 0;
        for(auto i: hmap){
            if(i.second==1){
                return i.first;
            }
        }
        
        return 0;
        
    }
};