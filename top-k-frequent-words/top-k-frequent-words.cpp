class Solution {
    struct comp{
        bool operator() (pair<int,string>p1, pair<int,string> p2){
            if(p1.first!=p2.first){
                return p1.first<p2.first;
            }else{
                return p1.second>p2.second;
            }
        }
    };
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int> m;
        for(auto x: words){
            m[x]++;
        }
        
         priority_queue<pair<int,string>,vector<pair<int,string>>,comp> pq;
        for(auto num:m){
            pq.push({num.second,num.first});
        }
        
        vector<string> ans;
        while(k--){
            auto temp = pq.top();
            pq.pop();
            ans.push_back(temp.second);
        }
        
        return ans;
        
        
    }
};