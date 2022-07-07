class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int prod1=1;
        int maxl = INT_MIN;
        for(int i=0;i<n;i++){
            prod1=prod1*nums[i];
            maxl = max(maxl,prod1);
            if(nums[i]==0){
                prod1=1;
            }
        }
        
        int prod2=1;
        int maxr = INT_MIN;
        for(int i=n-1;i>=0;i--){
            prod2= prod2*nums[i];
            maxr = max(maxr,prod2);
            if(nums[i]==0){
                prod2=1;
            }
        }
        
        return max(maxl,maxr);
        
    }
};