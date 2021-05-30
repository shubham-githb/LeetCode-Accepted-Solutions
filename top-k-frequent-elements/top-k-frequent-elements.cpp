class Solution {
    
    struct node {
        int no;
        int freq;
        node(int a, int b){
            no = a;
            freq=b;
        }
    };
    
    struct compare {
        bool operator() (const node& a, const node & b)
        {
            return a.freq<b.freq;
        }
    };
    
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> res;
        unordered_map<int,int> hmap;
        
        for(auto x: nums){
            hmap[x] = hmap[x]+1;
        }
        
        //build max_heap
        
        priority_queue<node,vector<node>,compare> pq;
        
        for(auto it: hmap){
            pq.push(node(it.first,it.second));
        }
        
        while(k--){
            node temp = pq.top();
            pq.pop();
            res.push_back(temp.no);
        }
        
        return res;
        
        
    }
};