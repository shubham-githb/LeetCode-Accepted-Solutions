class Solution {
    bool Increasing(vector<int> &nums){
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                return false;
            }
        }
        
        return true;
    }
public:
    bool checkPossibility(vector<int>& nums) {
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                int x = nums[i];
                int y = nums[i-1];
                nums[i]=y;
                if(Increasing(nums)){
                    return true;
                }
                else{
                    nums[i]=x;
                    nums[i-1]=x;
                    return Increasing(nums);
                }
            }
        }
        return true;
    }
};