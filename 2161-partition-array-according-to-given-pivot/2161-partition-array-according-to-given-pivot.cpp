class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> master;
        vector<int> left;
        vector<int> right;
        int count =0;
        for(int i=0;i<n;i++){
            if(nums[i]==pivot)
            {
                count++;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                left.push_back(nums[i]);
            }
        }
        
        for(int i=0;i<n;i++){
            if(nums[i]>pivot){
                right.push_back(nums[i]);
            }
        }
        
        for(int i=0;i<left.size();i++){
            master.push_back(left[i]);
        }
        
        while(count--){
            master.push_back(pivot);
        }
        
        for(int i=0;i<right.size();i++){
            master.push_back(right[i]);
        }
        
        return master;
        
    }
};