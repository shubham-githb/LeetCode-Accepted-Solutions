class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(),events.end());
        int n = events.size();
        int count =0;
        int i=0;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int d=1;d<=100000;d++){
            while(!pq.empty() and pq.top()<d){
                pq.pop();
            }
            
            while(i<n and events[i][0]==d){
                pq.push(events[i][1]);
                i++;
            }
            
            if(pq.size()>0){
                pq.pop();
                count++;
            }
            
            
            
        }
        
        return count;
        
    }
};