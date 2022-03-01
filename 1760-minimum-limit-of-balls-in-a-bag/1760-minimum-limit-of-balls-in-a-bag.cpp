class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int n = nums.size();
        int r = *max_element(nums.begin(),nums.end());
        int l = 1;
        int res = r;
        
        while(l<r){
            int mid = (l+r)/2;
            int ops = 0;
            for(int i=0;i<n;i++){
                if(nums[i]>mid){
                    if(nums[i]%mid==0){
                        ops+=(nums[i]/mid)-1;
                    }
                    else {
                        ops+=nums[i]/mid;
                    }
                }
            }
            if(ops<=maxOperations){
                res = mid;
                r = mid;
            }
            else{
                l = mid+1;
            }
        }
        
        return res;
    }
};