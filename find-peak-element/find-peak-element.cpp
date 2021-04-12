class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int r = nums.size()-1;
        int l =0;
        while(l<r)
        {
            int mid = l+(r-l)/2;
            if( nums[mid]>nums[mid+1])
                r=mid;
            else
                l = mid+1;
                  
        }
        
        return l;
        
    }
};