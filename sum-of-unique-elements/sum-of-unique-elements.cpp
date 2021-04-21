class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> hmap;
        for(int i=0;i<n;i++) {
            ++hmap[nums[i]];
        }
        int sum =0;
        for(auto x: hmap)
        {
            if(x.second==1)
            {
                sum +=x.first;
            }
        }
        return sum;
    }
};