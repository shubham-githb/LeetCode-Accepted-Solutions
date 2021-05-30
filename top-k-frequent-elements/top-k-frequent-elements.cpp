class Solution {
    struct node {
        int no;
        int freq;
        node(int a , int b)
        {
            no = a;
            freq=b;
        }
        
    };
    
    struct compare {
        bool operator() (node const& a, node const& b){
            return a.freq<b.freq;
        }
    };
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> h;
        vector<int> ans;
       
        
        for(int i : nums ){
            h[i]+= 1;
        }
        
        priority_queue<node,vector<node>,compare> pq;
        
        for(auto x: h){
            pq.push(node(x.first,x.second));
        }
        
        
        while(k--){
            node temp = pq.top();
            pq.pop();
            ans.push_back(temp.no);
        }
        
        return ans;
        
    }
};