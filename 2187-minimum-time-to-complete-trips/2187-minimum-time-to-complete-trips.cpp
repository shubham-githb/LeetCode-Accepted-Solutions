class Solution {
    long long int solve(vector<int> &nums, long long int mid ){
        long long int sum=0;
        for(auto x:nums){
            sum += mid/x;
        }
        
        return sum;
    }
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long lowestTime = 1;
        long long highestTime = 1e14;
        
        while(lowestTime<highestTime)
        {
            long long int mid = lowestTime + (highestTime-lowestTime)/2;
            
            if(solve(time, mid)>=totalTrips){
                highestTime = mid;
            }
            else{
                lowestTime = mid+1;
            }
        }
        
        return lowestTime;
    }
};