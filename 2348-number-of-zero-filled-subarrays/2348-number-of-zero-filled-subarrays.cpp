class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans =0;
        long long temp =0;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                temp++;
            }
            else{
                ans += (temp*(temp+1))/2;
                temp = 0;
            }
        }
        
        ans += (temp*(temp+1))/2;
        
        return ans;
        
        
    }
};