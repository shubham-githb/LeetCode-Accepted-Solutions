class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        vector<vector<int>> result;
        int i=0;
        while(i<n and intervals[i][1]<newInterval[0]){
            result.push_back(intervals[i++]);
        }
        
        vector<int> temp = newInterval;
        while(i<n and newInterval[1]>=intervals[i][0]){
            temp[0] = min(temp[0], intervals[i][0]);
            temp[1] = max(temp[1], intervals[i][1]);
            i++;
        }
        
        result.push_back(temp);
        while(i<n) {
            result.push_back(intervals[i]);
            i++;
        }
        
        
        return result;
        
    }
};