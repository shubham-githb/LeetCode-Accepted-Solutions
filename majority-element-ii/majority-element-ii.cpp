class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
         for (auto i=mp.begin();i!=mp.end();i++) if(i->second > nums.size()/3) ans.push_back(i->first);
        return ans;

        
    }
};