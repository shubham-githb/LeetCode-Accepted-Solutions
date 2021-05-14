class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int evenIndex = 0;
        int oddIndex = 1;
        for(int i=0;i<n;i++){
            if(nums[evenIndex]%2==0 and evenIndex<n){
                evenIndex = evenIndex + 2;
            }
            if(nums[oddIndex]%2==1 and oddIndex<n){
                oddIndex = oddIndex +2;
            }
            if(evenIndex<n and oddIndex<n)
                swap(nums[evenIndex],nums[oddIndex]);
            else break;
        }
        return nums;
        
    }
};