class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        vector<int> ans;
        int n = nums.size();
        unordered_map<int,int> hmap;
        for(int i=0;i<n;i++){
            if(hmap.count(target-nums[i])){
                ans.push_back(i);
                ans.push_back(hmap[target-nums[i]]);
                return ans;
            }
            else{
                hmap[nums[i]] = i;
            }
        }
        
        return ans;
        
    }
};