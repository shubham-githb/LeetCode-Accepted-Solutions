class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        int i=0;
        int j=1;
        int count =0;
      
        while(j<n){
            //compare i and j
            if(intervals[i][1]<=intervals[j][0])
            {
                //if i and j intervals are not overlapping
                i=j;
                j++;
            }
            else if(intervals[i][1]>=intervals[j][1])
            {
                //if j interval is completely overlapped in i
                //and i interval size is greater than j
                //it is better to reemove i  interval
                count+=1;
                i=j;
                j++;
            }
            else if(intervals[i][1]>intervals[j][0])
            {
                //if j interval is overlapping only some portion of i
                //it is better to remove j
                count+=1;
                j++;
            }
        }
        
        return count;
        
    }
};