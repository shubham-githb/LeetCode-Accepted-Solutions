class Solution {
public:  
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> result;
        sort(intervals.begin(),intervals.end());
        vector<int> tempIntervals = intervals[0];
        for(auto it: intervals){
            if(it[0]<=tempIntervals[1]){
                tempIntervals[1] = max(it[1],tempIntervals[1]);
            }
            else{
                result.push_back(tempIntervals);
                tempIntervals = it;
            }
        }
        
        result.push_back(tempIntervals);
        return result;
    }
};