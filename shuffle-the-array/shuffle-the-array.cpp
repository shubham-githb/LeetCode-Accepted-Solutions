class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;
        for(int i=0;i<n;i++){
            res.push_back(nums[i]);
            res.push_back(nums[n+i]);
        }
        
        return res;
    }
};



// vector<int> v;
//         for(int i=0;i<n;i++)
//         {
//             v.push_back(nums[i]);
//             v.push_back(nums[n+i]);
//         }
//         return v;