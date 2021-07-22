class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int drop = -1;
        int n = trips.size();
        for(vector<int> trip: trips){
            drop = max(drop,trip[2]);
        }
        vector<int> highway(drop+1,0);
        
      for(vector<int> trip: trips){
            highway[trip[1]] += trip[0];
            highway[trip[2]] -= trip[0];  
        }
        for(int i=1;i<=drop;i++){
            highway[i] += highway[i-1]; 
            if(highway[i]>capacity){
                return false;
            }
        }
        
        return true;
        
        
    }
};