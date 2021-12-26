class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> results;
        int n = points.size();
        vector<pair<int,pair<int,int>>> v;
        int dist;
        for(auto x: points){
            dist = (x[0]*x[0] + x[1]*x[1]);
            v.push_back({dist,{x[0],x[1]}});
        }
        
        sort(v.begin(),v.end());
        
        vector<vector<int>> ans(k);
        
        for(int i=0;i<k;i++){
            ans[i].push_back(v[i].second.first);
            ans[i].push_back(v[i].second.second);
        }
        
        return ans;
    }
};