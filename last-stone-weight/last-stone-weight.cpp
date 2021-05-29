class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        
        int n = stones.size();
        
        for(int i=0;i<n;i++){
            pq.push(stones[i]);
        }
        
        int first;
        int second;
        int diff;
        
        while(n>1){
            first = pq.top();
            pq.pop();
            second = pq.top();
            pq.pop();
            n = n-2;
            diff = first-second;
            
            if(diff>0){
                pq.push(diff);
                n= n+1;
            }
            
        }
        
        if(pq.empty()==false){
            return pq.top();
        }
        
        return 0;
        
        
    }
};