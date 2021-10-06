class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        unordered_map<int,int> hmap;
        for(auto x: nums){
            hmap[x]++;
        }
        
        for(auto i: hmap){
            if(i.second==2){
                ans.push_back(i.first);
            }
        }
        return ans;
        
    }
};