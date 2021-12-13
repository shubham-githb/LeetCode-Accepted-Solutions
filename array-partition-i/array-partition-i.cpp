class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n = nums.size()-2;
        sort(nums.begin(),nums.end());
        int sum =0;
        
        while(n>=0){
            sum += nums[n];
            n=n-2;
        }
        
        return sum;
        
        
    }
};



// class Solution {
// public:
//     int arrayPairSum(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
        
//         int n = nums.size() - 2;
//         int ans = 0;
        
//         while(n >= 0) {
//             ans += nums[n];
//             n -= 2;
//         }
        
//         return ans;
//     }
// };