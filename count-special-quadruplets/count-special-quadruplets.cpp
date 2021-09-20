class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int res = 0, n = nums.size();
        
        for (int i = 0; i < n; i++)
            for (int j = i+1; j < n; j++)
                for (int k = j+1; k < n; k++)
                    for (int l = k+1; l < n; l++)
                        if (nums[i] + nums[j] + nums[k] == nums[l]) res++;

        return res;
    }
};
// public:
//     int countQuadruplets(vector<int>& nums) {
//         int ans=0;
//         for(int d=nums.size()-1;d>=3;--d) {
//             for(int a=0;a<d-2;++a) {
//                 for(int b=a+1;b<d-1;++b) {
//                     for(int c=b+1;c<d;++c) {
//                         if(nums[d]==nums[a]+nums[b]+nums[c]) {
//                             ans++;
//                         }
//                     }
//                 }
//             }
//         }
//         return ans;
//     }
// };