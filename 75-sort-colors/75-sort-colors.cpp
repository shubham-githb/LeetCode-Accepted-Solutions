class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero =0;
        int one =0;
        int two =0;
        for(auto x: nums) {
            if(x==0) zero++;
            else if(x==1) one++;
            else if(x==2) two++;
        }

        int k =0;
        while(zero--){
            nums[k] = 0;
            k++;
        }
        while(one--){
            nums[k] = 1;
            k++;
        }
        while(two--){
            nums[k] = 2;
            k++;
        }
        
        
        
        
    }
};