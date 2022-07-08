class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int n = nums.size();
        int res = INT_MIN;
        multiset<int> set;
        int i=0;
        int j=0;
        int diff;
        while(j<n){
            set.insert(nums[j]);
             diff = *set.rbegin()-*set.begin();
            if(diff>limit){
                while(diff>limit){
                    set.erase(set.find(nums[i]));
                    i++;
                    diff = *set.rbegin()-*set.begin();
                }
                j++;
            }
            else{
                res = max(res,j-i+1);
                j++;
            }
        }
        return res;
    }
};