class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int>pq;
        int count=0;
        for(int i=0;i<amount.size();i++){
            if(amount[i]>0)pq.push(amount[i]);
        }
        
        while(pq.size()>1){
            int f=pq.top();
            pq.pop();
            int s=pq.top();
            pq.pop();
            f--;
            s--;
            count++;
            if(f!=0)pq.push(f);
            if(s!=0)pq.push(s);
        }
        while(!pq.empty()){
            int t=pq.top();
            count+=t;
            pq.pop();
        }
        return count;
    }
};