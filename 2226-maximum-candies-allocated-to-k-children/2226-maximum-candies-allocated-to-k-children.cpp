class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long sum =0;
        int n = candies.size();
        for(auto x: candies){
            sum += x;
        }
        
        long long high = sum/k;
        long long low = 1;
        long long res = 1;
        
        
        if(sum<k){
            return 0;
        }
        
        while(high>=low){
            long long  mid = (high+low)/2;
            long long  count = 0;
            for(int i=0;i<candies.size();i++){
                count = count + candies[i]/mid;
            }
            
            if(count>=k){
                res = max(res,mid);
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        
        return res;
    }
};