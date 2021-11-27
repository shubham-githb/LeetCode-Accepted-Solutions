class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int mod=(int)1e9+7;
        long ans =0;
        int even =0;
        int odd = 0;
        int sum = 0;
        for(auto val: arr){
            sum += val;
            if(sum%2==0){
                ans = (ans+odd)%mod;
                even++;
            }
            else{
                ans = (ans + even+1)%mod;
                odd++;
            }
        }
        return ans;
    }
};