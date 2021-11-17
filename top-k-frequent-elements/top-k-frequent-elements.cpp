class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        vector<int> res;
        unordered_map<int,int> hmap;
        for(auto x: nums){
            hmap[x]++;
        }
        
        for(auto i: hmap){
            pq.push(make_pair(i.second,i.first));
        }
        
        while(k--){
            res.push_back(pq.top().second);
            pq.pop();
        }
        
        
        return res;
        
        
        
    }
};