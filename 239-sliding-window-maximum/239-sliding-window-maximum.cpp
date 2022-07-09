class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> temp;
        int n = nums.size();
        multiset<int, greater<int>> hset;
        for(int i=0;i<k;i++){
            hset.insert(nums[i]);
        }
        auto it = hset.begin();
        temp.push_back(*it);
        for(int i=1;i<=n-k;i++){
            hset.erase(hset.find(nums[i-1]));
            hset.insert(nums[k+i-1]);
            auto it = hset.begin();
            temp.push_back(*it);
        }
        
        return temp;
        
    }
};