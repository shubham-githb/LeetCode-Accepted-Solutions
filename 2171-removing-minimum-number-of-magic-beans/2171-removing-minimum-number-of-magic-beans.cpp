class Solution {
public:
    long long minimumRemoval(vector<int>& nums) {
        long long ans = 1e18;
        long long n = nums.size();
        sort(nums.begin(),nums.end());
        long long sum =0;
        for(auto x: nums) sum += x;
        
        for(long long i=0;i<n;i++){
            long long change = sum -(n-i)*(long long)nums[i]*1LL;
            ans = min(ans,change);
            
        }
        
        return ans;
        
    }
};