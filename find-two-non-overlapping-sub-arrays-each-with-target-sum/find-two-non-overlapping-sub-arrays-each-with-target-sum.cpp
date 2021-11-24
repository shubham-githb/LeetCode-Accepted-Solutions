class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int> dp(n,INT_MAX);
        
        int sum =0;
        int ans = INT_MAX;
        int len = INT_MAX;
        int start =0;
        int end =0;
        
        for(end =0;end<n;end++){
            sum += arr[end];
            while(sum>target){
                sum = sum - arr[start];
                start++;
            }
            if(sum==target){
                int curlen = end-start+1;
                if(start>0 and dp[start-1]!=INT_MAX){
                    ans = min(ans,curlen+dp[start-1]);
                }
                len = min(curlen,len);
            }
            dp[end] = len;
        }
        if(ans ==INT_MAX){
            return -1;
        }
        else{
            return ans;
        }
    }
};