class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size();
        sort(costs.begin(),costs.end(),[](vector<int> a,vector<int> b){return a[0]-a[1]<b[0]-b[1];});
        int sum = 0;
        for(int j=0;j<n/2;j++){
            sum += costs[j][0];
        }
        for(int j=n/2;j<costs.size();j++){
            sum += costs[j][1];
        }
        
        return sum ;
    }
};