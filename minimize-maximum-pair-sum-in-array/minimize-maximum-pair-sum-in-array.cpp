class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int max = INT_MIN;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        int j=n-1;
        while(i<j){
            int temp = nums[i]+nums[j];
            if(temp>max){
                max=temp;
            }
            i++;
            j--;
        }
        
        return max;
    }
};