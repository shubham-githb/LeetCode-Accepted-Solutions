class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(auto num : nums){
            freq[num]++;
        }
        
        priority_queue<pair<int,int>> pq;
        for(auto [a,b]: freq){
            pq.push({b,a});
        }
        
        vector<int> res;
        
        while(k--){
            int x = pq.top().second;
            res.push_back(x);
            pq.pop();
        }
        
        return res;
        
    }
};