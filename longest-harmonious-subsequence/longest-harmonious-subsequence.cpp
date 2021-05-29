class Solution {
public:
    int findLHS(vector<int>& nums) {
        int len = 0;
        unordered_map<int,int> hmap;
        int n = nums.size();
        for(int i=0;i<n;i++){
            hmap[nums[i]]++;
        }
        
        for(auto b: hmap){
            auto found = hmap.find(b.first+1);
            if(found!=hmap.end()){
                len = max(len,b.second+found->second);
            }
        }
        
        return len;
        
    }
};