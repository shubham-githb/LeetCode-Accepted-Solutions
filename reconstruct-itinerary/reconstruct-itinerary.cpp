class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        unordered_map<string,multiset<string>> adj;
        vector<string> ans;
        int n = tickets.size();
        for(int i=0;i<n;i++){
            adj[tickets[i][0]].insert(tickets[i][1]);
        }
        
        stack<string> mystack;
        mystack.push("JFK");
        while(mystack.empty()==false){
            string src = mystack.top();
            if(adj[src].size()==0){
                ans.push_back(src);
                mystack.pop();
            }else{
                auto dst = adj[src].begin();
                mystack.push(*dst);
                adj[src].erase(dst);
            }
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};