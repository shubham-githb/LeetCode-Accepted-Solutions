// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int n = nums.size();
//         int i=0;
//         int j=1;
//         while(j<n){
//             if(nums[j]!=0){
//                 while(nums[j]!=0){
//                     swap(nums[i],nums[j]);
//                     i++;
//                 }
//                 i++;
//             }
//             else if(nums[j]==0){
//                 j++;
//             }
//         }
        
//     }
// };

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return ;
        }
        int l = 0;
        int r = 1;
        while(r < n){
            if(nums[l] == 0 && nums[r] == 0){
                r++;
            }else{
                if(nums[l] == 0 && nums[r]!=0){
                    swap(nums[l],nums[r]);
                    l++;
                    r++;
                }else{
                    l++;
                    r++;
                }
            }
        }
    }
};