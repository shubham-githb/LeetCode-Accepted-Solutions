class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long  res = 0;
        for(int i=0;i<n;i++){
            int maxi = nums[i];
            int mini = nums[i];
            for(int j=i;j<n;j++){
                maxi = max(maxi,nums[j]);
                mini = min(mini,nums[j]);
                res += maxi-mini;
            }
        }
        return res;
    }
};

    // long long subArrayRanges(vector<int>& A) {
    //     long long res = 0;
    //     for (int i = 0; i < A.size(); i++) {
    //         int ma = A[i], mi = A[i];
    //         for (int j = i; j < A.size(); j++) {
    //             ma = max(ma, A[j]);
    //             mi = min(mi, A[j]);
    //             res += ma - mi;
    //         }
    //     }
    //     return res;
    // }