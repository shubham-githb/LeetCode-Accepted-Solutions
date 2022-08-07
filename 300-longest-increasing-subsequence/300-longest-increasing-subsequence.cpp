class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> lis(n,0);
        lis[0] = 1;
        for(int i=1;i<n;i++){
            lis[i]=1;
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    lis[i] = max(lis[i],lis[j]+1);
                }
            }
        }
        
        sort(lis.begin(),lis.end());
        return lis[n-1];
    }
};