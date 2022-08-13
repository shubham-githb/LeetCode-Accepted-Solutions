class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int,int> hmap;
        for(auto x : nums){
            hmap[x]++;
        }
        vector<int> ans;
        
        priority_queue<pair<int,int>> pq;
        
        // for(auto[a,b]:hmap){
        //     pq.push_back({b,a});
        // }
         for(auto [a,b]: hmap){
            pq.push({b,a});
        }
        
        
        while(k--){
            int curr = pq.top().second;
            ans.push_back(curr);
            pq.pop();
        }
        
        return ans;
        
        
        
    }
};