class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        
        vector<int>arr(n);
        
        
        for(int i=0;i<n;i++){
            arr[i]=nums[i];
        }
        
        sort(arr.begin(),arr.end());
        
        int start =0;
        int end = n-1;
        
         for(;start < n; start++) {
            if(nums[start] != arr[start]) break;
        }
        
        if(start>=n-1) return 0;
        
     for(; end>=0; end--){
            if(nums[end] != arr[end]) break;
        }
        
        
        return end-start+1;
        
        
    }
};