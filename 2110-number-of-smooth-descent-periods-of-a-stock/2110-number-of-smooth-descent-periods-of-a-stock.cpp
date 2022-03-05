class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long count =0;
        int start = 0;
        int end =0;
        while(end < prices.size()){
            if(end>0 and prices[end]!=prices[end-1]-1){
                start = end;
            }
            
            count += (end-start+1);
            
            end++;
        }
        
        return count;
    }
};