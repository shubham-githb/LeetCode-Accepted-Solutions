class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> arr (nums.size(),0);
        int i = nums.size()-1;
        int j=1;
        
        while(j<nums.size()){
            arr[j] = nums[i];
            j+=2;
            i--;
        }
        j=0;
        while(i>=0){
            arr[j]=nums[i];
            j+=2;
            i--;
        }
        
        for(int i=0;i<nums.size();i++){
            nums[i]=arr[i];
        }
        
    }
};