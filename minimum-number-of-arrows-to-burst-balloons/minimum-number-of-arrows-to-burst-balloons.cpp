class Solution {
public:
    static bool comp( const vector<int>v1 , const vector<int>& v2){
        return v1[1]<v2[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        if(n<=1){
            return n;
        }
        
        sort(points.begin(),points.end(),comp);
        
        int arrow=1;
        int x  = points[0][1];
        for(int i=1;i<n;i++) {
            if(x<points[i][0]){
                arrow++;
                x = points[i][1];
            }
        }
        
        return arrow;
        
        
    }
};