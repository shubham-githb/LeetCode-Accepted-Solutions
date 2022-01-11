class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> res;
        if(n==0) return res;
        sort(intervals.begin(),intervals.end());
        vector<int>tempIntervals = intervals[0];
        for(auto it: intervals){
            if(it[0]<=tempIntervals[1]){
                tempIntervals[1]=max(it[1],tempIntervals[1]);
            }
            else{
                res.push_back(tempIntervals);
                tempIntervals=it;
            }
        }
        
        res.push_back(tempIntervals);
        return res;
        
    }
};