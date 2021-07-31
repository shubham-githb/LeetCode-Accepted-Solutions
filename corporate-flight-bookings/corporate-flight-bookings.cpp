class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> res(n+1,0);
        
        int start ;
        int end ;
        int target;
        
        for(int i=0;i<bookings.size();i++){
            start = bookings[i][0]-1;
            end = bookings[i][1];
            target = bookings[i][2];
            
            res[start] += target;
            res[end] -= target;
        }
        
        for(int i=1;i<res.size();i++){
            res[i] = res[i]+res[i-1];
        }
        
        
        res.pop_back();
        
        return res;
    }
};