class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
         vector<pair<int,pair<int,int>>> v;
        int dist;
        for(auto it: points){
            dist = it[0]*it[0] + it[1]*it[1];
            v.push_back({dist,{it[0],it[1]}});
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