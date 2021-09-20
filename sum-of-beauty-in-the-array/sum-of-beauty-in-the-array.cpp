class Solution {
public:
    int sum =0;
    int sumOfBeauties(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n);
        vector<int> right(n);
        left[0] = nums[0];
        right[n-1] = nums[n-1];
        for(int i=1; i<n; i++)
        {
            left[i]=max(left[i-1],nums[i]);
        }
        for(int i=n-2; i>=0; i--)
        {
            right[i]=min(nums[i],right[i+1]);
        }
        for(int i=1;i<n-1;i++){
            if(nums[i]>left[i-1] and nums[i]<right[i+1]){
               sum = sum +2; 
            }
            else if(nums[i]>nums[i-1] and nums[i]<nums[i+1]){
                sum = sum + 1;
            }
        }
        
        return sum;
    }
};